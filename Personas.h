#ifndef PERSONAS_H
#define PERSONAS_H

#include <iostream>
using namespace std;

class Persona {
private:
    string nombre;
    string genero;
    string rol;
    int edad;

public:
    //constructores
    Persona(); 
    Persona(string nom, string gen, string r, int ed);
    //getters
    string get_nombre(){return nombre;};
    string get_genero(){return genero;};
    string get_rol(){return rol;};
    int get_edad(){return edad;};

    //metodos
    virtual void mostrar() = 0;

};

Persona::Persona(){
    nombre = "Mauricio";
    genero = "Masculino";
    rol = "Persona";
    edad = 20;
}

Persona::Persona(string nom, string gen, string r, int ed){
    nombre = nom;
    genero = gen;
    rol = r;
    edad = ed;
}


class Espectador : public Persona{ 
    private:
        string numboleto;
        int seccion;
        string rol;
        int fila;

    public:
        //constructores
        Espectador();
        Espectador(string nom, string gen, string r, int ed, string num, int sec, int fi);

        //metodos
        void mostrar();
};

    Espectador::Espectador(){
        numboleto = "0000";
        seccion = 0;
        rol = "Espectador";
        fila = 0;
    }

    Espectador::Espectador(string nom, string gen, string r, int ed, string num, int sec, int fi) : Persona(nom, gen, r, ed){
        numboleto = num;
        seccion = sec;
        fila = fi;
    }
    

void Espectador :: mostrar (){
    cout << "Nombre: " << get_nombre() << endl;
    cout << "Genero: " << get_genero() << endl;
    cout << "Rol: " << get_rol() << endl;
    cout << "Edad: " << get_edad() << endl;
    cout << "Numero de boleto: " << numboleto << endl;
    cout << "Seccion: " << seccion << endl;
}


class Arbitro : public Persona{
    private:
        string tag;

    
    public:
        //constructores
        Arbitro(){
            tag = "ARB181";
        };

        Arbitro(string nom, string gen, string r, int ed, string num) : Persona(nom, gen, r, ed){
            tag = num;
        };

        //metodos
        void mostrar();
};

void Arbitro::mostrar(){
    cout << "Nombre: " << get_nombre() << endl;
    cout << "Genero: " << get_genero() << endl;
    cout << "Rol: " << get_rol() << endl;
    cout << "Edad: " << get_edad() << endl;
    cout << "Tag: " << tag << endl;
}


class Juez : public Persona{
    private:
        string tag;
        int puntos [2];
    public:
        //constructores
        Juez(){
            tag = "JUE157";
            puntos[0] = 8; 
            puntos[1] = 4;
        };
        Juez(string nom, string gen, string r, int ed, string num, int punt1, int punt2):Persona(nom, gen, r, ed){
            puntos[0] = punt1;
            puntos[1] = punt2;
            tag = num;
        };

        //metodos
        void mostrar();
};

void Juez :: mostrar (){
    cout << "Nombre: " << get_nombre() << endl;
    cout << "Genero: " << get_genero() << endl;
    cout << "Rol: " << get_rol() << endl;
    cout << "Edad: " << get_edad() << endl;
    cout << "Tag: " << tag << endl;
    cout << "Puntos del 1er peleador: "<< " " << puntos[0] << endl;
    cout << "Puntos del 2do peleador: " << " " << puntos[1] << endl;
}


class Peleador : public Persona{
    private:
        float altura;
        float peso;
        string categoria;
        string postura;
        int peleas;
        int victorias;
        int derrotas;
        int empates;
        string rol;
    public:
        //constructores
        Peleador();

        Peleador(string nom, string gen, string r, int ed, float alt, float pes, string cat, string pos, int pel, int vic, int der, int emp);
        
        //metodos
        void mostrar();
};
Peleador::Peleador(){
            altura = 1.80;
            peso = 80;
            categoria = "Peso Medio";
            postura = "Southpaw";
            peleas = 10;
            victorias = 8;
            derrotas = 2;
            empates = 0;
            rol = "Peleador";
        };
Peleador ::Peleador(string nom, string gen, string r, int ed, float alt, float pes, string cat, string pos, int pel, int vic, int der, int emp) : Persona(nom, gen, r, ed){
            rol = r;
            altura = alt;
            peso = pes;
            categoria = cat;
            postura = pos;
            peleas = pel;
            victorias = vic;
            derrotas = der;
            empates = emp;
        };

void Peleador::mostrar(){
    cout << "Nombre: " << get_nombre() << endl;
    cout << "Genero: " << get_genero() << endl;
    cout << "Rol: " << get_rol() << endl;
    cout << "Edad: " << get_edad() << endl;
    cout << "Altura: " << altura << endl;
    cout << "Peso: " << peso << endl;
    cout << "Categoria: " << categoria << endl;
    cout << "Postura: " << postura << endl;
    cout << "Peleas: " << peleas << endl;
    cout << "Victorias: " << victorias << endl;
    cout << "Derrotas: " << derrotas << endl;
    cout << "Empates: " << empates << endl;
    cout << "Porcentaje de Victorias: " << (victorias*100)/peleas << "%" << endl;
};

#endif