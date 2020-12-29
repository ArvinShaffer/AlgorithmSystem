import java.util.Arrays;

public class Sort {
    private Sort () { }

    public static void main(String[] args){
        int[] dataSize = {10000, 100000};
        for(int n: dataSize){
            System.out.println("Random Array : ");
            Integer[] arr = ArrayGenerator.generateRandomArray(n, n*2);
            Integer[] arr2 = Arrays.copyOf(arr, arr.length);
            SortingHelper.sortTest("InsertionSort", arr);
            SortingHelper.sortTest("SelectionSort", arr2);

            System.out.println();
            System.out.println("Ordered Array : ");
            arr = ArrayGenerator.generateOrderedArray(n);
            arr2 = Arrays.copyOf(arr, arr.length);
            SortingHelper.sortTest("InsertionSort", arr);
            SortingHelper.sortTest("SelectionSort", arr2);
            System.out.println();
        }
    }
}
