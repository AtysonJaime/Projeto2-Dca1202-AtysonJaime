#include "circulo.h"
#include <math.h>

Circulo::Circulo(int _x0, int _y0, int _r, int _f)
{
    x0 = _x0;
    y0 = _y0;
    raio = _r;
    fill = _f;
}

void Circulo::draw(Screen &t)
{
    int i,j,aux,r,x,y,d;
    r = (raio*raio);

    if(fill == 1){
        for(i = (x0 - raio); i <= (x0+raio);i++){
            for(j = (y0 - raio); j <= (y0+raio);j++){
                aux = pow((i - x0),2) + pow((j - y0),2);
                if(aux <= r){
                    t.setPixel(j,i);
                }
            }
        }
    }
    else {
        x = 0;
        y = raio;
        d = 1 - raio;
        pontosDaCircunferencia(x,y,t);
        while(y > x){
          if(d < 0){
            d = d + 2*x + 3;
            x = x + 1;
          }
          else{
            d = d + 2*(x-y) + 5;
            x = x + 1;
            y = y - 1;
          }
          pontosDaCircunferencia(x,y,t);
        }
    }
}

void Circulo::pontosDaCircunferencia(int x, int y, Screen &t)
{
    t.setPixel(y0 + y, x0 + x);
    t.setPixel(y0 + x, x0 + y);
    t.setPixel(y0 + x, x0 - y);
    t.setPixel(y0 + y, x0 - x);
    t.setPixel(y0 - y, x0 - x);
    t.setPixel(y0 - x, x0 - y);
    t.setPixel(y0 - x, x0 + y);
    t.setPixel(y0 - y, x0 + x);
}
