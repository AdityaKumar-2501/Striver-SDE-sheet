#include<bits/stdc++.h>
using namespace std;

int main()
{
    // hashing in  numbers

    // int n = 5;
    // int arr[n] = {1,2,1,2,3};
    // // precomputation
    // int hash[13] = {0};
    // for(int i=0; i<n; i++){
    //     hash[arr[i]] +=1;
    // }

    // hashing in alphabet
    string s;
    s = "This is a new string";

    //precomputations
    int hash[26] = {0};
    for(int i=0; i<26; i++){
        hash[s[i] - 'a'] +=1;
    }
    // fetching
    char x;
    cin >> x;
    cout<<"No. of times "<<x<<" Occures :"<<hash[x-'a'];
    return 0;
}