// Write a menu based program to insert an element in an array where the size is as per user required
// Deletion
// Display nth element
#include <iostream>
using namespace std;

void insert(int size, int total){
    int pos,new_element;
    int arr[size];
    for(int i=0;i<total;i++){
        cout <<"Enter element " <<(i+1) <<" : ";
        cin>>arr[i];
    }
    cout<<"Enter position of new element\n";
    cin>>pos;
    pos=pos-1;
    for(int i=total;i>pos;i--){
        arr[i]=arr[i-1];
    }
    cout<<"Enter new element\n";
    cin>>new_element;
    arr[pos]=new_element;
    
    cout<<"Displaying array\n";
    for(int i=0;i<(total+1);i++){
        cout<<arr[i] <<endl;
    }
}

int main() {
    int total,size;
    cout<<"Enter size of array\n";
    cin>>size;
    cout<<"Enter total no of element you want to fill in array\n";
    cin>>total;
    insert(size,total);
    return 0;
}
