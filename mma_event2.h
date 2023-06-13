
#ifndef MMA_EVENT_H
#define MMA_EVENT_H
#include "Personas.h"
#include <iostream>
using namespace std;


//En esta clase se guardan los datos de los peleadores, arbitros y jueces, asi como el resultado de la pelea y los puntos que se le otorgaron a cada peleador
class Pelea {
    private: 
        Peleador peleador [2];
        Arbitro *arb;
        Juez juez [3];
        string resutlado;
        int puntos [2];
    
    public:
        //constructores
        Pelea();
        Pelea(Peleador *peleador1, Peleador *peleador2, Arbitro *arbi, Juez *juez1, Juez *juez2, Juez *juez3, string resultado, int puntos1, int puntos2);
        //destructor
        ~Pelea(); 
        //metodos
        void imprimir();

};
Pelea::~Pelea(){
    delete arb;
}

Pelea::Pelea(){
    peleador[0] = Peleador();
    peleador[1] = Peleador();
    arb = new Arbitro();
    juez[0] = Juez();
    juez[1] = Juez();
    juez[2] = Juez();
    resutlado = "Empate";
    puntos[0] = 0;
    puntos[1] = 0;
}

Pelea::Pelea(Peleador *peleador1, Peleador *peleador2, Arbitro *arbi, Juez *juez1, Juez *juez2, Juez *juez3, string resultado, int puntos1, int puntos2){
    peleador[0] = *peleador1;
    peleador[1] = *peleador2;
    arb = arbi;

    juez[0] = *juez1;
    juez[1] = *juez2;
    juez[2] = *juez3;
    resutlado = resultado;
    puntos[0] = puntos1;
    puntos[1] = puntos2;
}


void Pelea::imprimir(){
    cout << "Peleador 1: " << endl;
    peleador[0].mostrar();
    cout << "Peleador 2: " << endl;
    peleador[1].mostrar();
    cout << "Arbitro: " << endl;
    arb->mostrar();
    cout << "Juez 1: " << endl;
    juez[0].mostrar();
    cout << "Juez 2: " << endl;
    juez[1].mostrar();
    cout << "Juez 3: " << endl;
    juez[2].mostrar();
    cout << "Resultado: " << resutlado << endl;
    cout << "Puntos totales de "<< peleador[0].get_nombre() << ": " << puntos[0] << endl;
    cout << "Puntos totales de " << peleador[1].get_nombre() << ": " << puntos[1] << endl;
}


#endif
