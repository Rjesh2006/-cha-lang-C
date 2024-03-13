// WAP to remove duplicates value from array

#include<iostream>
using namespace std;

bool exist(int arr[], int elem,int last){
    for (int i=0; i<last;i++){
        if (arr[i]==elem)
        {
            return true;
        }
    }
    return false;
}
int main(){
    int arr[10] = {1,1,4,1,6,5,4,7,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int newArr[n];
    int index = 0;

    for (int i = n-1; i > -1; i--)
    {
        if(!exist(arr,arr[i],i)){
            newArr[index] = arr[i];
            index++;
        }
    }
    for (int i = index-1; i > -1; i--)
    {
        cout<<newArr[i]<<" ";
    }
    
    return 0;
}
