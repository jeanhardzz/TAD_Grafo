#include <iostream>

//#include <map>
//#include "Lista_encadeada/lista-encadeada.h"
#include "grafo_direcionado.h"

int main(){
    /*
     *Lembrando do MAP 
    
    std::map<std::string,std::string> v;
    v["jean"]= "bonito";
    v["arvore"] = "verde";
    std::cout << v.size() << " " << v["jean"] << std::endl;
    */


    /**
     * Lembrando listas encadeadas
    
    ListaEncadeada l;
    TipoItem x;

    x.SetChave(5);
    l.InsereFinal(x);
    x.SetChave(2);
    l.InsereFinal(x);
    l.Imprime();
    */

   /**
    * Map com listas encadeadas
    */

   /*
   std::map<int,ListaEncadeada> g;
   TipoItem x,y;
   x.SetChave(5);
   y.SetChave(1);
   g[1].InsereFinal(x);
   g[2].InsereFinal(y);
   g[1].Imprime();
   g[2].Imprime();
   */
   
   

  /*
    * Testando Grafo 
    */

   GrafoDirecionado grafo(3);

   
   grafo.SetN(3);
   grafo.AdicionaAresta(1,2);   
   grafo.AdicionaAresta(1,3);
   grafo.AdicionaAresta(3,2);   

   grafo.Imprime();
   


   return 0;
}
