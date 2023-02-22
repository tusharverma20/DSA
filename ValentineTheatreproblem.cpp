// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {

for(int i=1;i<8;i++){
    if(i%2==0){
        for(int j=0;j<15;j++){
            if (j==7){
                cout<<"  ";
            }
            if(j%2==0){
                cout<<"1"<<" ";
            }
            else
            cout<<"0"<<" ";
        }
        
    }
    
    else
    {
         for(int j=0;j<15;j++){
               if (j==7){
                cout<<"  ";
            }
            if(j%2==0){
                cout<<"0"<<" ";
            }
            else
            cout<<"1"<<" ";
        }
    }
    cout<<"\n";
}

 cout<<"\n";
 
for(int i=1;i<3;i++){
    if(i%2==0){
        for(int j=0;j<16;j++){
            
            if(j%2==0){
                cout<<"1"<<" ";
            }
            else
            cout<<"0"<<" ";
        }
        
    }
    
    else
    {
         for(int j=0;j<16;j++){
              
            if(j%2==0){
                cout<<"0"<<" ";
            }
            else
            cout<<"1"<<" ";
        }
    }
    cout<<"\n";
}
    return 0;
}
