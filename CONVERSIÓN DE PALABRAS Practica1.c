//
// Created by usuario on 08/01/2025.
//
#include <stdio.h>

float celciusToFahrenheit(float celcius);
float fahrenheitToCelcius(float fahrenheit);
float celciusToKelvin(float celcius);
float validateInput();

int main() {
    int opcion;
    float resultado, valor;

  
    printf("\nBienvenido al programa de conversión de temperaturas\n");
    printf("1. Convertir grados Celsius a Kelvin\n");
    printf("2. Convertir grados Celsius a Fahrenheit\n");
    printf("3. Convertir grados Fahrenheit a Celsius\n");
    printf("4. Salir\n");

    do {
        printf("\nSeleccione una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("Ingrese el valor en Celsius: ");
                valor = validateInput();
                resultado = celciusToKelvin(valor);
                printf("El valor en Kelvin es: %.2f\n", resultado);
                break;

            case 2:
                printf("Ingrese el valor en Celsius: ");
                valor = validateInput();
                resultado = celciusToFahrenheit(valor);
                printf("El valor en Fahrenheit es: %.2f\n", resultado);
                break;

            case 3:
                printf("Ingrese el valor en Fahrenheit: ");
                valor = validateInput();
                resultado = fahrenheitToCelcius(valor);
                printf("El valor en Celsius es: %.2f\n", resultado);
                break;

            case 4:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opción no válida. Intente nuevamente.\n");
                break;
        }
    } while(opcion != 4);

    return 0;
}

float celciusToFahrenheit(float celcius) {
    return (celcius * 9.0 / 5.0) + 32;
}


float fahrenheitToCelcius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}


float celciusToKelvin(float celcius) {
    return celcius + 273.15;
}


float validateInput() {
    float valor;
    while(1) {
        if(scanf("%f", &valor) != 1) {
            printf("Entrada inválida. Intente nuevamente: ");
            while(getchar() != '\n'); // Limpiar el buffer
        } else if(valor < -273.15) {
            printf("El valor no puede ser menor a -273.15. Intente nuevamente: ");
        } else {
            return valor;
        }
    }
}

