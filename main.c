#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int elegirTamanio();
int generarAleatorio(int min, int max);
void cargarVectorAleatorio(int v[], int tam);
void mostarVector(int v[], int tam);
void mostrarPosicionesPares(int v[], int tam);
int mayorMenoresNumero70(int v[], int tam);
int busquedaLineal(int v[], int tam,int loquebusco);



int main(){
    srand(time(0));

    int tam=elegirTamanio();
    int v[tam];
    cargarVectorAleatorio(v,tam);
    mostarVector(v,tam);

    mostrarPosicionesPares(v,tam);

    mayorMenoresNumero70(v,tam);

    busquedaLineal(v,tam,81);

    return 0;
}

int elegirTamanio(){
    int tamanio;
    do {
    printf("Ingrese un tamanio de 2 cifras entre 16 y 39: ");
    scanf("%d", &tamanio);
    } while(tamanio<16 || tamanio>39 || tamanio%3==0 || tamanio%7==0 || tamanio%11==0);
    return tamanio;
};

int generarAleatorio(int min, int max){

    return min + rand()%(max-min+1);
};

void cargarVectorAleatorio(int v[], int tam){

    for(int i=0; i<tam; i++){
        v[i]= 3*(generarAleatorio(4, 33));
    }
};

void mostarVector(int v[], int tam){
    printf("||");
    for(int i=0; i<tam; i++){
        printf(" %d ", v[i]);
    }
    printf("||");
};

void mostrarPosicionesPares(int v[], int tam){
    printf("\n");
    printf("||");
    for(int i=0; i<tam; i++){
        if(i%2==0){
            printf(" %d ", v[i]);
        }
    }
    printf("||");
};

int mayorMenoresNumero70(int v[], int tam){
    int mayor=-1;

    for(int i=0; i<tam; i++){
        if(v[i]<70 && v[i]>mayor){
            mayor=v[i];
        }
    }
    printf("\nEl mayor menor a 70 es: %d", mayor);
    return mayor;
};

int busquedaLineal(int v[], int tam,int loquebusco){
    int pos=-1;
    for(int i=0; i<tam;i++){
        if(v[i]==loquebusco){
            pos=i;
        }
    }
    printf("\nEl numero q busco es el 81: %d",pos);
    return pos;
};
