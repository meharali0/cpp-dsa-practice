#include <iostream>
#include <vector>
using namespace std;
void reversevector(vector<int>& vec,int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
}
int main(){
   vector<int> vec={2,4,7,5,2,8};
   int size=vec.size();
   reversevector(vec,size);
   for(int i=0;i<size;i++){
    cout<<vec[i]<<" ";
   }


}