#ifndef EVENTO_H
#define EVENTO_H

#include <iostream>
using namespace std;

// En esta clase se guardan los datos de los eventos, asi como las peleas que se llevaron a cabo en el evento

class Evento{
    private:
        string lugar;
        string fecha;
        int seccion;

    public:
        //constructores
        Evento();
        Evento(string lugar, string fecha, int seccion);
        //getters
        string get_lugar(){return lugar;};
        string get_fecha(){return fecha;};
        int get_seccion(){return seccion;};
        //metodos
        virtual void mostrar();
        void muestra_espectadores();
        void muestra_peleas();
        void muestra_resultados();
        void crear_pelea();
};



Evento::Evento(){
    lugar = "Mauritania";
    fecha = "12/12/12";
    seccion = 5;
}

Evento::Evento(string lu, string fe, int se){
    lugar = lu;
    fecha = fe;
    seccion = se;
}

void Evento::mostrar(){
    cout << "Lugar: " << lugar << endl;
    cout << "Fecha: " << fecha << endl;
    cout << "Seccion: " << seccion << endl;
    
}

#endif