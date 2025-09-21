/********************************************************************************
** Form generated from reading UI file 'editpacientedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPACIENTEDIALOG_H
#define UI_EDITPACIENTEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EditPacienteDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *labelNombre;
    QLineEdit *editNombre;
    QLabel *labelDomicilio;
    QLineEdit *editDomicilio;
    QLabel *labelObraSocial;
    QLineEdit *editObraSocial;
    QLabel *labelApellido;
    QLineEdit *editApellido;
    QLabel *labelOcupacion;
    QLineEdit *editOcupacion;
    QLabel *labelDni;
    QLineEdit *editDni;
    QLabel *labelEdad;
    QLineEdit *editEdad;
    QLabel *labelTelefono;
    QLineEdit *editTelefono;
    QLabel *labelNacimiento;
    QLineEdit *editNacimiento;
    QPushButton *btnGuardar;
    QPushButton *btnCancelar;

    void setupUi(QDialog *EditPacienteDialog)
    {
        if (EditPacienteDialog->objectName().isEmpty())
            EditPacienteDialog->setObjectName("EditPacienteDialog");
        gridLayout = new QGridLayout(EditPacienteDialog);
        gridLayout->setObjectName("gridLayout");
        labelNombre = new QLabel(EditPacienteDialog);
        labelNombre->setObjectName("labelNombre");

        gridLayout->addWidget(labelNombre, 0, 0, 1, 1);

        editNombre = new QLineEdit(EditPacienteDialog);
        editNombre->setObjectName("editNombre");

        gridLayout->addWidget(editNombre, 0, 1, 1, 1);

        labelDomicilio = new QLabel(EditPacienteDialog);
        labelDomicilio->setObjectName("labelDomicilio");

        gridLayout->addWidget(labelDomicilio, 0, 2, 1, 1);

        editDomicilio = new QLineEdit(EditPacienteDialog);
        editDomicilio->setObjectName("editDomicilio");

        gridLayout->addWidget(editDomicilio, 0, 3, 1, 1);

        labelObraSocial = new QLabel(EditPacienteDialog);
        labelObraSocial->setObjectName("labelObraSocial");

        gridLayout->addWidget(labelObraSocial, 0, 4, 1, 1);

        editObraSocial = new QLineEdit(EditPacienteDialog);
        editObraSocial->setObjectName("editObraSocial");

        gridLayout->addWidget(editObraSocial, 0, 5, 1, 1);

        labelApellido = new QLabel(EditPacienteDialog);
        labelApellido->setObjectName("labelApellido");

        gridLayout->addWidget(labelApellido, 1, 0, 1, 1);

        editApellido = new QLineEdit(EditPacienteDialog);
        editApellido->setObjectName("editApellido");

        gridLayout->addWidget(editApellido, 1, 1, 1, 1);

        labelOcupacion = new QLabel(EditPacienteDialog);
        labelOcupacion->setObjectName("labelOcupacion");

        gridLayout->addWidget(labelOcupacion, 1, 2, 1, 1);

        editOcupacion = new QLineEdit(EditPacienteDialog);
        editOcupacion->setObjectName("editOcupacion");

        gridLayout->addWidget(editOcupacion, 1, 3, 1, 1);

        labelDni = new QLabel(EditPacienteDialog);
        labelDni->setObjectName("labelDni");

        gridLayout->addWidget(labelDni, 2, 0, 1, 1);

        editDni = new QLineEdit(EditPacienteDialog);
        editDni->setObjectName("editDni");

        gridLayout->addWidget(editDni, 2, 1, 1, 1);

        labelEdad = new QLabel(EditPacienteDialog);
        labelEdad->setObjectName("labelEdad");

        gridLayout->addWidget(labelEdad, 2, 2, 1, 1);

        editEdad = new QLineEdit(EditPacienteDialog);
        editEdad->setObjectName("editEdad");

        gridLayout->addWidget(editEdad, 2, 3, 1, 1);

        labelTelefono = new QLabel(EditPacienteDialog);
        labelTelefono->setObjectName("labelTelefono");

        gridLayout->addWidget(labelTelefono, 3, 0, 1, 1);

        editTelefono = new QLineEdit(EditPacienteDialog);
        editTelefono->setObjectName("editTelefono");

        gridLayout->addWidget(editTelefono, 3, 1, 1, 1);

        labelNacimiento = new QLabel(EditPacienteDialog);
        labelNacimiento->setObjectName("labelNacimiento");

        gridLayout->addWidget(labelNacimiento, 3, 2, 1, 1);

        editNacimiento = new QLineEdit(EditPacienteDialog);
        editNacimiento->setObjectName("editNacimiento");

        gridLayout->addWidget(editNacimiento, 3, 3, 1, 1);

        btnGuardar = new QPushButton(EditPacienteDialog);
        btnGuardar->setObjectName("btnGuardar");

        gridLayout->addWidget(btnGuardar, 4, 1, 1, 1);

        btnCancelar = new QPushButton(EditPacienteDialog);
        btnCancelar->setObjectName("btnCancelar");

        gridLayout->addWidget(btnCancelar, 4, 2, 1, 1);


        retranslateUi(EditPacienteDialog);

        QMetaObject::connectSlotsByName(EditPacienteDialog);
    } // setupUi

    void retranslateUi(QDialog *EditPacienteDialog)
    {
        EditPacienteDialog->setWindowTitle(QCoreApplication::translate("EditPacienteDialog", "Editar Paciente", nullptr));
        labelNombre->setText(QCoreApplication::translate("EditPacienteDialog", "Nombre", nullptr));
        labelDomicilio->setText(QCoreApplication::translate("EditPacienteDialog", "Domicilio", nullptr));
        labelObraSocial->setText(QCoreApplication::translate("EditPacienteDialog", "Obra social", nullptr));
        labelApellido->setText(QCoreApplication::translate("EditPacienteDialog", "Apellido", nullptr));
        labelOcupacion->setText(QCoreApplication::translate("EditPacienteDialog", "Ocupaci\303\263n", nullptr));
        labelDni->setText(QCoreApplication::translate("EditPacienteDialog", "DNI", nullptr));
        labelEdad->setText(QCoreApplication::translate("EditPacienteDialog", "Edad", nullptr));
        labelTelefono->setText(QCoreApplication::translate("EditPacienteDialog", "Tel\303\251fono", nullptr));
        labelNacimiento->setText(QCoreApplication::translate("EditPacienteDialog", "Nacimiento", nullptr));
        btnGuardar->setText(QCoreApplication::translate("EditPacienteDialog", "Guardar", nullptr));
        btnCancelar->setText(QCoreApplication::translate("EditPacienteDialog", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditPacienteDialog: public Ui_EditPacienteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPACIENTEDIALOG_H
