//WAF to print the intersectin of 2 array
#include <iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int sz1,int sz2){
    for(int i=0;i<sz1;i++){
        for(int j=0;j<sz2;j++)
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<endl;
            break;
        }
    }

}
int main(){
    int sz1=5;int sz2=4;
    int arr1[sz1]={1,2,3,4,5};
    int arr2[sz2]={6,7,3,1};
    intersection(arr1,arr2,sz1,sz2);

}