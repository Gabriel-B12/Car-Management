#include "add.h"
#include "ui_add.h"
#include "masina.h"


Add::Add(QWidget *parent,QTableWidget *tabel) :
    QDialog(parent),
    ui(new Ui::Add),
    tabel(tabel)
{

    ui->setupUi(this);
    this->setFixedSize(376,481);
    ui->dateEdit->setDisplayFormat("dd/MM/yyyy");
    ui->dateEdit_2->setDisplayFormat("dd/MM/yyyy");

}

Add::~Add()
{
    delete ui;
}


// Adaugare- se  valideaza datele iar daca totul e ok se va retine masina in lista
// altfel  va aparea un mesaj cu datele care nu sunt corecte
void Add::on_OK_clicked()
{
    int nr=0;
    foreach(QLineEdit* l, this->findChildren<QLineEdit*>()) {
        if(l->text()!="") nr++;
    }
    if (nr==11)
    {
        QString m=this->validare();
        if(m==""){
            int i;
            for( i=0;i<masina::lista.size();i++)
                if(ui->lineEdit7->text().toUpper()==masina::lista[i]->getInmatriculare())
                    break;
            if(i<masina::lista.size()){
                QMessageBox mesaj(this);
                mesaj.setText("Exista o masina cu acelasi numar de inmatriculare!");
                mesaj.setWindowTitle("Eroare");
                mesaj.setIcon(QMessageBox::Information);
                mesaj.setStyleSheet("QMessageBox{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.944, y2:0.943, stop:0 rgba(107, 117, 255, 255), stop:1 rgba(87, 255, 255, 255));}");
                mesaj.exec();
            }

            else{
                masina *nou=new masina(ui->lineEdit7->text().toUpper(),ui->lineEdit8->text().toFloat(),ui->lineEdit9->text().toInt(),ui->comboBox->currentText().toUpper(),
                                       ui->lineEdit1->text().toUpper(),ui->lineEdit2->text().toUpper(),ui->lineEdit3->text().toUpper(),ui->lineEdit4->text().toInt(),
                                       ui->lineEdit5->text().toInt(),ui->lineEdit0->text().toLong(),ui->dateEdit->text(),ui->dateEdit_2->text());
                masina::lista.append(nou);
                foreach(QLineEdit* l, this->findChildren<QLineEdit*>()) {
                    l->clear();
                }
                this->hide();
                masina::datatotable(this->tabel);
                masina::notificari();
            }
        }
        else{
            QMessageBox mesaj(this);
            mesaj.setText(m);
            mesaj.setWindowTitle("Eroare");
            mesaj.setIcon(QMessageBox::Information);
            mesaj.setStyleSheet("QMessageBox{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.944, y2:0.943, stop:0 rgba(107, 117, 255, 255), stop:1 rgba(87, 255, 255, 255));}");
            mesaj.exec();

        }


    }
    else
    {
        QMessageBox mesaj(this);
        mesaj.setText("Completati toate casutele!");
        mesaj.setWindowTitle("Eroare");
        mesaj.setIcon(QMessageBox::Information);
        mesaj.setStyleSheet("QMessageBox{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.944, y2:0.943, stop:0 rgba(107, 117, 255, 255), stop:1 rgba(87, 255, 255, 255));}");
        mesaj.exec();

    }
}





// Cancel
void Add::on_Cancel_clicked()
{
    foreach(QLineEdit* l, this->findChildren<QLineEdit*>()) {
        l->clear();
    }
    this->hide();

}


// validare - se verifica ca acolo unde trebuie introduse numere sa fie numere > 0
QString Add::validare(){
    QString m="";
    if(ui->lineEdit4->text().toInt()<=0)
        m=m+"Anul - numar mai mare decat 0!\n";

    QString aux;
    aux=ui->lineEdit7->text().toUpper();
    if(validare_nr(aux)==0)
        m=m+"Formatul numarului de inmatriculare este gresit!\n";

    if(ui->lineEdit5->text().toInt()<=0)
        m=m+"Numarul de locuri - numar mai mare decat 0!\n";
    if(ui->lineEdit8->text().toFloat()<=0)
        m=m+"Capacitatea motorului - numar mai mare decat 0!\n";
    if(ui->lineEdit9->text().toInt()<=0)
        m=m+"Puterea motorului - numar mai mare decat 0!\n";
    if(ui->lineEdit0->text().toLong()<=0)
        m=m+"Numarul de km - numar mai mare decat 0!\n";
    return m;
}

// validarea numarului de inmarticulare
int Add::validare_nr(QString num){
    if(num.size()==7){
        if(num[0].isLetter() && num[1].isLetter() && num[2].isDigit() && num[3].isDigit() && num[4].isLetter() && num[5].isLetter() && num[6].isLetter())
            return 1;
        if(num[0]=='B' && num[1].isDigit() && num[2].isDigit() && num[3].isDigit() && num[4].isLetter() && num[5].isLetter() && num[4].isLetter())
            return 1;
    }
    return 0;
}

