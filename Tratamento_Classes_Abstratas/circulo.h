#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"

/**
 * @brief The Circulo class sera para desenhar circulos
 */
class Circulo : public FiguraGeometrica
{
    int x0, y0, raio, fill;
public:
    /**
     * @brief Circulo Contrutor da Class Circulos
     * @param _x0 paramentro X do ponto central do circulo
     * @param _y0 paramentro y do ponto central do circulo
     * @param _r paramentro do raio da circulo
     * @param _f paramentro do fillmode do circulo
     */
    Circulo(int _x0 = 0, int _y0=0, int _r=0, int _f=0);
    /**
     * @brief draw Função que sera para desenhar o circulo.
     * @param t Tela q sera desenhado o circulo.
     */
    void draw(Screen &t);
    /**
     * @brief pontosDaCircunferencia Função pega os ponto da circunferencia.
     * @param x paramentro da coordenada x usando para o calculo.
     * @param y parametro da coordenada y usado para o calculo.
     * @param t Tela que será usado para os calculos.
     */
    void pontosDaCircunferencia (int x, int y, Screen &t);
};

#endif // CIRCULO_H
