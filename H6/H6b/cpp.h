#ifndef CPP_H
#define CPP_H

#include <QObject>
#include <QDebug>
#include <QThread>

// Luokka määritelmä
class Luokka : public QObject {
    Q_OBJECT

public:
    explicit Luokka(QObject* vanhempi = nullptr);
    void aloitaOdotus();

signals:
    void valmisSanomaan();

public slots:
    void sanoHei();
};

#endif // CPP_H
