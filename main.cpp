#include <QApplication>
#include "./ui_calc.h"
#include "calcmainwindow.h"
#include <QDoubleValidator>
int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CalcMainWindow window(nullptr);
    window.resize(900, 900);
    Ui::MainWindow calc;
    calc.setupUi(&window);
    auto validator = new QDoubleValidator();
    validator->setNotation(QDoubleValidator::StandardNotation);
    calc.firstLineEdit->setValidator(validator);
    calc.secondLineEdit->setValidator(validator);
    window.resultLineEdit = calc.resultLineEdit;
    window.firstLineEdit = calc.firstLineEdit;
    window.secondLineEdit = calc.secondLineEdit;
    window.resize(200, 100);
    window.show();
    return QApplication::exec();
}
