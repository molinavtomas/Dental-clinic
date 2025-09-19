#include "editpacientedialog.h"
#include "ui_editpacientedialog.h"

EditPacienteDialog::EditPacienteDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditPacienteDialog)
{
    ui->setupUi(this);
    setWindowTitle("Editar Paciente");
}

EditPacienteDialog::~EditPacienteDialog()
{
    delete ui;
}

void EditPacienteDialog::setPacienteData(const QString &nombre, const QString &dni)
{
    ui->editNombre->setText(nombre);
    ui->editDni->setText(dni);
}

QString EditPacienteDialog::getNombre() const
{
    return ui->editNombre->text();
}

QString EditPacienteDialog::getDni() const
{
    return ui->editDni->text();
}
