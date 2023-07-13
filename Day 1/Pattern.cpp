#include<iostream>
using namespace std;

/*
Pattern Rules
1. for the outer loop, count the number of lines or row.
2. for the inner loop, count the number of columns and connect then somehow to the rows.
3. print them in the inner loop
4. Obsereve the symmetry [optional]

*/

int main(){
    // 1st pattern

    // for(int i = 0 ; i < 5;i++){
    //     for(int j = 0 ; j <5;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // 2nd pattern

    // for(int i = 1 ; i <=5;i++){
    //     for(int j = 0 ; j <i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //3rd pattern

    for(int i = 1 ; i <= 5;i++){
        for(int j = 1 ; j <=i;j++){
            cout<<j;
        }
        cout<<endl;
    }


    return 0;
}