#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"

/**
 * @brief The Reta class é uma classe derivada da classe FiguraGeometrica
 */
class Reta : public FiguraGeometrica{
private:
    int x0,y0,x1,y1;
public:
    /**
     * @brief Reta é o contrutor da class Reta
     * @param _x0 Ponto x inicial
     * @param _y0 Ponto y inicial
     * @param _x1 Ponto x final
     * @param _y1 Ponto y final
     */
    Reta(int _x0=0,int _y0=0,int _x1=0,int _y1=0);

    /**
     * @brief draw Função que desenha uma reta na tela passado como paramentro.
     * @param t Tela que sera desenhado a Reta.
     */
    void draw(Screen &t);
};

#endif // RETA_H
