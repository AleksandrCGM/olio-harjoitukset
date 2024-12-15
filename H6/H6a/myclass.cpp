#include "myclass.h"

MyClass::MyClass(QObject* parent) : QObject(parent) {
    // Подключаем сигнал к слоту
    connect(this, SIGNAL(mySignal()), this, SLOT(mySlot()));
}

void MyClass::raiseMySignal() {
    emit mySignal(); // Генерация сигнала
}

void MyClass::mySlot() {
    qDebug() << "mySlot:ia kutsuttiin"; // Вывод сообщения
}
