#ifndef STERGERE_H
#define STERGERE_H

#include <QDialog>
#include <QMessageBox>
#include "masina.h"

namespace Ui {
class stergere;
}

class stergere : public QDialog
{
    Q_OBJECT

public:
    explicit stergere(QWidget *parent = nullptr,QTableWidget * tabel=nullptr);
    ~stergere();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::stergere *ui;
     QTableWidget * tabel;
};

#endif // STERGERE_H
