#include "retangulo.h"
#include <iostream>

using namespace std;

Retangulo::Retangulo(int _x0, int _y0, int _larg, int _alt, int fill)
{
   x0 = _x0;
   y0=_y0;
   larg = _larg;
   alt= _alt;
   fillmode = fill;
}

void Retangulo::draw(Screen &t)
{
    int i,j;
    if(fillmode > 0){
        for(j=y0;j<(y0+alt);j++){
            for(i=x0;i<(x0+larg);i++){
                t.setPixel(i,j);
            }
        }
    }
    else {
        for(i=y0;i<(y0+alt);i++){
            for(j=x0;j<(x0+larg);j++){
                if(i == y0 || i == ((y0+alt)-1)){
                    t.setPixel(i,j);
                }
                else if(j==x0 || j ==((x0+larg)-1)){
                    t.setPixel(i,j);
                }
            }
        }
    }
}
