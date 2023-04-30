//Defina la función copyString que recibe un puntero, que apuntará a una cadena de
//caracteres. Al ejecutarse la función, la misma deberá retornar una copia, en una
//nueva porción de memoria.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void copyString( char* Ptr) {
    char *copy = malloc(sizeof(Ptr)); //Asigno memroria a copy del tamaño de Ptr
    {
        strcpy(copy, Ptr); // Copiar la cadena original en la nueva porción de memoria

        if (copy == NULL) { //si copy esta vacia no se puede copiar
            printf("No se pudo copiar la cadena.");

        }
        printf("La cadena original es: %s\n", Ptr);
        printf("La cadena copiada es: %s\n", copy);
    }
}


int main() {
    char* original = "prueba";
    copyString(original);

    return 0;
}