#ifndef GRAFO
#define GRAFO

#include <map>
#include "Lista_encadeada/lista-encadeada.h"

class GrafoDirecionado{
    private:
        std::map<int, ListaEncadeada> g;
        int n; // número de nós 
        int m; //número de vértices

    public:
        GrafoDirecionado();
        GrafoDirecionado(int n_nos);
        int GetN();
        void SetN(int n);
        int GetM();
        void SetM(int m);
        //Grafo(n,m)
        void AdicionaAresta(TipoChave no1, TipoChave no2);//Adiciona a conexao de no1 para no2
        int* BuscaPorLargura();
        int* BuscaPorProfundidade();
        void Imprime();
};

#endif