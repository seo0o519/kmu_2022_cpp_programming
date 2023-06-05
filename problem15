//변수 이름
#include <iostream>
#include <string>
using namespace std;
int main(){
  int t; cin >> t;
  for(int i=0; i<t; i++){
    string n; cin >> n;
    int answer = 1;
    if(n[0]==95 || (n[0]>=65 && n[0]<=90) || (n[0]>=97 && n[0]<=122))
      {answer = 1;}
    else {answer = 0;}
    for(int j=1; j<n.length(); j++){
      if(n[j]==95 || (n[j]>=65 && n[j]<=90) || (n[j]>=97 && n[j]<=122) || n[j]>=48 && n[j]<=57)
      {continue;}
      else {answer = 0; break;}
    }
    cout << answer << endl;
  }
  return 0;
}
