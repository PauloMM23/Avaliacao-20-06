
#include <iostream>
#include <cstdlib>

using namespace std;

#include "arvore.h"

int main() {
    Arvore *raiz = NULL;

    raiz = inserir(70, raiz);
    raiz = inserir(15, raiz);
    raiz = inserir(100, raiz);
    raiz = inserir(45, raiz);
    raiz = inserir(50, raiz);
    raiz = inserir(20, raiz);
    raiz = inserir(35, raiz);
    raiz = inserir(60, raiz);
    raiz = inserir(95, raiz);
    raiz = inserir(33, raiz);
    raiz = inserir(11, raiz);
    raiz = inserir(8, raiz);
    raiz = inserir(120, raiz);
    raiz = inserir(23, raiz);
    raiz = inserir(10, raiz);
  
    exibir(raiz,0);

    cout << "A altura desta arvore é: " << calcularAltura(raiz) << endl;

    cout << "Menor valor: " << menorElemento(raiz)->valor << endl;
    cout << "Maior valor: " << maiorElemento(raiz)->valor << endl;

   
    return 1;

}
