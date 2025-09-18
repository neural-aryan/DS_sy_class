// linear search:

#include <iostream>
using namespace std;

int main(){
    int arr[10], user;
    cout<<"Enter elements of array:"<<endl;
    for (int i=0; i<10; i++){
        cin>>arr[i];
    }
    cout<<"Enter element to find:"<<endl;
    cin>>user;
    for (int i = 0; i < 10; i++)
    {
        if(user==arr[i]){
            cout<<"Element found at index: "<<i<<endl;
        }
        else{
            continue;
        }
    }
    return 0;
}
