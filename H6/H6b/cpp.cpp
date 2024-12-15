#include "cpp.h"

// Konstruktorin toteutus
Luokka::Luokka(QObject* vanhempi) : QObject(vanhempi) {
    qDebug() << "Aloitetaan";
    connect(this, SIGNAL(valmisSanomaan()), this, SLOT(sanoHei()));
    qDebug() << "Lopetetaan";
}

// Metodi, joka laukaisee signaalin
void Luokka::aloitaOdotus() {
    QThread::msleep(1000); // 1 sekunnin viive
    emit valmisSanomaan();
}

// Slotti toteutus
void Luokka::sanoHei() {
    qDebug() << "Terve"; // Tulostus viesti
}
