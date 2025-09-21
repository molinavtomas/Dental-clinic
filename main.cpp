#include <QFile>
#include <QTextStream>
#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    // Cargar el QSS desde los recursos
    QFile file(":/style.qss");   // ":", porque está en resources.qrc
    if (file.open(QFile::ReadOnly)) {
        QString styleSheet = QLatin1String(file.readAll());
        a.setStyleSheet(styleSheet);
    }

    w.show();
    return a.exec();
}
