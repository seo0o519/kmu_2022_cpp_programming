//요일 계산하기
#include <iostream>
using namespace std;
int main(){
  int t;
  cin >> t;
  for(int i=0; i<t; i++){
    int y, m, d;
    int sum = 0;
    cin >> y >> m >> d;
    for(int i=1; i<y; i++){
      if(i%400==0 || (i%4==0 && i%100!=0)) sum += 366;
      else sum += 365;
    }
    int month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(y%400==0 || (y%4==0 && y%100!=0)) month[2]=29;

    for(int j=0; j<m; j++) sum += month[j];
    sum = sum+d;

    cout << sum%7 << endl;
  }
}
