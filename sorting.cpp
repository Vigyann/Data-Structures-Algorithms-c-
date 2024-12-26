//bubble sort
/*
#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){

for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

    }
}
}
void printarray(int arr[],int size){
for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
 cout<<endl;

}

int main(){
int arr[]={64,34,25,12,22,11,90};
int n=sizeof(arr)/sizeof(arr[0]);

cout<<"Unsorted array"<<endl;
printarray(arr,n);

bubblesort(arr,n);

cout<<"Sorted array"<<endl;
printarray(arr,n);

return 0;

}
*/
//selection sort
/*#include<iostream>
using namespace std;

void swap(int &a, int &b){
int temp=a;
a=b;
b=temp;
}

void selectionsort(int arr[],int n){
for(int i=0;i<n-1;++i){
    int min_index=i;
    for(int j=i+1;j<n;++j){
        if(arr[j]<arr[min_index]){
            min_index=j;
        }
    }
    swap(arr[i],arr[min_index]);

    }
}

void printarray(int arr[],int size){
for(int i=0;i<size;i++){

    cout<<arr[i]<< " ";
}
cout<<endl;
}

int main(){
int arr[]={64,25,12,22,11};
int n=sizeof(arr)/sizeof(arr[0]);

cout<<"Original array: ";
printarray(arr,n);

selectionsort(arr,n);
cout<<"Sorted array: ";
printarray(arr,n);
return 0;
}
*/

//insertion sort
/*#include<iostream>
using namespace std;

void insertionsort(int arr[],int n){

for(int i=1;i<n;++i){
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=key;
}
}
void printarray(int arr[],int size){
for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
 cout<<endl;

}

int main(){
int arr[]={64,34,25,12,22,11,90};
int n=sizeof(arr)/sizeof(arr[0]);

cout<<"Unsorted array"<<endl;
printarray(arr,n);

insertionsort(arr,n);

cout<<"Sorted array"<<endl;
printarray(arr,n);

return 0;

}*/

//merge sort
/*#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1; // Size of the left subarray
    int n2 = right - mid;    // Size of the right subarray

    int leftArr[n1], rightArr[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; ++i)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < n2; ++j)
        rightArr[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            ++i;
        } else {
            arr[k] = rightArr[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        ++j;
        ++k;
    }
}

// Function to perform merge sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
*/
// quick sort
#include <iostream>
using namespace std;

void swap(int& a, int& b) {
 int temp = a;
 a = b;
 b = temp;
}

int partition(int arr[], int low, int high) {
 int pivot = arr[high];
 int i = low;

 for (int j = low; j < high; ++j) {
 if (arr[j] < pivot) {
 swap(arr[i], arr[j]);
 i++;
 }
 }
 swap(arr[i], arr[high]);
 return i;
}

void quickSort(int arr[], int low, int high) {
 if (low < high) {
 int pi = partition(arr, low, high); // Get pivot index
 quickSort(arr, low, pi - 1); // Sort left part
 quickSort(arr, pi + 1, high); // Sort right part
 }
}

void printArray(int arr[], int size) {
 for (int i = 0; i < size; ++i) {
 cout << arr[i] << " ";
 }
 cout << endl;
}

int main() {
 int arr[] = {5, 3, 8, 6, 2, 7, 4, 1};
 int n = sizeof(arr) / sizeof(arr[0]);

 cout << "Before sorting: ";
 printArray(arr, n);

 quickSort(arr, 0, n - 1);

 cout << "After sorting: ";
 printArray(arr, n);

 return 0;
}
