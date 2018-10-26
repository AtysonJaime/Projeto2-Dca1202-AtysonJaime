#include <iostream>
#include <vector>
#include "screen.h"

using namespace std;

int main()
{
    Screen Tela(10,20);
    Tela.setBrush('0');
    Tela.setPixel(4,8);
    Tela.See();
    Tela.clear();
    return 0;
}
