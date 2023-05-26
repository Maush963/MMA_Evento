
#ifndef mma_event_h
#define mma_event_h

#include <iostream>

using namespace std;


class Personas
{
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
    void mostrar();
    
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
        Espectadores(){
            rol = "Espectador";
            numboleto = "0043";
            seccion = 5;
            fila = 3;
            }


        Espectadores(string nom, string gen, string r, int ed, string num, int sec, int fi) : Personas(nom, gen, r, ed) {
        numboleto = num;
        seccion = sec;
        fila = fi;
        };

        //getters
        string get_numboleto(){return numboleto;};
        int get_seccion(){return seccion;};
        string get_rol(){return rol;};

        //metodos
        void mostrar();
};

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
        string rol;
    
    public:
        //constructores
        Arbitros(){
            tag = "ARB181";
            rol = "Arbitro";

        };
        Arbitros(string nom, string gen, string r, int ed, string t) : Personas(nom, gen, r, ed){
            tag = t;
        };
        //getters
        string get_tag(){return tag;};
        string get_rol(){return rol;};
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

class Camaras : public Personas{
    private:
        string tag;
        string rol;
        int angulo;
    public:
        //constructores
        Camaras(){
            tag = "CAM001";
            rol = "Camara";
            angulo = 45;
        };
        Camaras(string nom, string gen, string r, int ed, string num, int ang):Personas(nom, gen, r, ed){
            tag = num;
            angulo = ang;
            rol = r;
        };
        //getters
        string get_tag(){return tag;};
        string get_rol(){return rol;};
        int get_angulo(){return angulo;};
        //metodos
        void mostrar();
};
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
        Peleadores(){
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

        Peleadores(string nom, string gen, string r, int ed, float alt, float pes, string cat, string pos, int pel, int vic, int der, int emp) : Personas(nom, gen, r, ed){
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

//En esta clase se guardan los datos de los peleadores, arbitros y jueces, asi como el resultado de la pelea y los puntos que se le otorgaron a cada peleador
class Peleas{
    private: 
        Peleadores peleador [2];
        Arbitros arbitro;
        Jueces juez [3];
        string resutlado;
        int puntos [2];
    
    public:
        //constructores
        Peleas();
        Peleas(Peleadores peleador1, Peleadores peleador2, Arbitros arbitro, Jueces juez1, Jueces juez2, Jueces juez3, string resultado, int puntos1, int puntos2);
        //getters
        Peleadores get_peleador1(){return peleador[0];};
        Peleadores get_peleador2(){return peleador[1];};
        Arbitros get_arbitro(){return arbitro;};
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

Peleas::Peleas(){
    peleador[0] = Peleadores();
    peleador[1] = Peleadores();
    arbitro = Arbitros();
    juez[0] = Jueces();
    juez[1] = Jueces();
    juez[2] = Jueces();
    resutlado = "Empate";
    puntos[0] = 0;
    puntos[1] = 0;
}

Peleas::Peleas(Peleadores peleador1, Peleadores peleador2, Arbitros arbitro, Jueces juez1, Jueces juez2, Jueces juez3, string resultado, int puntos1, int puntos2){
    peleador[0] = peleador1;
    peleador[1] = peleador2;
    arbitro = arbitro;
    juez[0] = juez1;
    juez[1] = juez2;
    juez[2] = juez3;
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
    arbitro.mostrar();
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

// En esta clase se guardan los datos de los eventos, asi como las peleas que se llevaron a cabo en el evento
class Evento{
    private:
        string lugar;
        string fecha;
        int seccion;
        Peleas pelea [2];

    public:
        //constructores
        Evento();
        Evento(string lugar, string fecha, int seccion);
        //getters
        string get_lugar(){return lugar;};
        string get_fecha(){return fecha;};
        int get_seccion(){return seccion;};
        //metodos
        void mostrar();
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
    for (int i = 0; i < 10; i++){
        pelea[i].mostrar();
    }

}




#endif
