#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int start=0,end=5;
    int target=7;
    int mid=(start+end)/2;
    bool check=false;
    while(start<=end){
        if(arr[mid]==target){
            check=true;
            break;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=(start+end)/2;
    }
    if(check){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    
}
