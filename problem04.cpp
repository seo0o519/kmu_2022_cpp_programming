//세 정수의 정렬
#include <iostream>
using namespace std;

int main(void)
{
  int t;
  cin >> t;

  for(int i=0; i<t; i++)
  {
    int arr[3];
    int a, b, c;
    for(int j=0; j<3; j++)
    cin >> arr[j];

    a = arr[0];
    b = arr[1];
    c = arr[2];


    if(a<=b){
      if(b<=c){
        cout << a << " " << b << " " << c << endl;
      }else{
        if(a<=c){
        cout << a << " " << c << " " << b << endl;
      }else{
        cout << c << " " << a << " " << b << endl;
      }
      }
    }else{
      if(c<=b){
        cout << c << " " << b << " " << a << endl;
      }else{
        if(a<=c){
          cout << b << " " << a << " " << c << endl;
        }else{
          cout << b << " " << c << " " << a << endl;
        }
      }
    }
  }
  return 0;
