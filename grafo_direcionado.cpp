#include <iostream>
#include "grafo_direcionado.h"

GrafoDirecionado::GrafoDirecionado(int n_nos){
    this->n = n_nos;
    this->m = 0;
}

GrafoDirecionado::GrafoDirecionado(){
}

int GrafoDirecionado::GetN(){
    return this->n;
}
void GrafoDirecionado::SetN(int n){
    this->n=n;
}

int GrafoDirecionado::GetM(){
    return this->m;
}
void GrafoDirecionado::SetM(int m){
    this->m=m;
}

void GrafoDirecionado::AdicionaAresta(TipoChave no1, TipoChave no2){
    this->m++;
    this->g[no1].InsereFinal(no2);
    /* Caso eu queira garantir que nao vou adicionar duas arestas iguais
    if(this->g[no1].Pesquisa(no2).GetChave() == -1){
        this->g[no1].InsereFinal(no2);
    }
    */
}

void GrafoDirecionado::Imprime(){
    for(auto &item : g){
        std::cout << item.first << " : " ;
        item.second.Imprime();        
    }
    //https://www.delftstack.com/pt/howto/cpp/how-to-iterate-over-map-in-cpp/
}