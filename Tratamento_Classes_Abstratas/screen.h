#ifndef SCREEN_H
#define SCREEN_H

#include <vector>
#include <iostream>
using namespace std;

/**
 * @brief The Screen class para desenho em uma tela virtual
 */
class Screen{
private:
  // armazenam o tamanho da tela de desenho
  // no de linhas e de colunas
  int nlin, ncol;

  // guarda o caractere usado para desenhar
  char brush;

  // armazena a matriz da tela
  vector< vector<char> > mat;
public:
  // construtor da classe
  /**
   * @brief Screen Construtor da Class Scren.
   * @param nlin Variavel para o tamanho da linhas da Matriz.
   * @param ncol Variavel para o tamanho de colunas da Matriz.
   */
  Screen(int _nlin, int _ncol);

  // desenha um pixel da matriz usando o caratere
  // guardado em 'brush'
  void setPixel(int x, int y);

  // limpa a tela
  void clear();

  void See();
  // muda o caractere de desenho
  void setBrush(char _brush);

  // envia a tela para um stream de saida
  friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
