// Solución al Ejercicio 1
 public static int simpleArraySum(List<Integer> ar) {
  int sum=0;
for(int i=0; i<ar.size(); i++){
    sum+=ar.get(i);
}
return sum;


    }



//Solución al Ejercicio 2
public static List<Integer> compareTriplets(List<Integer> a, List<Integer> b) {
 List<Integer> result = new ArrayList<>();


        int resultadoBob = 0;
        int resultadoAlice = 0;



        for(int i = 0; i < 3; i++){
                  if (a.get(i) < b.get(i)){
                        resultadoBob +=1;}
                    if (a.get(i) > b.get(i)){
                        resultadoAlice +=1;
                  }

        }
                  result.add(resultadoAlice);
        result.add(resultadoBob);



    return result;
        }



//Solución al Ejercicio 3
public static int birthdayCakeCandles(List<Integer> candles) {
      int maximaAltura = 0;
      int numeroVelitas = 0;

      for(int i = 0; i < candles.size(); i++) {
        if(maximaAltura < candles.get(i)){
            maximaAltura = candles.get(i);
        }
      }
      for(int i = 0; i<candles.size(); i++){
        if(maximaAltura == candles.get(i)){
            numeroVelitas += 1;
        }
      }
      return numeroVelitas;
    }

 //Reyes López Dana Gisel :)