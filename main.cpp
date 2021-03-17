#include <iostream>
#include "QuickSort.hpp"
using namespace std;

int main() {
        float array[16];// = {1.1,5.5,4.4,3.3,2.2,6.6,7.7,8.8,9.9,11.11,13.13,16.16,10.1,12.12,14.14,15.15};
        for(int i = 0; i < 16; i++) {
                float value = ((float)rand())/ (float) RAND_MAX;
                array[i] = value;
        }
        cout<<"Original Array:"<<endl;
        print_array(array,16);

        cout<<"Iterations:"<<endl;
        QuickSort(array, 0, 15);
        cout<<"Sorted Array:"<<endl;
        print_array(array, 16);


        return 0;
}
