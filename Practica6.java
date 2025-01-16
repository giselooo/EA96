 public static List<Integer> rotateLeft(int d, List<Integer> arr) {
    int n = arr.size();
    d = d % n;

    List<Integer> rotatedArray = new ArrayList<>();
    for (int i = d; i < n; i++) {
        rotatedArray.add(arr.get(i));
    }
    for (int i = 0; i < d; i++) {
        rotatedArray.add(arr.get(i));
    }

    return rotatedArray;
}

    }