//11의배수 구하기
#include <iostream>
#include <string>
using namespace std;
int main(){
    int num;
    cin >> num;
    for(int i=0; i<num; i++){
        string re;
        cin >> re;
        if(re.length()<2){
            cout << 0 << endl;
        }else if(re.length()==2){
            string en, two, save="";
            int fnum, snum;
            en = re[re.length()-1];
            two = re[re.length()-2];
            fnum = stoi(en); snum = stoi(two);
            save += en;
            if(snum-fnum == 0){
                cout<<save<<endl;
            }else{
                cout<<0<<endl;
            }
        }else{
            string en, two, moment, save="";
            en = re[re.length()-1];
            save += en;
            two = re[re.length()-2];
            int fnum, snum, out, trash=0, bor=0, number=0;
            while(re.length()>1){
                fnum = stoi(en); snum=stoi(two);
                if(number==0){
                    re.erase(re.rfind(en));
                    number += 1;
                }
                re.erase(re.rfind(two));
                if(bor==1){
                    snum -= 1;
                    bor = 0;
                }
                if(snum - fnum < 0){
                    bor = 1;
                    snum += 10;
                }
                out = (snum-fnum);
                moment = to_string(out);
                if(re.length()==1 && out==0){
                    trash+=1;
                }else{
                    save.insert(0,moment);
                }
                if(re.length()==1){
                    snum = stoi(re);
                    fnum = out;
                    if(bor==1){
                        snum-=1;
                        bor = 0;
                    }
                    break;
                }
                en = moment;
                two = re[re.length()-1];
            }
            if(snum-fnum == 0){
                cout << save << endl;
            }else{
                cout << 0 << endl;
            }
        }
    }
    return 0;
}
