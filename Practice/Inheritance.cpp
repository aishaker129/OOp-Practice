#include<iostream>
using namespace std;
class Name{
  public:
  string name;
  void get_data(){
   cout<<"Your Name:";
   cin>>name;
  }
  void put_data(){
   cout<<"Your Name:"<<name<<endl;
  }
};
class ID:public Name{
  public:
  long long int id;
  void get_data()
  {

    Name::get_data();
    cout<<"Your Id:";
    cin>>id;
  }
  void put_data(){
   Name::put_data();
   cout<<"Your Id:"<<id<<endl;
  }
};
class Intake:public ID{
 public:
  int intake;
  void get_data(){
   ID::get_data();
   cout<<"Your Intake:";
   cin>>intake;
  }
  void put_data(){
   ID::put_data();
   cout<<"Your Intake:"<<intake<<endl;
  }
};
class Section:public Intake{
public:
int sec;
void get_data()
{
  Intake::get_data();
  cout<<"Your Section:";
  cin>>sec;
}
void put_data(){
   Intake::put_data();
   cout<<"Your Section:"<<sec<<endl;
  }
};
int main(){
  Section obj;
  obj.get_data();
  obj.put_data();
  return 0;
}
