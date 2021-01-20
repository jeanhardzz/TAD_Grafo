#ifndef GRAFO
#define GRAFO

#include <map>
#include <Lista_encadeada/lista-encadeada.h>

class Grafo{
    private:
        std::map<int, ListaEncadeada> g;
        int n = 0; // número de nós 
        int m = 0; //número de vértices

    public:
        Grafo();
        //Grafo(n,m)
        void AdicionaNo(int no);
        void AdicionaAresta(int aresta[2]);
        int* BuscaPorLargura();
        int* BuscaPorProfundidade();
};

#endif