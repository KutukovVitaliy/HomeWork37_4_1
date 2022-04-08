//
// Created by kutuk on 07.04.2022.
//

#ifndef HOMEWORK37_4_1_CALCMAINWINDOW_H
#define HOMEWORK37_4_1_CALCMAINWINDOW_H
#include <QMainWindow>
#include <QtWidgets/QLineEdit>
#include <exception>

class DivByZeroException : public std::exception{
public:
    const char* what() const noexcept override{
        return "Division by zero! Not allowed!";
    }
};

class CalcMainWindow : public QMainWindow{
    Q_OBJECT
public:
    CalcMainWindow(QWidget* parent = nullptr) : QMainWindow(parent){}
    QLineEdit *resultLineEdit = nullptr, *firstLineEdit = nullptr, *secondLineEdit = nullptr;

public slots:
    void plus(){
        float result = firstLineEdit->text().replace(",", ".").toFloat() + secondLineEdit->text().replace(",", ".").toFloat();
        resultLineEdit->setText(QString::number(result).replace(".", ","));

    };
    void minus(){
        float result = firstLineEdit->text().replace(",", ".").toFloat() - secondLineEdit->text().replace(",", ".").toFloat();
        resultLineEdit->setText(QString::number(result).replace(".", ","));
    }
    void mul(){
        float result = firstLineEdit->text().replace(",", ".").toFloat() * secondLineEdit->text().replace(",", ".").toFloat();
        resultLineEdit->setText(QString::number(result).replace(".", ","));
    }
    void div(){

            float first = firstLineEdit->text().replace(",", ".").toFloat();
            float second = secondLineEdit->text().replace(",", ".").toFloat();
        try {
            float result = Division(first, second);
            resultLineEdit->setText(QString::number(result).replace(".", ","));
        }
        catch (DivByZeroException ex) {
            resultLineEdit->setText(ex.what());
        }
    }

private:
    float Division(float first, float second){
        if(second == 0) throw DivByZeroException();
        return first / second;
    }
};
#endif //HOMEWORK37_4_1_CALCMAINWINDOW_H
