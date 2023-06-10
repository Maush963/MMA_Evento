#ifndef PERSONAS_H
#define PERSONAS_H

#include <iostream>
using namespace std;

class Personas {
private:
    string nombre;
    string genero;
    string rol;
    int edad;

public:
    //constructores
    Personas(); 
    Personas(string nom, string gen, string r, int ed);
    //getters
    string get_nombre(){return nombre;};
    string get_genero(){return genero;};
    string get_rol(){return rol;};
    int get_edad(){return edad;};

    //setters
    void set_nombre(string nom){nombre = nom;};
    void set_genero(string gen){genero = gen;};
    void set_rol(string r){rol = r;};
    void set_edad(int ed){edad = ed;};

    //metodos
    virtual void mostrar() = 0;

};

Personas::Personas(){
    nombre = "Mauricio";
    genero = "Masculino";
    rol = "Persona";
    edad = 20;
}

Personas::Personas(string nom, string gen, string r, int ed){
    nombre = nom;
    genero = gen;
    rol = r;
    edad = ed;
}

void Personas::mostrar(){
    cout << "Nombre: " << nombre << endl;
    cout << "Genero: " << genero << endl;
    cout << "Rol: " << rol << endl;
    cout << "Edad: " << edad << endl;
}

class Espectadores : public Personas{ 
    private:
        string numboleto;
        int seccion;
        string rol;
        int fila;

    public:
        //constructores
        Espectadores();
        Espectadores(string nom, string gen, string r, int ed, string num, int sec, int fi);
        //getters
        string get_numboleto(){return numboleto;};
        int get_seccion(){return seccion;};
        string get_rol(){return rol;};

        //metodos
        void mostrar();
};

    Espectadores::Espectadores(){
        numboleto = "0000";
        seccion = 0;
        rol = "Espectador";
        fila = 0;
    }

    Espectadores::Espectadores(string nom, string gen, string r, int ed, string num, int sec, int fi) : Personas(nom, gen, r, ed){
        numboleto = num;
        seccion = sec;
        fila = fi;
    }
    

void Espectadores :: mostrar (){
    cout << "Nombre: " << get_nombre() << endl;
    cout << "Genero: " << get_genero() << endl;
    cout << "Rol: " << get_rol() << endl;
    cout << "Edad: " << get_edad() << endl;
    cout << "Numero de boleto: " << numboleto << endl;
    cout << "Seccion: " << seccion << endl;
}

class Arbitros : public Personas{
    private:
        string tag;

    
    public:
        //constructores
        Arbitros(){
            tag = "ARB181";
        };

        Arbitros(string nom, string gen, string r, int ed, string num) : Personas(nom, gen, r, ed){
            tag = num;
        };
        //getters
        string get_tag(){return tag;};
    
        //metodos
        void mostrar();
};

void Arbitros::mostrar(){
    cout << "Nombre: " << get_nombre() << endl;
    cout << "Genero: " << get_genero() << endl;
    cout << "Rol: " << get_rol() << endl;
    cout << "Edad: " << get_edad() << endl;
    cout << "Tag: " << tag << endl;
}


class Jueces : public Personas{
    private:
        string tag;
        string rol;
        int puntos [2];
    public:
        //constructores
        Jueces(){
            tag = "JUE157";
            rol = "Juez";
            puntos[0] = 8; 
            puntos[1] = 4;
        };
        Jueces(string nom, string gen, string r, int ed, string num, int punt1, int punt2):Personas(nom, gen, r, ed){
            puntos[0] = punt1;
            puntos[1] = punt2;
            rol = r;
            tag = num;
        };
        //getters
        string get_tag(){return tag;};
        string get_rol(){return rol;};
        int get_puntos(int i){return puntos[i];};

        //metodos
        void mostrar();
};

void Jueces :: mostrar (){
    cout << "Nombre: " << get_nombre() << endl;
    cout << "Genero: " << get_genero() << endl;
    cout << "Rol: " << get_rol() << endl;
    cout << "Edad: " << get_edad() << endl;
    cout << "Tag: " << tag << endl;
    cout << "Puntos del 1er peleador: "<< " " << puntos[0] << endl;
    cout << "Puntos del 2do peleador: " << " " << puntos[1] << endl;
}


class Peleadores : public Personas{
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
        Peleadores();

        Peleadores(string nom, string gen, string r, int ed, float alt, float pes, string cat, string pos, int pel, int vic, int der, int emp);
        
        //getters
        float get_altura(){return altura;};
        float get_peso(){return peso;};
        string get_categoria(){return categoria;};
        string get_postura(){return postura;};
        int get_peleas(){return peleas;};
        int get_victorias(){return victorias;};
        int get_derrotas(){return derrotas;};
        int get_empates(){return empates;};
        string get_rol(){return rol;};
        

        //metodos
        void mostrar();
};
Peleadores::Peleadores(){
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
Peleadores ::Peleadores(string nom, string gen, string r, int ed, float alt, float pes, string cat, string pos, int pel, int vic, int der, int emp) : Personas(nom, gen, r, ed){
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

void Peleadores::mostrar(){
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