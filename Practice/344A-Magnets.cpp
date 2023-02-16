#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,counter=1;
  cin>>n;
  int arry[n];
  for( int i=0; i<n; i++){
    cin>>arry[i];
  }
  for(int j=0; j<n-1; j++){
    if(arry[j]!= arry[j+1]){
        counter++;
    }
  }
  cout<<counter;
 return 0;
}
