#ifndef PERSONAS_H
#define PERSONAS_H

#include <iostream>
#include <string>

using namespace std;

/*******************************
Mauricio Salas Hernández
A01710309
Programación Orientada a Objetos
Proyecto Final
Benjamin Valdes Aguirre
*******************************/


/****************************************************
clase padre de la que heredan las clases arbitro, 
juez y peleador se utiliza como base para crear los 
objetos que se usaran en la pelea
****************************************************/

class Persona {
protected:
    string nombre;
    string genero;
    string rol;
    int edad;

public:
    //constructores
    Persona(); 
    Persona(string nom, string gen, string r, int ed);

    //setters
    void set_nombre(string nom){nombre = nom;};
    void set_genero(string gen){genero = gen;};
    void set_rol(string r){rol = r;};
    void set_edad(int ed){edad = ed;};

    //getters
    string get_nombre(){return nombre;};
    string get_genero(){return genero;};
    string get_rol(){return rol;};
    int get_edad(){return edad;};
    
    //metodo virtual
    virtual void mostrar() = 0;

};

/************************************************
Constructor en el que se genera contenido por 
default para la clase Persona y sus clases hijas
***********************************************/

Persona::Persona(){
    nombre = "Mauricio";
    genero = "Masculino";
    rol = "Persona";
    edad = 20;
}

/************************************************
Constructor en el que se genera contenido que el
usuario ingresa para los parametros de la clase
***********************************************/
Persona::Persona(string nom, string gen, string r, int ed){
    nombre = nom;
    genero = gen;
    rol = r;
    edad = ed;
}

/************************************************
Clase hija de la clase Persona, se utiliza para
crear los arbitros que se usaran en la pelea
***********************************************/

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

/************************************************
Arbitro::mostrar se utiliza para mostrar los datos
de los arbitros que se usaran en la pelea.
@param :
@return :
***********************************************/

void Arbitro::mostrar(){
    cout << "Nombre: " << get_nombre() << endl;
    cout << "Genero: " << get_genero() << endl;
    cout << "Rol: " << get_rol() << endl;
    cout << "Edad: " << get_edad() << endl;
    cout << "Tag: " << tag << endl;
}


/************************************************
Clase Juez que hereda de la clase Persona, se utiliza
para crear los jueces que se usaran en la pelea
***********************************************/

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

/************************************************
 * Juez::mostrar se utiliza para mostrar los datos
 * de los jueces que se usaran en la pelea.
 * @param : 
 * @return :
*************************************************/
void Juez :: mostrar (){
    cout << "Nombre: " << get_nombre() << endl;
    cout << "Genero: " << get_genero() << endl;
    cout << "Rol: " << get_rol() << endl;
    cout << "Edad: " << get_edad() << endl;
    cout << "Tag: " << tag << endl;
    cout << "Puntos del 1er peleador: "<< " " << puntos[0] << endl;
    cout << "Puntos del 2do peleador: " << " " << puntos[1] << endl;
}

/************************************************
Clase Peleador que hereda de la clase Persona, se utiliza
para crear los peleadores que se usaran en la pelea
***********************************************/
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
/************************************************
Constructor en el que se genera contenido por
default para la clase Peleador 
***********************************************/
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

/************************************************
 * Constructor en el que se genera contenido que el
 * usuario ingresa para los parametros de la clase
 * Peleador
*************************************************/
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

/************************************************
 * Peleador::crearpeleador se utiliza para crear los
 * peleadores que se usaran en la pelea.
 * Se le pide al usuario que ingrese los datos del
 * peleador.
 * @param :
 * @return :
*************************************************/
void Peleador::mostrar(){
    cout << "Nombre (string): ";
    string nombre;
    cin >> nombre;
    set_nombre(nombre);
    cout << "Genero (string): ";
    string genero;
    cin >> genero;
    set_genero(genero);
    rol="Peleador";
    set_rol(rol);
    cout << "Edad (int): ";
    int edad;
    cin >> edad;
    set_edad(edad);
    cout << "Altura (float): ";
    cin >> altura;
    cout << "Peso (float): ";
    cin >> peso;
    cout << "Categoria (string): ";
    cin >> categoria;
    cout << "Postura (string): ";
    cin >> postura;
    cout << "Peleas (int): ";
    cin >> peleas;
    cout << "Victorias (int): ";
    cin >> victorias;
    cout << "Derrotas (int): ";
    cin >> derrotas;
    cout << "Empates (int): ";
    cin >> empates;
    cout << "Porcentaje de Victorias: " << (victorias*100)/peleas << "%" << endl;
    cout << endl;
    cout << endl;
}


#endif