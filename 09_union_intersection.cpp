#include<iostream>
using namespace std;

int main (){

    int a[] = {3,5,7,8,9};
    int b[] = {4,5,8,9,2};
    int n = sizeof(a)/sizeof(a[0]);

    int Icount = 0;
    int Ucount = 0;


    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            if (a[i]==b[j])
            {
            Icount ++;
            }
        }
    }

    Ucount = n-Icount;








    

}