#include <iostream>
using namespace std;
int linearsearch(int arr[],int sz,int target){
    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            return i;
        }
        
    }
    return -1;
}
int main(){
    int arr[]={2,4,5,6,21,7};
    int size=6;
    int target=5;
   cout<< linearsearch(arr,size,target);
}