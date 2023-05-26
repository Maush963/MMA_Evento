#include <iostream>
#include "mma_event.h"
using namespace std;

int main() {
    // Crear objetos utilizando los constructores
    Peleadores peleador1("Gustavo", "Masculino", "Peleador", 25, 1.8, 80, "Peso Medio", "Southpaw", 10, 8, 2, 0);
    Peleadores peleador2("Lesnar", "Femenino", "Peleador", 28, 1.65, 60, "Peso Ligero", "Orthodox", 15, 10, 4, 1);

    Espectadores espectador1("Espectador 1", "Femenino", "Espectador", 30, "0056", 8, 2);
    Espectadores espectador2("Espectador 2", "Masculino", "Espectador", 40, "0057", 8, 3);

    Arbitros arbitro1("Arbitro 1", "Masculino", "Arbitro", 35, "ARB181");
    Arbitros arbitro2("Arbitro 2", "Femenino", "Arbitro", 40, "ARB257");

    Jueces juez1("Juez 1", "Masculino", "Juez", 45, "JUE157", 10, 8);
    Jueces juez2("Juez 2", "Femenino", "Juez", 50, "JUE369", 15, 10);
    Jueces juez3("Juez 3", "Masculino", "Juez", 45, "JUE148", 7, 11);
    // Crear pelea con los objetos creados
    Peleas pelea1(peleador1, peleador2, arbitro1, juez1, juez2, juez3, "Ganador: Gustavo", 30, 27);

    // Mostrar la pelea
    pelea1.mostrar();


    return 0;
}

