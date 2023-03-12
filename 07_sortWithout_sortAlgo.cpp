#include<iostream>
using namespace std;

int main()
{

    int a[3]={0,2,1};

    if (a[1]>(a[0]&a[2]))
    {
       swap(a[1],a[0]);
    }
    else if (a[1]<(a[0]&a[2]))
    {
        swap(a[1],a[2]);
    }

    if (a[2]>(a[0]&a[1]))
    {
        /* code */
    }
    

    






    return 0;
}