//숫자의 모든 자리수 반복 곱하기
#include <iostream>
using namespace std;
int main()
{
  int t; cin >> t;
  for(int i=0; i<t; i++){
    unsigned int n; cin >> n;
    unsigned int mul = 1;
    while(1){
      while(n>0){
        if(n%10!=0){
          mul *= n%10;
        }n = n/10;
      }
      n = mul;
      mul = 1;
      if(n<10) break;
    }
    cout << n << endl;
  }
}
