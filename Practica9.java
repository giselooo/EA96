int suma = Integer.MIN_VALUE; //inicializa la suma con el valor mas bajo posible

for (int i = 0; i <= 3; i++) { //recorre hasta la fila 3
for (int j = 0; j <= 3; j++) { //recorre hasta la columna 3

//calcula la suma del reloj de arena
int reloj = arr.get(i).get(j) + arr.get(i).get(j + 1) + arr.get(i).get(j + 2)//recorre la primera fila del reloj
+ arr.get(i + 1).get(j + 1) //recorre solo el digito de enmedio
+ arr.get(i + 2).get(j) + arr.get(i + 2).get(j + 1) + arr.get(i + 2).get(j + 2); //recorre la ultima fila del reloj 

if (reloj > suma) {//calcula el valor del reloj
        suma = reloj;

}

}

return suma;

}
