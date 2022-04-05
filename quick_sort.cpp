#include <iostream>
void quicksort(int *arr, int start, int end){
    if(start>=end) return;
    int key= start;
    int i = start+1;
    int j = end;
    while(i<=j){
        while(arr[i]<arr[key]){
            i++;
        }
        while(arr[j]>arr[key]){
            j--;
        }
        if(i>j){
            int temp= arr[key];
            arr[key]= arr[j];
            arr[j]= temp;
        }
        else{
            int temp = arr[i];
            arr[i]= arr[j];
            arr[j]= temp;
        }
    }
    quicksort(arr, 0, j-1);
    quicksort(arr, j+1, end);
}