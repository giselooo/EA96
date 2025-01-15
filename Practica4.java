 public static List<Integer> reverseArray(List<Integer> a) {
       List result = new ArrayList<>();

       for (int i = a.size() - 1; i>= 0; i--){
        result.add(a.get(i));

       }
       return result;
}

    }