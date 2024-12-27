// their are 3 mathods to do it 
// pass by value 
// pass by reference 
// pass by address 
int swap(int &x, int &y ){
    int temp;
    temp = x;
    x= y;
    y = temp;
}
#include<iostream>
using namespace std;
int main()
{
int a = 10;
int b = 30;
swap(a,b);
cout<<a<<endl<<b;
return 0;
}