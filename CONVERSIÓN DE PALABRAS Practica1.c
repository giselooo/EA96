//
// Created by usuario on 08/01/2025.
//
#include <stdio.h>
int main() {
  float celciusToFahrenheit(float celcius);
  float fahrenheitToCelcius(float fahrenheit);
  float celciusToKelvin(float celcius);
  float validateInput();
  void displayMenu();
  float resultado;
  float celcius;
  float fahrenheit;

  {
    int opcion;

    do {
      printf("Hola, ¿En qué puedo ayudarte?\n");
      printf("1.Convertir grados celcius a Kelvin\n");
      printf("2.Convertir grados celcius a Fahrenheit\n");
      printf("3.Convertir grados Fahrenheit a Celcius\n");
      scanf("%d",&opcion);
      switch(opcion) {

        case 1:
          printf("Ingrese el valor de celcius: ");
        scanf("%f",&celcius);
        resultado = ((celcius*1.8)+32);
        printf("El valor en Fahrenheit es: %f",&celciusToFahrenheit);
        break;
      }
    }
  }
}

        case 2:fahrenheitToCelcius();
printf("Ingrese el valor de fahrenheit: ");
scanf("%f",&fahrenheit);
resultado = ((fahrenheit - 32)/1.8);
printf("El valor en Celcius es: %f",&fahrenheitToCelcius);

        break;

        case 3:celciusToKelvin();
        break;
      }
    }while(opcion!=3);

   /* float celciusToFahrenheit();
    {
      float celcius;
      printf("Ingrese el valor de celcius: ");
      scanf("%f",&celcius);
      resultado = ((celcius*1.8)+32);
      printf("El valor en Fahrenheit es: %f",celciusToFahrenheit);
*/


    }
    float fahrenheitToCelcius();
    {
      float fahrenheit;
      printf("Ingrese el valor de fahrenheit: ");
      scanf("%f",&fahrenheit);
      resultado = ((fahrenheit - 32)/1.8);
      printf("El valor en Celcius es: %f",fahrenheitToCelcius);

      float celciusToKelvin();
      {
        float celcius;
        printf("Ingrese el valor de celcius: ");
        scanf("%f",&celcius);
        resultado = (celcius + 273.15);


      }
      return 0;
    }
  }
}
