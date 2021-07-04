#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int sum = 0;

    while(n>0){
        int Last_digit = n%10;
        sum  = sum + Last_digit;
        n = n/10;

    }
    cout<<"sum of digit " <<sum<<endl;
    return 0;
}
