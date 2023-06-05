//주가분석
#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  for(int i=0; i<t; i++){
    int n, fir, sec, thir;
    int count = 0;
    cin >> n;
    cin >> fir >> sec;

    for(int j=0; j<n-2; j++){
      cin >> thir;
      if(fir<sec && sec>thir){
        count++;
        fir = sec;
        sec = thir;
      }else if(fir<sec && sec==thir){
        sec = thir;
      }else{
        fir = sec;
        sec = thir;
      }
    }cout << count << endl;
  }
  return 0;
}
