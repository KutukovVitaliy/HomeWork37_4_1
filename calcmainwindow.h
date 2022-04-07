//
// Created by kutuk on 07.04.2022.
//

#ifndef HOMEWORK37_4_1_CALCMAINWINDOW_H
#define HOMEWORK37_4_1_CALCMAINWINDOW_H
#include <QMainWindow>
#include <QtWidgets/QLineEdit>

class CalcMainWindow : public QMainWindow{
    Q_OBJECT
public:
    CalcMainWindow(QWidget* parent = nullptr) : QMainWindow(parent){}
    QLineEdit* resultLineEdit = nullptr;
public slots:
    void plus(){
        resultLineEdit->setText("QWERTY");
    };
    void minus(){

    }
    void mul(){

    }
    void div(){

    }
};
#endif //HOMEWORK37_4_1_CALCMAINWINDOW_H
