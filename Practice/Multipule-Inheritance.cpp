#include<iostream>
using namespace std;
class A{
 public:
  A(){
  cout<<"A"<<endl;
  }
};
class B{
 public:
 B(){
  cout<<"B"<<endl;
 }
};
class C:public A,public B{
};
int main(){
  C obj;
  return 0;
}
