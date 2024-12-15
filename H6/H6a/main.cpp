#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    // Создаем объект MyClass и вызываем метод raiseMySignal
    MyClass myObject;
    myObject.raiseMySignal();

    return app.exec(); // Запуск цикла Qt
}
