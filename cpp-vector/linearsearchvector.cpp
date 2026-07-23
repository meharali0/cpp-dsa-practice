#include <iostream>
#include <vector>
using namespace std;
int linearsearch(vector<int> vec,int size,int target){
    for(int i=0;i<size;i++){
        if(vec[i]==target){
            return i;
        }

    }
    return -1;

}
int main(){
    vector<int> vec={2,6,8,9,7};
    int target=9;
    int size=vec.size();
    cout<<linearsearch(vec,size,target);


}
