#include "Interface.hpp"
#include <cstdlib>

#define COMANDO_SAIR 'q'

int main(void){
  Personagem p1("Alex");
  char comando;

  p1.cumprimentar();

  do{
    mostrarTela(p1); // mostra a interface da aplicação

    comando = getchar(); // ler comando do teclado
    p1.mover(comando); // move personagem
    system("clear"); // apaga a tela
  }while(comando != COMANDO_SAIR);

  return 0;
}
