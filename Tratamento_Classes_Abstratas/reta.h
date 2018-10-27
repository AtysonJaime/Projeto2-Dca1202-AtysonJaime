#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"

class Reta : public FiguraGeometrica{
private:
    int x0,y0,x1,y1;
public:
    Reta(int _x0=0,int _y0=0,int _x1=0,int _y1=0);

    void draw(Screen &t);
};

#endif // RETA_H
