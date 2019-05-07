#ifndef PELICULAS_H_INCLUDED
#define PELICULAS_H_INCLUDED

typedef struct
{
    int id;
    char nombrePelicula[51];
    int genero;
    int isEmpty;
    int actores;
} ePeliculas;

typedef struct
{
    int id;
    char nombreActor[51];
    char pais[51];
    int isEmpty;
} eActor;

typedef struct
{
    int dia;
    int mes;
    int ano;
    int isEmpty;
} eFechaDeEstreno;

int indicesVacios(ePeliculas* pelicula, int limite, int* indiceVacio);
int chequearIndice(ePeliculas* pelicula, int limite);
int cargarDatosVacio(ePeliculas* pelicula, int limite);
int buscarPeliculaPorID(ePeliculas* pelicula, int limite, int id);
int altasDePelicula(ePeliculas* pelicula, int indice, int limite);
int modificarPelicula(ePeliculas* pelicula, int indice, int limite);
int bajasDePelicula(ePeliculas* pelicula, int indice, int limite);
int mostrarPeliculasOrdenadas(ePeliculas* pelicula, eActor* actor, eFechaDeEstreno* fecha, int limite);

int altasDeActor(eActor* actor, int indice, int limite);
int modificarActor(eActor* actor, int indice, int limite);
int ordenarActoresPorPais(eActor* actor, int limite);
int buscarActorPorId(eActor* actor, int limite, int id);

int altaFechaDeEstreno(eFechaDeEstreno* fecha, int indice, int limite);
int modificarFechaDeEstreno(eFechaDeEstreno* fecha, int indice, int limite);
int ordenarAnoDeEstreno(eFechaDeEstreno* fecha, int limite);

void hardcodearDatos(ePeliculas* pelicula, eActor* actor, eFechaDeEstreno* fecha, int limite);

#endif // PELICULAS_H_INCLUDED