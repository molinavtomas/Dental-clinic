/********************************************************************************
** Form generated from reading UI file 'addprestaciondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRESTACIONDIALOG_H
#define UI_ADDPRESTACIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddPrestacionDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *labelPrestacionRealizada;
    QLineEdit *editPrestacionDialog;
    QLabel *labelCostoTotal;
    QLineEdit *editCostoTotalDialog;
    QLabel *labelDebe;
    QLineEdit *editDebe;
    QLabel *labelHaber;
    QLineEdit *editHaber;
    QLabel *labelSaldo;
    QLineEdit *editSaldo;
    QLabel *labelGenerarCuotas;
    QLabel *labelCantidad;
    QComboBox *comboCantidad;
    QLabel *labelMonto1;
    QLineEdit *editMonto1;
    QLabel *labelMonto2;
    QLineEdit *editMonto2;
    QLabel *labelMonto3;
    QLineEdit *editMonto3;
    QLabel *labelObservaciones;
    QTextEdit *textObservaciones;
    QPushButton *btnAgregar;
    QPushButton *btnAdjuntar;
    QPushButton *btnFinalizar;

    void setupUi(QDialog *AddPrestacionDialog)
    {
        if (AddPrestacionDialog->objectName().isEmpty())
            AddPrestacionDialog->setObjectName("AddPrestacionDialog");
        gridLayout = new QGridLayout(AddPrestacionDialog);
        gridLayout->setObjectName("gridLayout");
        labelPrestacionRealizada = new QLabel(AddPrestacionDialog);
        labelPrestacionRealizada->setObjectName("labelPrestacionRealizada");

        gridLayout->addWidget(labelPrestacionRealizada, 0, 0, 1, 1);

        editPrestacionDialog = new QLineEdit(AddPrestacionDialog);
        editPrestacionDialog->setObjectName("editPrestacionDialog");

        gridLayout->addWidget(editPrestacionDialog, 0, 1, 1, 1);

        labelCostoTotal = new QLabel(AddPrestacionDialog);
        labelCostoTotal->setObjectName("labelCostoTotal");

        gridLayout->addWidget(labelCostoTotal, 0, 2, 1, 1);

        editCostoTotalDialog = new QLineEdit(AddPrestacionDialog);
        editCostoTotalDialog->setObjectName("editCostoTotalDialog");

        gridLayout->addWidget(editCostoTotalDialog, 0, 3, 1, 1);

        labelDebe = new QLabel(AddPrestacionDialog);
        labelDebe->setObjectName("labelDebe");

        gridLayout->addWidget(labelDebe, 1, 0, 1, 1);

        editDebe = new QLineEdit(AddPrestacionDialog);
        editDebe->setObjectName("editDebe");

        gridLayout->addWidget(editDebe, 1, 1, 1, 1);

        labelHaber = new QLabel(AddPrestacionDialog);
        labelHaber->setObjectName("labelHaber");

        gridLayout->addWidget(labelHaber, 2, 0, 1, 1);

        editHaber = new QLineEdit(AddPrestacionDialog);
        editHaber->setObjectName("editHaber");

        gridLayout->addWidget(editHaber, 2, 1, 1, 1);

        labelSaldo = new QLabel(AddPrestacionDialog);
        labelSaldo->setObjectName("labelSaldo");

        gridLayout->addWidget(labelSaldo, 3, 0, 1, 1);

        editSaldo = new QLineEdit(AddPrestacionDialog);
        editSaldo->setObjectName("editSaldo");

        gridLayout->addWidget(editSaldo, 3, 1, 1, 1);

        labelGenerarCuotas = new QLabel(AddPrestacionDialog);
        labelGenerarCuotas->setObjectName("labelGenerarCuotas");

        gridLayout->addWidget(labelGenerarCuotas, 1, 2, 1, 1);

        labelCantidad = new QLabel(AddPrestacionDialog);
        labelCantidad->setObjectName("labelCantidad");

        gridLayout->addWidget(labelCantidad, 2, 2, 1, 1);

        comboCantidad = new QComboBox(AddPrestacionDialog);
        comboCantidad->addItem(QString());
        comboCantidad->addItem(QString());
        comboCantidad->addItem(QString());
        comboCantidad->setObjectName("comboCantidad");

        gridLayout->addWidget(comboCantidad, 2, 3, 1, 1);

        labelMonto1 = new QLabel(AddPrestacionDialog);
        labelMonto1->setObjectName("labelMonto1");

        gridLayout->addWidget(labelMonto1, 3, 2, 1, 1);

        editMonto1 = new QLineEdit(AddPrestacionDialog);
        editMonto1->setObjectName("editMonto1");

        gridLayout->addWidget(editMonto1, 3, 3, 1, 1);

        labelMonto2 = new QLabel(AddPrestacionDialog);
        labelMonto2->setObjectName("labelMonto2");

        gridLayout->addWidget(labelMonto2, 4, 2, 1, 1);

        editMonto2 = new QLineEdit(AddPrestacionDialog);
        editMonto2->setObjectName("editMonto2");

        gridLayout->addWidget(editMonto2, 4, 3, 1, 1);

        labelMonto3 = new QLabel(AddPrestacionDialog);
        labelMonto3->setObjectName("labelMonto3");

        gridLayout->addWidget(labelMonto3, 5, 2, 1, 1);

        editMonto3 = new QLineEdit(AddPrestacionDialog);
        editMonto3->setObjectName("editMonto3");

        gridLayout->addWidget(editMonto3, 5, 3, 1, 1);

        labelObservaciones = new QLabel(AddPrestacionDialog);
        labelObservaciones->setObjectName("labelObservaciones");

        gridLayout->addWidget(labelObservaciones, 6, 0, 1, 1);

        textObservaciones = new QTextEdit(AddPrestacionDialog);
        textObservaciones->setObjectName("textObservaciones");

        gridLayout->addWidget(textObservaciones, 6, 1, 1, 3);

        btnAgregar = new QPushButton(AddPrestacionDialog);
        btnAgregar->setObjectName("btnAgregar");

        gridLayout->addWidget(btnAgregar, 7, 1, 1, 1);

        btnAdjuntar = new QPushButton(AddPrestacionDialog);
        btnAdjuntar->setObjectName("btnAdjuntar");

        gridLayout->addWidget(btnAdjuntar, 7, 2, 1, 1);

        btnFinalizar = new QPushButton(AddPrestacionDialog);
        btnFinalizar->setObjectName("btnFinalizar");

        gridLayout->addWidget(btnFinalizar, 7, 3, 1, 1);


        retranslateUi(AddPrestacionDialog);

        QMetaObject::connectSlotsByName(AddPrestacionDialog);
    } // setupUi

    void retranslateUi(QDialog *AddPrestacionDialog)
    {
        AddPrestacionDialog->setWindowTitle(QCoreApplication::translate("AddPrestacionDialog", "Nueva prestaci\303\263n", nullptr));
        labelPrestacionRealizada->setText(QCoreApplication::translate("AddPrestacionDialog", "Prestaci\303\263n realizada", nullptr));
        labelCostoTotal->setText(QCoreApplication::translate("AddPrestacionDialog", "Costo total", nullptr));
        labelDebe->setText(QCoreApplication::translate("AddPrestacionDialog", "Debe", nullptr));
        labelHaber->setText(QCoreApplication::translate("AddPrestacionDialog", "Haber", nullptr));
        labelSaldo->setText(QCoreApplication::translate("AddPrestacionDialog", "Saldo", nullptr));
        labelGenerarCuotas->setText(QCoreApplication::translate("AddPrestacionDialog", "Generar cuotas", nullptr));
        labelCantidad->setText(QCoreApplication::translate("AddPrestacionDialog", "Cantidad", nullptr));
        comboCantidad->setItemText(0, QCoreApplication::translate("AddPrestacionDialog", "1", nullptr));
        comboCantidad->setItemText(1, QCoreApplication::translate("AddPrestacionDialog", "2", nullptr));
        comboCantidad->setItemText(2, QCoreApplication::translate("AddPrestacionDialog", "3", nullptr));

        labelMonto1->setText(QCoreApplication::translate("AddPrestacionDialog", "Monto cuota 1", nullptr));
        labelMonto2->setText(QCoreApplication::translate("AddPrestacionDialog", "Monto cuota 2", nullptr));
        labelMonto3->setText(QCoreApplication::translate("AddPrestacionDialog", "Monto cuota 3", nullptr));
        labelObservaciones->setText(QCoreApplication::translate("AddPrestacionDialog", "Observaciones", nullptr));
        btnAgregar->setText(QCoreApplication::translate("AddPrestacionDialog", "Agregar prestaci\303\263n", nullptr));
        btnAdjuntar->setText(QCoreApplication::translate("AddPrestacionDialog", "Adjuntar imagen", nullptr));
        btnFinalizar->setText(QCoreApplication::translate("AddPrestacionDialog", "Finalizar turno", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPrestacionDialog: public Ui_AddPrestacionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRESTACIONDIALOG_H
