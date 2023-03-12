#include<iostream>

using namespace std;
#include <iomanip>
using std::setw;





int main (){
int  x,y;


int arr[] = { 4, 7, 1, 8, 5, 9 };
int n = sizeof(arr) / sizeof(arr[0]);
int max = arr[0];
// int min = arr[0];
int secmax = arr[-1];


for (int i = 0; i < n ; i++)
{
    if (arr[i] >  max)
    {
        max = arr[i];
         x = i;
    }

}

cout<<"MAX ELEMENT OF ARRAY IS : "<< max<<" AT INDEX "<< x+1<<endl;


swap(arr[x],arr[0]);

for (int i = 0; i < n; i++)
{
	cout<<arr[i];
}

for (int i = 1; i < n-1 ; i++)
{
	cout<<endl<<arr[i]<<endl;
    if (arr[i] >  secmax)
    {
        secmax = arr[i];       
    }
 }
cout<<"SECOND MAX ELEMENT OF ARRAY IS : "<< secmax;


return 0 ;

}