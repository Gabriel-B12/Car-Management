#include "cautare.h"
#include "ui_cautare.h"
#include "masina.h"


cautare::cautare(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cautare)
{
    ui->setupUi(this);
    ui->tableWidget->verticalHeader()->setVisible(false);
    //masina::datatotable(ui->tableWidget);

    foreach(QLineEdit* l, this->findChildren<QLineEdit*>()) {
    l->setEnabled(false);
        }
}

cautare::~cautare()
{
    delete ui;
}



void cautare::on_marca_stateChanged(int arg1)
{
    Q_UNUSED(arg1);
    if(ui->marca->isChecked())
        ui->l_marca->setEnabled(true);
    else
        ui->l_marca->setEnabled(false),ui->l_marca->clear();
}


void cautare::on_model_stateChanged(int arg1)
{
    Q_UNUSED(arg1);
    if(ui->model->isChecked())
        ui->l_model->setEnabled(true);
    else
        ui->l_model->setEnabled(false),ui->l_model->clear();
}


void cautare::on_culoare_stateChanged(int arg1)
{
    Q_UNUSED(arg1);
    if(ui->culoare->isChecked())
        ui->l_culoare->setEnabled(true);
    else
        ui->l_culoare->setEnabled(false),ui->l_culoare->clear();
}


void cautare::on_anul_stateChanged(int arg1)
{
    Q_UNUSED(arg1);
    if(ui->anul->isChecked())
        ui->l_an->setEnabled(true);
    else
        ui->l_an->setEnabled(false),ui->l_an->clear();
}


void cautare::on_nr_loc_stateChanged(int arg1)
{
    Q_UNUSED(arg1);
    if(ui->nr_loc->isChecked())
        ui->l_locuri->setEnabled(true);
    else
        ui->l_locuri->setEnabled(false),ui->l_locuri->clear();
}


void cautare::on_capacitate_stateChanged(int arg1)
{
    Q_UNUSED(arg1);
    if(ui->capacitate->isChecked())
        ui->l_capacitate->setEnabled(true);
    else
        ui->l_capacitate->setEnabled(false),ui->l_capacitate->clear();
}


void cautare::on_putere_stateChanged(int arg1)
{
    Q_UNUSED(arg1);
    if(ui->putere->isChecked())
        ui->l_putere->setEnabled(true);
    else
        ui->l_putere->setEnabled(false),ui->l_putere->clear();
}


void cautare::on_combustibil_stateChanged(int arg1)
{
    Q_UNUSED(arg1);
    if(ui->combustibil->isChecked())
        ui->l_combustibil->setEnabled(true);
    else
        ui->l_combustibil->setEnabled(false),ui->l_combustibil->clear();
}

void cautare::on_nr_inm_stateChanged(int arg1)
{
    Q_UNUSED(arg1);
    if(ui->nr_inm->isChecked())
        ui->lineEdit->setEnabled(true);
    else
        ui->lineEdit->setEnabled(false),ui->lineEdit->clear();

}

// Cautare dupa criteriile alese
void cautare::on_pushButton_clicked()
{
    ui->label_2->clear();
    ui->tableWidget->clearContents();

    QList<masina*> cautare;
    QVector<QString> criterii={"","","","","","","","",""};
    int crt=0;
    if(ui->nr_inm->isChecked())
        criterii[0]=ui->lineEdit->text().toUpper(),crt++;
    if(ui->marca->isChecked())
        criterii[1]=ui->l_marca->text().toUpper(),crt++;
    if(ui->model->isChecked())
        criterii[2]=ui->l_model->text().toUpper(),crt++;
    if(ui->culoare->isChecked())
        criterii[3]=ui->l_culoare->text().toUpper(),crt++;
    if(ui->anul->isChecked())
        criterii[4]=ui->l_an->text(),crt++;
    if(ui->nr_loc->isChecked())
        criterii[5]=ui->l_locuri->text(),crt++;
    if(ui->capacitate->isChecked())
        criterii[6]=ui->l_capacitate->text(),crt++;
    if(ui->putere->isChecked())
        criterii[7]=ui->l_putere->text(),crt++;
    if(ui->combustibil->isChecked())
        criterii[8]=ui->l_combustibil->text().toUpper(),crt++;
    int nr,nr1=0;
    foreach(QString i,criterii)
        if(i=="") nr1++;
    for(int i=0;i<masina::lista.size();i++)
    {

        nr=0;
        if(criterii[0]!="" && criterii[0]==masina::lista[i]->getInmatriculare())
            nr++;
        if(criterii[1]!="" && criterii[1]==masina::lista[i]->getMarca())
            nr++;
        if(criterii[2]!="" && criterii[2]==masina::lista[i]->getModel())
            nr++;
        if(criterii[3]!="" && criterii[3]==masina::lista[i]->getCuloare())
            nr++;
        if(criterii[4]!="" && criterii[4].toInt()==masina::lista[i]->getAn())
            nr++;
        if(criterii[5]!="" && criterii[5].toInt()==masina::lista[i]->getNr_loc())
            nr++;
        if(criterii[6]!="" && criterii[6].toFloat()==masina::lista[i]->getM()->getCapacitate())
            nr++;
        if(criterii[7]!="" && criterii[7].toInt()==masina::lista[i]->getM()->getPutere())
            nr++;
        if(criterii[8]!="" && criterii[8]==masina::lista[i]->getM()->getCombustibil())
            nr++;
        if(nr==9-nr1 && nr!=0) cautare.append(masina::lista[i]);
    }

    if(crt==0)
        ui->label_2->setText("Nu ati ales niciun criteriu!");
    else
        if(cautare.size()==0)
            ui->label_2->setText("Nu a fost gasita nicio masina!");
        else{
            QList<masina*> aux1;
            aux1=masina::lista;
            masina::lista=cautare;
            masina::datatotable(ui->tableWidget);
            masina::lista=aux1;

        }
}

// Cancel
void cautare::on_pushButton_2_clicked()
{
    foreach(QLineEdit* l, this->findChildren<QLineEdit*>()) {
        l->clear();
        l->setEnabled(false);
    }
    foreach(QCheckBox* l, this->findChildren<QCheckBox*>()) {
        l->setChecked(false);
    }
    ui->label_2->clear();
    ui->tableWidget->clearContents();

    this->hide();
}



