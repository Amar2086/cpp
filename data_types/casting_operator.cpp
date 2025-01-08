#include<iostream>

using namespace std;

int main()
{

     char a = 'a';
     int b = static_cast<int>(a);
     cout << b << endl;
      double c = 3.14;
      int d = static_cast<int>(c);
        cout << d << endl;
        cout << typeid(c).name() << endl;
        cout << typeid(d).name() << endl;
        cout << typeid(a).name() << endl;
return 0;

}
// i denotes the integer type
// d denotes the double type
// c denotes the char type