//두 구간이 차지하는 길이 구하기
#include <iostream>
using namespace std;
int main()
{
  int t; cin >> t;
  for(int i=0; i<t; i++){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(b<=c || d<=a){
      cout << 0 << " " << (d-c) + (b-a) << endl;
    }else{
      cout << min(b,d) - max(a,c) << " " << max(b,d) - min(a,c) << endl;
    }
  }
  return 0;
}
