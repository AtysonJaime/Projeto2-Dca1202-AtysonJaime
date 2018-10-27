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
  Screen(int _nlin = 0, int _ncol =0);
  ~Screen();
  // desenha um pixel da matriz usando o caratere
  // guardado em 'brush'
  /**
   * @brief setPixel Função que desenha na tela;
   * @param x posição da largura da matriz;
   * @param y posição da coluna da matriz;
   */
  void setPixel(int x, int y);

  // limpa a tela
  /**
   * @brief clear Função que Limpa a tela;
   */
  void clear();

  // muda o caractere de desenho
  /**
   * @brief setBrush Função que set o pincel para desenho;
   * @param _brush Variavel que diz qual sera o pincel
   */
  void setBrush(char _brush);
  // envia a tela para um stream de saida
  /**
   * @brief operator << Função que funciona como fluxo de saida;
   * @param os Variavel do fluxo de saida;
   * @param t Variavel da Tela que você gostaria de mostrar
   * @return Retorna o fluxo de saida
   */
  friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
