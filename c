#include <stdio.h>

//CODIGO DE NICOLE MARTINEZ
//CODIGO INDIVIDUAL: https://github.com/nicmartinezz
//CODIGO GRUPAL (lider:Nicole Stefania Martinez):                   



// Conversión de metros a centímetros y viceversa
double metros_a_cm(double metros) {
    return metros * 100;
}

double cm_a_metros(double centimetros) {
    return centimetros / 100;
}

// Repetir texto X veces
void repetir(const char* texto, int veces) {
    for (int i = 0; i < veces; i++) {
        printf("%s\n", texto);
    }
}

// Mostrar un texto dentro de un cartel delimitado
void cartel(const char* texto, int veces) {
    printf("----------------------------\n");
    repetir(texto, veces);
    printf("----------------------------\n");
}

// Procedimiento para imprimir una línea de caracteres
void linea(char simbolo) {
    for (int i = 0; i < 20; i++) {
        putchar(simbolo);
    }
    putchar('\n');
}

int main() {
    // Repetición de texto
    repetir("Juan", 3);
    repetir("Pepe", 2);

    // Cartel
    cartel("Maria", 5);

    // Conversión de metros a centímetros
    double metros = 2;
    double resultado_cm = metros_a_cm(metros);
    printf("%.0f metros son %.0f centímetros.\n", metros, resultado_cm);

    // Línea de caracteres T
    linea('T');

    // Conversión a centímetros desde 0
    resultado_cm = cm_a_metros(0);
    printf("%.0f metros son %.0f centímetros.\n", metros, resultado_cm);

    // Línea de caracteres $
    linea('$');

    // Cartel con texto "Marcos"
    cartel("Marcos", 4);

    return 0;
}
