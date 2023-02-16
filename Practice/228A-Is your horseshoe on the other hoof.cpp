#include<bits/stdc++.h>
using namespace std;

int main(){
  int arry[4];
  int counter =0;
  for(int i=0; i<4; i++){

    cin>>arry[i];

  }
  sort(arry,arry+4);
  for(int i=0; i<3; i++){
    if(arry[i]==arry[i+1]){
        counter++;
    }
  }
  cout<<counter<<endl;
return 0;
}
