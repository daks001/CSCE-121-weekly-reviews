#include "array_functions.h"

int main() {
    //1-D array on the stack
    int array1[5];
    array1[0] = 100;
    array1[1] = 200;
    array1[2] = 300;
    array1[3] = 400;
    array1[4] = 500;
    print_1d_array_stack(array1, 5);

    //1-D array on the heap
    int* array1_heap = new int[5];
    array1_heap[0] = 600;
    array1_heap[1] = 700;
    array1_heap[2] = 800;
    array1_heap[3] = 900;
    array1_heap[4] = 1000;
    print_1d_array_heap(array1_heap, 5);
    delete[] array1_heap;

    //2-D array on the stack
    int array2[5][5];
    create_2d_array_stack(array2, 5, 5);
    print_2d_array_stack(array2, 5, 5);

    //2-D array on the heap
    int** array2_heap = new int*[5];
    create_2d_array_heap(array2_heap, 5, 5);
    print_2d_array_heap(array2_heap, 5, 5);
    delete_2d_array_heap(array2_heap, 5);
}