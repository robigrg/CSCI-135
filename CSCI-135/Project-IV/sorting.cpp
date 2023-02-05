#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <time.h>
using namespace std;


void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;


        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void swap(int *a, int *b)
{
    int temp_var = *a;
    *a = *b;
    *b = temp_var;
}

void selectionSort(int arr[], int n)
{
    int i, j, minimum_index;
    for (i = 0; i < n-1; i++)
    {

        minimum_index = i;
        for (j = i+1; j < n; j++)
        if (arr[j] > arr[minimum_index])
            minimum_index = j;
        swap(&arr[minimum_index], &arr[i]);
    }
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
     for (j = 0; j < n-i-1; j++)
        if (arr[j] < arr[j+1])
            swap(&arr[j], &arr[j+1]);
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void merge(int array[], int const l, int const m, int const r)
{
    int const sub_arr1 = m - l + 1;
    int const sub_arr2 = r - m;


    int *lArray = new int[sub_arr1],
         *rArray = new int[sub_arr2];

    for (int i = 0; i < sub_arr1; i++)
        lArray[i] = array[l + i];
    for (int j = 0; j < sub_arr2; j++)
        rArray[j] = array[m + 1 + j];

    int indexOfsub_arr1 = 0;
    int indexOfsub_arr2 = 0;
    int indexOfMergedArray = l;


    while (indexOfsub_arr1 < sub_arr1 && indexOfsub_arr2 < sub_arr2) {
        if (lArray[indexOfsub_arr1] >= rArray[indexOfsub_arr2]) {
            array[indexOfMergedArray] = lArray[indexOfsub_arr1];
            indexOfsub_arr1++;
        }
        else {
            array[indexOfMergedArray] = rArray[indexOfsub_arr2];
            indexOfsub_arr2++;
        }
        indexOfMergedArray++;
    }

    while (indexOfsub_arr1 < sub_arr1) {
        array[indexOfMergedArray] = lArray[indexOfsub_arr1];
        indexOfsub_arr1++;
        indexOfMergedArray++;

    while (indexOfsub_arr2 < sub_arr2) {
        array[indexOfMergedArray] = rArray[indexOfsub_arr2];
        indexOfsub_arr2++;
        indexOfMergedArray++;
    }
}
}

void mergeSort(int array[], int const start, int const end)
{
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;
    mergeSort(array, start, mid);
    mergeSort(array, mid + 1, end);
    merge(array, start, mid, end);
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] >= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {   int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(){
    long int size = 1000000;
 
    int s_arr[size];
    int b_arr[size];
    int q_arr[size];
    int i_arr[size];
    int m_arr[size];
    int sys_arr[size];

    for(int i=0 ;i<size;i++){
        s_arr[i] = rand() % size;
    }

   for(int i=0 ;i<size;i++){
        b_arr[i] = rand() % size;
    }


    for(int i=0 ;i<size;i++){
        q_arr[i] = rand() % size;
    }

    for(int i=0 ;i<size;i++){
        m_arr[i] = rand() % size;
    }

    for(int i=0 ;i<size;i++){
        i_arr[i] = rand() % 100;
    }

    for(int i=0 ;i<size;i++){
        sys_arr[i] = rand() % size;
    }


   clock_t  t_i , t_s , t_m , t_q , t_bub , t_sys;

    t_i = clock();
    insertionSort(i_arr,size);
    t_i = clock() - t_i ;

    t_bub = clock();
    bubbleSort(b_arr,size);
    t_bub = clock() - t_bub;

    t_m = clock();
    mergeSort(m_arr,0,size - 1);
    t_m = clock() - t_m;

    t_q = clock();
    quickSort(q_arr,0,size - 1);
    t_q = clock() -  t_q;

    t_s = clock();
    selectionSort(s_arr,size);
    t_s = clock() - t_s;

    t_sys = clock();
    sort(sys_arr,sys_arr + size);
    t_sys = clock() - t_sys ;

    double t_merge     = double(t_m)/CLOCKS_PER_SEC;
    double t_quick     = double(t_q)/CLOCKS_PER_SEC;
    double t_insertion = double(t_i)/CLOCKS_PER_SEC;
    double t_selection = double(t_s)/CLOCKS_PER_SEC;
    double t_bubble    = double(t_bub)/CLOCKS_PER_SEC;
    double t_system    = double(t_sys)/CLOCKS_PER_SEC;

   cout<<"Time of MergerSort = "<<t_merge<<endl;
   cout<<"Time of QuickSort = "<<t_quick<<endl;
   cout<<"Time of InsertionSort = "<<t_insertion<<endl;
   cout<<"Time of SelectionSort = "<<t_selection<<endl;
   cout<<"Time of BubbleSort = "<<t_bubble<<endl;
   cout<<"Time of SystemSort = "<<t_system<<endl;
   return 0;
}


