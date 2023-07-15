#include<iostream>
using namespace std;

/*
Pattern Rules
1. for the outer loop, count the number of lines or row.
2. for the inner loop, count the number of columns and connect then somehow to the rows.
3. print them in the inner loop
4. Obsereve the symmetry [optional]

    LINK for the pattern questions https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/

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

    // for(int i = 1 ; i <= 5;i++){
    //     for(int j = 1 ; j <=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // 4th pattern 
    
    // for(int i = 1 ; i <= 5;i++){
    //     for(int j = 1 ; j <=i;j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // 5th pattern

    // for(int i = 1 ; i <= 5;i++){
    //     for(int j = 5 ; j>=i;j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // 6th pattern 

    // for(int i = 5 ; i >=1 ;i--){
    //     for(int j = 1 ; j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    
    // 7th pattern

    // for(int i = 1 ; i <= 5 ;i++){
    //     for(int j = 0; j<5-i;j++){
    //         cout<<" ";
    //     }
        
    //     for(int k = 0 ; k < 2*i -1; k++){
    //         cout<<"*";
    //     }
    //     for(int j = 0; j<5-i;j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // 8th pattern

    // for(int i = 5 ; i >=1;i--){
    //     for(int j = 5-i; j>0;j--){
    //         cout<<" ";
    //     }
        
    //     for(int k =2*i-1 ; k >0; k--){
    //         cout<<"*";
    //     }
    //     for(int j = 5-i; j>0;j--){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // 9th pattern

    //  for(int i = 1 ; i <= 5 ;i++){
    //     for(int j = 0; j<5-i;j++){
    //         cout<<" ";
    //     }
        
    //     for(int k = 0 ; k < 2*i -1; k++){
    //         cout<<"*";
    //     }
    //     for(int j = 0; j<5-i;j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int i = 5 ; i >=1;i--){
    //     for(int j = 5-i; j>0;j--){
    //         cout<<" ";
    //     }
        
    //     for(int k =2*i-1 ; k >0; k--){
    //         cout<<"*";
    //     }
    //     for(int j = 5-i; j>0;j--){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // 10th pattern 

    // for (int i = 1; i <= 5; i++)
    // {
    //     for(int j = 0; j <i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i =4; i>= 1; i--){
    //     for(int j = i; j > 0;j--){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    // 11th pattern

    // for(int i = 1; i <=5;i++){
    //     for(int j = 1; j <=i;j++){
    //         if((i+j)%2 ==0){
    //             cout<<"1 ";
    //         }
    //         else{
    //             cout<<"0 ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // 12th pattern

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<j; 
    //     }
    //     for(int j = 2*(5-i); j>0;j--){
    //         cout<<" ";
    //     }
    //     for(int j = 1; j <= i ; j++){
    //         cout<<i-j+1;
    //     }
    //     cout<<"\n";
    // }

    // 13th pattern

    // int k = 1;
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<< k++ << " "; 
    //     }
    //     cout<<endl;
    // }
    
    // 14th pattern

    char s = 'A';

    for(int i = 1;i<=5;i++){
        for(int j =0;j<i;j++){
            cout<<s++;
        }
        cout<<endl;
        s = 'A';
    }

    return 0;
}