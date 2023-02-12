#include<iostream>
using namespace std;
int main(){
  char ch;
  cin>>ch;
  if(ch>='a' && ch<='z'){
    cout<<(char)toupper(ch)<<endl;
  }
  else if(ch>='A' && ch<='Z'){
    cout<<(char)tolower(ch)<<endl;
  }
  return 0;
}
