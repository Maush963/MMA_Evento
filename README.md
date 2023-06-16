# Evento de MMA
#### Proyecto - TC1030.301
#### Profesor: Benjamín Valdés Aguirre
#### Nombre: Mauricio Salas Hernández
#### Matrícula: A01710309

## Contexto del Proyecto
En este programa se simula una pelea de MMA, en la que se tienen dos peleadores, tres jueces y un árbitro.
Puedes crear tus peleadores con diferentes cualidades, las características de los peleadores *no repercuten* en el peleador victorioso.
Solo se pueden crear peleadores, los jueces y el albritro siempre van a ser los mismos.

Cada uno de los jueces asignan puntos (*son generados al azar*) a los peleadores, cada uno puede dar un **máximo de 20 pts.**
Los puntos se suman y se da el resultado final, puede haber ***victoria, derrota o empate.***


### Restricciones/Consideraciones
- No se pueden crear varias peleas, se tiene que volver a correr el código para que se pueda generar otra pelea.
- No se están usando getlines, por lo que los strings solo reciben palabras sin espacio.
- Al momento de poner las peleas, victorias, derrotas y empates tiene que tener sentido para que el porcentaje de victoria también lo haga.
- No existen validaciones del tipo de dato, sin embargo, si se comete un error de dedo sigue corriendo. (exceptuando peleas y victorias)


### Correciones
* No se habían incluido consideraciones en el proyecto, estas ya han sido implementadas.
* No existía polimorfismo dentro del proyecto. Ahora ya esta implementado, esto se puede ver específicamente en las siguientes líneas de código:
#### Archivo "mma_event2.h"
     (53:87) 
  *dentro de la función hacerpelea()*

               (╯°□°）╯︵ ┻━┻
