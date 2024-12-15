#include <QCoreApplication>
#include "cpp.h"

int main(int argc, char *argv[]) {
    QCoreApplication sovellus(argc, argv);

    Luokka olio;
    olio.aloitaOdotus();

    return sovellus.exec();
}
