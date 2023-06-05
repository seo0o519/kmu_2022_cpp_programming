//오셀로게임
#include <iostream>
using namespace std;
int main(){
  int t; cin>>t;
  for(int a=0; a<t; a++){
    char answer[8][8];
    int x, y;
    char D, C;
    int blackcount = 0; int whitecount = 0;
    for(int i=0; i<8; i++){
      for(int j=0; j<8; j++){
        answer[i][j]='+';
      }
    }
    answer[3][3] = 'O';
    answer[4][4] = 'O';
    answer[3][4] = 'X';
    answer[4][3] = 'X';

    int n; cin>>n;
    for(int b=0; b<n; b++){
      cin >> x >> y;
      if(b%2==0){ D = 'X'; C = 'O';}
      else{ D = 'O'; C = 'X';}
        answer[x-1][y-1]=D;
        for(int i=y; i<=7; i++){//right
          if(answer[x-1][i]=='+') break;
          if(answer[x-1][i]==D){
            for(int j=y-1; j<i; j++) answer[x-1][j] = D;
            break;
            }
          }
          for(int i=x; i<=7; i++){//down
            if(answer[i][y-1]=='+') break;
            if(answer[i][y-1]==D){
              for(int j=x-1; j<i; j++) answer[j][y-1]=D;
              break;
            }
          }
          for(int i=y-2; i>=0; i--){//left
            if(answer[x-1][i]=='+') break;
            if(answer[x-1][i]==D){
              for(int j=y-1; j>i; j--) answer[x-1][j]=D;
              break;
            }
          }
            for(int i=x-2; i>=0; i--){//up
              if(answer[i][y-1]=='+') break;
              if(answer[i][y-1]==D){
                for(int j=x-1; j>i; j--) answer[j][y-1]=D;
                break;
              }
            }
            for(int i=x-2, j=y; i>=0 && j<=7; i--, j++){//right-up
              if(answer[i][j]=='+') break;
              if(answer[i][j]==D){
                for(int k=x-1, l=y-1; k>i && l<j; k--, l++) answer[k][l]=D;
                break;
              }
            }
            for(int i=x-2, j=y-2; i>=0 && j>=0; i--, j--){//left-up
              if(answer[i][j]=='+') break;
              if(answer[i][j]==D){
                for(int k=x-1, l=y-1; k>i && l>j; k--, l--) answer[k][l]=D;
                break;
              }
            }
            for(int i=x, j=y; i<=7 && j<=7; i++, j++){//right-down
              if(answer[i][j]=='+') break;
              if(answer[i][j]==D){
                for(int k=x-1, l=y-1; k<i && l<j; k++, l++) answer[k][l]=D;
                break;
              }
            }
            for(int i=x, j=y-2; i<=7 && j>=0; i++, j--){//left-down
              if(answer[i][j]=='+') break;
              if(answer[i][j]==D){
                for(int k=x-1, l=y-1; k<i && l>j; k++, l--) answer[k][l]=D;
                break;
              }
            }
      }
      for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
          if(answer[i][j]=='X') {blackcount++;}
          if(answer[i][j]=='O') {whitecount++;}
        }
      }
      cout << blackcount << " " << whitecount << endl;
      for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
          cout << answer[i][j];
        }
        cout << endl;
      }
  }
  return 0;
}
