#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    system("chcp 65001");
    int hp;
    cin >> hp;
    cout << "hp=" << hp << endl;
    if (hp==0){
        cout << "游戏结束" << endl;
    }
    else
    { if (hp>20) {
      cout << "血量正常" << endl;
     }
     else{
      cout << "血量过低" << endl;
     }   
    }
    return 0;
}