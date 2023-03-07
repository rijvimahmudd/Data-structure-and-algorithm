#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s + (e-s) / 2;
    
    int len1 = mid - s + 1;
    int len2 = e - mid;
    
    int *first = new int[len1];
    int *second = new int[len2];
    
    //copy values
    int k = s;
    
    for(int i = 0; i < len1; i++){
        first[i] = arr[k++];
    }
    
    k = mid+1;
    
    for(int i = 0; i < len2; i++){
        second[i] = arr[k++];
    }
    
    //merge
    int index = 0;
    int index2 = 0;
    
    k = s;
    
    while(index < len1 && index2 < len2){
        if(first[index] < second[index2]){
            arr[k++] = first[index++];
        }else{
            arr[k++] = second[index2++];
        }
    }
    
    while(index < len1){
        arr[k++] = first[index++];        
    }
    
    while(index2 < len2){
        arr[k++] = second[index2++];        
    }  
    
    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e){
    //base case
    if(s >= e) return;
    
    int mid = s + (e-s) / 2;
    
    //process rigth part(sort right part)
    mergeSort(arr, mid+1, e);
    
    //process left part(sort left part)
    mergeSort(arr, s, mid);
    
    //merge
    merge(arr, s, e);
    
    
}

int main() {
    
    int arr[5] = {2,5,1,6,9};
    int n = 5;
    
    mergeSort(arr, 0, n-1);
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    return 0;
}
