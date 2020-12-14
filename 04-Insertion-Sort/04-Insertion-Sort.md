[TOC]

# 1-Insertion-Sort

arr[0, i) 已排好序；arr[i...n) 未排序    
把arr[i]放到合适的位置   

![001InsertionSort.gif](./InsertionSortPics/001InsertionSort.gif)

插入排序和选择排序差别

![002InsertionSort.png](./InsertionSortPics/002InsertionSort.png)

# 2-Insertion-Sort-Optimized

插入排序的一个小优化

用swap函数，每次都要进行三次操作，可以直接增加一个变量记录当前元素，然后进行平移操作，这样就只有一次赋值操作。

![003InsertionSort.gif](./InsertionSortPics/003InsertionSort.gif)




