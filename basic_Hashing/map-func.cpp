#include<bits/stdc++.h>
using namespace std;


// this is an efficient way to use hashing

/*
Time complexity of map is log(n) in best,average and worst case

Time complexity of unordered_map is O(1) in best and average case but O(n) in worst case

so best way to solve problem is to use unordered_map first if it breaks the switch to map 
*/
int main()
{
    int arr[] = {0,1,2,1,0,5,2,70};
    int n = sizeof(arr)/sizeof(arr[0]);

    map<int, int> mpp;
    for (int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    // iterate over map
    for(auto it: mpp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    int x;
    cin >> x;
    cout<<"No. of times "<<x<<" Occures :"<<mpp[x];
    return 0;
}