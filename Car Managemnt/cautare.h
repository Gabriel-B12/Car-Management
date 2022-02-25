#ifndef CAUTARE_H
#define CAUTARE_H

#include <QDialog>

namespace Ui {
class cautare;
}

class cautare : public QDialog
{
    Q_OBJECT

public:
    explicit cautare(QWidget *parent = nullptr);
    ~cautare();


private slots:
    void on_marca_stateChanged(int arg1);

    void on_model_stateChanged(int arg1);

    void on_culoare_stateChanged(int arg1);

    void on_anul_stateChanged(int arg1);

    void on_nr_loc_stateChanged(int arg1);

    void on_capacitate_stateChanged(int arg1);

    void on_putere_stateChanged(int arg1);

    void on_combustibil_stateChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_nr_inm_stateChanged(int arg1);

private:
    Ui::cautare *ui;
};

#endif // CAUTARE_H
