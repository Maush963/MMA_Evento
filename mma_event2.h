
#ifndef MMA_EVENT_H
#define MMA_EVENT_H
#include "Personas.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*******************************
Mauricio Salas Hernández
A01710309
Programación Orientada a Objetos
Proyecto Final
Benjamin Valdes Aguirre
******************************/


/********************************************************************************
 
En esta clase se guardan los datos de los peleadores, arbitros y jueces, 
asi como el resultado de la pelea y los puntos que se le otorgaron a cada peleador

********************************************************************************/

class Pelea {
    private: 
        Persona *persona[100];
        string resultado;
        int puntosf [2];
        int puntosj [6];

    
    public:
        //metodos
        void hacerpelea();
        
};



/**************************************************************************************************

Con esta funcion se crean los peleadores con parametros hechos por el usuario, se asignan los puntos, 
se determina el ganador, se crean los jueces y el arbitro con parametros establecidos previamente.
@param:
@return:

***************************************************************************************************/

void Pelea::hacerpelea(){
    //el usuario hace sus propios peleadores
    persona [0] = new Peleador();
    persona [1] = new Peleador();

    //el usuario hace sus propios arbitros
    persona [2] = new Arbitro("Carlos", "Masculino", "Arbitro", 20, "A3381");

    //generar una secuencia diferente cada vez que se ejecuta el programa para los puntos de los jueces
    srand(time(NULL));

     //se generan los puntos de los jueces
    puntosj[0] = rand() % 20;
    puntosj[1] = rand() % 20;
    puntosj[2] = rand() % 20;
    puntosj[3] = rand() % 20;
    puntosj[4] = rand() % 20;
    puntosj[5] = rand() % 20;

    //el usuario hace sus propios jueces
    persona [3] = new Juez("Pepe", "Masculino", "Juez", 20, "J3381", puntosj[0], puntosj[1]);
    persona [4] = new Juez("Pablo", "Masculino", "Juez", 20, "J3382", puntosj[2], puntosj[3]);
    persona [5] = new Juez("Paco", "Masculino", "Juez", 20, "J3383", puntosj[4],puntosj[5] );

    //se imprime la pelea
    cout << "Peleador 1: " << endl;
    ((Peleador*)persona[0])->mostrar();
    cout << "Peleador 2: " << endl;
    ((Peleador*)persona[1])->mostrar();
    cout << "Arbitro: " << endl;
    ((Arbitro*)persona[2])->mostrar();
    cout << "Juez 1: " << endl;
    ((Juez*)persona[3])->mostrar();
    cout << "Juez 2: " << endl;
    ((Juez*)persona[4])->mostrar();
    cout << "Juez 3: " << endl;
    ((Juez*)persona[5])->mostrar();

    //se le asignan los puntos a cada peleador
    puntosf[0] = puntosj[0] + puntosj[2] + puntosj[4];
    puntosf[1] = puntosj[1] + puntosj[3] + puntosj[5];
    
    //se determina el ganador
    if (puntosf[0] > puntosf[1]){
        resultado = "Ganador: " + (persona[0])->get_nombre();
    }
    else if (puntosf[0] < puntosf[1]){
        resultado = "Ganador: " + (persona[1])->get_nombre();
    }
    else if (puntosf[0] == puntosf[1]){
        resultado = "Empate";
    }
    
    //ganador de la pelea
    cout << "Resultado: " << resultado << endl;
    cout << "Puntos del peleador 1: " << puntosf[0] << endl;
    cout << "Puntos del peleador 2: " << puntosf[1] << endl;

}

#endif
