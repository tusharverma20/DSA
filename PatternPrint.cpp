// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

int main(){

    int n = 7;

    for(int i=0; i<7; i++){
        for(int j=n; j>=1; j--){
            if(j>i){
                cout<<"* ";
            }
            else{
                if(i==6){
                   cout<<"      Tushar";
                   break;
                }
                else 
                 cout<<"  ";
            }
        }

        for(int j=1; j<n; j++){
            if(j<i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }

        cout<<endl;

    }

    for(int i=5; i>=0; i--){
        for(int j=n; j>=1; j--){
            if(j>i){
                cout<<"* ";
            }
else{
                cout<<"  ";
            }
        }

        for(int j=1; j<n; j++){
            if(j<i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }

        cout<<endl;

    }

return 0;

}
