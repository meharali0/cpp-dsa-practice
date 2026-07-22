#include <iostream>
using namespace std;
int main(){
    int size=5;
    int marks[size]={12,2,3,4,5};

    int smallest=INT8_MAX;
    int largest=INT8_MIN;
    int largestindex=0;
    int smallestindex=0;

    for(int i=0;i<size;i++){
        largest=max(marks[i],largest);
        if (marks[i]==largest){
            largestindex=i;
        }
        smallest=min(marks[i],smallest);
        if (marks[i]==smallest){
            smallestindex=i;
        }
    }
    cout<<"Largest no:"<<largest<<endl;
    cout<<"Smallest no:"<<smallest<<endl;
    cout<<"Largest index:"<<largestindex<<endl;
    cout<<"Smallest index:"<<smallestindex<<endl;
}