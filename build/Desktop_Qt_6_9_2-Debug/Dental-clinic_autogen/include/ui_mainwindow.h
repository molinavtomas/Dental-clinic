/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *SidebarFrame;
    QVBoxLayout *sidebarLayout;
    QLabel *labelOpciones;
    QPushButton *btnInicio;
    QPushButton *btnPacientes;
    QPushButton *btnFichas;
    QPushButton *btnTurnos;
    QPushButton *btnPagos;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupPacienteConsultorio;
    QVBoxLayout *pacienteConsultorioLayout;
    QFrame *frameDatosPaciente;
    QVBoxLayout *datosPacienteLayout;
    QLabel *labelDatosPacienteTitulo;
    QLabel *labelPacienteNombre;
    QLabel *labelPacienteApellido;
    QLabel *labelPacienteDni;
    QLabel *labelPacienteEdad;
    QLabel *labelPacienteObraSocial;
    QPushButton *btnFinalizarTurno;
    QFrame *ContentFrame;
    QVBoxLayout *contentLayout;
    QStackedWidget *stackedWidget;
    QWidget *pageInicio;
    QVBoxLayout *inicioLayout;
    QHBoxLayout *kpiLayout;
    QGroupBox *groupPendientes;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelPendientes;
    QGroupBox *groupGananciasHoy;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelGananciasHoy;
    QGroupBox *groupGananciasMes;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelGananciasMes;
    QHBoxLayout *inicioTopControls;
    QLabel *labelPacientesHoyInicio;
    QSpacerItem *spacerInicioTop;
    QLabel *labelOrdenarInicio;
    QComboBox *comboOrdenInicio;
    QLabel *labelDiaInicio;
    QDateEdit *dateEditInicio;
    QTableWidget *tableInicioTurnos;
    QHBoxLayout *inicioActions;
    QSpacerItem *spacerInicioActionsLeft;
    QPushButton *btnVerFichaInicio;
    QPushButton *btnInicioTurnoInicio;
    QSpacerItem *spacerInicioActionsRight;
    QWidget *pagePacientes;
    QVBoxLayout *pacientesLayout;
    QHBoxLayout *pacientesSearchLayout;
    QLineEdit *editBuscarPaciente;
    QPushButton *btnBuscarPaciente;
    QTableWidget *tablePacientes;
    QHBoxLayout *pacientesActionsLayout;
    QPushButton *btnVerFichaPac;
    QPushButton *btnEditarPaciente;
    QPushButton *btnEliminarPaciente;
    QGroupBox *groupAgregarPaciente;
    QGridLayout *gridAgregarPaciente;
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
    QPushButton *btnAgregarPaciente;
    QWidget *pageFichas;
    QVBoxLayout *fichasLayout;
    QHBoxLayout *fichasTopSearch;
    QSpacerItem *fichasLeftSpacer;
    QLabel *labelBuscarPacientePor;
    QComboBox *comboBuscarFichas;
    QLineEdit *editBuscarFichas;
    QPushButton *btnBuscarFichas;
    QGridLayout *fichasDatosPaciente;
    QLabel *lblDatosPacienteTitulo;
    QLabel *lblNombre;
    QLabel *lblDomicilio;
    QLabel *lblApellido;
    QLabel *lblOcupacion;
    QLabel *lblDni;
    QLabel *lblEdad;
    QLabel *lblTelefono;
    QLabel *lblNacimiento;
    QLabel *lblObraSocial;
    QLabel *labelFichaMedicaTitulo;
    QTableWidget *tableFichaMedica;
    QHBoxLayout *fichasButtons;
    QPushButton *btnAgregarPrestacion;
    QPushButton *btnEditarFicha;
    QPushButton *btnVerTicket;
    QPushButton *btnVerHistorialPagos;
    QLabel *labelAdjuntosTitulo;
    QTableWidget *tableAdjuntos;
    QHBoxLayout *adjuntosButtons;
    QSpacerItem *adjSpacer;
    QPushButton *btnVerArchivo;
    QWidget *pageTurnos;
    QVBoxLayout *turnosLayout;
    QHBoxLayout *turnosTopControls;
    QLabel *labelPacientesHoyTurnos;
    QSpacerItem *spacerTurnosTop;
    QLabel *labelOrdenarTurnos;
    QComboBox *comboOrdenTurnos;
    QLabel *labelDiaTurnos;
    QDateEdit *dateEditTurnos;
    QTableWidget *tableTurnos;
    QHBoxLayout *turnosActions;
    QPushButton *btnVerFichaTurno;
    QPushButton *btnReprogramarTurno;
    QPushButton *btnCancelarTurno;
    QPushButton *btnEnviarConfirmacion;
    QGroupBox *groupNuevoTurno;
    QHBoxLayout *nuevoTurnoLayout;
    QGroupBox *groupBuscarPacienteTurno;
    QGridLayout *gridBuscarTurno;
    QComboBox *comboBuscarPorTurno;
    QLineEdit *editBuscarTurno;
    QPushButton *btnBuscarTurno;
    QGroupBox *groupDatosPacienteTurno;
    QFormLayout *formDatosPacienteTurno;
    QLabel *lblDPNombre;
    QLabel *valDPNombre;
    QLabel *lblDPApellido;
    QLabel *valDPApellido;
    QLabel *lblDPDni;
    QLabel *valDPDni;
    QLabel *lblDPTel;
    QLabel *valDPTel;
    QLabel *lblDPDomicilio;
    QLabel *valDPDomicilio;
    QLabel *lblDPEdad;
    QLabel *valDPEdad;
    QLabel *lblDPNacimiento;
    QLabel *valDPNacimiento;
    QLabel *lblDPObra;
    QLabel *valDPObra;
    QGroupBox *groupGenerarTurnoNuevo;
    QGridLayout *gridGenerarTurnoNuevo;
    QLabel *labelFechaTurno;
    QDateEdit *dateTurno;
    QLabel *labelHoraTurno;
    QTimeEdit *timeTurno;
    QLabel *labelTratTurno;
    QLineEdit *editTratTurno;
    QPushButton *btnCrearTurno;
    QWidget *pagePagos;
    QVBoxLayout *pagosLayout;
    QHBoxLayout *historialTopControls;
    QLabel *labelHistorialTitulo;
    QSpacerItem *spacerHistorialLeft;
    QLabel *labelOrdenarHistorial;
    QComboBox *comboOrdenHistorial;
    QSpacerItem *spacerHistorialMid;
    QLabel *labelBuscarPorHistorial;
    QComboBox *comboBuscarHistorial;
    QLineEdit *editBuscarHistorial;
    QPushButton *btnBuscarHistorial;
    QTableWidget *tableHistorialPagos;
    QHBoxLayout *historialActions;
    QSpacerItem *spacerHistorialActions;
    QPushButton *btnActualizarPago;
    QHBoxLayout *pendientesTopControls;
    QLabel *labelPagosPendientes;
    QSpacerItem *spacerPendLeft;
    QLabel *labelOrdenarPend;
    QComboBox *comboOrdenPend;
    QSpacerItem *spacerPendMid;
    QLabel *labelBuscarPorPend;
    QComboBox *comboBuscarPend;
    QLineEdit *editBuscarPend;
    QPushButton *btnBuscarPend;
    QTableWidget *tablePagosPendientes;
    QHBoxLayout *pendientesActions;
    QSpacerItem *spacerPendActionsLeft;
    QPushButton *btnCobrarAhora;
    QPushButton *btnRegistrarPagoParcial;
    QSpacerItem *spacerPendActionsRight;
    QHBoxLayout *pagosBottomLayout;
    QGroupBox *groupGenerarPago;
    QHBoxLayout *gridGenerarPago;
    QGroupBox *groupDatosPacientePago;
    QFormLayout *formDatosPacientePago;
    QLabel *lblPPNombre;
    QLabel *lblPPApellido;
    QLabel *lblPPDni;
    QLabel *lblPPTel;
    QLabel *lblPPDom;
    QLabel *lblPPOcup;
    QLabel *lblPPEdad;
    QLabel *lblPPNac;
    QLabel *lblPPObra;
    QGroupBox *groupCostoCuotas;
    QGridLayout *gridCostoCuotas;
    QLabel *labelCostoTotal;
    QLineEdit *editCostoTotal;
    QLabel *labelGenerarCuotas;
    QLabel *labelCantidadCuotas;
    QComboBox *comboCantidadCuotas;
    QLabel *labelMonto1Pago;
    QLineEdit *editMontoCuota1;
    QLabel *labelMonto2Pago;
    QLineEdit *editMontoCuota2;
    QLabel *labelMonto3Pago;
    QLineEdit *editMontoCuota3;
    QPushButton *btnGenerarTicket;
    QGroupBox *groupCobrarTicket;
    QHBoxLayout *gridCobrarTicket;
    QGroupBox *groupDatosCobro;
    QFormLayout *formDatosCobro;
    QLabel *lblCPNombre;
    QLabel *lblCPApellido;
    QLabel *lblCPDni;
    QLabel *lblCPTel;
    QLabel *lblCPDom;
    QLabel *lblCPOcup;
    QLabel *lblCPEdad;
    QLabel *lblCPNac;
    QLabel *lblCPObra;
    QGroupBox *groupCobro;
    QGridLayout *gridCobro;
    QLabel *labelCostoTotalCobro;
    QLineEdit *editCostoTotalCobro;
    QLabel *labelPago;
    QLineEdit *editPago;
    QLabel *labelFormaDePago;
    QLineEdit *editFormaDePago;
    QPushButton *btnCobrar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1062, 661);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        SidebarFrame = new QFrame(centralwidget);
        SidebarFrame->setObjectName("SidebarFrame");
        SidebarFrame->setMinimumSize(QSize(180, 0));
        SidebarFrame->setFrameShape(QFrame::Shape::StyledPanel);
        SidebarFrame->setFrameShadow(QFrame::Shadow::Raised);
        sidebarLayout = new QVBoxLayout(SidebarFrame);
        sidebarLayout->setObjectName("sidebarLayout");
        labelOpciones = new QLabel(SidebarFrame);
        labelOpciones->setObjectName("labelOpciones");

        sidebarLayout->addWidget(labelOpciones);

        btnInicio = new QPushButton(SidebarFrame);
        btnInicio->setObjectName("btnInicio");

        sidebarLayout->addWidget(btnInicio);

        btnPacientes = new QPushButton(SidebarFrame);
        btnPacientes->setObjectName("btnPacientes");

        sidebarLayout->addWidget(btnPacientes);

        btnFichas = new QPushButton(SidebarFrame);
        btnFichas->setObjectName("btnFichas");

        sidebarLayout->addWidget(btnFichas);

        btnTurnos = new QPushButton(SidebarFrame);
        btnTurnos->setObjectName("btnTurnos");

        sidebarLayout->addWidget(btnTurnos);

        btnPagos = new QPushButton(SidebarFrame);
        btnPagos->setObjectName("btnPagos");

        sidebarLayout->addWidget(btnPagos);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        sidebarLayout->addItem(verticalSpacer);

        groupPacienteConsultorio = new QGroupBox(SidebarFrame);
        groupPacienteConsultorio->setObjectName("groupPacienteConsultorio");
        pacienteConsultorioLayout = new QVBoxLayout(groupPacienteConsultorio);
        pacienteConsultorioLayout->setObjectName("pacienteConsultorioLayout");
        frameDatosPaciente = new QFrame(groupPacienteConsultorio);
        frameDatosPaciente->setObjectName("frameDatosPaciente");
        frameDatosPaciente->setFrameShape(QFrame::Shape::StyledPanel);
        frameDatosPaciente->setFrameShadow(QFrame::Shadow::Raised);
        datosPacienteLayout = new QVBoxLayout(frameDatosPaciente);
        datosPacienteLayout->setObjectName("datosPacienteLayout");
        labelDatosPacienteTitulo = new QLabel(frameDatosPaciente);
        labelDatosPacienteTitulo->setObjectName("labelDatosPacienteTitulo");
        QFont font;
        font.setBold(true);
        labelDatosPacienteTitulo->setFont(font);

        datosPacienteLayout->addWidget(labelDatosPacienteTitulo);

        labelPacienteNombre = new QLabel(frameDatosPaciente);
        labelPacienteNombre->setObjectName("labelPacienteNombre");

        datosPacienteLayout->addWidget(labelPacienteNombre);

        labelPacienteApellido = new QLabel(frameDatosPaciente);
        labelPacienteApellido->setObjectName("labelPacienteApellido");

        datosPacienteLayout->addWidget(labelPacienteApellido);

        labelPacienteDni = new QLabel(frameDatosPaciente);
        labelPacienteDni->setObjectName("labelPacienteDni");

        datosPacienteLayout->addWidget(labelPacienteDni);

        labelPacienteEdad = new QLabel(frameDatosPaciente);
        labelPacienteEdad->setObjectName("labelPacienteEdad");

        datosPacienteLayout->addWidget(labelPacienteEdad);

        labelPacienteObraSocial = new QLabel(frameDatosPaciente);
        labelPacienteObraSocial->setObjectName("labelPacienteObraSocial");

        datosPacienteLayout->addWidget(labelPacienteObraSocial);


        pacienteConsultorioLayout->addWidget(frameDatosPaciente);

        btnFinalizarTurno = new QPushButton(groupPacienteConsultorio);
        btnFinalizarTurno->setObjectName("btnFinalizarTurno");

        pacienteConsultorioLayout->addWidget(btnFinalizarTurno);


        sidebarLayout->addWidget(groupPacienteConsultorio);


        horizontalLayout->addWidget(SidebarFrame);

        ContentFrame = new QFrame(centralwidget);
        ContentFrame->setObjectName("ContentFrame");
        ContentFrame->setFrameShape(QFrame::Shape::NoFrame);
        contentLayout = new QVBoxLayout(ContentFrame);
        contentLayout->setObjectName("contentLayout");
        stackedWidget = new QStackedWidget(ContentFrame);
        stackedWidget->setObjectName("stackedWidget");
        pageInicio = new QWidget();
        pageInicio->setObjectName("pageInicio");
        inicioLayout = new QVBoxLayout(pageInicio);
        inicioLayout->setObjectName("inicioLayout");
        kpiLayout = new QHBoxLayout();
        kpiLayout->setObjectName("kpiLayout");
        groupPendientes = new QGroupBox(pageInicio);
        groupPendientes->setObjectName("groupPendientes");
        verticalLayout_3 = new QVBoxLayout(groupPendientes);
        verticalLayout_3->setObjectName("verticalLayout_3");
        labelPendientes = new QLabel(groupPendientes);
        labelPendientes->setObjectName("labelPendientes");
        labelPendientes->setMinimumSize(QSize(100, 40));
        labelPendientes->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(labelPendientes);


        kpiLayout->addWidget(groupPendientes);

        groupGananciasHoy = new QGroupBox(pageInicio);
        groupGananciasHoy->setObjectName("groupGananciasHoy");
        verticalLayout_4 = new QVBoxLayout(groupGananciasHoy);
        verticalLayout_4->setObjectName("verticalLayout_4");
        labelGananciasHoy = new QLabel(groupGananciasHoy);
        labelGananciasHoy->setObjectName("labelGananciasHoy");
        labelGananciasHoy->setMinimumSize(QSize(100, 40));
        labelGananciasHoy->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(labelGananciasHoy);


        kpiLayout->addWidget(groupGananciasHoy);

        groupGananciasMes = new QGroupBox(pageInicio);
        groupGananciasMes->setObjectName("groupGananciasMes");
        verticalLayout_5 = new QVBoxLayout(groupGananciasMes);
        verticalLayout_5->setObjectName("verticalLayout_5");
        labelGananciasMes = new QLabel(groupGananciasMes);
        labelGananciasMes->setObjectName("labelGananciasMes");
        labelGananciasMes->setMinimumSize(QSize(100, 40));
        labelGananciasMes->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_5->addWidget(labelGananciasMes);


        kpiLayout->addWidget(groupGananciasMes);


        inicioLayout->addLayout(kpiLayout);

        inicioTopControls = new QHBoxLayout();
        inicioTopControls->setObjectName("inicioTopControls");
        labelPacientesHoyInicio = new QLabel(pageInicio);
        labelPacientesHoyInicio->setObjectName("labelPacientesHoyInicio");

        inicioTopControls->addWidget(labelPacientesHoyInicio);

        spacerInicioTop = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        inicioTopControls->addItem(spacerInicioTop);

        labelOrdenarInicio = new QLabel(pageInicio);
        labelOrdenarInicio->setObjectName("labelOrdenarInicio");

        inicioTopControls->addWidget(labelOrdenarInicio);

        comboOrdenInicio = new QComboBox(pageInicio);
        comboOrdenInicio->addItem(QString());
        comboOrdenInicio->addItem(QString());
        comboOrdenInicio->setObjectName("comboOrdenInicio");

        inicioTopControls->addWidget(comboOrdenInicio);

        labelDiaInicio = new QLabel(pageInicio);
        labelDiaInicio->setObjectName("labelDiaInicio");

        inicioTopControls->addWidget(labelDiaInicio);

        dateEditInicio = new QDateEdit(pageInicio);
        dateEditInicio->setObjectName("dateEditInicio");
        dateEditInicio->setCalendarPopup(true);

        inicioTopControls->addWidget(dateEditInicio);


        inicioLayout->addLayout(inicioTopControls);

        tableInicioTurnos = new QTableWidget(pageInicio);
        tableInicioTurnos->setObjectName("tableInicioTurnos");

        inicioLayout->addWidget(tableInicioTurnos);

        inicioActions = new QHBoxLayout();
        inicioActions->setObjectName("inicioActions");
        spacerInicioActionsLeft = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        inicioActions->addItem(spacerInicioActionsLeft);

        btnVerFichaInicio = new QPushButton(pageInicio);
        btnVerFichaInicio->setObjectName("btnVerFichaInicio");

        inicioActions->addWidget(btnVerFichaInicio);

        btnInicioTurnoInicio = new QPushButton(pageInicio);
        btnInicioTurnoInicio->setObjectName("btnInicioTurnoInicio");

        inicioActions->addWidget(btnInicioTurnoInicio);

        spacerInicioActionsRight = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        inicioActions->addItem(spacerInicioActionsRight);


        inicioLayout->addLayout(inicioActions);

        stackedWidget->addWidget(pageInicio);
        pagePacientes = new QWidget();
        pagePacientes->setObjectName("pagePacientes");
        pacientesLayout = new QVBoxLayout(pagePacientes);
        pacientesLayout->setObjectName("pacientesLayout");
        pacientesSearchLayout = new QHBoxLayout();
        pacientesSearchLayout->setObjectName("pacientesSearchLayout");
        editBuscarPaciente = new QLineEdit(pagePacientes);
        editBuscarPaciente->setObjectName("editBuscarPaciente");

        pacientesSearchLayout->addWidget(editBuscarPaciente);

        btnBuscarPaciente = new QPushButton(pagePacientes);
        btnBuscarPaciente->setObjectName("btnBuscarPaciente");

        pacientesSearchLayout->addWidget(btnBuscarPaciente);


        pacientesLayout->addLayout(pacientesSearchLayout);

        tablePacientes = new QTableWidget(pagePacientes);
        tablePacientes->setObjectName("tablePacientes");

        pacientesLayout->addWidget(tablePacientes);

        pacientesActionsLayout = new QHBoxLayout();
        pacientesActionsLayout->setObjectName("pacientesActionsLayout");
        btnVerFichaPac = new QPushButton(pagePacientes);
        btnVerFichaPac->setObjectName("btnVerFichaPac");

        pacientesActionsLayout->addWidget(btnVerFichaPac);

        btnEditarPaciente = new QPushButton(pagePacientes);
        btnEditarPaciente->setObjectName("btnEditarPaciente");

        pacientesActionsLayout->addWidget(btnEditarPaciente);

        btnEliminarPaciente = new QPushButton(pagePacientes);
        btnEliminarPaciente->setObjectName("btnEliminarPaciente");

        pacientesActionsLayout->addWidget(btnEliminarPaciente);


        pacientesLayout->addLayout(pacientesActionsLayout);

        groupAgregarPaciente = new QGroupBox(pagePacientes);
        groupAgregarPaciente->setObjectName("groupAgregarPaciente");
        gridAgregarPaciente = new QGridLayout(groupAgregarPaciente);
        gridAgregarPaciente->setObjectName("gridAgregarPaciente");
        labelNombre = new QLabel(groupAgregarPaciente);
        labelNombre->setObjectName("labelNombre");

        gridAgregarPaciente->addWidget(labelNombre, 0, 0, 1, 1);

        editNombre = new QLineEdit(groupAgregarPaciente);
        editNombre->setObjectName("editNombre");

        gridAgregarPaciente->addWidget(editNombre, 0, 1, 1, 1);

        labelDomicilio = new QLabel(groupAgregarPaciente);
        labelDomicilio->setObjectName("labelDomicilio");

        gridAgregarPaciente->addWidget(labelDomicilio, 0, 2, 1, 1);

        editDomicilio = new QLineEdit(groupAgregarPaciente);
        editDomicilio->setObjectName("editDomicilio");

        gridAgregarPaciente->addWidget(editDomicilio, 0, 3, 1, 1);

        labelObraSocial = new QLabel(groupAgregarPaciente);
        labelObraSocial->setObjectName("labelObraSocial");

        gridAgregarPaciente->addWidget(labelObraSocial, 0, 4, 1, 1);

        editObraSocial = new QLineEdit(groupAgregarPaciente);
        editObraSocial->setObjectName("editObraSocial");

        gridAgregarPaciente->addWidget(editObraSocial, 0, 5, 1, 1);

        labelApellido = new QLabel(groupAgregarPaciente);
        labelApellido->setObjectName("labelApellido");

        gridAgregarPaciente->addWidget(labelApellido, 1, 0, 1, 1);

        editApellido = new QLineEdit(groupAgregarPaciente);
        editApellido->setObjectName("editApellido");

        gridAgregarPaciente->addWidget(editApellido, 1, 1, 1, 1);

        labelOcupacion = new QLabel(groupAgregarPaciente);
        labelOcupacion->setObjectName("labelOcupacion");

        gridAgregarPaciente->addWidget(labelOcupacion, 1, 2, 1, 1);

        editOcupacion = new QLineEdit(groupAgregarPaciente);
        editOcupacion->setObjectName("editOcupacion");

        gridAgregarPaciente->addWidget(editOcupacion, 1, 3, 1, 1);

        labelDni = new QLabel(groupAgregarPaciente);
        labelDni->setObjectName("labelDni");

        gridAgregarPaciente->addWidget(labelDni, 2, 0, 1, 1);

        editDni = new QLineEdit(groupAgregarPaciente);
        editDni->setObjectName("editDni");

        gridAgregarPaciente->addWidget(editDni, 2, 1, 1, 1);

        labelEdad = new QLabel(groupAgregarPaciente);
        labelEdad->setObjectName("labelEdad");

        gridAgregarPaciente->addWidget(labelEdad, 2, 2, 1, 1);

        editEdad = new QLineEdit(groupAgregarPaciente);
        editEdad->setObjectName("editEdad");

        gridAgregarPaciente->addWidget(editEdad, 2, 3, 1, 1);

        labelTelefono = new QLabel(groupAgregarPaciente);
        labelTelefono->setObjectName("labelTelefono");

        gridAgregarPaciente->addWidget(labelTelefono, 3, 0, 1, 1);

        editTelefono = new QLineEdit(groupAgregarPaciente);
        editTelefono->setObjectName("editTelefono");

        gridAgregarPaciente->addWidget(editTelefono, 3, 1, 1, 1);

        labelNacimiento = new QLabel(groupAgregarPaciente);
        labelNacimiento->setObjectName("labelNacimiento");

        gridAgregarPaciente->addWidget(labelNacimiento, 3, 2, 1, 1);

        editNacimiento = new QLineEdit(groupAgregarPaciente);
        editNacimiento->setObjectName("editNacimiento");

        gridAgregarPaciente->addWidget(editNacimiento, 3, 3, 1, 1);

        btnAgregarPaciente = new QPushButton(groupAgregarPaciente);
        btnAgregarPaciente->setObjectName("btnAgregarPaciente");

        gridAgregarPaciente->addWidget(btnAgregarPaciente, 4, 0, 1, 6);


        pacientesLayout->addWidget(groupAgregarPaciente);

        stackedWidget->addWidget(pagePacientes);
        pageFichas = new QWidget();
        pageFichas->setObjectName("pageFichas");
        fichasLayout = new QVBoxLayout(pageFichas);
        fichasLayout->setObjectName("fichasLayout");
        fichasTopSearch = new QHBoxLayout();
        fichasTopSearch->setObjectName("fichasTopSearch");
        fichasLeftSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        fichasTopSearch->addItem(fichasLeftSpacer);

        labelBuscarPacientePor = new QLabel(pageFichas);
        labelBuscarPacientePor->setObjectName("labelBuscarPacientePor");

        fichasTopSearch->addWidget(labelBuscarPacientePor);

        comboBuscarFichas = new QComboBox(pageFichas);
        comboBuscarFichas->addItem(QString());
        comboBuscarFichas->setObjectName("comboBuscarFichas");

        fichasTopSearch->addWidget(comboBuscarFichas);

        editBuscarFichas = new QLineEdit(pageFichas);
        editBuscarFichas->setObjectName("editBuscarFichas");

        fichasTopSearch->addWidget(editBuscarFichas);

        btnBuscarFichas = new QPushButton(pageFichas);
        btnBuscarFichas->setObjectName("btnBuscarFichas");

        fichasTopSearch->addWidget(btnBuscarFichas);


        fichasLayout->addLayout(fichasTopSearch);

        fichasDatosPaciente = new QGridLayout();
        fichasDatosPaciente->setObjectName("fichasDatosPaciente");
        lblDatosPacienteTitulo = new QLabel(pageFichas);
        lblDatosPacienteTitulo->setObjectName("lblDatosPacienteTitulo");

        fichasDatosPaciente->addWidget(lblDatosPacienteTitulo, 0, 0, 1, 1);

        lblNombre = new QLabel(pageFichas);
        lblNombre->setObjectName("lblNombre");

        fichasDatosPaciente->addWidget(lblNombre, 1, 0, 1, 1);

        lblDomicilio = new QLabel(pageFichas);
        lblDomicilio->setObjectName("lblDomicilio");

        fichasDatosPaciente->addWidget(lblDomicilio, 1, 1, 1, 1);

        lblApellido = new QLabel(pageFichas);
        lblApellido->setObjectName("lblApellido");

        fichasDatosPaciente->addWidget(lblApellido, 2, 0, 1, 1);

        lblOcupacion = new QLabel(pageFichas);
        lblOcupacion->setObjectName("lblOcupacion");

        fichasDatosPaciente->addWidget(lblOcupacion, 2, 1, 1, 1);

        lblDni = new QLabel(pageFichas);
        lblDni->setObjectName("lblDni");

        fichasDatosPaciente->addWidget(lblDni, 3, 0, 1, 1);

        lblEdad = new QLabel(pageFichas);
        lblEdad->setObjectName("lblEdad");

        fichasDatosPaciente->addWidget(lblEdad, 3, 1, 1, 1);

        lblTelefono = new QLabel(pageFichas);
        lblTelefono->setObjectName("lblTelefono");

        fichasDatosPaciente->addWidget(lblTelefono, 4, 0, 1, 1);

        lblNacimiento = new QLabel(pageFichas);
        lblNacimiento->setObjectName("lblNacimiento");

        fichasDatosPaciente->addWidget(lblNacimiento, 4, 1, 1, 1);

        lblObraSocial = new QLabel(pageFichas);
        lblObraSocial->setObjectName("lblObraSocial");

        fichasDatosPaciente->addWidget(lblObraSocial, 5, 0, 1, 1);


        fichasLayout->addLayout(fichasDatosPaciente);

        labelFichaMedicaTitulo = new QLabel(pageFichas);
        labelFichaMedicaTitulo->setObjectName("labelFichaMedicaTitulo");

        fichasLayout->addWidget(labelFichaMedicaTitulo);

        tableFichaMedica = new QTableWidget(pageFichas);
        tableFichaMedica->setObjectName("tableFichaMedica");

        fichasLayout->addWidget(tableFichaMedica);

        fichasButtons = new QHBoxLayout();
        fichasButtons->setObjectName("fichasButtons");
        btnAgregarPrestacion = new QPushButton(pageFichas);
        btnAgregarPrestacion->setObjectName("btnAgregarPrestacion");

        fichasButtons->addWidget(btnAgregarPrestacion);

        btnEditarFicha = new QPushButton(pageFichas);
        btnEditarFicha->setObjectName("btnEditarFicha");

        fichasButtons->addWidget(btnEditarFicha);

        btnVerTicket = new QPushButton(pageFichas);
        btnVerTicket->setObjectName("btnVerTicket");

        fichasButtons->addWidget(btnVerTicket);

        btnVerHistorialPagos = new QPushButton(pageFichas);
        btnVerHistorialPagos->setObjectName("btnVerHistorialPagos");

        fichasButtons->addWidget(btnVerHistorialPagos);


        fichasLayout->addLayout(fichasButtons);

        labelAdjuntosTitulo = new QLabel(pageFichas);
        labelAdjuntosTitulo->setObjectName("labelAdjuntosTitulo");

        fichasLayout->addWidget(labelAdjuntosTitulo);

        tableAdjuntos = new QTableWidget(pageFichas);
        tableAdjuntos->setObjectName("tableAdjuntos");

        fichasLayout->addWidget(tableAdjuntos);

        adjuntosButtons = new QHBoxLayout();
        adjuntosButtons->setObjectName("adjuntosButtons");
        adjSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        adjuntosButtons->addItem(adjSpacer);

        btnVerArchivo = new QPushButton(pageFichas);
        btnVerArchivo->setObjectName("btnVerArchivo");

        adjuntosButtons->addWidget(btnVerArchivo);


        fichasLayout->addLayout(adjuntosButtons);

        stackedWidget->addWidget(pageFichas);
        pageTurnos = new QWidget();
        pageTurnos->setObjectName("pageTurnos");
        turnosLayout = new QVBoxLayout(pageTurnos);
        turnosLayout->setObjectName("turnosLayout");
        turnosTopControls = new QHBoxLayout();
        turnosTopControls->setObjectName("turnosTopControls");
        labelPacientesHoyTurnos = new QLabel(pageTurnos);
        labelPacientesHoyTurnos->setObjectName("labelPacientesHoyTurnos");

        turnosTopControls->addWidget(labelPacientesHoyTurnos);

        spacerTurnosTop = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        turnosTopControls->addItem(spacerTurnosTop);

        labelOrdenarTurnos = new QLabel(pageTurnos);
        labelOrdenarTurnos->setObjectName("labelOrdenarTurnos");

        turnosTopControls->addWidget(labelOrdenarTurnos);

        comboOrdenTurnos = new QComboBox(pageTurnos);
        comboOrdenTurnos->addItem(QString());
        comboOrdenTurnos->addItem(QString());
        comboOrdenTurnos->addItem(QString());
        comboOrdenTurnos->setObjectName("comboOrdenTurnos");

        turnosTopControls->addWidget(comboOrdenTurnos);

        labelDiaTurnos = new QLabel(pageTurnos);
        labelDiaTurnos->setObjectName("labelDiaTurnos");

        turnosTopControls->addWidget(labelDiaTurnos);

        dateEditTurnos = new QDateEdit(pageTurnos);
        dateEditTurnos->setObjectName("dateEditTurnos");
        dateEditTurnos->setCalendarPopup(true);

        turnosTopControls->addWidget(dateEditTurnos);


        turnosLayout->addLayout(turnosTopControls);

        tableTurnos = new QTableWidget(pageTurnos);
        tableTurnos->setObjectName("tableTurnos");

        turnosLayout->addWidget(tableTurnos);

        turnosActions = new QHBoxLayout();
        turnosActions->setObjectName("turnosActions");
        btnVerFichaTurno = new QPushButton(pageTurnos);
        btnVerFichaTurno->setObjectName("btnVerFichaTurno");

        turnosActions->addWidget(btnVerFichaTurno);

        btnReprogramarTurno = new QPushButton(pageTurnos);
        btnReprogramarTurno->setObjectName("btnReprogramarTurno");

        turnosActions->addWidget(btnReprogramarTurno);

        btnCancelarTurno = new QPushButton(pageTurnos);
        btnCancelarTurno->setObjectName("btnCancelarTurno");

        turnosActions->addWidget(btnCancelarTurno);

        btnEnviarConfirmacion = new QPushButton(pageTurnos);
        btnEnviarConfirmacion->setObjectName("btnEnviarConfirmacion");

        turnosActions->addWidget(btnEnviarConfirmacion);


        turnosLayout->addLayout(turnosActions);

        groupNuevoTurno = new QGroupBox(pageTurnos);
        groupNuevoTurno->setObjectName("groupNuevoTurno");
        nuevoTurnoLayout = new QHBoxLayout(groupNuevoTurno);
        nuevoTurnoLayout->setObjectName("nuevoTurnoLayout");
        groupBuscarPacienteTurno = new QGroupBox(groupNuevoTurno);
        groupBuscarPacienteTurno->setObjectName("groupBuscarPacienteTurno");
        gridBuscarTurno = new QGridLayout(groupBuscarPacienteTurno);
        gridBuscarTurno->setObjectName("gridBuscarTurno");
        comboBuscarPorTurno = new QComboBox(groupBuscarPacienteTurno);
        comboBuscarPorTurno->addItem(QString());
        comboBuscarPorTurno->setObjectName("comboBuscarPorTurno");

        gridBuscarTurno->addWidget(comboBuscarPorTurno, 0, 0, 1, 1);

        editBuscarTurno = new QLineEdit(groupBuscarPacienteTurno);
        editBuscarTurno->setObjectName("editBuscarTurno");

        gridBuscarTurno->addWidget(editBuscarTurno, 0, 1, 1, 1);

        btnBuscarTurno = new QPushButton(groupBuscarPacienteTurno);
        btnBuscarTurno->setObjectName("btnBuscarTurno");

        gridBuscarTurno->addWidget(btnBuscarTurno, 0, 2, 1, 1);


        nuevoTurnoLayout->addWidget(groupBuscarPacienteTurno);

        groupDatosPacienteTurno = new QGroupBox(groupNuevoTurno);
        groupDatosPacienteTurno->setObjectName("groupDatosPacienteTurno");
        formDatosPacienteTurno = new QFormLayout(groupDatosPacienteTurno);
        formDatosPacienteTurno->setObjectName("formDatosPacienteTurno");
        lblDPNombre = new QLabel(groupDatosPacienteTurno);
        lblDPNombre->setObjectName("lblDPNombre");

        formDatosPacienteTurno->setWidget(0, QFormLayout::ItemRole::LabelRole, lblDPNombre);

        valDPNombre = new QLabel(groupDatosPacienteTurno);
        valDPNombre->setObjectName("valDPNombre");

        formDatosPacienteTurno->setWidget(0, QFormLayout::ItemRole::FieldRole, valDPNombre);

        lblDPApellido = new QLabel(groupDatosPacienteTurno);
        lblDPApellido->setObjectName("lblDPApellido");

        formDatosPacienteTurno->setWidget(1, QFormLayout::ItemRole::LabelRole, lblDPApellido);

        valDPApellido = new QLabel(groupDatosPacienteTurno);
        valDPApellido->setObjectName("valDPApellido");

        formDatosPacienteTurno->setWidget(1, QFormLayout::ItemRole::FieldRole, valDPApellido);

        lblDPDni = new QLabel(groupDatosPacienteTurno);
        lblDPDni->setObjectName("lblDPDni");

        formDatosPacienteTurno->setWidget(2, QFormLayout::ItemRole::LabelRole, lblDPDni);

        valDPDni = new QLabel(groupDatosPacienteTurno);
        valDPDni->setObjectName("valDPDni");

        formDatosPacienteTurno->setWidget(2, QFormLayout::ItemRole::FieldRole, valDPDni);

        lblDPTel = new QLabel(groupDatosPacienteTurno);
        lblDPTel->setObjectName("lblDPTel");

        formDatosPacienteTurno->setWidget(3, QFormLayout::ItemRole::LabelRole, lblDPTel);

        valDPTel = new QLabel(groupDatosPacienteTurno);
        valDPTel->setObjectName("valDPTel");

        formDatosPacienteTurno->setWidget(3, QFormLayout::ItemRole::FieldRole, valDPTel);

        lblDPDomicilio = new QLabel(groupDatosPacienteTurno);
        lblDPDomicilio->setObjectName("lblDPDomicilio");

        formDatosPacienteTurno->setWidget(4, QFormLayout::ItemRole::LabelRole, lblDPDomicilio);

        valDPDomicilio = new QLabel(groupDatosPacienteTurno);
        valDPDomicilio->setObjectName("valDPDomicilio");

        formDatosPacienteTurno->setWidget(4, QFormLayout::ItemRole::FieldRole, valDPDomicilio);

        lblDPEdad = new QLabel(groupDatosPacienteTurno);
        lblDPEdad->setObjectName("lblDPEdad");

        formDatosPacienteTurno->setWidget(5, QFormLayout::ItemRole::LabelRole, lblDPEdad);

        valDPEdad = new QLabel(groupDatosPacienteTurno);
        valDPEdad->setObjectName("valDPEdad");

        formDatosPacienteTurno->setWidget(5, QFormLayout::ItemRole::FieldRole, valDPEdad);

        lblDPNacimiento = new QLabel(groupDatosPacienteTurno);
        lblDPNacimiento->setObjectName("lblDPNacimiento");

        formDatosPacienteTurno->setWidget(6, QFormLayout::ItemRole::LabelRole, lblDPNacimiento);

        valDPNacimiento = new QLabel(groupDatosPacienteTurno);
        valDPNacimiento->setObjectName("valDPNacimiento");

        formDatosPacienteTurno->setWidget(6, QFormLayout::ItemRole::FieldRole, valDPNacimiento);

        lblDPObra = new QLabel(groupDatosPacienteTurno);
        lblDPObra->setObjectName("lblDPObra");

        formDatosPacienteTurno->setWidget(7, QFormLayout::ItemRole::LabelRole, lblDPObra);

        valDPObra = new QLabel(groupDatosPacienteTurno);
        valDPObra->setObjectName("valDPObra");

        formDatosPacienteTurno->setWidget(7, QFormLayout::ItemRole::FieldRole, valDPObra);


        nuevoTurnoLayout->addWidget(groupDatosPacienteTurno);

        groupGenerarTurnoNuevo = new QGroupBox(groupNuevoTurno);
        groupGenerarTurnoNuevo->setObjectName("groupGenerarTurnoNuevo");
        gridGenerarTurnoNuevo = new QGridLayout(groupGenerarTurnoNuevo);
        gridGenerarTurnoNuevo->setObjectName("gridGenerarTurnoNuevo");
        labelFechaTurno = new QLabel(groupGenerarTurnoNuevo);
        labelFechaTurno->setObjectName("labelFechaTurno");

        gridGenerarTurnoNuevo->addWidget(labelFechaTurno, 0, 0, 1, 1);

        dateTurno = new QDateEdit(groupGenerarTurnoNuevo);
        dateTurno->setObjectName("dateTurno");

        gridGenerarTurnoNuevo->addWidget(dateTurno, 0, 1, 1, 1);

        labelHoraTurno = new QLabel(groupGenerarTurnoNuevo);
        labelHoraTurno->setObjectName("labelHoraTurno");

        gridGenerarTurnoNuevo->addWidget(labelHoraTurno, 1, 0, 1, 1);

        timeTurno = new QTimeEdit(groupGenerarTurnoNuevo);
        timeTurno->setObjectName("timeTurno");

        gridGenerarTurnoNuevo->addWidget(timeTurno, 1, 1, 1, 1);

        labelTratTurno = new QLabel(groupGenerarTurnoNuevo);
        labelTratTurno->setObjectName("labelTratTurno");

        gridGenerarTurnoNuevo->addWidget(labelTratTurno, 2, 0, 1, 1);

        editTratTurno = new QLineEdit(groupGenerarTurnoNuevo);
        editTratTurno->setObjectName("editTratTurno");

        gridGenerarTurnoNuevo->addWidget(editTratTurno, 2, 1, 1, 1);

        btnCrearTurno = new QPushButton(groupGenerarTurnoNuevo);
        btnCrearTurno->setObjectName("btnCrearTurno");

        gridGenerarTurnoNuevo->addWidget(btnCrearTurno, 3, 0, 1, 2);


        nuevoTurnoLayout->addWidget(groupGenerarTurnoNuevo);


        turnosLayout->addWidget(groupNuevoTurno);

        stackedWidget->addWidget(pageTurnos);
        pagePagos = new QWidget();
        pagePagos->setObjectName("pagePagos");
        pagosLayout = new QVBoxLayout(pagePagos);
        pagosLayout->setObjectName("pagosLayout");
        historialTopControls = new QHBoxLayout();
        historialTopControls->setObjectName("historialTopControls");
        labelHistorialTitulo = new QLabel(pagePagos);
        labelHistorialTitulo->setObjectName("labelHistorialTitulo");

        historialTopControls->addWidget(labelHistorialTitulo);

        spacerHistorialLeft = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        historialTopControls->addItem(spacerHistorialLeft);

        labelOrdenarHistorial = new QLabel(pagePagos);
        labelOrdenarHistorial->setObjectName("labelOrdenarHistorial");

        historialTopControls->addWidget(labelOrdenarHistorial);

        comboOrdenHistorial = new QComboBox(pagePagos);
        comboOrdenHistorial->addItem(QString());
        comboOrdenHistorial->setObjectName("comboOrdenHistorial");

        historialTopControls->addWidget(comboOrdenHistorial);

        spacerHistorialMid = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        historialTopControls->addItem(spacerHistorialMid);

        labelBuscarPorHistorial = new QLabel(pagePagos);
        labelBuscarPorHistorial->setObjectName("labelBuscarPorHistorial");

        historialTopControls->addWidget(labelBuscarPorHistorial);

        comboBuscarHistorial = new QComboBox(pagePagos);
        comboBuscarHistorial->addItem(QString());
        comboBuscarHistorial->setObjectName("comboBuscarHistorial");

        historialTopControls->addWidget(comboBuscarHistorial);

        editBuscarHistorial = new QLineEdit(pagePagos);
        editBuscarHistorial->setObjectName("editBuscarHistorial");

        historialTopControls->addWidget(editBuscarHistorial);

        btnBuscarHistorial = new QPushButton(pagePagos);
        btnBuscarHistorial->setObjectName("btnBuscarHistorial");

        historialTopControls->addWidget(btnBuscarHistorial);


        pagosLayout->addLayout(historialTopControls);

        tableHistorialPagos = new QTableWidget(pagePagos);
        tableHistorialPagos->setObjectName("tableHistorialPagos");

        pagosLayout->addWidget(tableHistorialPagos);

        historialActions = new QHBoxLayout();
        historialActions->setObjectName("historialActions");
        spacerHistorialActions = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        historialActions->addItem(spacerHistorialActions);

        btnActualizarPago = new QPushButton(pagePagos);
        btnActualizarPago->setObjectName("btnActualizarPago");

        historialActions->addWidget(btnActualizarPago);


        pagosLayout->addLayout(historialActions);

        pendientesTopControls = new QHBoxLayout();
        pendientesTopControls->setObjectName("pendientesTopControls");
        labelPagosPendientes = new QLabel(pagePagos);
        labelPagosPendientes->setObjectName("labelPagosPendientes");

        pendientesTopControls->addWidget(labelPagosPendientes);

        spacerPendLeft = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        pendientesTopControls->addItem(spacerPendLeft);

        labelOrdenarPend = new QLabel(pagePagos);
        labelOrdenarPend->setObjectName("labelOrdenarPend");

        pendientesTopControls->addWidget(labelOrdenarPend);

        comboOrdenPend = new QComboBox(pagePagos);
        comboOrdenPend->addItem(QString());
        comboOrdenPend->setObjectName("comboOrdenPend");

        pendientesTopControls->addWidget(comboOrdenPend);

        spacerPendMid = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        pendientesTopControls->addItem(spacerPendMid);

        labelBuscarPorPend = new QLabel(pagePagos);
        labelBuscarPorPend->setObjectName("labelBuscarPorPend");

        pendientesTopControls->addWidget(labelBuscarPorPend);

        comboBuscarPend = new QComboBox(pagePagos);
        comboBuscarPend->addItem(QString());
        comboBuscarPend->setObjectName("comboBuscarPend");

        pendientesTopControls->addWidget(comboBuscarPend);

        editBuscarPend = new QLineEdit(pagePagos);
        editBuscarPend->setObjectName("editBuscarPend");

        pendientesTopControls->addWidget(editBuscarPend);

        btnBuscarPend = new QPushButton(pagePagos);
        btnBuscarPend->setObjectName("btnBuscarPend");

        pendientesTopControls->addWidget(btnBuscarPend);


        pagosLayout->addLayout(pendientesTopControls);

        tablePagosPendientes = new QTableWidget(pagePagos);
        tablePagosPendientes->setObjectName("tablePagosPendientes");

        pagosLayout->addWidget(tablePagosPendientes);

        pendientesActions = new QHBoxLayout();
        pendientesActions->setObjectName("pendientesActions");
        spacerPendActionsLeft = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        pendientesActions->addItem(spacerPendActionsLeft);

        btnCobrarAhora = new QPushButton(pagePagos);
        btnCobrarAhora->setObjectName("btnCobrarAhora");

        pendientesActions->addWidget(btnCobrarAhora);

        btnRegistrarPagoParcial = new QPushButton(pagePagos);
        btnRegistrarPagoParcial->setObjectName("btnRegistrarPagoParcial");

        pendientesActions->addWidget(btnRegistrarPagoParcial);

        spacerPendActionsRight = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        pendientesActions->addItem(spacerPendActionsRight);


        pagosLayout->addLayout(pendientesActions);

        pagosBottomLayout = new QHBoxLayout();
        pagosBottomLayout->setObjectName("pagosBottomLayout");
        groupGenerarPago = new QGroupBox(pagePagos);
        groupGenerarPago->setObjectName("groupGenerarPago");
        gridGenerarPago = new QHBoxLayout(groupGenerarPago);
        gridGenerarPago->setObjectName("gridGenerarPago");
        groupDatosPacientePago = new QGroupBox(groupGenerarPago);
        groupDatosPacientePago->setObjectName("groupDatosPacientePago");
        formDatosPacientePago = new QFormLayout(groupDatosPacientePago);
        formDatosPacientePago->setObjectName("formDatosPacientePago");
        lblPPNombre = new QLabel(groupDatosPacientePago);
        lblPPNombre->setObjectName("lblPPNombre");

        formDatosPacientePago->setWidget(0, QFormLayout::ItemRole::LabelRole, lblPPNombre);

        lblPPApellido = new QLabel(groupDatosPacientePago);
        lblPPApellido->setObjectName("lblPPApellido");

        formDatosPacientePago->setWidget(1, QFormLayout::ItemRole::LabelRole, lblPPApellido);

        lblPPDni = new QLabel(groupDatosPacientePago);
        lblPPDni->setObjectName("lblPPDni");

        formDatosPacientePago->setWidget(2, QFormLayout::ItemRole::LabelRole, lblPPDni);

        lblPPTel = new QLabel(groupDatosPacientePago);
        lblPPTel->setObjectName("lblPPTel");

        formDatosPacientePago->setWidget(3, QFormLayout::ItemRole::LabelRole, lblPPTel);

        lblPPDom = new QLabel(groupDatosPacientePago);
        lblPPDom->setObjectName("lblPPDom");

        formDatosPacientePago->setWidget(4, QFormLayout::ItemRole::LabelRole, lblPPDom);

        lblPPOcup = new QLabel(groupDatosPacientePago);
        lblPPOcup->setObjectName("lblPPOcup");

        formDatosPacientePago->setWidget(5, QFormLayout::ItemRole::LabelRole, lblPPOcup);

        lblPPEdad = new QLabel(groupDatosPacientePago);
        lblPPEdad->setObjectName("lblPPEdad");

        formDatosPacientePago->setWidget(6, QFormLayout::ItemRole::LabelRole, lblPPEdad);

        lblPPNac = new QLabel(groupDatosPacientePago);
        lblPPNac->setObjectName("lblPPNac");

        formDatosPacientePago->setWidget(7, QFormLayout::ItemRole::LabelRole, lblPPNac);

        lblPPObra = new QLabel(groupDatosPacientePago);
        lblPPObra->setObjectName("lblPPObra");

        formDatosPacientePago->setWidget(8, QFormLayout::ItemRole::LabelRole, lblPPObra);


        gridGenerarPago->addWidget(groupDatosPacientePago);

        groupCostoCuotas = new QGroupBox(groupGenerarPago);
        groupCostoCuotas->setObjectName("groupCostoCuotas");
        gridCostoCuotas = new QGridLayout(groupCostoCuotas);
        gridCostoCuotas->setObjectName("gridCostoCuotas");
        labelCostoTotal = new QLabel(groupCostoCuotas);
        labelCostoTotal->setObjectName("labelCostoTotal");

        gridCostoCuotas->addWidget(labelCostoTotal, 0, 0, 1, 1);

        editCostoTotal = new QLineEdit(groupCostoCuotas);
        editCostoTotal->setObjectName("editCostoTotal");

        gridCostoCuotas->addWidget(editCostoTotal, 0, 1, 1, 1);

        labelGenerarCuotas = new QLabel(groupCostoCuotas);
        labelGenerarCuotas->setObjectName("labelGenerarCuotas");

        gridCostoCuotas->addWidget(labelGenerarCuotas, 1, 0, 1, 1);

        labelCantidadCuotas = new QLabel(groupCostoCuotas);
        labelCantidadCuotas->setObjectName("labelCantidadCuotas");

        gridCostoCuotas->addWidget(labelCantidadCuotas, 2, 0, 1, 1);

        comboCantidadCuotas = new QComboBox(groupCostoCuotas);
        comboCantidadCuotas->addItem(QString());
        comboCantidadCuotas->addItem(QString());
        comboCantidadCuotas->addItem(QString());
        comboCantidadCuotas->setObjectName("comboCantidadCuotas");

        gridCostoCuotas->addWidget(comboCantidadCuotas, 2, 1, 1, 1);

        labelMonto1Pago = new QLabel(groupCostoCuotas);
        labelMonto1Pago->setObjectName("labelMonto1Pago");

        gridCostoCuotas->addWidget(labelMonto1Pago, 3, 0, 1, 1);

        editMontoCuota1 = new QLineEdit(groupCostoCuotas);
        editMontoCuota1->setObjectName("editMontoCuota1");

        gridCostoCuotas->addWidget(editMontoCuota1, 3, 1, 1, 1);

        labelMonto2Pago = new QLabel(groupCostoCuotas);
        labelMonto2Pago->setObjectName("labelMonto2Pago");

        gridCostoCuotas->addWidget(labelMonto2Pago, 4, 0, 1, 1);

        editMontoCuota2 = new QLineEdit(groupCostoCuotas);
        editMontoCuota2->setObjectName("editMontoCuota2");

        gridCostoCuotas->addWidget(editMontoCuota2, 4, 1, 1, 1);

        labelMonto3Pago = new QLabel(groupCostoCuotas);
        labelMonto3Pago->setObjectName("labelMonto3Pago");

        gridCostoCuotas->addWidget(labelMonto3Pago, 5, 0, 1, 1);

        editMontoCuota3 = new QLineEdit(groupCostoCuotas);
        editMontoCuota3->setObjectName("editMontoCuota3");

        gridCostoCuotas->addWidget(editMontoCuota3, 5, 1, 1, 1);

        btnGenerarTicket = new QPushButton(groupCostoCuotas);
        btnGenerarTicket->setObjectName("btnGenerarTicket");

        gridCostoCuotas->addWidget(btnGenerarTicket, 6, 0, 1, 2);


        gridGenerarPago->addWidget(groupCostoCuotas);


        pagosBottomLayout->addWidget(groupGenerarPago);

        groupCobrarTicket = new QGroupBox(pagePagos);
        groupCobrarTicket->setObjectName("groupCobrarTicket");
        gridCobrarTicket = new QHBoxLayout(groupCobrarTicket);
        gridCobrarTicket->setObjectName("gridCobrarTicket");
        groupDatosCobro = new QGroupBox(groupCobrarTicket);
        groupDatosCobro->setObjectName("groupDatosCobro");
        formDatosCobro = new QFormLayout(groupDatosCobro);
        formDatosCobro->setObjectName("formDatosCobro");
        lblCPNombre = new QLabel(groupDatosCobro);
        lblCPNombre->setObjectName("lblCPNombre");

        formDatosCobro->setWidget(0, QFormLayout::ItemRole::LabelRole, lblCPNombre);

        lblCPApellido = new QLabel(groupDatosCobro);
        lblCPApellido->setObjectName("lblCPApellido");

        formDatosCobro->setWidget(1, QFormLayout::ItemRole::LabelRole, lblCPApellido);

        lblCPDni = new QLabel(groupDatosCobro);
        lblCPDni->setObjectName("lblCPDni");

        formDatosCobro->setWidget(2, QFormLayout::ItemRole::LabelRole, lblCPDni);

        lblCPTel = new QLabel(groupDatosCobro);
        lblCPTel->setObjectName("lblCPTel");

        formDatosCobro->setWidget(3, QFormLayout::ItemRole::LabelRole, lblCPTel);

        lblCPDom = new QLabel(groupDatosCobro);
        lblCPDom->setObjectName("lblCPDom");

        formDatosCobro->setWidget(4, QFormLayout::ItemRole::LabelRole, lblCPDom);

        lblCPOcup = new QLabel(groupDatosCobro);
        lblCPOcup->setObjectName("lblCPOcup");

        formDatosCobro->setWidget(5, QFormLayout::ItemRole::LabelRole, lblCPOcup);

        lblCPEdad = new QLabel(groupDatosCobro);
        lblCPEdad->setObjectName("lblCPEdad");

        formDatosCobro->setWidget(6, QFormLayout::ItemRole::LabelRole, lblCPEdad);

        lblCPNac = new QLabel(groupDatosCobro);
        lblCPNac->setObjectName("lblCPNac");

        formDatosCobro->setWidget(7, QFormLayout::ItemRole::LabelRole, lblCPNac);

        lblCPObra = new QLabel(groupDatosCobro);
        lblCPObra->setObjectName("lblCPObra");

        formDatosCobro->setWidget(8, QFormLayout::ItemRole::LabelRole, lblCPObra);


        gridCobrarTicket->addWidget(groupDatosCobro);

        groupCobro = new QGroupBox(groupCobrarTicket);
        groupCobro->setObjectName("groupCobro");
        gridCobro = new QGridLayout(groupCobro);
        gridCobro->setObjectName("gridCobro");
        labelCostoTotalCobro = new QLabel(groupCobro);
        labelCostoTotalCobro->setObjectName("labelCostoTotalCobro");

        gridCobro->addWidget(labelCostoTotalCobro, 0, 0, 1, 1);

        editCostoTotalCobro = new QLineEdit(groupCobro);
        editCostoTotalCobro->setObjectName("editCostoTotalCobro");

        gridCobro->addWidget(editCostoTotalCobro, 0, 1, 1, 1);

        labelPago = new QLabel(groupCobro);
        labelPago->setObjectName("labelPago");

        gridCobro->addWidget(labelPago, 1, 0, 1, 1);

        editPago = new QLineEdit(groupCobro);
        editPago->setObjectName("editPago");

        gridCobro->addWidget(editPago, 1, 1, 1, 1);

        labelFormaDePago = new QLabel(groupCobro);
        labelFormaDePago->setObjectName("labelFormaDePago");

        gridCobro->addWidget(labelFormaDePago, 2, 0, 1, 1);

        editFormaDePago = new QLineEdit(groupCobro);
        editFormaDePago->setObjectName("editFormaDePago");

        gridCobro->addWidget(editFormaDePago, 2, 1, 1, 1);

        btnCobrar = new QPushButton(groupCobro);
        btnCobrar->setObjectName("btnCobrar");

        gridCobro->addWidget(btnCobrar, 3, 0, 1, 2);


        gridCobrarTicket->addWidget(groupCobro);


        pagosBottomLayout->addWidget(groupCobrarTicket);


        pagosLayout->addLayout(pagosBottomLayout);

        stackedWidget->addWidget(pagePagos);

        contentLayout->addWidget(stackedWidget);


        horizontalLayout->addWidget(ContentFrame);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1062, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelOpciones->setText(QCoreApplication::translate("MainWindow", "Opciones", nullptr));
        btnInicio->setText(QCoreApplication::translate("MainWindow", "INICIO", nullptr));
        btnPacientes->setText(QCoreApplication::translate("MainWindow", "PACIENTES", nullptr));
        btnFichas->setText(QCoreApplication::translate("MainWindow", "FICHAS", nullptr));
        btnTurnos->setText(QCoreApplication::translate("MainWindow", "TURNOS", nullptr));
        btnPagos->setText(QCoreApplication::translate("MainWindow", "PAGOS", nullptr));
        groupPacienteConsultorio->setTitle(QCoreApplication::translate("MainWindow", "Paciente en consultorio", nullptr));
        labelDatosPacienteTitulo->setText(QCoreApplication::translate("MainWindow", "DATOS DEL PACIENTE", nullptr));
        labelPacienteNombre->setText(QCoreApplication::translate("MainWindow", "NOMBRE: GUSTAVO", nullptr));
        labelPacienteApellido->setText(QCoreApplication::translate("MainWindow", "APELLIDO: COSTAS", nullptr));
        labelPacienteDni->setText(QCoreApplication::translate("MainWindow", "DNI: 20202022", nullptr));
        labelPacienteEdad->setText(QCoreApplication::translate("MainWindow", "EDAD", nullptr));
        labelPacienteObraSocial->setText(QCoreApplication::translate("MainWindow", "OBRA SOCIAL", nullptr));
        btnFinalizarTurno->setText(QCoreApplication::translate("MainWindow", "FINALIZAR TURNO", nullptr));
        groupPendientes->setTitle(QCoreApplication::translate("MainWindow", "Turnos pendientes hoy", nullptr));
        labelPendientes->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        groupGananciasHoy->setTitle(QCoreApplication::translate("MainWindow", "Ganancias hoy", nullptr));
        labelGananciasHoy->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        groupGananciasMes->setTitle(QCoreApplication::translate("MainWindow", "Ganancias mes", nullptr));
        labelGananciasMes->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelPacientesHoyInicio->setText(QCoreApplication::translate("MainWindow", "Pacientes de hoy (turnos)", nullptr));
        labelOrdenarInicio->setText(QCoreApplication::translate("MainWindow", "Ordenar por", nullptr));
        comboOrdenInicio->setItemText(0, QCoreApplication::translate("MainWindow", "HORA", nullptr));
        comboOrdenInicio->setItemText(1, QCoreApplication::translate("MainWindow", "NOMBRE", nullptr));

        labelDiaInicio->setText(QCoreApplication::translate("MainWindow", "D\303\255a:", nullptr));
        btnVerFichaInicio->setText(QCoreApplication::translate("MainWindow", "Ver ficha m\303\251dica", nullptr));
        btnInicioTurnoInicio->setText(QCoreApplication::translate("MainWindow", "Inicio del turno", nullptr));
        btnBuscarPaciente->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        btnVerFichaPac->setText(QCoreApplication::translate("MainWindow", "Ver ficha m\303\251dica", nullptr));
        btnEditarPaciente->setText(QCoreApplication::translate("MainWindow", "Editar paciente", nullptr));
        btnEliminarPaciente->setText(QCoreApplication::translate("MainWindow", "Eliminar paciente", nullptr));
        groupAgregarPaciente->setTitle(QCoreApplication::translate("MainWindow", "Agregar paciente", nullptr));
        labelNombre->setText(QCoreApplication::translate("MainWindow", "Nombre", nullptr));
        labelDomicilio->setText(QCoreApplication::translate("MainWindow", "Domicilio", nullptr));
        labelObraSocial->setText(QCoreApplication::translate("MainWindow", "Obra social", nullptr));
        labelApellido->setText(QCoreApplication::translate("MainWindow", "Apellido", nullptr));
        labelOcupacion->setText(QCoreApplication::translate("MainWindow", "Ocupaci\303\263n", nullptr));
        labelDni->setText(QCoreApplication::translate("MainWindow", "DNI", nullptr));
        labelEdad->setText(QCoreApplication::translate("MainWindow", "Edad", nullptr));
        labelTelefono->setText(QCoreApplication::translate("MainWindow", "Tel\303\251fono", nullptr));
        labelNacimiento->setText(QCoreApplication::translate("MainWindow", "Nacimiento", nullptr));
        btnAgregarPaciente->setText(QCoreApplication::translate("MainWindow", "Agregar paciente", nullptr));
        labelBuscarPacientePor->setText(QCoreApplication::translate("MainWindow", "Buscar paciente por", nullptr));
        comboBuscarFichas->setItemText(0, QCoreApplication::translate("MainWindow", "DNI", nullptr));

        btnBuscarFichas->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        lblDatosPacienteTitulo->setText(QCoreApplication::translate("MainWindow", "DATOS DEL PACIENTE", nullptr));
        lblNombre->setText(QCoreApplication::translate("MainWindow", "NOMBRE:  GUSTAVO", nullptr));
        lblDomicilio->setText(QCoreApplication::translate("MainWindow", "DOMICILIO", nullptr));
        lblApellido->setText(QCoreApplication::translate("MainWindow", "APELLIDO: COSTAS", nullptr));
        lblOcupacion->setText(QCoreApplication::translate("MainWindow", "OCUPACION", nullptr));
        lblDni->setText(QCoreApplication::translate("MainWindow", "DNI: 20202022", nullptr));
        lblEdad->setText(QCoreApplication::translate("MainWindow", "EDAD", nullptr));
        lblTelefono->setText(QCoreApplication::translate("MainWindow", "TELEFONO: 1111111111", nullptr));
        lblNacimiento->setText(QCoreApplication::translate("MainWindow", "NACIMIENTO", nullptr));
        lblObraSocial->setText(QCoreApplication::translate("MainWindow", "OBRA SOCIAL", nullptr));
        labelFichaMedicaTitulo->setText(QCoreApplication::translate("MainWindow", "FICHA MEDICA", nullptr));
        btnAgregarPrestacion->setText(QCoreApplication::translate("MainWindow", "Agregar prestaci\303\263n", nullptr));
        btnEditarFicha->setText(QCoreApplication::translate("MainWindow", "Editar ficha", nullptr));
        btnVerTicket->setText(QCoreApplication::translate("MainWindow", "Ver ticket de pago", nullptr));
        btnVerHistorialPagos->setText(QCoreApplication::translate("MainWindow", "Ver historial de pagos del cliente", nullptr));
        labelAdjuntosTitulo->setText(QCoreApplication::translate("MainWindow", "ARCHIVOS ADJUNTOS", nullptr));
        btnVerArchivo->setText(QCoreApplication::translate("MainWindow", "Ver archivo", nullptr));
        labelPacientesHoyTurnos->setText(QCoreApplication::translate("MainWindow", "Pacientes de hoy (turnos)", nullptr));
        labelOrdenarTurnos->setText(QCoreApplication::translate("MainWindow", "Ordenar por", nullptr));
        comboOrdenTurnos->setItemText(0, QCoreApplication::translate("MainWindow", "FINALIZADO", nullptr));
        comboOrdenTurnos->setItemText(1, QCoreApplication::translate("MainWindow", "HORA", nullptr));
        comboOrdenTurnos->setItemText(2, QCoreApplication::translate("MainWindow", "NOMBRE", nullptr));

        labelDiaTurnos->setText(QCoreApplication::translate("MainWindow", "D\303\255a:", nullptr));
        btnVerFichaTurno->setText(QCoreApplication::translate("MainWindow", "Ver ficha medica", nullptr));
        btnReprogramarTurno->setText(QCoreApplication::translate("MainWindow", "Reprogramar turno", nullptr));
        btnCancelarTurno->setText(QCoreApplication::translate("MainWindow", "Cancelar turno", nullptr));
        btnEnviarConfirmacion->setText(QCoreApplication::translate("MainWindow", "Enviar mensaje de confirmaci\303\263n", nullptr));
        groupNuevoTurno->setTitle(QCoreApplication::translate("MainWindow", "Generar nuevo turno", nullptr));
        groupBuscarPacienteTurno->setTitle(QCoreApplication::translate("MainWindow", "Buscar paciente por", nullptr));
        comboBuscarPorTurno->setItemText(0, QCoreApplication::translate("MainWindow", "DNI", nullptr));

        btnBuscarTurno->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        groupDatosPacienteTurno->setTitle(QCoreApplication::translate("MainWindow", "Datos del paciente", nullptr));
        lblDPNombre->setText(QCoreApplication::translate("MainWindow", "Nombre:", nullptr));
        valDPNombre->setText(QCoreApplication::translate("MainWindow", "GUSTAVO", nullptr));
        lblDPApellido->setText(QCoreApplication::translate("MainWindow", "Apellido:", nullptr));
        valDPApellido->setText(QCoreApplication::translate("MainWindow", "COSTAS", nullptr));
        lblDPDni->setText(QCoreApplication::translate("MainWindow", "DNI:", nullptr));
        valDPDni->setText(QCoreApplication::translate("MainWindow", "20202022", nullptr));
        lblDPTel->setText(QCoreApplication::translate("MainWindow", "Tel\303\251fono:", nullptr));
        valDPTel->setText(QCoreApplication::translate("MainWindow", "1111111111", nullptr));
        lblDPDomicilio->setText(QCoreApplication::translate("MainWindow", "Domicilio:", nullptr));
        valDPDomicilio->setText(QString());
        lblDPEdad->setText(QCoreApplication::translate("MainWindow", "Edad:", nullptr));
        valDPEdad->setText(QString());
        lblDPNacimiento->setText(QCoreApplication::translate("MainWindow", "Nacimiento:", nullptr));
        valDPNacimiento->setText(QString());
        lblDPObra->setText(QCoreApplication::translate("MainWindow", "Obra social:", nullptr));
        valDPObra->setText(QString());
        groupGenerarTurnoNuevo->setTitle(QCoreApplication::translate("MainWindow", "Generar turno nuevo", nullptr));
        labelFechaTurno->setText(QCoreApplication::translate("MainWindow", "Fecha", nullptr));
        labelHoraTurno->setText(QCoreApplication::translate("MainWindow", "Hora", nullptr));
        labelTratTurno->setText(QCoreApplication::translate("MainWindow", "Tratamiento", nullptr));
        btnCrearTurno->setText(QCoreApplication::translate("MainWindow", "Crear turno", nullptr));
        labelHistorialTitulo->setText(QCoreApplication::translate("MainWindow", "HISTORIAL DE PAGOS", nullptr));
        labelOrdenarHistorial->setText(QCoreApplication::translate("MainWindow", "ORDENAR POR", nullptr));
        comboOrdenHistorial->setItemText(0, QCoreApplication::translate("MainWindow", "FINALIZADO", nullptr));

        labelBuscarPorHistorial->setText(QCoreApplication::translate("MainWindow", "BUSCAR POR", nullptr));
        comboBuscarHistorial->setItemText(0, QCoreApplication::translate("MainWindow", "DNI", nullptr));

        btnBuscarHistorial->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        btnActualizarPago->setText(QCoreApplication::translate("MainWindow", "Actualizar pago", nullptr));
        labelPagosPendientes->setText(QCoreApplication::translate("MainWindow", "PAGOS PENDIENTES", nullptr));
        labelOrdenarPend->setText(QCoreApplication::translate("MainWindow", "ORDENAR POR", nullptr));
        comboOrdenPend->setItemText(0, QCoreApplication::translate("MainWindow", "FINALIZADO", nullptr));

        labelBuscarPorPend->setText(QCoreApplication::translate("MainWindow", "BUSCAR POR", nullptr));
        comboBuscarPend->setItemText(0, QCoreApplication::translate("MainWindow", "DNI", nullptr));

        btnBuscarPend->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        btnCobrarAhora->setText(QCoreApplication::translate("MainWindow", "Cobrar ahora", nullptr));
        btnRegistrarPagoParcial->setText(QCoreApplication::translate("MainWindow", "Registrar pago parcial", nullptr));
        groupGenerarPago->setTitle(QCoreApplication::translate("MainWindow", "Generar pago nuevo", nullptr));
        groupDatosPacientePago->setTitle(QCoreApplication::translate("MainWindow", "Datos del paciente", nullptr));
        lblPPNombre->setText(QCoreApplication::translate("MainWindow", "Nombre:  GUSTAVO", nullptr));
        lblPPApellido->setText(QCoreApplication::translate("MainWindow", "Apellido:  COSTAS", nullptr));
        lblPPDni->setText(QCoreApplication::translate("MainWindow", "DNI: 20202022", nullptr));
        lblPPTel->setText(QCoreApplication::translate("MainWindow", "Tel\303\251fono: 1111111111", nullptr));
        lblPPDom->setText(QCoreApplication::translate("MainWindow", "Domicilio", nullptr));
        lblPPOcup->setText(QCoreApplication::translate("MainWindow", "Ocupaci\303\263n", nullptr));
        lblPPEdad->setText(QCoreApplication::translate("MainWindow", "Edad", nullptr));
        lblPPNac->setText(QCoreApplication::translate("MainWindow", "Nacimiento", nullptr));
        lblPPObra->setText(QCoreApplication::translate("MainWindow", "Obra social", nullptr));
        groupCostoCuotas->setTitle(QCoreApplication::translate("MainWindow", "Costo y cuotas", nullptr));
        labelCostoTotal->setText(QCoreApplication::translate("MainWindow", "Costo total", nullptr));
        labelGenerarCuotas->setText(QCoreApplication::translate("MainWindow", "Generar cuotas", nullptr));
        labelCantidadCuotas->setText(QCoreApplication::translate("MainWindow", "Cantidad", nullptr));
        comboCantidadCuotas->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));
        comboCantidadCuotas->setItemText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        comboCantidadCuotas->setItemText(2, QCoreApplication::translate("MainWindow", "3", nullptr));

        labelMonto1Pago->setText(QCoreApplication::translate("MainWindow", "Monto cuota 1", nullptr));
        labelMonto2Pago->setText(QCoreApplication::translate("MainWindow", "Monto cuota 2", nullptr));
        labelMonto3Pago->setText(QCoreApplication::translate("MainWindow", "Monto cuota 3", nullptr));
        btnGenerarTicket->setText(QCoreApplication::translate("MainWindow", "Generar ticket de pago", nullptr));
        groupCobrarTicket->setTitle(QCoreApplication::translate("MainWindow", "Cobrar ticket generado", nullptr));
        groupDatosCobro->setTitle(QCoreApplication::translate("MainWindow", "Datos del paciente", nullptr));
        lblCPNombre->setText(QCoreApplication::translate("MainWindow", "Nombre:  GUSTAVO", nullptr));
        lblCPApellido->setText(QCoreApplication::translate("MainWindow", "Apellido:  COSTAS", nullptr));
        lblCPDni->setText(QCoreApplication::translate("MainWindow", "DNI: 20202022", nullptr));
        lblCPTel->setText(QCoreApplication::translate("MainWindow", "Tel\303\251fono: 1111111111", nullptr));
        lblCPDom->setText(QCoreApplication::translate("MainWindow", "Domicilio", nullptr));
        lblCPOcup->setText(QCoreApplication::translate("MainWindow", "Ocupaci\303\263n", nullptr));
        lblCPEdad->setText(QCoreApplication::translate("MainWindow", "Edad", nullptr));
        lblCPNac->setText(QCoreApplication::translate("MainWindow", "Nacimiento", nullptr));
        lblCPObra->setText(QCoreApplication::translate("MainWindow", "Obra social", nullptr));
        groupCobro->setTitle(QCoreApplication::translate("MainWindow", "Pago", nullptr));
        labelCostoTotalCobro->setText(QCoreApplication::translate("MainWindow", "Costo total", nullptr));
        labelPago->setText(QCoreApplication::translate("MainWindow", "Pago", nullptr));
        labelFormaDePago->setText(QCoreApplication::translate("MainWindow", "Forma de pago", nullptr));
        btnCobrar->setText(QCoreApplication::translate("MainWindow", "Cobrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
