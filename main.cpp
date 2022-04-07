#include <QApplication>
#include "./ui_calc.h"
#include "calcmainwindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CalcMainWindow window(nullptr);
    window.resize(900, 900);
    Ui::MainWindow calc;
    calc.setupUi(&window);
    window.resultLineEdit = calc.resultLineEdit;
    window.resize(200, 100);
    window.show();
    return QApplication::exec();
}
