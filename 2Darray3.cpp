#include <iostream>
using namespace std;

int main() {
    int m,n;
    cout<<"Enter size of array\n";
    cin>>m >>n;
    int arr[m][n];
    cout<<endl;
    cout<<"Enter elements in array\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }}
    
    cout<<"Displaying original matrix \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        cout<<arr[i][j] <<"  ";
    }
    cout <<endl;
    }
    cout<<endl;
    cout<<"Displaying Transpose\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
        cout<<arr[j][i] <<"  ";
    }
    cout <<endl;
    }
    cout<<endl;
    cout<<"Added with self\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        cout<<arr[i][j]+arr[i][j] <<"  ";
    }
    cout <<endl;
    }
    cout<<endl;
    cout<<"Subtracted with self\n";
    cout<<"Obviously NULL\n";
    
    return 0;
}
