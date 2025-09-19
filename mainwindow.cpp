#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QHeaderView>
#include <QDate>
#include <QMessageBox>
#include "addprestaciondialog.h"
#include "editpacientedialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // KPI labels (Inicio page)
    ui->labelPendientes->setText(QString::number(7));
    ui->labelGananciasHoy->setText("100000");
    ui->labelGananciasMes->setText("100000");

    // Inicio page table
    ui->tableInicioTurnos->setColumnCount(7);
    ui->tableInicioTurnos->setHorizontalHeaderLabels({
        "ID","Nombre","DNI","Hora","Estado confirmación","Tratamiento","Mensaje"
    });
    ui->tableInicioTurnos->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->dateEditInicio->setDate(QDate::currentDate());

    // Sample data for Inicio table
    struct InicioTurno { int id; QString nombre; QString dni; QString hora; QString estado; QString trat; QString msg; };
    const QList<InicioTurno> inicioTurnos = {
        {1, "GUSTAVO", "20000000", "9:00AM", "PENDIENTE", "ARREGLO", "ENVIADO"},
        {2, "JESUS", "2323232", "10:10AM", "CONFIRMADO", "CONDUCTO", "ENVIADO"},
        {3, "MARIA", "24534343", "", "CANCELADO", "ARREGLO", "ENVIADO"},
        {4, "JOSE", "242424", "", "NO ENVIADO", "ARREGLO", "ENVIADO"}
    };
    ui->tableInicioTurnos->setRowCount(inicioTurnos.size());
    for (int r=0;r<inicioTurnos.size();++r){
        const auto &t = inicioTurnos[r];
        ui->tableInicioTurnos->setItem(r,0,new QTableWidgetItem(QString::number(t.id)));
        ui->tableInicioTurnos->setItem(r,1,new QTableWidgetItem(t.nombre));
        ui->tableInicioTurnos->setItem(r,2,new QTableWidgetItem(t.dni));
        ui->tableInicioTurnos->setItem(r,3,new QTableWidgetItem(t.hora));
        ui->tableInicioTurnos->setItem(r,4,new QTableWidgetItem(t.estado));
        ui->tableInicioTurnos->setItem(r,5,new QTableWidgetItem(t.trat));
        ui->tableInicioTurnos->setItem(r,6,new QTableWidgetItem(t.msg));
    }

    // Sidebar navigation to stacked pages
    connect(ui->btnInicio, &QPushButton::clicked, this, [this]{ ui->stackedWidget->setCurrentWidget(ui->pageInicio); });
    connect(ui->btnPacientes, &QPushButton::clicked, this, [this]{ ui->stackedWidget->setCurrentWidget(ui->pagePacientes); });
    connect(ui->btnFichas, &QPushButton::clicked, this, [this]{ ui->stackedWidget->setCurrentWidget(ui->pageFichas); });
    connect(ui->btnTurnos, &QPushButton::clicked, this, [this]{ ui->stackedWidget->setCurrentWidget(ui->pageTurnos); });
    connect(ui->btnPagos, &QPushButton::clicked, this, [this]{ ui->stackedWidget->setCurrentWidget(ui->pagePagos); });

    // Pacientes page table
    ui->tablePacientes->setColumnCount(5);
    ui->tablePacientes->setHorizontalHeaderLabels({"ID","Nombre","DNI","Teléfono","Tratamiento"});
    ui->tablePacientes->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tablePacientes->setRowCount(3);
    const QStringList nombres = {"Gustavo","Jesus","Maria"};
    const QStringList dnis = {"20000000","2323232","24534343"};
    const QStringList tels = {"111111111","111111111","111111111"};
    const QStringList trat = {"Arreglo","Conducto","Arreglo"};
    for (int i=0;i<3;++i){
        ui->tablePacientes->setItem(i,0,new QTableWidgetItem(QString::number(i+1)));
        ui->tablePacientes->setItem(i,1,new QTableWidgetItem(nombres[i]));
        ui->tablePacientes->setItem(i,2,new QTableWidgetItem(dnis[i]));
        ui->tablePacientes->setItem(i,3,new QTableWidgetItem(tels[i]));
        ui->tablePacientes->setItem(i,4,new QTableWidgetItem(trat[i]));
    }

    // Fichas page tables
    ui->tableFichaMedica->setColumnCount(7);
    ui->tableFichaMedica->setHorizontalHeaderLabels({"ID","Fecha","Prestación realizada","Debe","Haber","Saldo","Observaciones"});
    ui->tableFichaMedica->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableFichaMedica->setRowCount(4);
    const QStringList fechas = {"15/7/2024","30/7/2024","20/8/2024","16/7/2025"};
    const QStringList pres = {"Conducto","Conducto","Conducto","Arreglo"};
    for (int r=0;r<4;++r){
        ui->tableFichaMedica->setItem(r,0,new QTableWidgetItem(QString::number(r+1)));
        ui->tableFichaMedica->setItem(r,1,new QTableWidgetItem(fechas[r]));
        ui->tableFichaMedica->setItem(r,2,new QTableWidgetItem(pres[r]));
        ui->tableFichaMedica->setItem(r,3,new QTableWidgetItem("-"));
        ui->tableFichaMedica->setItem(r,4,new QTableWidgetItem("-"));
        ui->tableFichaMedica->setItem(r,5,new QTableWidgetItem("-"));
        ui->tableFichaMedica->setItem(r,6,new QTableWidgetItem(""));
    }

    ui->tableAdjuntos->setColumnCount(4);
    ui->tableAdjuntos->setHorizontalHeaderLabels({"ID","Fecha","Tipo","Archivo"});
    ui->tableAdjuntos->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableAdjuntos->setRowCount(4);
    const QStringList afechas = {"15/7/2023","30/7/2024","20/8/2024","16/7/2025"};
    const QStringList atipos = {"ANTIGUA FICHA","ANTIGUA FICHA","RADIOGRAFIA","ANTIGUA FICHA"};
    const QStringList aarch = {"PDF","PDF","JPG","JGP"};
    for (int r=0;r<4;++r){
        ui->tableAdjuntos->setItem(r,0,new QTableWidgetItem(QString::number(r+1)));
        ui->tableAdjuntos->setItem(r,1,new QTableWidgetItem(afechas[r]));
        ui->tableAdjuntos->setItem(r,2,new QTableWidgetItem(atipos[r]));
        ui->tableAdjuntos->setItem(r,3,new QTableWidgetItem(aarch[r]));
    }

    // Open dialog on "Agregar prestación"
    connect(ui->btnAgregarPrestacion, &QPushButton::clicked, this, [this]{
        AddPrestacionDialog dlg(this);
        
        if (dlg.exec() == QDialog::Accepted) {
            // Agregar nueva fila a la tabla de FICHAS
            int newRow = ui->tableFichaMedica->rowCount();
            ui->tableFichaMedica->insertRow(newRow);
            
            // Obtener el próximo ID
            int nextId = newRow + 1;
            
            // Llenar la tabla con los datos del diálogo
            ui->tableFichaMedica->setItem(newRow, 0, new QTableWidgetItem(QString::number(nextId)));
            ui->tableFichaMedica->setItem(newRow, 1, new QTableWidgetItem(QDate::currentDate().toString("dd/MM/yyyy")));
            ui->tableFichaMedica->setItem(newRow, 2, new QTableWidgetItem(dlg.getPrestacion()));
            ui->tableFichaMedica->setItem(newRow, 3, new QTableWidgetItem(dlg.getDebe()));
            ui->tableFichaMedica->setItem(newRow, 4, new QTableWidgetItem(dlg.getHaber()));
            ui->tableFichaMedica->setItem(newRow, 5, new QTableWidgetItem(dlg.getSaldo()));
            ui->tableFichaMedica->setItem(newRow, 6, new QTableWidgetItem(dlg.getObservaciones()));
            
            // Mostrar ventana de confirmación para finalizar turno
            QMessageBox::StandardButton reply = QMessageBox::question(
                this,
                "Finalizar turno",
                "Los datos se guardaron correctamente, ¿desea finalizar el turno?",
                QMessageBox::Yes | QMessageBox::No,
                QMessageBox::No
            );
            
            if (reply == QMessageBox::Yes) {
                // Aquí se podría agregar lógica adicional para finalizar el turno
                QMessageBox::information(
                    this,
                    "Turno finalizado",
                    "El turno ha sido finalizado correctamente."
                );
            }
        }
    });

    // Ver ficha médica desde INICIO
    connect(ui->btnVerFichaInicio, &QPushButton::clicked, this, [this]{
        int currentRow = ui->tableInicioTurnos->currentRow();
        if (currentRow >= 0) {
            QString nombre = ui->tableInicioTurnos->item(currentRow, 1)->text();
            QString dni = ui->tableInicioTurnos->item(currentRow, 2)->text();
            
            // Cargar datos en FICHAS
            ui->lblNombre->setText("NOMBRE: " + nombre);
            ui->lblDni->setText("DNI: " + dni);
            
            // Cambiar a pestaña FICHAS
            ui->stackedWidget->setCurrentWidget(ui->pageFichas);
        }
    });

    // Ver ficha médica desde PACIENTES
    connect(ui->btnVerFichaPac, &QPushButton::clicked, this, [this]{
        int currentRow = ui->tablePacientes->currentRow();
        if (currentRow >= 0) {
            QString nombre = ui->tablePacientes->item(currentRow, 1)->text();
            QString dni = ui->tablePacientes->item(currentRow, 2)->text();
            
            // Cargar datos en FICHAS
            ui->lblNombre->setText("NOMBRE: " + nombre);
            ui->lblDni->setText("DNI: " + dni);
            
            // Cambiar a pestaña FICHAS
            ui->stackedWidget->setCurrentWidget(ui->pageFichas);
        }
    });

    // Editar paciente desde PACIENTES
    connect(ui->btnEditarPaciente, &QPushButton::clicked, this, [this]{
        int currentRow = ui->tablePacientes->currentRow();
        if (currentRow >= 0) {
            QString nombre = ui->tablePacientes->item(currentRow, 1)->text();
            QString dni = ui->tablePacientes->item(currentRow, 2)->text();
            
            EditPacienteDialog dlg(this);
            dlg.setPacienteData(nombre, dni);
            
            if (dlg.exec() == QDialog::Accepted) {
                // Actualizar la tabla con los nuevos datos
                ui->tablePacientes->item(currentRow, 1)->setText(dlg.getNombre());
                ui->tablePacientes->item(currentRow, 2)->setText(dlg.getDni());
            }
        }
    });

    // Eliminar paciente desde PACIENTES
    connect(ui->btnEliminarPaciente, &QPushButton::clicked, this, [this]{
        int currentRow = ui->tablePacientes->currentRow();
        if (currentRow >= 0) {
            QString nombre = ui->tablePacientes->item(currentRow, 1)->text();
            QString dni = ui->tablePacientes->item(currentRow, 2)->text();
            
            // Mostrar ventana de confirmación
            QMessageBox::StandardButton reply = QMessageBox::question(
                this,
                "Confirmar eliminación",
                QString("¿Está seguro que desea eliminar al paciente:\n\nNombre: %1\nDNI: %2\n\nEsta acción no se puede deshacer.").arg(nombre, dni),
                QMessageBox::Yes | QMessageBox::No,
                QMessageBox::No
            );
            
            if (reply == QMessageBox::Yes) {
                // Eliminar la fila de la tabla
                ui->tablePacientes->removeRow(currentRow);
                
                // Mostrar mensaje de confirmación
                QMessageBox::information(
                    this,
                    "Paciente eliminado",
                    QString("El paciente %1 (DNI: %2) ha sido eliminado correctamente.").arg(nombre, dni)
                );
            }
        } else {
            QMessageBox::warning(
                this,
                "Selección requerida",
                "Por favor, seleccione un paciente de la tabla para eliminar."
            );
        }
    });

    // Turnos page table
    ui->tableTurnos->setColumnCount(9);
    ui->tableTurnos->setHorizontalHeaderLabels({
        "ID","Nombre","DNI","Fecha","Hora",
        "Estado confirmación","Tratamiento","Estado de turno","Mensaje"
    });
    ui->tableTurnos->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->dateEditTurnos->setDate(QDate::currentDate());
    ui->dateTurno->setDate(QDate::currentDate());
    ui->timeTurno->setTime(QTime::fromString("09:00","hh:mm"));

    // Sample rows to match screenshot
    struct TurnoRow { int id; QString nombre; QString dni; QString fecha; QString hora; QString estadoConf; QString trat; QString estadoTurno; QString msg; };
    const QList<TurnoRow> rows = {
        {1, "GUSTAVO", "20000000", "", "", "CANCELADO", "ARREGLO", "CANCELADO", "enviado"},
        {2, "JESUS", "2323232", "", "", "CONFIRMADO", "CONDUCTO", "FINALIZADO", "enviado"},
        {3, "MARIA", "24534343", "", "", "CANCELADO", "ARREGLO", "CANCELADO", "enviado"},
        {4, "JOSE", "242424", "", "", "NO ENVIADO", "ARREGLO", "PENDIENTE", "enviado"}
    };
    ui->tableTurnos->setRowCount(rows.size());
    for (int r=0;r<rows.size();++r){
        const auto &t = rows[r];
        ui->tableTurnos->setItem(r,0,new QTableWidgetItem(QString::number(t.id)));
        ui->tableTurnos->setItem(r,1,new QTableWidgetItem(t.nombre));
        ui->tableTurnos->setItem(r,2,new QTableWidgetItem(t.dni));
        ui->tableTurnos->setItem(r,3,new QTableWidgetItem(t.fecha));
        ui->tableTurnos->setItem(r,4,new QTableWidgetItem(t.hora));
        ui->tableTurnos->setItem(r,5,new QTableWidgetItem(t.estadoConf));
        ui->tableTurnos->setItem(r,6,new QTableWidgetItem(t.trat));
        ui->tableTurnos->setItem(r,7,new QTableWidgetItem(t.estadoTurno));
        ui->tableTurnos->setItem(r,8,new QTableWidgetItem(t.msg));
    }

    // Pagos page tables
    ui->tableHistorialPagos->setColumnCount(11);
    ui->tableHistorialPagos->setHorizontalHeaderLabels({
        "ID Pago","ID turno","Nombre paciente","DNI","Fecha emitida","Hora",
        "Tratamiento","Costo total","Forma de pago","Estado","Pago"
    });
    ui->tableHistorialPagos->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    
    // Datos de ejemplo para HISTORIAL DE PAGOS
    struct HistorialPago { int idPago; int idTurno; QString nombre; QString dni; QString fecha; QString hora; QString tratamiento; QString costo; QString formaPago; QString estado; QString pago; };
    const QList<HistorialPago> historialPagos = {
        {1, 1, "GUSTAVO", "20000000", "17/7", "9:00", "ARREGLO", "50.000", "efectivo", "PAGADO", "N/A"},
        {2, 2, "JESUS", "2323232", "17/7", "9:30", "CONDUCTO", "200.000", "transferencia", "EN CUOTAS", "66.000"},
        {3, 3, "MARIA", "24534343", "17/7", "10:30", "ARREGLO", "50.000", "tarjeta", "PAGADO", "N/A"},
        {4, 4, "JOSE", "242424", "17/7", "11:20", "ARREGLO", "50.000", "efectivo", "PAGADO", "N/A"},
        {5, 5, "ANA", "12345678", "18/7", "14:00", "LIMPEZA", "30.000", "efectivo", "PAGADO", "N/A"},
        {6, 6, "CARLOS", "87654321", "18/7", "15:30", "EXTRACCION", "80.000", "transferencia", "PAGADO", "N/A"}
    };
    ui->tableHistorialPagos->setRowCount(historialPagos.size());
    for (int r=0; r<historialPagos.size(); ++r){
        const auto &p = historialPagos[r];
        ui->tableHistorialPagos->setItem(r,0,new QTableWidgetItem(QString::number(p.idPago)));
        ui->tableHistorialPagos->setItem(r,1,new QTableWidgetItem(QString::number(p.idTurno)));
        ui->tableHistorialPagos->setItem(r,2,new QTableWidgetItem(p.nombre));
        ui->tableHistorialPagos->setItem(r,3,new QTableWidgetItem(p.dni));
        ui->tableHistorialPagos->setItem(r,4,new QTableWidgetItem(p.fecha));
        ui->tableHistorialPagos->setItem(r,5,new QTableWidgetItem(p.hora));
        ui->tableHistorialPagos->setItem(r,6,new QTableWidgetItem(p.tratamiento));
        ui->tableHistorialPagos->setItem(r,7,new QTableWidgetItem(p.costo));
        ui->tableHistorialPagos->setItem(r,8,new QTableWidgetItem(p.formaPago));
        ui->tableHistorialPagos->setItem(r,9,new QTableWidgetItem(p.estado));
        ui->tableHistorialPagos->setItem(r,10,new QTableWidgetItem(p.pago));
    }
    
    ui->tablePagosPendientes->setColumnCount(11);
    ui->tablePagosPendientes->setHorizontalHeaderLabels({
        "ID Pago","ID turno","Nombre paciente","DNI","Fecha emitida","Hora",
        "Tratamiento","Costo total","Forma de pago","Estado","Pago"
    });
    ui->tablePagosPendientes->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    
    // Datos de ejemplo para PAGOS PENDIENTES
    struct PagoPendiente { int idPago; int idTurno; QString nombre; QString dni; QString fecha; QString hora; QString tratamiento; QString costo; QString formaPago; QString estado; QString pago; };
    const QList<PagoPendiente> pagosPendientes = {
        {7, 7, "GUSTAVO", "20000000", "19/7", "9:00", "ARREGLO", "50.000", "-", "PENDIENTE", "N/A"},
        {8, 8, "LUIS", "11223344", "19/7", "10:00", "CONDUCTO", "150.000", "-", "PENDIENTE", "N/A"},
        {9, 9, "SOFIA", "55667788", "19/7", "11:00", "LIMPEZA", "25.000", "-", "PENDIENTE", "N/A"}
    };
    ui->tablePagosPendientes->setRowCount(pagosPendientes.size());
    for (int r=0; r<pagosPendientes.size(); ++r){
        const auto &p = pagosPendientes[r];
        ui->tablePagosPendientes->setItem(r,0,new QTableWidgetItem(QString::number(p.idPago)));
        ui->tablePagosPendientes->setItem(r,1,new QTableWidgetItem(QString::number(p.idTurno)));
        ui->tablePagosPendientes->setItem(r,2,new QTableWidgetItem(p.nombre));
        ui->tablePagosPendientes->setItem(r,3,new QTableWidgetItem(p.dni));
        ui->tablePagosPendientes->setItem(r,4,new QTableWidgetItem(p.fecha));
        ui->tablePagosPendientes->setItem(r,5,new QTableWidgetItem(p.hora));
        ui->tablePagosPendientes->setItem(r,6,new QTableWidgetItem(p.tratamiento));
        ui->tablePagosPendientes->setItem(r,7,new QTableWidgetItem(p.costo));
        ui->tablePagosPendientes->setItem(r,8,new QTableWidgetItem(p.formaPago));
        ui->tablePagosPendientes->setItem(r,9,new QTableWidgetItem(p.estado));
        ui->tablePagosPendientes->setItem(r,10,new QTableWidgetItem(p.pago));
    }

    // Conectar botón "Cobrar ahora" para cargar datos en "Cobrar ticket generado"
    connect(ui->btnCobrarAhora, &QPushButton::clicked, this, [this]{
        int currentRow = ui->tablePagosPendientes->currentRow();
        if (currentRow >= 0) {
            // Obtener datos de la fila seleccionada
            QString idPago = ui->tablePagosPendientes->item(currentRow, 0)->text();
            QString idTurno = ui->tablePagosPendientes->item(currentRow, 1)->text();
            QString nombre = ui->tablePagosPendientes->item(currentRow, 2)->text();
            QString dni = ui->tablePagosPendientes->item(currentRow, 3)->text();
            QString fecha = ui->tablePagosPendientes->item(currentRow, 4)->text();
            QString hora = ui->tablePagosPendientes->item(currentRow, 5)->text();
            QString tratamiento = ui->tablePagosPendientes->item(currentRow, 6)->text();
            QString costo = ui->tablePagosPendientes->item(currentRow, 7)->text();
            
            // Generar número de ticket (formato: TKT-YYYYMMDD-XXX)
            QString ticket = QString("TKT-%1-%2").arg(QDate::currentDate().toString("yyyyMMdd")).arg(idPago);
            
            // Cargar datos en la sección "Cobrar ticket generado"
            ui->lblCPNombre->setText("NOMBRE: " + nombre);
            ui->lblCPApellido->setText("APELLIDO: COSTAS"); // Asumiendo apellido por defecto
            ui->lblCPDni->setText("DNI: " + dni);
            ui->lblCPTel->setText("TELÉFONO: 1111111111"); // Asumiendo teléfono por defecto
            ui->lblCPDom->setText("DOMICILIO");
            ui->lblCPOcup->setText("OCUPACIÓN");
            ui->lblCPEdad->setText("EDAD");
            ui->lblCPNac->setText("NACIMIENTO");
            ui->lblCPObra->setText("OBRA SOCIAL");
            
            // Cargar datos de pago
            ui->editCostoTotalCobro->setText(costo);
            ui->editPago->setText(costo); // Por defecto, el pago es igual al costo total
            ui->editFormaDePago->setText("efectivo"); // Por defecto efectivo
            
            // Mostrar información del ticket generado
            QMessageBox::information(
                this,
                "Ticket generado",
                QString("Se ha generado el ticket de pago:\n\nTicket: %1\nPaciente: %2\nTratamiento: %3\nCosto: %4\n\nLos datos se han cargado en la sección 'Cobrar ticket generado'.").arg(ticket, nombre, tratamiento, costo)
            );
        } else {
            QMessageBox::warning(
                this,
                "Selección requerida",
                "Por favor, seleccione un pago pendiente de la tabla para cobrar."
            );
        }
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
