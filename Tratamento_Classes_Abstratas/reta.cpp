#include "reta.h"
#include <iostream>

using namespace std;

int Sinal(int s){
    if (s > 0){
        return 1;
    }
    else {
        return -1;
    }
}

Reta::Reta(int _x0, int _y0, int _x1, int _y1)
{
    x0 = _x0;
    y0 = _y0;
    x1 = _x1;
    y1 = _y1;
}

void Reta::draw(Screen &t)
{
    int Delta_x,Delta_y,s1,s2,Temp,Troca,new_e;
    int i, x,y;
    x = x0;
    y = y0;

    Delta_x = abs(x1 - x0);
    Delta_y = abs(y1 - y0);
    s1=Sinal(x1 - x0);
    s2=Sinal(y1 - y0);
    if(Delta_y > Delta_x){
        Temp = Delta_x;
        Delta_x = Delta_y;
        Delta_y = Temp;
        Troca = 1;
    }
    else{
        Troca = 0;
    }
    new_e = 2*Delta_y - Delta_x;
    for(i=1; i<= Delta_x; i++){
        t.setPixel(x,y);
        while (new_e >= 0){
            if(Troca == 1){
                //Muda para a proxima linha de rasterização
                x = x + s1;
            }
            else{
                y = y + s2;
            }
            new_e = new_e - 2*Delta_x;
        }

        //Permanece nesta linha de rasterização
        if(Troca == 1){
            y = y + s2;
        }
        else{
            x = x + s1;
        }
        new_e= new_e + 2*Delta_y;
    }
}
