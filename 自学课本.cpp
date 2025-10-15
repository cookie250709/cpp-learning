#include <iostream>
using namespace std;

int main(){
  int arr[3][3];
  int n=9;
  int temp=0;
  float aver;
  cout<<"请输入您要输入的9个数据"<<endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>*(*(arr+i)+j);
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
       cout<<*(*(arr+i)+j)<<" ";
       temp+=*(*(arr+i)+j);
    }
    cout<<endl;
  }
  aver=(float)temp/n;
  cout<<"平均值是："<<aver<<endl;


return 0;
}
