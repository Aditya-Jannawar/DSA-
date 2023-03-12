#include<iostream>

using namespace std;
#include <iomanip>
using std::setw;





int main (){
int m,a[m], x,y;


// cout<<"Enter the size of array"<<endl; cin>> m;
// cout<<"Enter the Elements of array"<<endl;
// for(int i =0; i<m; i++){cin>>a[i];}


int arr[] = { 4, 7, 1, 8, 5, 9 };
int n = sizeof(arr) / sizeof(arr[0]);
int max = arr[0];
int min = arr[0];


// by using these statements we can reduce time complexity for the 1st&2nd elements
// if (n == 1)
// {
//     max = arr[0];
//     min = arr[0];
// }

// if (arr[0]> arr[1])
// {
//     min = arr[0];
//     max = arr[1];
// }
// else
// {
//     max = arr[0];
//     min = arr[1];
// }

for (int i = 0; i < n ; i++)
{
    if (arr[i] >  max)
    {
        max = arr[i];
         x = i;
    }
    else if (arr[i] < min)
    {
        min = arr[i];
         y = i;
    }
}

cout<<"MAX ELEMENT OF ARRAY IS : "<< max<<" AT INDEX "<< x+1<<endl;
cout<<"MIN ELEMENT OF ARRAY IS : "<< min<<" AT INDEX "<< y+1;





return 0 ;

}