#include<iostream>
using namespace std;
void sotArray(int arr[],int n)
{
    for(int i=1; i<n; i++){
        for(int j=0; i<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);

            } 
        }
    }

}

int main(){
    int arr[8]={2,4,8,6,9,1,3,7};
    sotArray(arr,8);
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
        cout<<arr[i]<<" ";
        }

    }
    cout<<"array is good"<<endl;
    return 0;
}