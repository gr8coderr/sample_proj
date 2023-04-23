#include <iostream>
using namespace std;
double fib(double n){
    if(n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);  
}
int main() {
    int n = 20;
    for(int i=0;i<=n;i++){
        cout<<fib(i)<<endl;
    }
}