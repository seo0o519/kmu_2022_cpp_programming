//
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
  int t; cin >> t;
  for(int i=0; i<t; i++){
    int n; cin >> n;
    string num = to_string(n);
    int len = num.length();
    int sum = 0;
    int a = n;
    while(a>0){
      sum += pow(a%10,len);
      a = a/10;
    }
    if(sum==n) cout << 1 << endl;
    else cout << 0 << endl;
  }
  return 0;
}
