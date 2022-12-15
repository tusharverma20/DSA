#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char str[5][20]={"Tushar","Saksham","Amar","Aman","Lakhan"}, temp[20];
    int i, j;

    
    for(i=0; i<5; i++)
    {
        for(j=0; j<4; j++)
        {
            if(strcmp(str[j], str[j+1])>0)
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j+1]);
                strcpy(str[j+1], temp);
            }
        }
    }
    
    cout<<"\nString in Ascending Order: ";
    for(i=0; i<5; i++)
    {
        cout<<str[i]<<" ";
    }
    return 0;
}


