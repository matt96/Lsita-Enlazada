#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/// viene la prueba

typedef struct Alien_t
{
    char nombre[30];
    char especie;
    int id;
    struct Planeta_t *planetas;
    struct Idioma_t *idioma;
    struct Alien_t *siguiente;
}Alien;


typedef struct Planeta_t 
{
    char nombre[30];
    int star_wars_code;
    char agua;
    char oxigeno;
    struct Planeta_t *siguiente;
}Planeta;


typedef struct Idioma_t
{
    char nombre[30];
    int  simbolos;
    char tipo;
    struct Idioma_t *siguiente;
    struct Planeta_t *planeta;
}Idioma;



int main()
{
    Alien *lista_aliens=malloc(sizeof(Idioma));
    
    Planeta *lista_planetas = malloc(sizeof(Idioma));

    Idioma *lista_idiomas=malloc(sizeof(Idioma));
    
    //datos alien
    strcpy(lista_aliens->nombre,"Jorge");
    lista_aliens->especie='S';
    lista_aliens->id=123;
    lista_aliens->idioma=lista_idiomas;
    lista_aliens->planetas=lista_planetas;
    lista_aliens->siguiente=NULL;
    
    //Datos Planeta
    strcpy(lista_planetas->nombre,"EL Coloso X");
    lista_planetas->agua='S';
    lista_planetas->oxigeno='S';
    lista_planetas->star_wars_code=222;
    lista_planetas->siguiente=NULL;
    
    //Datos idioma
    strcpy(lista_idiomas->nombre,"EspañolX");
    lista_idiomas->simbolos=1000;
    lista_idiomas->tipo='R';
    lista_idiomas->siguiente=NULL;
    lista_idiomas->planeta=lista_planetas;
    
    printf("Datos de ALien\n");
    printf("nombre: %s",lista_aliens->nombre);
    printf("\nEspecie: %c",lista_aliens->especie);
    printf("\nID: %d",lista_aliens->id);
    printf("\nNombre planeta: %s",lista_aliens->planetas->nombre);
    printf("\nstar wars code: %d",lista_aliens->planetas->star_wars_code);
    printf("\ntiene oxigeno: %c",lista_aliens->planetas->oxigeno);
    printf("\ntiene agua: %c",lista_aliens->planetas->oxigeno);
    printf("\nidioma: %s",lista_aliens->idioma->nombre);
    printf("\ncantidad simbolos del idioma: %d",lista_aliens->idioma->simbolos);
    printf("\ntipo de idioma: %c",lista_aliens->idioma->tipo);
	
    return 0;
}
