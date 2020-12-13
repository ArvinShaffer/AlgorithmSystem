public class InsertionSort {
    private InsertionSort() { }

    public static <E extends Comparable<E>> void sort(E[] arr){
        for(int i = 0; i < arr.length; i ++){
            //将arr[i]插入到合适的位置
//            for(int j = i; j  > 0; j --){
//                if(arr[j].compareTo(arr[j - 1]) < 0)
//                {
//                    swap(arr, j, j - 1);
//                }
//                else break;
//            }
            for(int j = i; j > 0 && arr[j].compareTo(arr[j - 1]) < 0; j --){
                swap(arr, j, j - 1);
            }
        }
    }
    private static <E> void swap(E[] arr, int i, int j){
        E t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
}
