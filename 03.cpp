// Find	the	minimum	and	maximum	element	in	an	array.	

#include<iostream>

using namespace std;
#include <iomanip>
using std::setw;


int main (){

int m,n,a[m], x,i,j;
cout<<"Enter the size of array"<<endl;
cin>> m;
cout<<"Enter the Elements of array"<<endl;

for( i =0; i<m; i++){

    cin>>a[i];


}
for( i =0; i<m; i++){
    for ( j = i+1; j < m; j++)
    {
        if (a[j]>a[i])
        {
            int c;
            c = a[i];
            a[i]=a[j];
            a[j] = c;
        }
        
    }
}


cout<<"Elements of sorted array are : "<<endl;

for(int i =0; i<m; i++){

    cout<<a[i]<<endl;

}




 }