#include <iostream>
using namespace std;
int main() {
    int hp;
    while (cin >> hp)
    {
        if (hp == 0)
        {
            cout << "Game Over" << endl;
        break;
        }
        else if (hp > 20)
        {
            cout << "HP is normal" << endl;
        }
        else
        {
            cout << "HP is low" << endl;
        }
    }
    return 0;
}