#include <iostream>
using namespace std;
void reversearray(int arr[],int size){

    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[]={4,5,6,3,5,6,7};
    int sz=7;
    reversearray(arr,sz);
    
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
}