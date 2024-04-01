#include "Personagem.hpp"

void Personagem::cumprimentar() {
  cout << nome << ": Olá, como vai?" << endl;
}

int Personagem::getX(){
  return x;
}

int Personagem::getY(){
  return y;
}

void Personagem::mover(char c){
  if(x > 0 && c == 'a') x--;
  if(y > 0 && c == 'w') y--;
  if(x < MAX_X && c == 'd') x++;
  if(y < MAX_Y && c == 's') y++;
}
