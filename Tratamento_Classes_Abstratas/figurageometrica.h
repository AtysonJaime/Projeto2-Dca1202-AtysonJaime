#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"

/**
 * @brief The FiguraGeometrica class classe abstrata FiguraGeometrica para representar objetos primitivos genéricos.
 */
class FiguraGeometrica : public Screen
{
public:
    /**
     * @brief draw Uma função virtual pura que instrua o objeto a se desenhar em um objeto do tipo Screen
     * @param t Tela no qual sera desenhado o objeto desejado
     */
    virtual void draw(Screen &t)=0;
};

#endif // FIGURAGEOMETRICA_H
