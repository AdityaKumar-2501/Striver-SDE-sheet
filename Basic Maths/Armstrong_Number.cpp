#include<bits/stdc++.h>
using namespace std;

// The formula will be integer of (log10(number) + 1). For an example, if the number is 
// 1245, then it is above 1000, and below 10000, so the log value will be in range 
// 3 < log10(1245) < 4. Now taking the integer, it will be 3. Then add 1 with it to get
// number of digits.

bool isArmstrong(int n){
    int digits = (int)(log10(n) + 1);
    int x = n;
    int r = 0;
    int ans = 0;
    while(x){
        r = x%10;
        ans += pow(r, digits);
        x/=10;
    }
    cout<<ans<<endl;
    return (ans == n);
}

int main()
{
    int x;
    cin>>x;
    if(isArmstrong(x)) cout<<"Armstrong";
    else cout<<"Not Armstrong";
    return 0;
}