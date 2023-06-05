//시침과 분침 사이 각 구하기
#include <iostream>
using namespace std;
int angleClock(int h, int m);
int main(void)
{
  int t;
  int h, m;

  cin >> t;
  for(int i=0; i<t; i++)
 {
   cin >> h >> m;
   cout << angleClock(h,m) << endl;
  }
  return 0;

}
int angleClock(int h, int m)
{
  double hour = h*30 + m*0.5;
  double minute = m*6;
  double angle;
  int angle_;

  if(hour>minute){
  angle = hour - minute;
}else{
    angle = minute - hour;
  }
  if(angle>180){
    angle = 360-angle;
  }
  angle_ =(int)angle;

  return angle_;
}
