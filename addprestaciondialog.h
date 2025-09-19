#ifndef ADDPRESTACIONDIALOG_H
#define ADDPRESTACIONDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
class QPushButton;
QT_END_NAMESPACE

namespace Ui { class AddPrestacionDialog; }

class AddPrestacionDialog : public QDialog {
    Q_OBJECT
public:
    explicit AddPrestacionDialog(QWidget *parent = nullptr);
    ~AddPrestacionDialog();

    // Métodos para obtener los datos del formulario
    QString getPrestacion() const;
    QString getDebe() const;
    QString getHaber() const;
    QString getSaldo() const;
    QString getCostoTotal() const;
    QString getCantidadCuotas() const;
    QString getMontoCuota1() const;
    QString getMontoCuota2() const;
    QString getMontoCuota3() const;
    QString getObservaciones() const;

private:
    Ui::AddPrestacionDialog *ui;
};

#endif // ADDPRESTACIONDIALOG_H



