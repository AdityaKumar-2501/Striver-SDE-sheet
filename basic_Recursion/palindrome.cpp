#include<bits/stdc++.h>
using namespace std;

// bool isPalindrome(string str, int n){
//     int s = 0;
//     int e = n-1;
//     while(s<e){
//         if(str[s] != str[e]){
//             return 0;
//         }
//         s++;e--;
//     }
//     return 1;
// }

bool isPalindrome(string str, int s, int e){
    if(str[s] != str[e]){
        return 0;
    }
    isPalindrome(str, s+1, e-1);
    return 1;
}

int main()
{
    string str = "ABCDCBA";
    int n = str.length();
    if(isPalindrome(str, 0,n-1)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
    return 0;
}