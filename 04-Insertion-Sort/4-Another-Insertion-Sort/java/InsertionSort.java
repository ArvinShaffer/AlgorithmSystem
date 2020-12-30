public class InsertionSort {
    private InsertionSort() { }
/*
    public static <E extends Comparable<E>> void sort(E[] arr){
        for(int i = 0; i < arr.length; i ++){
            //将arr[i]插入到合适的位置
            E t = arr[i];
            int j;
            for(j = i; j > 0 && t.compareTo(arr[j - 1]) < 0; j--){
                arr[j] = arr[j - 1];
            }
            arr[j] = t;
        }
    }
    */
    public static <E extends Comparable<E>> void sort(E[] arr){
        for(int i = arr.length - 1; i > -1; i--){
            E t = arr[i];
            int j;
            for(j = i; j < arr.length - 1 && t.compareTo(arr[j + 1]) > 0; j++){
                arr[j] = arr[j + 1];
            }
            arr[j] = t;
        }
    }
}