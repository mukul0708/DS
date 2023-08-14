#include <iostream>
using namespace std;

int main() {
    int m,n;
    cout<<"Enter size of array\n";
    cin>>m >>n;
    int arr[m][n];
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
    
    cout<<"Displaying Transpose\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
        cout<<arr[j][i] <<"  ";
    }
    cout <<endl;
    }
    
    return 0;
}
