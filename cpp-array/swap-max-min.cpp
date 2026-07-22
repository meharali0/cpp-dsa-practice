//WAF to swap the max and min of an array
#include <iostream>
using namespace std;
void swapmaxmin(int arr[],int size){
    int largestno=INT16_MIN;
    int smallestno=INT16_MAX;
    int largestindex;
    int smallestindex;
        for(int i=0;i<size;i++){
            largestno=max(arr[i],largestno);
            if(arr[i]==largestno){
                largestindex=i;
            }
            
            smallestno=min(arr[i],smallestno);
            if(arr[i]==smallestno){
                smallestindex=i;
            }
            
        }
        swap(arr[smallestindex],arr[largestindex]);
}
int main(){
    int size=6;
    int arr[size]={23,56,65,32,10,3};
    swapmaxmin(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}