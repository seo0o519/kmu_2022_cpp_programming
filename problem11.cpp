//정사각형 출력
#include <iostream>
using namespace std;
int main()
{
  int t; cin >> t;
  for(int i=0; i<t; i++){
    int n; cin >> n;
    int mid = n/2;
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        if(i==mid && j==mid) cout << '*';
        else if(i==j){
          if(i!=0 && i!=n-1) cout << '\\';
          else cout << '+';
        }else if(j==0 || j==mid || j==n-1){
          if(i%mid!=0) cout << '|';
          else cout << '+';
        }else if(i==0 || i==mid || i==n-1) cout << '-';
        else if(i+j==n-1) cout << '/';
        else cout << '.';
      }
      cout << endl;
    }
  }
}
