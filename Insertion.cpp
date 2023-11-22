#include <bits/stdc++.h>
using namespace std;

void sort(){

}

int main(){
    int size;
    cout<<"Enter size of array\n";
    cin>>size;
    int arr[size]; 
    cout<<"Enter elements of array\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=1;i<size;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j]; 
            j=j-1;
        }
        arr[j-1]=key;
    
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
