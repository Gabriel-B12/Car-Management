#include "stergere.h"
#include "ui_stergere.h"

stergere::stergere(QWidget *parent,QTableWidget * tabel) :
    QDialog(parent),
    ui(new Ui::stergere),
    tabel(tabel)
{
    ui->setupUi(this);
    ui->tableWidget->verticalHeader()->setVisible(false);

}


stergere::~stergere()
{
    delete ui;
}


//Butonul Sterge - va prelua numarul de inmatriculare, se va cauta in lista de masini
// iar daca exista o masina cu nr de inmatriculare introdus va fi sters altfel
// se va afisa masajul: Masina cu nr de inm x nu a fost gasit!
void stergere::on_pushButton_clicked()
{
    QString inm=ui->lineEdit->text();
    inm=inm.toUpper();
    int nr=0;
    for(int i=0;i<masina::lista.size();i++)
    {
        if(inm == masina::lista[i]->getInmatriculare())
        {
            masina::lista.removeAt(i);
            nr++;
        }

    }
    if(nr==1)  {masina::datatotable1(ui->tableWidget);masina::datatotable(tabel);masina::notificari();}
    else {
        QString m;
        QMessageBox mesaj(this);
        if(inm=="")
            m="Nu ati introds numarul de inmatriculare!";
        else
            m="Masina cu numarul de inmatriculare "+inm+" nu a fost gasit!";
        mesaj.setText(m);
        mesaj.setWindowTitle("Eroare");
        mesaj.setIcon(QMessageBox::Information);
        mesaj.setStyleSheet("QMessageBox{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.944, y2:0.943, stop:0 rgba(107, 117, 255, 255), stop:1 rgba(87, 255, 255, 255));}");
        mesaj.exec();
    }
    ui->lineEdit->clear();
    if(inm!="")
        this->hide();

}

//Butonul Cancel
void stergere::on_pushButton_2_clicked()
{
    ui->lineEdit->clear();
}

