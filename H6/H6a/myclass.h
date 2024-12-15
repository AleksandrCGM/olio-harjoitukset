#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QDebug> // Для qDebug()

class MyClass : public QObject {
    Q_OBJECT

public:
    explicit MyClass(QObject* parent = nullptr); // Конструктор
    void raiseMySignal(); // Метод для генерации сигнала

signals:
    void mySignal(); // Объявление сигнала

public slots:
    void mySlot(); // Объявление слота
};

#endif // MYCLASS_H
