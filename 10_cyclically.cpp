#include<iostream>

using namespace std;


int main (){


    int a[]= {2,5,7,8};
    int n = sizeof(a) / sizeof(a[0]);
    // cout<<a[n-1];
    int x;

x = a[n-1];

    for (int i = n-1; i >= 0; i--)
    {

        

        if (a[i]=a[0] )
            a[0]= x;
        else
            a[i]= a[i-1];

        // }
        // else if (a[i]=a[n-1])
        // {
        //     a[n-1]=a[n-2];
        // }
        // else if (a[i]==1)
        // {
        //    a[i]=x;
        // }
        // else
        // a[i] = a[1-i];
    }
    

    for (int i = 0; i < n; i++)
    {
        cout<< a[i] << endl;
    }
    

}