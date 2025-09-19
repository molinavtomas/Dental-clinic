#include "addprestaciondialog.h"
#include "ui_addprestaciondialog.h"
#include <QMessageBox>

AddPrestacionDialog::AddPrestacionDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddPrestacionDialog)
{
    ui->setupUi(this);
    setWindowTitle("Nueva prestación");
    
    // Conectar botones
    connect(ui->btnAgregar, &QPushButton::clicked, this, &QDialog::accept);
    connect(ui->btnAdjuntar, &QPushButton::clicked, this, [this]{
        // Por ahora solo muestra un mensaje, se puede implementar funcionalidad de adjuntar archivo
        QMessageBox::information(this, "Adjuntar imagen", "Funcionalidad de adjuntar imagen pendiente de implementar.");
    });
    connect(ui->btnFinalizar, &QPushButton::clicked, this, &QDialog::accept);
}

AddPrestacionDialog::~AddPrestacionDialog()
{
    delete ui;
}

QString AddPrestacionDialog::getPrestacion() const
{
    return ui->editPrestacionDialog->text();
}

QString AddPrestacionDialog::getDebe() const
{
    return ui->editDebe->text();
}

QString AddPrestacionDialog::getHaber() const
{
    return ui->editHaber->text();
}

QString AddPrestacionDialog::getSaldo() const
{
    return ui->editSaldo->text();
}

QString AddPrestacionDialog::getCostoTotal() const
{
    return ui->editCostoTotalDialog->text();
}

QString AddPrestacionDialog::getCantidadCuotas() const
{
    return ui->comboCantidad->currentText();
}

QString AddPrestacionDialog::getMontoCuota1() const
{
    return ui->editMonto1->text();
}

QString AddPrestacionDialog::getMontoCuota2() const
{
    return ui->editMonto2->text();
}

QString AddPrestacionDialog::getMontoCuota3() const
{
    return ui->editMonto3->text();
}

QString AddPrestacionDialog::getObservaciones() const
{
    return ui->textObservaciones->toPlainText();
}



