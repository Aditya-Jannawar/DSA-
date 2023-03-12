#include<iostream>
using namespace std;
#include <iomanip>
using std::setw;


int main(){
    

    int m,i,a[m], j;
cout<<"Enter the size of array"<<endl;
cin>> m;
cout<<"Enter the Elements of array"<<endl;

for( i =0; i<m; i++){

    cin>>a[i];

}

cout<<"Elements of reverse array are : "<<endl;


for(j = m-1 ; j>=0 ; j--)
{
    cout<<a[j]<<endl;

}



}