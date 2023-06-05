//홀수 마방진
#include <iostream>
using namespace std;
int main(){
  int t; cin>>t;
  for(int i=0; i<t; i++){
    int n; cin>>n;
    int answer[n][n];
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        answer[i][j]=0;
      }
    }
    int a=0;
    int b = n/2;
    int c = 1;
    answer[a][b] = c;
    for(int i=0; i<n*n-1; i++){
      if(a-1>=0 && b+1<=n-1 && answer[a-1][b+1]==0){
        a = a-1; b = b+1;
      }else if(a-1<0 && b+1<=n-1){
        a = n-1; b = b+1;
      }else if(a-1>=0 && b+1>n-1){
        a = a-1; b = 0;
      }else if(a-1<0 && b+1>n-1){
        a = a+1;
      }else if(answer[a-1][b+1]!=0){
        a = a+1;
      }
      c =  c+1;
      answer[a][b] = c;
    }
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        cout << answer[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
