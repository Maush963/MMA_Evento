
#ifndef MMA_EVENT_H
#define MMA_EVENT_H
#include "Personas.h"
#include "Evento.h"


#include <iostream>
using namespace std;


//En esta clase se guardan los datos de los peleadores, arbitros y jueces, asi como el resultado de la pelea y los puntos que se le otorgaron a cada peleador
class Peleas : public Evento{
    private: 
        Peleadores peleador [2];
        Arbitros *arb;
        Jueces juez [3];
        string resutlado;
        int puntos [2];
    
    public:
        //constructores
        Peleas();
        Peleas(Peleadores *peleador1, Peleadores *peleador2, Arbitros *arbi, Jueces *juez1, Jueces *juez2, Jueces *juez3, string resultado, int puntos1, int puntos2);
        //destructor    
        ~Peleas(); 
        //getters
        Peleadores get_peleador1(){return peleador[0];};
        Peleadores get_peleador2(){return peleador[1];};
        Arbitros* get_arbitro(){return arb;};
        Jueces get_juez1(){return juez[0];};
        Jueces get_juez2(){return juez[1];};
        Jueces get_juez3(){return juez[2];};
        string get_resultado(){return resutlado;};
        int get_puntos1(){return puntos[0];};
        int get_puntos2(){return puntos[1];};
        //metodos
        void mostrar();
        void agregar_pelea();
        
};
Peleas::~Peleas(){
    delete arb;
}

Peleas::Peleas(){
    peleador[0] = Peleadores();
    peleador[1] = Peleadores();
    arb = new Arbitros();
    juez[0] = Jueces();
    juez[1] = Jueces();
    juez[2] = Jueces();
    resutlado = "Empate";
    puntos[0] = 0;
    puntos[1] = 0;
}

Peleas::Peleas(Peleadores *peleador1, Peleadores *peleador2, Arbitros *arbi, Jueces *juez1, Jueces *juez2, Jueces *juez3, string resultado, int puntos1, int puntos2){
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


void Peleas::mostrar(){
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
