#include<iostream>
using namespace std;
// TODAY I'M USING STRUCT
struct area
{
    int length;
    int breadth;
} ;

int main()
{
     area r1;
     r1.length = 10;
     r1.breadth =20;
     cout<<r1.length*r1.breadth;
return 0;
}