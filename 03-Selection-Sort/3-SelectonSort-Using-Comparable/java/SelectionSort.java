public class SelectionSort {
    private SelectionSort() {}
    public static <E extends Comparable<E>> void sort(E[] arr){
        for(int i = 0; i < arr.length; i ++){
            // 选择 arr[i...n)中的最小值的索引
            int minIndex = i;
            for(int j = i; j < arr.length; j ++){
                if(arr[j].compareTo(arr[minIndex]) < 0){
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
        Integer[] arr = {1, 4, 2, 3, 6, 5};
        SelectionSort.sort(arr);
        for(int e: arr){
            System.out.print(e + " ");
        }
        System.out.println();
        Student[] students = {new Student("Alice", 98),
                new Student("Bobo", 100),
                new Student("Arvin", 66),
                new Student("Charles", 87),
                new Student("Bill", 56)};
        SelectionSort.sort(students);
        for(Student stu: students){
            System.out.println(stu + "; ");
        }
        System.out.println();
    }
}
