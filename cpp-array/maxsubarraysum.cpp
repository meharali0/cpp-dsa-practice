//Max subarray sum
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    int maxsum=INT16_MIN;

    for(int st=0;st<n;st++){
        int currentsum=0;
        for(int end=st;end<n;end++){
            currentsum+=arr[end];
            maxsum=max(currentsum,maxsum);
        }
        
    }
    cout<<maxsum;
}