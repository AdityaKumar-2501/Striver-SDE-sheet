#include<bits/stdc++.h>
using namespace std;

void print1toN(int n){
    //base case
    if(n < 1){
        return;
    }
    print1toN(n-1);
    cout<<n<<" "<<endl;
}

void printNto1(int n){
 //base case
    if(n < 1){
        return;
    }
    cout<<n<<" "<<endl;
    printNto1(n-1);
}

int sum(int n){
    if(n<=1){
        return n;
    }
    return n+sum(n-1);
}

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int fabonacci(int n){
    if(n<=1){
        return n;
    }
    return fabonacci(n-1)+fabonacci(n-2);
}

int main()
{
    // print1toN(5);
    // printNto1(5);
    // cout<< sum(100);
    // cout<<factorial(5);
    cout<< fabonacci(8);
    return 0;
}