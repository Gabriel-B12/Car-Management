#ifndef ADD_H
#define ADD_H

#include <QDialog>
#include <QMessageBox>
#include <QTableWidget>
#include <QDir>


namespace Ui {
class Add;
}

class Add : public QDialog
{
    Q_OBJECT

public:
    explicit Add(QWidget *parent = nullptr,QTableWidget * tabel=nullptr);

    QString validare();

    int validare_nr(QString num);

    ~Add();

private slots:

    void on_OK_clicked();

    void on_Cancel_clicked();

private:
    Ui::Add *ui;
    QTableWidget * tabel;
};

#endif // ADD_H
