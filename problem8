//숫자 정
#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
for(int i=0; i<t; i++){
  int n, start, finish;
  cin >> n >> start >> finish;

  int arr[n*n];
  int k=0;
  int a=0;
  int turn1 = n;
  int turn2 = n-1;
  int turn3 = n-1;
  int turn4 = n-2;

  for(int j=0; j<2*n-1; j++){
    if(j%4==0){
      for(int l=0; l<turn1; l++){
        k+=1;
        arr[a] = k;
        a+=1;
      }turn1 = turn1-2;
    }else if(j%4==1){
      for(int l=0; l<turn2; l++){
        k+=n;
        arr[a] = k;
        a+=1;
      }turn2 = turn2-2;
    }else if(j%4==2){
      for(int l=0; l<turn3; l++){
        k-=1;
        arr[a]=k;
        a+=1;
      }turn3 = turn3-2;
    }else{
      for(int l=0; l<turn4; l++){
        k-=n;
        arr[a] =k;
        a+=1;
      }turn4 = turn4-2;
    }
  }
  for(int m=start-1; m<finish; m++){
    cout << arr[m] << " ";
  }
  cout << endl;
  }
  return 0;
}
