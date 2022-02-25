/********************************************************************************
** Form generated from reading UI file 'stergere.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STERGERE_H
#define UI_STERGERE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_stergere
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *stergere)
    {
        if (stergere->objectName().isEmpty())
            stergere->setObjectName(QString::fromUtf8("stergere"));
        stergere->resize(532, 300);
        stergere->setStyleSheet(QString::fromUtf8("QDialog#stergere{\n"
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
"    font: bold 14px;\n"
"\n"
"}\n"
""));
        label = new QLabel(stergere);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 271, 16));
        label->setStyleSheet(QString::fromUtf8(""));
        lineEdit = new QLineEdit(stergere);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(290, 30, 111, 20));
        tableWidget = new QTableWidget(stergere);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 70, 381, 192));
        tableWidget->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(stergere);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 90, 71, 51));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        pushButton_2 = new QPushButton(stergere);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 180, 71, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(stergere);
        QObject::connect(pushButton_2, &QPushButton::clicked, stergere, qOverload<>(&QDialog::hide));

        QMetaObject::connectSlotsByName(stergere);
    } // setupUi

    void retranslateUi(QDialog *stergere)
    {
        stergere->setWindowTitle(QCoreApplication::translate("stergere", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("stergere", "Introduceti numarul de inmatriculare: ", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("stergere", "Marca", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("stergere", "Model", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("stergere", "An", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("stergere", "Numar inmatriculare", nullptr));
        pushButton->setText(QCoreApplication::translate("stergere", "Sterge", nullptr));
        pushButton_2->setText(QCoreApplication::translate("stergere", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stergere: public Ui_stergere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STERGERE_H
