#include <iostream>
#include "QuickSort.hpp"
using namespace std;

void print_array(float A[], int length) {
        for(int i = 0; i < length; i++){
                cout<<A[i]<<" ";
        }
        cout<<endl;
}

void swap(float* a, float* b) {
        float t = *a;
        *a = *b;
        *b = t;
}

int Partition(float A[], int start, int end){
        float pivot = A[end];
        int i = start - 1;
        for(int j = start; j <= end - 1; j++) {
                if(A[j] <= pivot) {
                        i++;
                        swap(&A[i], &A[j]);
                }
        }
        swap(&A[i + 1], &A[end]);
        return (i + 1);
}

void QuickSort(float A[], int start, int end){
        if(start<end) {
                int q = Partition(A,start,end);
                print_array(A,end);
                QuickSort(A, start, q - 1);
                QuickSort(A, q + 1, end);
        }
}
