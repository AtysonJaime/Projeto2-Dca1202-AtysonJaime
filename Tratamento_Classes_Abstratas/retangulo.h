#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"

/**
 * @brief The Retangulo class Serve para construir Retangulos
 */
class Retangulo : public FiguraGeometrica
{
    int x0,y0,larg,alt,fillmode;
public:
    /**
     * @brief Retangulo Contrutor da Class Retangulo
     * @param _x0 coordenada x0 do ponto superior esquerdo do retangulo
     * @param _y0 coordenada y0 do ponto superior esquerdo do retangulo
     * @param _larg paramentro para a largura do retangulo
     * @param _alt paramentro para a altura do retangulo
     * @param fill paramentro para o fillmode do retangulo
     */
    Retangulo(int _x0=0, int _y0= 0, int _larg=0, int _alt=0, int fill=0);
    /**
     * @brief draw Função que desenha na tela passada o retangulo
     * @param t Tela que será utilizada para desenho.
     */
    void draw(Screen &t);
};

#endif // RETANGULO_H
