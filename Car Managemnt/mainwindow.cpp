#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>
#include <QDir>
extern QString myfile;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabel->setSortingEnabled(true);
    ui->tabel->verticalHeader()->setVisible(false);
    masina::notificari1= ui->textBrowser;
    masina::notificari();

    ui->textBrowser->hide();
    ui->label_4->hide();
    ui->pushButton_8->hide();
    ui->line_2->hide();
    this->setFixedSize(796,409);
    ui->pushButton_9->show();

    adaugare= new Add(this,ui->tabel);
    sterge= new stergere(this,ui->tabel);
    cauta = new cautare(this);
    masina::datatotable(ui->tabel);

    QString path=QDir::homePath();
    path=path+"/Downloads/car.png";
    QPixmap image(path);
    ui->label_2->setPixmap(image.scaled(111,111,Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
    delete adaugare;
    delete sterge;
}


// Adaugare
void MainWindow::on_pushButton_clicked()
{
    adaugare->show();

}

// Quit
void MainWindow::on_pushButton_3_clicked()
{
    masina::writetofile(myfile);
}




//Save Data
void MainWindow::on_pushButton_5_clicked()
{
    masina::writetofile(myfile);
    QMessageBox mesaj(this);
    mesaj.setText("Datele au fost salvate!");
    mesaj.setWindowTitle("Info");
    mesaj.setIcon(QMessageBox::Information);
    mesaj.setStyleSheet("QMessageBox{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.944, y2:0.943, stop:0 rgba(107, 117, 255, 255), stop:1 rgba(87, 255, 255, 255));}");
    mesaj.exec();
}

// Stergere
void MainWindow::on_pushButton_2_clicked()
{
    sterge->show();
    masina::datatotable1(sterge->findChild<QTableWidget*>("tableWidget"));
}

//Editare Tabel
void MainWindow::on_pushButton_6_clicked()
{
    QList<QTableWidgetItem*> itemList;
    for (int row = 0 ; row < ui->tabel->rowCount() ; ++row) {
    for (int col = 0 ; col < ui->tabel->columnCount() ; ++col) {
    itemList << ui->tabel->item(row, col);
    }
    }
    foreach (QTableWidgetItem * i, itemList) {
        i->setFlags(i->flags() ^  Qt::ItemIsEditable ^ Qt::ItemIsSelectable);
    }
    if(ui->tabel->styleSheet()=="border: 2px solid #24943A;")
        ui->tabel->setStyleSheet("");
    else
        ui->tabel->setStyleSheet("border: 2px solid #24943A;");


}

// Save changes
void MainWindow::on_pushButton_7_clicked()
{

    for (int row = 0 ; row <masina::lista.size(); ++row) {

       masina::lista[row]->replace(ui->tabel->item(row,0)->text(),ui->tabel->item(row,1)->text(),ui->tabel->item(row,2)->text(),ui->tabel->item(row,3)->text(),ui->tabel->item(row,4)->text(),
                           ui->tabel->item(row,5)->text(),ui->tabel->item(row,6)->text(),ui->tabel->item(row,7)->text(),ui->tabel->item(row,8)->text(),ui->tabel->item(row,9)->text(),
                                   ui->tabel->item(row,10)->text(),ui->tabel->item(row,11)->text());

    }
    masina::datatotable(ui->tabel);
    masina::notificari();
    ui->tabel->setStyleSheet("");



}

// Cautare
void MainWindow::on_pushButton_4_clicked()
{
    cauta->show();
}


// Hide (notificari)
void MainWindow::on_pushButton_8_clicked()
{
    ui->textBrowser->hide();
    ui->label_4->hide();
    ui->pushButton_8->hide();
    ui->line_2->hide();
    this->setFixedSize(796,409);
    ui->pushButton_9->show();

}


//Show (notificari)
void MainWindow::on_pushButton_9_clicked()
{
    ui->textBrowser->show();
    ui->label_4->show();
    ui->pushButton_8->show();
    ui->line_2->show();
    this->setFixedSize(1004,409);
    ui->pushButton_9->hide();
}

