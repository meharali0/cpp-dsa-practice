//WAF to calculate sum and the product of all number in an array
#include <iostream>
using namespace std;
void sum(int arr[],int size){
    int sum=0;
        for(int i=0;i<size;i++){
            sum+=arr[i];
        }
    cout<<"The Sum of all the number in an array:"<<sum<<endl;
}
void product(int arr[],int size){
    int product=1;
        for(int i=0;i<size;i++){
            product*=arr[i];
        }
    cout<<"The Product of all the number in an array:"<<product<<endl;
}
int main(){
    int arr[7]={4,6,8,1,6,9,2};
    int size=7;
    sum(arr,size);
    product(arr,size);
}