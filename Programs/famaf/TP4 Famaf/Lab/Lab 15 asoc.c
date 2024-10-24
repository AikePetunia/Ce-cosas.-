#include <stdio.h>
#include <stdbool.h>

typedef char clave_t;
typedef int valor_t;

struct asoc {
    clave_t clave; // Es un caracter
    valor_t valor; // Es un numero entero
};

bool asoc_existe (int tam, struct asoc a[], clave_t c) { 
    // Verifica la existencia de la clave ingresada, mostrando si existe o no en el arreglo

    for (int i = 0; i < tam; i++) {
        if (a[i].clave == c) {
            printf("La clave '%c' existe en el arreglo.\n", c);
            return true;
        }
    }
    printf("La clave '%c' no existe en el arreglo.\n", c);
    return false;
}

int main (void) {
    int tam;
    struct asoc a[10];
    char clave;

    printf("Ingrese el tamaño del arreglo: \n");
    if (scanf("%d", &tam) != 1) {
        printf("Debe ingresarse un numero");
        return 1;
    }

    if (tam > 10 || tam < 1) {
        printf("Debe ingresar un tamaño no mayor a 10 y mayor a 1");
        return 1;
    }

    printf("Ingrese las claves y valores del arreglo: \n");
    for (int k = 0; k < tam ; k++) {
        printf("Elemento %d - Clave caracter: ", k);
        if(scanf(" %c", &a[k].clave) != 1) {
            printf("Debe ingresar un caracter\n");
            return 1;
        }
    }

    printf("Ingrese la clave a buscar en el arreglo: \n");
    if (scanf(" %c", &clave) != 1) {
        printf("Debe ingresar un caracter");
        return 1;
    }

    asoc_existe(tam, a, clave);

}
//La clave es un char. Un numero puedoe ser un char

// No se si se refiere a que busque literalmente en un arreglo que doy yo, o da el usuario, sinceramente.