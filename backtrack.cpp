#include<iostream>
using namespace std;
void print(int i ,long n){
    if(i==n+1 )
        return;
    print(i+1,n);
    cout<<i<<endl;
}
int main(){
    long N;
    cout<<"enter the value of N:";
    cin>>N;
    print(1,N);
}