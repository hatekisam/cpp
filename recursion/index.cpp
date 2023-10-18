#include<iostream>

using namespace std;

int  fact(int n){
    if (n > 1  ) return n* fact(n-1);
    return n; 
}


int main(){
    cout << "===================Factorial================" << endl;
    int num;
    cin >> num;
    cout << "The factorial of the number is "  << fact(num) << endl;
    return 0;
}