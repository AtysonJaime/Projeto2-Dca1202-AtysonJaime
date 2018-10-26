#include "screen.h"
#include <iostream>
#include <vector>

using namespace std;

Screen::Screen(int _nlin, int _ncol)
{
    nlin = _nlin;
    ncol = _ncol;
    mat = vector< vector<char> >
          (nlin, vector<char>(ncol, '#'));
}

void Screen::setPixel(int x, int y)
{
    mat[x][y] = brush;
}

void Screen::clear()
{
    int i,j;
    for(i=0;i<nlin;i++){
        for(j=0;j<ncol;j++){
            mat[i][j] = ' ';
        }
    }
}

void Screen::See()
{
    int i,j;
    for(i=0; i < nlin; i++){
        for(j=0; j < ncol; j++){
            cout << mat[i][j];
        }
        cout << "\n";
    }
}

void Screen::setBrush(char _brush)
{
    brush = _brush;
}
