//숫자 정사각
#include <iostream>
using namespace std;
int main()
{
  int t; cin >> t;
  for(int i=0; i<t; i++){
    int n, num; cin >> n;
    int mid = n/2;
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(max(abs(mid-i),abs(mid-j))%2==1) cout << 1;
        else cout << 0;
      } cout << endl;
    }
  }
  return 0;
}
