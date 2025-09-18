//write a program to print diagonal of a matrix (4x4)
#include <iostream>
using namespace std;

int main(){
    int arr1[4][4];
    cout<<"enter values for matrix "<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>arr1[i][j];
        }
    }

    for(int i=0; i<4; i++){
    	cout<<arr1[i][i]<<' '<<endl;
    }

    return 0; 
}
