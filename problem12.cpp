//두 사각형 면적 둘레 구하기
#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  for(int i=0; i<t; i++){
    int a, b, c, d, e, f, g, h;
    int x1, y1, x2, y2;
    cin >> a >> b >> c >> d;
    cin >> e >> f >> g >> h;
    x1 = max(a,e);
    y1 = max(b,f);
    x2 = min(c,g);
    y2 = min(d,h);
    int width = (c-a)*(d-b) + (g-e)*(h-f);
    int length = 2*(c-a+d-b) + 2*(g-e+h-f);
    int width2 = (x2-x1)*(y2-y1);
    int length2 = 2*(x2-x1) + 2*(y2-y1);

    if(b>h || f>d || c<e || g<a){
      cout << width << " " << length << endl;
    }else{
    cout << width-width2 << " " << length-length2 << endl;
  }
}
return 0;
}
