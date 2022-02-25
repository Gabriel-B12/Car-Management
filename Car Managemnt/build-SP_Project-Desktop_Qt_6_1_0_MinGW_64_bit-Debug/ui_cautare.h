/********************************************************************************
** Form generated from reading UI file 'cautare.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAUTARE_H
#define UI_CAUTARE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_cautare
{
public:
    QCheckBox *marca;
    QCheckBox *model;
    QCheckBox *culoare;
    QCheckBox *anul;
    QCheckBox *nr_loc;
    QCheckBox *capacitate;
    QCheckBox *putere;
    QCheckBox *combustibil;
    QLineEdit *l_marca;
    QLineEdit *l_model;
    QLineEdit *l_culoare;
    QLineEdit *l_an;
    QLineEdit *l_locuri;
    QLineEdit *l_capacitate;
    QLineEdit *l_putere;
    QLineEdit *l_combustibil;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QCheckBox *nr_inm;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QLabel *label_2;

    void setupUi(QDialog *cautare)
    {
        if (cautare->objectName().isEmpty())
            cautare->setObjectName(QString::fromUtf8("cautare"));
        cautare->resize(508, 456);
        cautare->setStyleSheet(QString::fromUtf8("QDialog#cautare{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.944, y2:0.943, stop:0 rgba(107, 117, 255, 255), stop:1 rgba(87, 255, 255, 255));}\n"
"QWidget>QPushButton{\n"
"    background-color:  rgb(43, 43, 43);\n"
"	width: 150px;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 8px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"	color: rgb(85, 255, 255);\n"
"}\n"
"QWidget>QPushButton:pressed{\n"
"    background-color: black;\n"
"   \n"
"}\n"
"QWidget>QPushButton:hover{\n"
"    \n"
"	border-color: rgb(0, 0, 127);\n"
"   \n"
"}\n"
"QWidget>QLabel{\n"
"    \n"
"    font: bold 12px;\n"
"\n"
"}\n"
"QWidget>QLineEdit{\n"
"    \n"
"    border-radius:5px;\n"
"\n"
"}\n"
"QWidget>QLineEdit:!Enabled{\n"
"    \n"
"	\n"
"	background-color: rgb(221, 221, 221);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"	border-color: rgb(116, 116, 116);\n"
"\n"
"}\n"
"QWidget>QLineEdit:Enabled{\n"
"    \n"
"border-style: outset;\n"
"    border-width: 1px;\n"
""
                        "	\n"
"	border-color: rgb(80, 80, 80);\n"
"\n"
"}\n"
""));
        marca = new QCheckBox(cautare);
        marca->setObjectName(QString::fromUtf8("marca"));
        marca->setGeometry(QRect(20, 50, 72, 19));
        model = new QCheckBox(cautare);
        model->setObjectName(QString::fromUtf8("model"));
        model->setGeometry(QRect(20, 80, 72, 19));
        culoare = new QCheckBox(cautare);
        culoare->setObjectName(QString::fromUtf8("culoare"));
        culoare->setGeometry(QRect(20, 110, 72, 19));
        anul = new QCheckBox(cautare);
        anul->setObjectName(QString::fromUtf8("anul"));
        anul->setGeometry(QRect(20, 140, 72, 19));
        nr_loc = new QCheckBox(cautare);
        nr_loc->setObjectName(QString::fromUtf8("nr_loc"));
        nr_loc->setGeometry(QRect(240, 50, 111, 19));
        capacitate = new QCheckBox(cautare);
        capacitate->setObjectName(QString::fromUtf8("capacitate"));
        capacitate->setGeometry(QRect(240, 80, 121, 19));
        putere = new QCheckBox(cautare);
        putere->setObjectName(QString::fromUtf8("putere"));
        putere->setGeometry(QRect(240, 110, 121, 19));
        combustibil = new QCheckBox(cautare);
        combustibil->setObjectName(QString::fromUtf8("combustibil"));
        combustibil->setGeometry(QRect(240, 140, 121, 19));
        l_marca = new QLineEdit(cautare);
        l_marca->setObjectName(QString::fromUtf8("l_marca"));
        l_marca->setGeometry(QRect(100, 50, 113, 21));
        l_model = new QLineEdit(cautare);
        l_model->setObjectName(QString::fromUtf8("l_model"));
        l_model->setGeometry(QRect(100, 80, 113, 21));
        l_culoare = new QLineEdit(cautare);
        l_culoare->setObjectName(QString::fromUtf8("l_culoare"));
        l_culoare->setGeometry(QRect(100, 110, 113, 21));
        l_an = new QLineEdit(cautare);
        l_an->setObjectName(QString::fromUtf8("l_an"));
        l_an->setGeometry(QRect(100, 140, 113, 21));
        l_locuri = new QLineEdit(cautare);
        l_locuri->setObjectName(QString::fromUtf8("l_locuri"));
        l_locuri->setGeometry(QRect(360, 50, 113, 21));
        l_capacitate = new QLineEdit(cautare);
        l_capacitate->setObjectName(QString::fromUtf8("l_capacitate"));
        l_capacitate->setGeometry(QRect(360, 80, 113, 21));
        l_putere = new QLineEdit(cautare);
        l_putere->setObjectName(QString::fromUtf8("l_putere"));
        l_putere->setGeometry(QRect(360, 110, 113, 21));
        l_combustibil = new QLineEdit(cautare);
        l_combustibil->setObjectName(QString::fromUtf8("l_combustibil"));
        l_combustibil->setGeometry(QRect(360, 140, 113, 21));
        label = new QLabel(cautare);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 211, 31));
        label->setStyleSheet(QString::fromUtf8("    font: bold 14px;\n"
""));
        pushButton = new QPushButton(cautare);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 390, 111, 31));
        pushButton_2 = new QPushButton(cautare);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 390, 101, 31));
        nr_inm = new QCheckBox(cautare);
        nr_inm->setObjectName(QString::fromUtf8("nr_inm"));
        nr_inm->setGeometry(QRect(240, 20, 131, 19));
        lineEdit = new QLineEdit(cautare);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(360, 20, 113, 21));
        tableWidget = new QTableWidget(cautare);
        if (tableWidget->columnCount() < 12)
            tableWidget->setColumnCount(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 180, 471, 192));
        label_2 = new QLabel(cautare);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 255, 211, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: bold 14px;\n"
"color: rgb(85, 255, 255);"));

        retranslateUi(cautare);

        QMetaObject::connectSlotsByName(cautare);
    } // setupUi

    void retranslateUi(QDialog *cautare)
    {
        cautare->setWindowTitle(QCoreApplication::translate("cautare", "Dialog", nullptr));
        marca->setText(QCoreApplication::translate("cautare", "Marca", nullptr));
        model->setText(QCoreApplication::translate("cautare", "Model", nullptr));
        culoare->setText(QCoreApplication::translate("cautare", "Culoare", nullptr));
        anul->setText(QCoreApplication::translate("cautare", "An", nullptr));
        nr_loc->setText(QCoreApplication::translate("cautare", "Numar locuri", nullptr));
        capacitate->setText(QCoreApplication::translate("cautare", "Capacitate motor", nullptr));
        putere->setText(QCoreApplication::translate("cautare", "Putere motor", nullptr));
        combustibil->setText(QCoreApplication::translate("cautare", "Combustibil", nullptr));
        label->setText(QCoreApplication::translate("cautare", "Alegeti criteriul de cautare:", nullptr));
        pushButton->setText(QCoreApplication::translate("cautare", "Cauta", nullptr));
        pushButton_2->setText(QCoreApplication::translate("cautare", "Cancel", nullptr));
        nr_inm->setText(QCoreApplication::translate("cautare", "Nr inmatriculare", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("cautare", "Marca", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("cautare", "Model", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("cautare", "Culoare", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("cautare", "An", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("cautare", "Nr loc", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("cautare", "Capacitate", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("cautare", "Nr inm", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("cautare", "Putere", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("cautare", "Combustibil", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("cautare", "Nr KM", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("cautare", "Data expirare RCA", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("cautare", "Data expirare ITP", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class cautare: public Ui_cautare {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAUTARE_H
