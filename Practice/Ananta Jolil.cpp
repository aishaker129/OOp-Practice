#include<iostream>
using namespace std;
class Din_The_Day{
  public:
      string a;
      int year;
      string b;

};
int main()
{
  Din_The_Day anantajolilobj;
  anantajolilobj.a="Cinamatography";
  anantajolilobj.year=2022;
  anantajolilobj.b="Other Characters";
  cout<<anantajolilobj.a<<"  "<<anantajolilobj.year<<"  "<<anantajolilobj.b<<endl;
  return 0;
}
