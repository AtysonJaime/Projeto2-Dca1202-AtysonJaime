#include <iostream>
#include <vector>
#include "screen.h"
#include <fstream>
#include <sstream>
#include <string>
#include "figurageometrica.h"
#include "reta.h"

using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    string linha;
    string cmd;
    stringstream ss;
    Screen Tela;

    //fin.open("C:\\Users\\Suporte\\Desktop\\Trab\\Projeto2-Dca1202-AtysonJaime\\Tratamento_Classes_Abstratas\\entrada.txt");
    fin.open("C:\\Users\\tayso\\Documents\\GitHub\\Projeto2-Dca1202-AtysonJaime\\Tratamento_Classes_Abstratas\\entrada.txt");
    //fout.open("C:\\Users\\Suporte\\Desktop\\Trab\\Projeto2-Dca1202-AtysonJaime\\Tratamento_Classes_Abstratas\\saida.txt");
    fout.open("C:\\Users\\tayso\\Documents\\GitHub\\Projeto2-Dca1202-AtysonJaime\\Tratamento_Classes_Abstratas\\saida.txt");

    if(!fin.is_open()){
        cout << "arquivo entrada.txt nao foi aberto" << endl;
        exit(0);
    }
    if(!fout.is_open()){
        cout << "arquivo saida.txt nao foi aberto" << endl;
        exit(0);
    }

    while(fin.good()){
        getline(fin,linha);
        if(!fin.good()){
            break;
        }
        cout << linha << endl;
        linha += " ";
        //ss.str(linha);
        ss = stringstream(linha);
        ss >> cmd;
        if(cmd.compare("dim") == 0){
            int larg, alt;
            cout << "Contruindo a Tela" << endl;
            ss >> larg >> alt;
            cout << "largura: " << larg << endl;
            cout << "altura: " << alt << endl;
            Tela = Screen(larg, alt);
        }
        else if(cmd.compare("line") == 0){
            int x0,y0,x1,y1;
            char brush;
            FiguraGeometrica *fig;
            cout << endl << "Desenhando uma linha na tela" << endl;
            ss >> x0 >> y0 >> x1 >> y1;
            ss >> brush;
            cout << "Ponto inicial: (" << x0 <<", " << y0 <<")" << endl;
            cout << "Ponto Final: (" << x1 <<", " << y1 <<")" << endl;
            if(ss.good()){
                cout << "brush = " << brush << endl;
            }
            else {
                brush = ' ';
                cout << "brush = espaco" << endl;
            }
            Tela.setBrush(brush);
            fig = new Reta(x0,y0,x1,y1);
            fig -> draw(Tela);
            delete fig;

            cout << endl;

        }
        /*else if(cmd.compare("rectangle") == 0){
            int x0, y0, larg, alt, tipo;
            string brush;
            ss >> x0 >> y0 >> larg >> alt >> tipo;
            cout << "x0   = " << x0 << endl;
            cout << "y0   = " << y0 << endl;
            cout << "larg = " << larg << endl;
            cout << "alt  = " << alt << endl;
            cout << "tipo = " << tipo << endl;
            ss >> brush;
            if(ss.good()){
                cout << "brush = " << brush << endl;
            }
            else{
                brush = " ";
                cout << "brush = espaco\n";
            }
            //    armazenamento = new Rectangle(x0, y0, larg, alt, tipo, brush);
        }*/

        cout << endl << "Aqui esta sua Tela" << endl;
        cout << Tela;
    }

    return 0;
}
