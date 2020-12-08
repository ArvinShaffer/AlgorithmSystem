public class SelectionSort {
    private SelectionSort() {}
    public static <E extends Comparable<E>> void sort(E[] arr){
        for(int i = arr.length - 1; i >= 0; i --){
            // 选择 arr[i...n)中的最小值的索引
            int minIndex = i;
            for(int j = i; j >= 0 ; j --){
                if(arr[j].compareTo(arr[minIndex]) > 0){
                    minIndex = j;
                }
            }
            swap(arr, i, minIndex);
        }
    }
    private static <E> void swap(E[] arr, int i, int j){
        E t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
    public static void main(String[] args){
        int[] dataSize = {10000, 100000};
        for(int n: dataSize){
            Integer[] arr = ArrayGenerator.generateRandomArray(n, n*2);
            SortingHelper.sortTest("SelectionSort", arr);
        }
        //int n = 10000;
        //Integer[] arr = ArrayGenerator.generateRandomArray(n, n*2);
        //SortingHelper.sortTest("SelectionSort", arr);
        /*
        long startTime = System.nanoTime();
        SelectionSort.sort(arr);
        long endTime = System.nanoTime();

        double time = (endTime - startTime) / 1000000000.0;
        if(!SortingHelper.isSorted(arr)){
            throw new RuntimeException("SelectionSort failed!");
        }
        System.out.println(time + "s");
         */
    }
}
