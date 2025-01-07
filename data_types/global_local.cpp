#include<iostream>
int x=10;
using namespace std;
void local()
{
    int z=1;
    cout << x <<endl << z;
}
 int main(int argc, const char** argv) {
  int y=90;
  cout <<x<<endl<<y<<endl;
  local();
  int x=1000; 
  cout << endl<< x;
    return 0;
}