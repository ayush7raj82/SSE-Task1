//Q1  Use Bubble Sort Algorithm to sort the array of integers in decreasing order.
#include<iostream>
using namespace std;

int main() {
    int arr[5]={3,1,4,5,2}; //to sort this array
    for (int i=4;i>=1;i--){
        for (int j=0;j<i;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            
                }
    }
    for (int i=0;i<5;i++)
    {
        cout << arr[i];
        
    }

}