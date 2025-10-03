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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *icon_only_widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QPushButton *logo_btn;
    QHBoxLayout *logoLayout;
    QPushButton *btnInicio_1;
    QPushButton *btnPacientes_1;
    QPushButton *btnFichas_1;
    QPushButton *btnTurnos_1;
    QPushButton *btnPagos_1;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QPushButton *exit_btn_1;
    QWidget *full_menu_widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *logo_btn_2;
    QHBoxLayout *logoLayout_2;
    QLabel *logo_label_2;
    QLabel *logo_label_3;
    QPushButton *btnInicio_2;
    QPushButton *btnPacientes_2;
    QPushButton *btnFichas_2;
    QPushButton *btnTurnos_2;
    QPushButton *btnPagos_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *exit_btn_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_5;
    QStackedWidget *stackedWidget;
    QWidget *pageInicio;
    QVBoxLayout *inicioLayout;
    QHBoxLayout *kpiLayout;
    QGroupBox *groupPendientes;
    QVBoxLayout *verticalLayout_31;
    QLabel *labelPendientes;
    QGroupBox *groupGananciasHoy;
    QVBoxLayout *verticalLayout_41;
    QLabel *labelGananciasHoy;
    QGroupBox *groupPacienteEnConsultorio;
    QVBoxLayout *pacienteConsultorioLayout;
    QFrame *frameDatosPaciente;
    QVBoxLayout *datosPacienteLayout;
    QLabel *labelPacienteNombre;
    QLabel *labelPacienteApellido;
    QLabel *labelPacienteDni;
    QLabel *labelPacienteEdad;
    QLabel *labelPacienteObraSocial;
    QPushButton *btnFinalizarTurno;
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
    QPushButton *btnAgregarListaEspera;
    QSpacerItem *spacerInicioActionsRight;
    QLabel *labelOrdenLlegadaTitulo;
    QTableWidget *tableOrdenLlegada;
    QHBoxLayout *ordenLlegadaActions;
    QSpacerItem *spacerOrdenLlegadaLeft;
    QPushButton *btnInicioTurnoOrdenLlegada;
    QSpacerItem *spacerOrdenLlegadaRight;
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
    QTabWidget *tabWidgetFichas;
    QWidget *tabFichas;
    QVBoxLayout *tabFichasLayout;
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
    QWidget *tabOdontograma;
    QVBoxLayout *tabOdontogramaLayout;
    QLabel *labelOdontogramaTitulo;
    QLabel *labelOdontogramaPlaceholder;
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
    QTabWidget *tabWidgetPagos;
    QWidget *tabPagosPendientes;
    QVBoxLayout *tabPagosPendientesLayout;
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
    QWidget *tabHistorialPagos;
    QVBoxLayout *tabHistorialPagosLayout;
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
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1090, 690);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        icon_only_widget = new QWidget(centralwidget);
        icon_only_widget->setObjectName("icon_only_widget");
        icon_only_widget->setMinimumSize(QSize(70, 0));
        icon_only_widget->setMaximumSize(QSize(70, 16777215));
        verticalLayout_3 = new QVBoxLayout(icon_only_widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(9, 9, 9, 9);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        logo_btn = new QPushButton(icon_only_widget);
        logo_btn->setObjectName("logo_btn");
        logo_btn->setCheckable(true);
        logoLayout = new QHBoxLayout(logo_btn);
        logoLayout->setSpacing(0);
        logoLayout->setObjectName("logoLayout");

        verticalLayout->addWidget(logo_btn);

        btnInicio_1 = new QPushButton(icon_only_widget);
        btnInicio_1->setObjectName("btnInicio_1");
        btnInicio_1->setCheckable(true);
        btnInicio_1->setAutoExclusive(true);

        verticalLayout->addWidget(btnInicio_1);

        btnPacientes_1 = new QPushButton(icon_only_widget);
        btnPacientes_1->setObjectName("btnPacientes_1");
        btnPacientes_1->setCheckable(true);
        btnPacientes_1->setAutoExclusive(true);

        verticalLayout->addWidget(btnPacientes_1);

        btnFichas_1 = new QPushButton(icon_only_widget);
        btnFichas_1->setObjectName("btnFichas_1");
        btnFichas_1->setCheckable(true);
        btnFichas_1->setAutoExclusive(true);

        verticalLayout->addWidget(btnFichas_1);

        btnTurnos_1 = new QPushButton(icon_only_widget);
        btnTurnos_1->setObjectName("btnTurnos_1");
        btnTurnos_1->setCheckable(true);
        btnTurnos_1->setAutoExclusive(true);

        verticalLayout->addWidget(btnTurnos_1);

        btnPagos_1 = new QPushButton(icon_only_widget);
        btnPagos_1->setObjectName("btnPagos_1");
        btnPagos_1->setCheckable(true);
        btnPagos_1->setAutoExclusive(true);

        verticalLayout->addWidget(btnPagos_1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        verticalLayout_3->addLayout(verticalLayout);

        exit_btn_1 = new QPushButton(icon_only_widget);
        exit_btn_1->setObjectName("exit_btn_1");

        verticalLayout_3->addWidget(exit_btn_1);


        gridLayout->addWidget(icon_only_widget, 0, 0, 1, 1);

        full_menu_widget = new QWidget(centralwidget);
        full_menu_widget->setObjectName("full_menu_widget");
        full_menu_widget->setMinimumSize(QSize(200, 0));
        full_menu_widget->setMaximumSize(QSize(200, 16777215));
        verticalLayout_4 = new QVBoxLayout(full_menu_widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        logo_btn_2 = new QPushButton(full_menu_widget);
        logo_btn_2->setObjectName("logo_btn_2");
        logo_btn_2->setCheckable(true);
        logoLayout_2 = new QHBoxLayout(logo_btn_2);
        logoLayout_2->setSpacing(0);
        logoLayout_2->setObjectName("logoLayout_2");
        logo_label_2 = new QLabel(logo_btn_2);
        logo_label_2->setObjectName("logo_label_2");
        logo_label_2->setMinimumSize(QSize(40, 40));
        logo_label_2->setMaximumSize(QSize(40, 40));
        QFont font;
        font.setPointSize(20);
        logo_label_2->setFont(font);
        logo_label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        logoLayout_2->addWidget(logo_label_2);

        logo_label_3 = new QLabel(logo_btn_2);
        logo_label_3->setObjectName("logo_label_3");
        QFont font1;
        font1.setPointSize(15);
        logo_label_3->setFont(font1);

        logoLayout_2->addWidget(logo_label_3);


        verticalLayout_2->addWidget(logo_btn_2);

        btnInicio_2 = new QPushButton(full_menu_widget);
        btnInicio_2->setObjectName("btnInicio_2");
        btnInicio_2->setCheckable(true);
        btnInicio_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(btnInicio_2);

        btnPacientes_2 = new QPushButton(full_menu_widget);
        btnPacientes_2->setObjectName("btnPacientes_2");
        btnPacientes_2->setCheckable(true);
        btnPacientes_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(btnPacientes_2);

        btnFichas_2 = new QPushButton(full_menu_widget);
        btnFichas_2->setObjectName("btnFichas_2");
        btnFichas_2->setCheckable(true);
        btnFichas_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(btnFichas_2);

        btnTurnos_2 = new QPushButton(full_menu_widget);
        btnTurnos_2->setObjectName("btnTurnos_2");
        btnTurnos_2->setCheckable(true);
        btnTurnos_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(btnTurnos_2);

        btnPagos_2 = new QPushButton(full_menu_widget);
        btnPagos_2->setObjectName("btnPagos_2");
        btnPagos_2->setCheckable(true);
        btnPagos_2->setAutoExclusive(true);

        verticalLayout_2->addWidget(btnPagos_2);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 200, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        exit_btn_2 = new QPushButton(full_menu_widget);
        exit_btn_2->setObjectName("exit_btn_2");

        verticalLayout_4->addWidget(exit_btn_2);


        gridLayout->addWidget(full_menu_widget, 0, 1, 1, 1);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        verticalLayout_5 = new QVBoxLayout(widget_3);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(widget_3);
        stackedWidget->setObjectName("stackedWidget");
        pageInicio = new QWidget();
        pageInicio->setObjectName("pageInicio");
        inicioLayout = new QVBoxLayout(pageInicio);
        inicioLayout->setObjectName("inicioLayout");
        kpiLayout = new QHBoxLayout();
        kpiLayout->setObjectName("kpiLayout");
        groupPendientes = new QGroupBox(pageInicio);
        groupPendientes->setObjectName("groupPendientes");
        verticalLayout_31 = new QVBoxLayout(groupPendientes);
        verticalLayout_31->setObjectName("verticalLayout_31");
        labelPendientes = new QLabel(groupPendientes);
        labelPendientes->setObjectName("labelPendientes");
        labelPendientes->setMinimumSize(QSize(100, 40));
        labelPendientes->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_31->addWidget(labelPendientes);


        kpiLayout->addWidget(groupPendientes);

        groupGananciasHoy = new QGroupBox(pageInicio);
        groupGananciasHoy->setObjectName("groupGananciasHoy");
        verticalLayout_41 = new QVBoxLayout(groupGananciasHoy);
        verticalLayout_41->setObjectName("verticalLayout_41");
        labelGananciasHoy = new QLabel(groupGananciasHoy);
        labelGananciasHoy->setObjectName("labelGananciasHoy");
        labelGananciasHoy->setMinimumSize(QSize(100, 40));
        labelGananciasHoy->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_41->addWidget(labelGananciasHoy);


        kpiLayout->addWidget(groupGananciasHoy);

        groupPacienteEnConsultorio = new QGroupBox(pageInicio);
        groupPacienteEnConsultorio->setObjectName("groupPacienteEnConsultorio");
        groupPacienteEnConsultorio->setMaximumSize(QSize(16777215, 200));
        pacienteConsultorioLayout = new QVBoxLayout(groupPacienteEnConsultorio);
        pacienteConsultorioLayout->setSpacing(1);
        pacienteConsultorioLayout->setObjectName("pacienteConsultorioLayout");
        pacienteConsultorioLayout->setContentsMargins(1, 1, 1, 1);
        frameDatosPaciente = new QFrame(groupPacienteEnConsultorio);
        frameDatosPaciente->setObjectName("frameDatosPaciente");
        frameDatosPaciente->setMaximumSize(QSize(16777215, 120));
        frameDatosPaciente->setFrameShape(QFrame::Shape::StyledPanel);
        frameDatosPaciente->setFrameShadow(QFrame::Shadow::Raised);
        datosPacienteLayout = new QVBoxLayout(frameDatosPaciente);
        datosPacienteLayout->setSpacing(2);
        datosPacienteLayout->setObjectName("datosPacienteLayout");
        datosPacienteLayout->setContentsMargins(5, 5, 5, 5);
        labelPacienteNombre = new QLabel(frameDatosPaciente);
        labelPacienteNombre->setObjectName("labelPacienteNombre");
        QFont font2;
        font2.setPointSize(9);
        labelPacienteNombre->setFont(font2);

        datosPacienteLayout->addWidget(labelPacienteNombre);

        labelPacienteApellido = new QLabel(frameDatosPaciente);
        labelPacienteApellido->setObjectName("labelPacienteApellido");
        labelPacienteApellido->setFont(font2);

        datosPacienteLayout->addWidget(labelPacienteApellido);

        labelPacienteDni = new QLabel(frameDatosPaciente);
        labelPacienteDni->setObjectName("labelPacienteDni");
        labelPacienteDni->setFont(font2);

        datosPacienteLayout->addWidget(labelPacienteDni);

        labelPacienteEdad = new QLabel(frameDatosPaciente);
        labelPacienteEdad->setObjectName("labelPacienteEdad");
        labelPacienteEdad->setFont(font2);

        datosPacienteLayout->addWidget(labelPacienteEdad);

        labelPacienteObraSocial = new QLabel(frameDatosPaciente);
        labelPacienteObraSocial->setObjectName("labelPacienteObraSocial");
        labelPacienteObraSocial->setFont(font2);

        datosPacienteLayout->addWidget(labelPacienteObraSocial);


        pacienteConsultorioLayout->addWidget(frameDatosPaciente);

        btnFinalizarTurno = new QPushButton(groupPacienteEnConsultorio);
        btnFinalizarTurno->setObjectName("btnFinalizarTurno");
        btnFinalizarTurno->setMaximumSize(QSize(16777215, 40));
        btnFinalizarTurno->setFont(font2);

        pacienteConsultorioLayout->addWidget(btnFinalizarTurno);


        kpiLayout->addWidget(groupPacienteEnConsultorio);


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

        btnAgregarListaEspera = new QPushButton(pageInicio);
        btnAgregarListaEspera->setObjectName("btnAgregarListaEspera");

        inicioActions->addWidget(btnAgregarListaEspera);

        spacerInicioActionsRight = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        inicioActions->addItem(spacerInicioActionsRight);


        inicioLayout->addLayout(inicioActions);

        labelOrdenLlegadaTitulo = new QLabel(pageInicio);
        labelOrdenLlegadaTitulo->setObjectName("labelOrdenLlegadaTitulo");
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        labelOrdenLlegadaTitulo->setFont(font3);

        inicioLayout->addWidget(labelOrdenLlegadaTitulo);

        tableOrdenLlegada = new QTableWidget(pageInicio);
        tableOrdenLlegada->setObjectName("tableOrdenLlegada");

        inicioLayout->addWidget(tableOrdenLlegada);

        ordenLlegadaActions = new QHBoxLayout();
        ordenLlegadaActions->setObjectName("ordenLlegadaActions");
        spacerOrdenLlegadaLeft = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        ordenLlegadaActions->addItem(spacerOrdenLlegadaLeft);

        btnInicioTurnoOrdenLlegada = new QPushButton(pageInicio);
        btnInicioTurnoOrdenLlegada->setObjectName("btnInicioTurnoOrdenLlegada");

        ordenLlegadaActions->addWidget(btnInicioTurnoOrdenLlegada);

        spacerOrdenLlegadaRight = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        ordenLlegadaActions->addItem(spacerOrdenLlegadaRight);


        inicioLayout->addLayout(ordenLlegadaActions);

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
        tabWidgetFichas = new QTabWidget(pageFichas);
        tabWidgetFichas->setObjectName("tabWidgetFichas");
        tabWidgetFichas->setStyleSheet(QString::fromUtf8(""));
        tabWidgetFichas->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        tabFichas = new QWidget();
        tabFichas->setObjectName("tabFichas");
        tabFichasLayout = new QVBoxLayout(tabFichas);
        tabFichasLayout->setObjectName("tabFichasLayout");
        fichasTopSearch = new QHBoxLayout();
        fichasTopSearch->setObjectName("fichasTopSearch");
        fichasLeftSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        fichasTopSearch->addItem(fichasLeftSpacer);

        labelBuscarPacientePor = new QLabel(tabFichas);
        labelBuscarPacientePor->setObjectName("labelBuscarPacientePor");

        fichasTopSearch->addWidget(labelBuscarPacientePor);

        comboBuscarFichas = new QComboBox(tabFichas);
        comboBuscarFichas->addItem(QString());
        comboBuscarFichas->setObjectName("comboBuscarFichas");

        fichasTopSearch->addWidget(comboBuscarFichas);

        editBuscarFichas = new QLineEdit(tabFichas);
        editBuscarFichas->setObjectName("editBuscarFichas");

        fichasTopSearch->addWidget(editBuscarFichas);

        btnBuscarFichas = new QPushButton(tabFichas);
        btnBuscarFichas->setObjectName("btnBuscarFichas");

        fichasTopSearch->addWidget(btnBuscarFichas);


        tabFichasLayout->addLayout(fichasTopSearch);

        fichasDatosPaciente = new QGridLayout();
        fichasDatosPaciente->setObjectName("fichasDatosPaciente");
        lblDatosPacienteTitulo = new QLabel(tabFichas);
        lblDatosPacienteTitulo->setObjectName("lblDatosPacienteTitulo");

        fichasDatosPaciente->addWidget(lblDatosPacienteTitulo, 0, 0, 1, 1);

        lblNombre = new QLabel(tabFichas);
        lblNombre->setObjectName("lblNombre");

        fichasDatosPaciente->addWidget(lblNombre, 1, 0, 1, 1);

        lblDomicilio = new QLabel(tabFichas);
        lblDomicilio->setObjectName("lblDomicilio");

        fichasDatosPaciente->addWidget(lblDomicilio, 1, 1, 1, 1);

        lblApellido = new QLabel(tabFichas);
        lblApellido->setObjectName("lblApellido");

        fichasDatosPaciente->addWidget(lblApellido, 2, 0, 1, 1);

        lblOcupacion = new QLabel(tabFichas);
        lblOcupacion->setObjectName("lblOcupacion");

        fichasDatosPaciente->addWidget(lblOcupacion, 2, 1, 1, 1);

        lblDni = new QLabel(tabFichas);
        lblDni->setObjectName("lblDni");

        fichasDatosPaciente->addWidget(lblDni, 3, 0, 1, 1);

        lblEdad = new QLabel(tabFichas);
        lblEdad->setObjectName("lblEdad");

        fichasDatosPaciente->addWidget(lblEdad, 3, 1, 1, 1);

        lblTelefono = new QLabel(tabFichas);
        lblTelefono->setObjectName("lblTelefono");

        fichasDatosPaciente->addWidget(lblTelefono, 4, 0, 1, 1);

        lblNacimiento = new QLabel(tabFichas);
        lblNacimiento->setObjectName("lblNacimiento");

        fichasDatosPaciente->addWidget(lblNacimiento, 4, 1, 1, 1);

        lblObraSocial = new QLabel(tabFichas);
        lblObraSocial->setObjectName("lblObraSocial");

        fichasDatosPaciente->addWidget(lblObraSocial, 5, 0, 1, 1);


        tabFichasLayout->addLayout(fichasDatosPaciente);

        labelFichaMedicaTitulo = new QLabel(tabFichas);
        labelFichaMedicaTitulo->setObjectName("labelFichaMedicaTitulo");

        tabFichasLayout->addWidget(labelFichaMedicaTitulo);

        tableFichaMedica = new QTableWidget(tabFichas);
        tableFichaMedica->setObjectName("tableFichaMedica");

        tabFichasLayout->addWidget(tableFichaMedica);

        fichasButtons = new QHBoxLayout();
        fichasButtons->setObjectName("fichasButtons");
        btnAgregarPrestacion = new QPushButton(tabFichas);
        btnAgregarPrestacion->setObjectName("btnAgregarPrestacion");

        fichasButtons->addWidget(btnAgregarPrestacion);

        btnEditarFicha = new QPushButton(tabFichas);
        btnEditarFicha->setObjectName("btnEditarFicha");

        fichasButtons->addWidget(btnEditarFicha);

        btnVerTicket = new QPushButton(tabFichas);
        btnVerTicket->setObjectName("btnVerTicket");

        fichasButtons->addWidget(btnVerTicket);

        btnVerHistorialPagos = new QPushButton(tabFichas);
        btnVerHistorialPagos->setObjectName("btnVerHistorialPagos");

        fichasButtons->addWidget(btnVerHistorialPagos);


        tabFichasLayout->addLayout(fichasButtons);

        labelAdjuntosTitulo = new QLabel(tabFichas);
        labelAdjuntosTitulo->setObjectName("labelAdjuntosTitulo");

        tabFichasLayout->addWidget(labelAdjuntosTitulo);

        tableAdjuntos = new QTableWidget(tabFichas);
        tableAdjuntos->setObjectName("tableAdjuntos");

        tabFichasLayout->addWidget(tableAdjuntos);

        adjuntosButtons = new QHBoxLayout();
        adjuntosButtons->setObjectName("adjuntosButtons");
        adjSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        adjuntosButtons->addItem(adjSpacer);

        btnVerArchivo = new QPushButton(tabFichas);
        btnVerArchivo->setObjectName("btnVerArchivo");

        adjuntosButtons->addWidget(btnVerArchivo);


        tabFichasLayout->addLayout(adjuntosButtons);

        tabWidgetFichas->addTab(tabFichas, QString());
        tabOdontograma = new QWidget();
        tabOdontograma->setObjectName("tabOdontograma");
        tabOdontogramaLayout = new QVBoxLayout(tabOdontograma);
        tabOdontogramaLayout->setObjectName("tabOdontogramaLayout");
        labelOdontogramaTitulo = new QLabel(tabOdontograma);
        labelOdontogramaTitulo->setObjectName("labelOdontogramaTitulo");
        labelOdontogramaTitulo->setFont(font3);
        labelOdontogramaTitulo->setAlignment(Qt::AlignmentFlag::AlignCenter);

        tabOdontogramaLayout->addWidget(labelOdontogramaTitulo);

        labelOdontogramaPlaceholder = new QLabel(tabOdontograma);
        labelOdontogramaPlaceholder->setObjectName("labelOdontogramaPlaceholder");
        labelOdontogramaPlaceholder->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #f0f0f0;\n"
"    border: 2px dashed #ccc;\n"
"    padding: 20px;\n"
"    font-size: 16px;\n"
"    color: #666;\n"
"}"));
        labelOdontogramaPlaceholder->setAlignment(Qt::AlignmentFlag::AlignCenter);

        tabOdontogramaLayout->addWidget(labelOdontogramaPlaceholder);

        tabWidgetFichas->addTab(tabOdontograma, QString());

        fichasLayout->addWidget(tabWidgetFichas);

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
        tabWidgetPagos = new QTabWidget(pagePagos);
        tabWidgetPagos->setObjectName("tabWidgetPagos");
        tabPagosPendientes = new QWidget();
        tabPagosPendientes->setObjectName("tabPagosPendientes");
        tabPagosPendientesLayout = new QVBoxLayout(tabPagosPendientes);
        tabPagosPendientesLayout->setObjectName("tabPagosPendientesLayout");
        pendientesTopControls = new QHBoxLayout();
        pendientesTopControls->setObjectName("pendientesTopControls");
        labelPagosPendientes = new QLabel(tabPagosPendientes);
        labelPagosPendientes->setObjectName("labelPagosPendientes");

        pendientesTopControls->addWidget(labelPagosPendientes);

        spacerPendLeft = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        pendientesTopControls->addItem(spacerPendLeft);

        labelOrdenarPend = new QLabel(tabPagosPendientes);
        labelOrdenarPend->setObjectName("labelOrdenarPend");

        pendientesTopControls->addWidget(labelOrdenarPend);

        comboOrdenPend = new QComboBox(tabPagosPendientes);
        comboOrdenPend->addItem(QString());
        comboOrdenPend->setObjectName("comboOrdenPend");

        pendientesTopControls->addWidget(comboOrdenPend);

        spacerPendMid = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        pendientesTopControls->addItem(spacerPendMid);

        labelBuscarPorPend = new QLabel(tabPagosPendientes);
        labelBuscarPorPend->setObjectName("labelBuscarPorPend");

        pendientesTopControls->addWidget(labelBuscarPorPend);

        comboBuscarPend = new QComboBox(tabPagosPendientes);
        comboBuscarPend->addItem(QString());
        comboBuscarPend->setObjectName("comboBuscarPend");

        pendientesTopControls->addWidget(comboBuscarPend);

        editBuscarPend = new QLineEdit(tabPagosPendientes);
        editBuscarPend->setObjectName("editBuscarPend");

        pendientesTopControls->addWidget(editBuscarPend);

        btnBuscarPend = new QPushButton(tabPagosPendientes);
        btnBuscarPend->setObjectName("btnBuscarPend");

        pendientesTopControls->addWidget(btnBuscarPend);


        tabPagosPendientesLayout->addLayout(pendientesTopControls);

        tablePagosPendientes = new QTableWidget(tabPagosPendientes);
        tablePagosPendientes->setObjectName("tablePagosPendientes");

        tabPagosPendientesLayout->addWidget(tablePagosPendientes);

        pendientesActions = new QHBoxLayout();
        pendientesActions->setObjectName("pendientesActions");
        spacerPendActionsLeft = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        pendientesActions->addItem(spacerPendActionsLeft);

        btnCobrarAhora = new QPushButton(tabPagosPendientes);
        btnCobrarAhora->setObjectName("btnCobrarAhora");

        pendientesActions->addWidget(btnCobrarAhora);

        btnRegistrarPagoParcial = new QPushButton(tabPagosPendientes);
        btnRegistrarPagoParcial->setObjectName("btnRegistrarPagoParcial");

        pendientesActions->addWidget(btnRegistrarPagoParcial);

        spacerPendActionsRight = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        pendientesActions->addItem(spacerPendActionsRight);


        tabPagosPendientesLayout->addLayout(pendientesActions);

        pagosBottomLayout = new QHBoxLayout();
        pagosBottomLayout->setObjectName("pagosBottomLayout");
        groupGenerarPago = new QGroupBox(tabPagosPendientes);
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

        groupCobrarTicket = new QGroupBox(tabPagosPendientes);
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


        tabPagosPendientesLayout->addLayout(pagosBottomLayout);

        tabWidgetPagos->addTab(tabPagosPendientes, QString());
        tabHistorialPagos = new QWidget();
        tabHistorialPagos->setObjectName("tabHistorialPagos");
        tabHistorialPagosLayout = new QVBoxLayout(tabHistorialPagos);
        tabHistorialPagosLayout->setObjectName("tabHistorialPagosLayout");
        historialTopControls = new QHBoxLayout();
        historialTopControls->setObjectName("historialTopControls");
        labelHistorialTitulo = new QLabel(tabHistorialPagos);
        labelHistorialTitulo->setObjectName("labelHistorialTitulo");

        historialTopControls->addWidget(labelHistorialTitulo);

        spacerHistorialLeft = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        historialTopControls->addItem(spacerHistorialLeft);

        labelOrdenarHistorial = new QLabel(tabHistorialPagos);
        labelOrdenarHistorial->setObjectName("labelOrdenarHistorial");

        historialTopControls->addWidget(labelOrdenarHistorial);

        comboOrdenHistorial = new QComboBox(tabHistorialPagos);
        comboOrdenHistorial->addItem(QString());
        comboOrdenHistorial->setObjectName("comboOrdenHistorial");

        historialTopControls->addWidget(comboOrdenHistorial);

        spacerHistorialMid = new QSpacerItem(20, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        historialTopControls->addItem(spacerHistorialMid);

        labelBuscarPorHistorial = new QLabel(tabHistorialPagos);
        labelBuscarPorHistorial->setObjectName("labelBuscarPorHistorial");

        historialTopControls->addWidget(labelBuscarPorHistorial);

        comboBuscarHistorial = new QComboBox(tabHistorialPagos);
        comboBuscarHistorial->addItem(QString());
        comboBuscarHistorial->setObjectName("comboBuscarHistorial");

        historialTopControls->addWidget(comboBuscarHistorial);

        editBuscarHistorial = new QLineEdit(tabHistorialPagos);
        editBuscarHistorial->setObjectName("editBuscarHistorial");

        historialTopControls->addWidget(editBuscarHistorial);

        btnBuscarHistorial = new QPushButton(tabHistorialPagos);
        btnBuscarHistorial->setObjectName("btnBuscarHistorial");

        historialTopControls->addWidget(btnBuscarHistorial);


        tabHistorialPagosLayout->addLayout(historialTopControls);

        tableHistorialPagos = new QTableWidget(tabHistorialPagos);
        tableHistorialPagos->setObjectName("tableHistorialPagos");

        tabHistorialPagosLayout->addWidget(tableHistorialPagos);

        historialActions = new QHBoxLayout();
        historialActions->setObjectName("historialActions");
        spacerHistorialActions = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        historialActions->addItem(spacerHistorialActions);

        btnActualizarPago = new QPushButton(tabHistorialPagos);
        btnActualizarPago->setObjectName("btnActualizarPago");

        historialActions->addWidget(btnActualizarPago);


        tabHistorialPagosLayout->addLayout(historialActions);

        tabWidgetPagos->addTab(tabHistorialPagos, QString());

        pagosLayout->addWidget(tabWidgetPagos);

        stackedWidget->addWidget(pagePagos);

        verticalLayout_5->addWidget(stackedWidget);


        gridLayout->addWidget(widget_3, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1090, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(logo_btn, &QPushButton::toggled, icon_only_widget, &QWidget::setVisible);
        QObject::connect(logo_btn, &QPushButton::toggled, full_menu_widget, &QWidget::setHidden);
        QObject::connect(logo_btn_2, &QPushButton::toggled, icon_only_widget, &QWidget::setVisible);
        QObject::connect(logo_btn, &QPushButton::toggled, logo_btn_2, &QPushButton::setChecked);
        QObject::connect(logo_btn_2, &QPushButton::toggled, logo_btn, &QPushButton::setChecked);
        QObject::connect(btnInicio_1, &QPushButton::toggled, btnInicio_2, &QPushButton::setChecked);
        QObject::connect(btnPacientes_1, &QPushButton::toggled, btnPacientes_2, &QPushButton::setChecked);
        QObject::connect(btnFichas_1, &QPushButton::toggled, btnFichas_2, &QPushButton::setChecked);
        QObject::connect(btnTurnos_1, &QPushButton::toggled, btnTurnos_2, &QPushButton::setChecked);
        QObject::connect(btnPagos_1, &QPushButton::toggled, btnPagos_2, &QPushButton::setChecked);
        QObject::connect(btnInicio_2, &QPushButton::toggled, btnInicio_1, &QPushButton::setChecked);
        QObject::connect(btnPacientes_2, &QPushButton::toggled, btnPacientes_1, &QPushButton::setChecked);
        QObject::connect(btnFichas_2, &QPushButton::toggled, btnFichas_1, &QPushButton::setChecked);
        QObject::connect(btnTurnos_2, &QPushButton::toggled, btnTurnos_1, &QPushButton::setChecked);
        QObject::connect(btnPagos_2, &QPushButton::toggled, btnPagos_1, &QPushButton::setChecked);
        QObject::connect(exit_btn_2, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(exit_btn_1, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        stackedWidget->setCurrentIndex(0);
        tabWidgetFichas->setCurrentIndex(0);
        tabWidgetPagos->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        logo_btn->setToolTip(QCoreApplication::translate("MainWindow", "Alternar men\303\272", nullptr));
#endif // QT_CONFIG(tooltip)
        logo_btn->setText(QString());
#if QT_CONFIG(tooltip)
        btnInicio_1->setToolTip(QCoreApplication::translate("MainWindow", "INICIO", nullptr));
#endif // QT_CONFIG(tooltip)
        btnInicio_1->setText(QString());
#if QT_CONFIG(tooltip)
        btnPacientes_1->setToolTip(QCoreApplication::translate("MainWindow", "PACIENTES", nullptr));
#endif // QT_CONFIG(tooltip)
        btnPacientes_1->setText(QString());
#if QT_CONFIG(tooltip)
        btnFichas_1->setToolTip(QCoreApplication::translate("MainWindow", "FICHAS", nullptr));
#endif // QT_CONFIG(tooltip)
        btnFichas_1->setText(QString());
#if QT_CONFIG(tooltip)
        btnTurnos_1->setToolTip(QCoreApplication::translate("MainWindow", "TURNOS", nullptr));
#endif // QT_CONFIG(tooltip)
        btnTurnos_1->setText(QString());
#if QT_CONFIG(tooltip)
        btnPagos_1->setToolTip(QCoreApplication::translate("MainWindow", "PAGOS", nullptr));
#endif // QT_CONFIG(tooltip)
        btnPagos_1->setText(QString());
#if QT_CONFIG(tooltip)
        exit_btn_1->setToolTip(QCoreApplication::translate("MainWindow", "Salir", nullptr));
#endif // QT_CONFIG(tooltip)
        exit_btn_1->setText(QString());
#if QT_CONFIG(tooltip)
        logo_btn_2->setToolTip(QCoreApplication::translate("MainWindow", "Alternar men\303\272", nullptr));
#endif // QT_CONFIG(tooltip)
        logo_btn_2->setText(QString());
        logo_label_2->setText(QCoreApplication::translate("MainWindow", "\360\237\246\267", nullptr));
        logo_label_3->setText(QCoreApplication::translate("MainWindow", "Cl\303\255nica Dental", nullptr));
        btnInicio_2->setText(QCoreApplication::translate("MainWindow", "INICIO", nullptr));
        btnPacientes_2->setText(QCoreApplication::translate("MainWindow", "PACIENTES", nullptr));
        btnFichas_2->setText(QCoreApplication::translate("MainWindow", "FICHAS", nullptr));
        btnTurnos_2->setText(QCoreApplication::translate("MainWindow", "TURNOS", nullptr));
        btnPagos_2->setText(QCoreApplication::translate("MainWindow", "PAGOS", nullptr));
        exit_btn_2->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        groupPendientes->setTitle(QCoreApplication::translate("MainWindow", "Turnos pendientes hoy", nullptr));
        labelPendientes->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        groupGananciasHoy->setTitle(QCoreApplication::translate("MainWindow", "Ganancias hoy", nullptr));
        labelGananciasHoy->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        groupPacienteEnConsultorio->setTitle(QCoreApplication::translate("MainWindow", "Paciente en consultorio", nullptr));
        labelPacienteNombre->setText(QCoreApplication::translate("MainWindow", "NOMBRE: GUSTAVO", nullptr));
        labelPacienteApellido->setText(QCoreApplication::translate("MainWindow", "APELLIDO: COSTAS", nullptr));
        labelPacienteDni->setText(QCoreApplication::translate("MainWindow", "DNI: 20202022", nullptr));
        labelPacienteEdad->setText(QCoreApplication::translate("MainWindow", "EDAD", nullptr));
        labelPacienteObraSocial->setText(QCoreApplication::translate("MainWindow", "OBRA SOCIAL", nullptr));
        btnFinalizarTurno->setText(QCoreApplication::translate("MainWindow", "FINALIZAR TURNO", nullptr));
        labelPacientesHoyInicio->setText(QCoreApplication::translate("MainWindow", "Pacientes de hoy (turnos)", nullptr));
        labelOrdenarInicio->setText(QCoreApplication::translate("MainWindow", "Ordenar por", nullptr));
        comboOrdenInicio->setItemText(0, QCoreApplication::translate("MainWindow", "HORA", nullptr));
        comboOrdenInicio->setItemText(1, QCoreApplication::translate("MainWindow", "NOMBRE", nullptr));

        labelDiaInicio->setText(QCoreApplication::translate("MainWindow", "D\303\255a:", nullptr));
        btnVerFichaInicio->setText(QCoreApplication::translate("MainWindow", "Ver ficha m\303\251dica", nullptr));
        btnAgregarListaEspera->setText(QCoreApplication::translate("MainWindow", "Agregar a lista de espera", nullptr));
        labelOrdenLlegadaTitulo->setText(QCoreApplication::translate("MainWindow", "ORDEN DE LLEGADA", nullptr));
        btnInicioTurnoOrdenLlegada->setText(QCoreApplication::translate("MainWindow", "Inicio del turno", nullptr));
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
        tabWidgetFichas->setTabText(tabWidgetFichas->indexOf(tabFichas), QCoreApplication::translate("MainWindow", "Fichas", nullptr));
        labelOdontogramaTitulo->setText(QCoreApplication::translate("MainWindow", "ODONTOGRAMA", nullptr));
        labelOdontogramaPlaceholder->setText(QCoreApplication::translate("MainWindow", "Aqu\303\255 se mostrar\303\241 el odontograma del paciente", nullptr));
        tabWidgetFichas->setTabText(tabWidgetFichas->indexOf(tabOdontograma), QCoreApplication::translate("MainWindow", "Odontograma", nullptr));
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
        tabWidgetPagos->setTabText(tabWidgetPagos->indexOf(tabPagosPendientes), QCoreApplication::translate("MainWindow", "Pagos Pendientes", nullptr));
        labelHistorialTitulo->setText(QCoreApplication::translate("MainWindow", "HISTORIAL DE PAGOS", nullptr));
        labelOrdenarHistorial->setText(QCoreApplication::translate("MainWindow", "ORDENAR POR", nullptr));
        comboOrdenHistorial->setItemText(0, QCoreApplication::translate("MainWindow", "FINALIZADO", nullptr));

        labelBuscarPorHistorial->setText(QCoreApplication::translate("MainWindow", "BUSCAR POR", nullptr));
        comboBuscarHistorial->setItemText(0, QCoreApplication::translate("MainWindow", "DNI", nullptr));

        btnBuscarHistorial->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        btnActualizarPago->setText(QCoreApplication::translate("MainWindow", "Actualizar pago", nullptr));
        tabWidgetPagos->setTabText(tabWidgetPagos->indexOf(tabHistorialPagos), QCoreApplication::translate("MainWindow", "Historial de Pagos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
