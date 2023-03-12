#include<iostream>
using namespace std;


int main(){

    int a[] = {-2,-4,-3,9,0,-1,8},i,j;
    int n = sizeof(a) / sizeof (a[0]);



    for ( i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
    {

        if (a[i]>=0)
        {
            swap(a[i],a[j]);
            
        }
        
    }
    }
    
    for ( i = 0; i < n; i++)
    {
        cout<<a[i]<<"_";
    }
    



    



}