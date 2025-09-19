#ifndef EDITPACIENTEDIALOG_H
#define EDITPACIENTEDIALOG_H

#include <QDialog>

namespace Ui { class EditPacienteDialog; }

class EditPacienteDialog : public QDialog {
    Q_OBJECT
public:
    explicit EditPacienteDialog(QWidget *parent = nullptr);
    ~EditPacienteDialog();

    void setPacienteData(const QString &nombre, const QString &dni);
    QString getNombre() const;
    QString getDni() const;

private:
    Ui::EditPacienteDialog *ui;
};

#endif // EDITPACIENTEDIALOG_H
