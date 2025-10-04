#include <iostream>
using namespace std ;

int maxx(int x,int y){
  if(x>=y){return x;}
  else {return y;}
}

int main()
{
    int x,y;
    cin>>x>>y;
  cout<<maxx(x,y)<<endl;

  return 0;
  }

