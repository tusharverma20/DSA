// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class dp{
 public:   
int fibo(int n){
    int f[n+2];
    f[0]=0;
    f[1]=1;
    
    for(int i=2;i<=n;i++){
        f[i]=f[i-2]+f[i-1];
    }
    
    return f[n];
}
};

int main() {

 dp d;
    int n=9;
  cout<<d.fibo(n);

    return 0;
}
