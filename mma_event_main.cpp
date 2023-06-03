#include <iostream>
#include "mma_event.h"
using namespace std;

int main() {
    // Crear objetos utilizando los constructores
    Peleadores *pel1 = new Peleadores("Gustavo", "Masculino", "Peleador", 25, 1.8, 80, "Peso Medio", "Southpaw", 10, 8, 2, 0);
    Peleadores *pel2 = new Peleadores("Lesnar", "Femenino", "Peleador", 28, 1.65, 60, "Peso Ligero", "Orthodox", 15, 10, 4, 1);
    
    Espectadores *esp1 = new Espectadores("Espectador 1", "Femenino", "Espectador", 30, "0056", 8, 2);
    Espectadores *esp2 = new Espectadores("Espectador 2", "Masculino", "Espectador", 40, "0057", 8, 3);
    
    Arbitros *arb1 = new Arbitros("Arbitro 1", "Masculino", "Arbitro", 35, "ARB181");

    Jueces *juez1 = new Jueces("Juez 1", "Masculino", "Juez", 45, "JUE157", 10, 8);
    Jueces *juez2 = new Jueces("Juez 2", "Femenino", "Juez", 50, "JUE369", 15, 10);
    Jueces *juez3 = new Jueces("Juez 3", "Masculino", "Juez", 45, "JUE148", 7, 11);

    // Crear pelea con los objetos creados
    Evento *pelea = new Peleas(pel1, pel2, arb1, juez1, juez2, juez3, "Ganador: Gustavo", 30, 27);
    
    // Mostrar la pelea
    pelea ->  mostrar();



    return 0;
}

