//행렬곱셈
#include <iostream>
using namespace std;
int main(){
  int testcase; cin>>testcase;
  for(int i=0; i<testcase; i++){
    int r, s, t;
    cin >> r >> s >> t;
    int A1[r][s];
    int A2[s][t];
    int answer[r][t];
    int num;
    for(int i=0; i<r; i++){
      for(int j=0; j<s; j++){
        cin >> num;
        A1[i][j] = num;
      }
    }
    for(int i=0; i<s; i++){
      for(int j=0; j<t; j++){
        cin >> num;
        A2[i][j] = num;
      }
    }

    for(int i=0; i<r; i++){
      for(int j=0; j<t; j++){
        answer[i][j]=0;
        for(int k=0; k<s; k++){
          answer[i][j] += A1[i][k]*A2[k][j];
        }
      }
    }
    for(int i=0; i<r; i++){
      for(int j=0; j<t; j++){
        cout << answer[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
