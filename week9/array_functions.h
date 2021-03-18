#ifndef ARRAY_FUNCTIONS_H
#define ARRAY_FUNCTIONS_H

#include <iostream>
using namespace std;

//prints out a 1-D array, which exists on the stack
void print_1d_array_stack(int array[], int size) {
    cout << "Printing 1-D array on the stack!" << endl;
    for(int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
    cout << endl;
}

//prints out a 1-D array, which exists on the heap
void print_1d_array_heap(int* array, int size) {
    cout << "Printing 1-D array on the heap!" << endl;
    for(int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
    cout << endl;
}

//prints out a 2-D array, which exists on the stack
void print_2d_array_stack(int array[][5], int r, int c) {
    cout << "Printing 2-D array on the stack!" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            cout << array[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

//prints out a 2-D array, which exists on the heap
void print_2d_array_heap(int** array, int r, int c) {
    cout << "Printing 2-D array on the heap!" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            cout << array[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

//initialises a 2-D array on the stack
void create_2d_array_stack(int array[][5], int r, int c) {
    for(int i = 0; i < r; i++) 
        for(int j = 0; j < c; j++)
            array[i][j] = i;
}

//initialises a 2-D array on the heap
void create_2d_array_heap(int** array, int r, int c) {
    for(int i = 0; i < r; i++) {
        array[i] = new int[c];
        for(int j = 0; j < c; j++)
            array[i][j] = j;
    }    
}

//deletes a 2-D array from the heap
void delete_2d_array_heap(int** array, int r) {
    for(int i = 0; i < r; i++) 
        delete[] array[i];
    delete[] array;
}

#endif