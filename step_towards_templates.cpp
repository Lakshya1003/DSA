#include<iostream>
using namespace std;
template<class T>
    class ope{
        T b;
        T a;
        public:
        ope(T a,T b);
            T add();
            T sub();
};
template<class T>
ope<T>::ope(T a , T b){
   this->a =a;
   this-> b =b;
}
template<class T>
 T ope<T>::add(){
    T c ;
    c=a+b;
    return c;
}
template<class T>
 T ope<T>::sub(){
    T c ;
    c=a-b;
    return c;
}
int main()
{
ope <int> o1(10,5);
cout<<o1.add();
cout<<endl;
ope<float> o2(1.1,0.1);
cout<<o2.sub();
return 0;
}