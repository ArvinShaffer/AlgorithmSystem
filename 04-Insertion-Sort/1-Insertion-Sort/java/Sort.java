public class Sort {
    private Sort () { }

    public static void main(String[] args){
        int[] dataSize = {10000, 100000};
        for(int n: dataSize){
            Integer[] arr = ArrayGenerator.generateRandomArray(n, n*2);
            SortingHelper.sortTest("InsertionSort", arr);
        }
    }
}
