//WAF to print all the unique values int he function
#include <iostream>
using namespace std;
void uniquevalue(int arr[],int size){
    int temp;
    for (int i=0;i<size;i++){
        int counter=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                counter++;
            }
            
        
        
        }
        if(counter==1){
                cout<<"Unique Value:"<<arr[i];
            }
        
    }
    

}
int main(){
    int size=7;
    int arr[size]={1,2,3,1,2,3,4};
    uniquevalue(arr,size);

}