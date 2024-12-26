//linear search/sequential search
/*#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int x){
for(int i=0;i<n;i++){
    if(arr[i]==x)
        return i;
}
return -1;
}
int main(){
int arr[]={2,3,4,10,40};
int n=sizeof(arr)/sizeof(arr[0]);
int x=10;

int result=linearSearch(arr,n,x);
if(result!=-1){
    cout<<"Element is found at index "<<result<<endl;
}
else{
    cout<<"Element is not available in array"<<endl;
}
}
*/

//Binary search(applicable on sorted data)
#include<iostream>
using namespace std;

int binarySearch(int arr[],int left,int right,int x){
while(left<=right){
    int mid=left+(right-left)/2;

    if(arr[mid]==x)
        return mid;

    if(arr[mid]<x)
        left=mid+1;
    else
        right=mid-1;
}
return -1;

}
int main(){
    int arr[]={1,2,3,4,6,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=10;
    int result=binarySearch(arr,0,n-1,x);
        if(result !=-1)
            cout<<"Element found at index "<<result<<endl;

        else
            cout<<"Element not found  in arrayz "<<endl;

        return 0;

}
















































