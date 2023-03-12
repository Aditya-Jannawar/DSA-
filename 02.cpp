// Check	whether	n	is	present	in	an	array	of	size	m	or	not.	

#include<iostream>

using namespace std;
#include <iomanip>
using std::setw;


int main (){

int m,n,a[m], x;
cout<<"Enter the size of array"<<endl;
cin>> m;
cout<<"Enter the Elements of array"<<endl;

for(int i =0; i<m; i++){

    cin>>a[i];

}

cout<<"Elements of array are : "<<endl;

for(int i =0; i<m; i++){

    cout<<a[i]<<endl;

}



cout<<"enter the input to find its match in array";
cin>>x;



for (int j = 0; j < m; j++)
{
    if (a[j]==x)
    {
        cout<<"number is matched at the index of :  "<<endl<< j + 1;
        
    }
    
    else
    {
        cout<< "False number not found";        
    }
    
    break;
}

}