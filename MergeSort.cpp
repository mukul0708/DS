#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int start,int mid,int end){

    //sub_left,sub_right are no of elements in sub arrays
    int sub_left = mid-start+1;
    int sub_right = end-mid;

    //create sub array with above elements
    int arr_left[sub_left];
    int arr_right[sub_right];

    //copy elements in sub arrays from array
    for(int i=0;i<sub_left;i++){
        arr_left[i]=arr[start+i];
    }
    for(int i=0;i<sub_right;i++){
        arr_right[i]=arr[mid+1+i];
    }

    //index____ are index for left,right and Merged array
    int index_arr_left=0,index_arr_right=0;
    int index_Merged = start;

    //comparing and merging elements of sub arrays
    while(index_arr_left < sub_left && index_arr_right < sub_right){
        if(arr_left[index_arr_left]<=arr_right[index_arr_right]){
            arr[index_Merged]=arr_left[index_arr_left];
            index_arr_left++;
        }
        else{
            arr[index_Merged]=arr_right[index_arr_right];
            index_arr_right++;
        }
        index_Merged++;
    }

    //comparing remaining elements in either left or right sub array
    while(index_arr_left < sub_left){
        arr[index_Merged]=arr_left[index_arr_left];
        index_arr_left++;
        index_Merged++;
    }
    while(index_arr_right < sub_right){
        arr[index_Merged]=arr_right[index_arr_right];
        index_arr_right++;
        index_Merged++;
    }
}

void MergeSort(int arr[],int start,int end){
    if(start<end){
        int mid=(start+end)/2;
        MergeSort(arr,start,mid);
        MergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}

int main(){
    int size;
    cout<<"Enter no of elements in array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    MergeSort(arr,0,size-1);

    cout<<"Sorted Array\n";
    for(int i=0;i<size;i++){
        cout<<arr[i] <<" ";
    }
return 0;
}
