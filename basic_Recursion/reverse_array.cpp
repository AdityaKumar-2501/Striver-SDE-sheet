#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[], int s, int e){
    if(s<e){
        swap(arr[s],arr[e]);
        reverse(arr,s+1,e-1);
    }
}

int main()
{
    int n = 5;
    int arr[] {1,2,3,4,5};
    reverse(arr,0,n-1);
    print(arr,n);
    return 0;
}