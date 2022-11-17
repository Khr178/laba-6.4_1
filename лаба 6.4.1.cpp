// лаба 6.4.1.cpp 

#include <iostream>
#include <iomanip>
#include <time.h>
#include <vector>

using namespace std;
float* initialize(int size);
float find_min_elemenet(float arr[], int size);
float find_first_negative_elemenet(float arr[], int size);
float find_second_negative_elemenet(float arr[], int size);
int find_index(float arr[], int size, float el);
float sum_of_elements_in_range(float arr[], int size, int limit1, int limit2);
void sort_array_by_abs(float arr[], int size);
void print_array(float arr[], int size);

int main() {
    int n = 0;
    cout << "Enter size of array: ";
    cin >> n;

    float* arr = initialize(n);

    cout << "\nArray you entered: " << endl;
    print_array(arr, n);

    float minEl = find_min_elemenet(arr, n);
    int pos = find_index(arr, n, minEl);
    float firts_negative_el = find_first_negative_elemenet(arr, n);
    float second_negative_el = find_second_negative_elemenet(arr, n);

    float sum = sum_of_elements_in_range(arr, n, find_index(arr, n, firts_negative_el) + 1, find_index(arr, n, second_negative_el));

    sort_array_by_abs(arr, n);

    cout << "\nPosition of min element in array is: " << pos + 1 << endl;
    cout << "\nSum of elements between first and second negative elements in array is: " << sum << endl;

    cout << "\nArray sorted by abs: " << endl;
    print_array(arr, n);
    cout << endl;

   

    return 0;
}