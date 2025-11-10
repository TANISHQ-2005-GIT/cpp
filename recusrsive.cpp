#include<iostream>
using namespace std;
// void print(int i,int n){
//     if(i<n){
//         cout<<"riya"<<endl;
//         print(i+1,n);
//         }
//     }
void PRINT(int n ,int i){
    if(i<1)
    return;
    cout<<i<<endl;
    PRINT(n,i-1);
}

int main(){
    int N;
    cout<<"enter the value of N:";
    cin>>N;

    // print(1,N);
    PRINT(N,N);

}