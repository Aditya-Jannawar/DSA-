#include<iostream>

using namespace std;
#include <iomanip>
using std::setw;


int main (){

int arr[] = { 4, 3, 1, 9, 5, 8 };
int n = sizeof(arr) / sizeof(arr[0]);
int max = arr[0];
int secmax = arr[0];



for (int i = 0; i < n; i++)
{
    if (arr[i]> max)
    {
        max = arr[i];
    }
    
}
cout<<max;

for (int i = 0; i < n; i++)
{
    if (arr[i] != max )
    {
        if (arr[i] > secmax)
        {
            secmax=arr[i];
        } 
    }
}

cout<<secmax;


return 0;
}
