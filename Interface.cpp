#include "Interface.hpp"

void mostrarTela(Personagem p){
  for(int i = 0; i <= MAX_X + 2; i++) cout << "*";
  cout << endl;

  for(int i = 0; i <= MAX_Y; i++){
    cout << "*";
    for(int j = 0; j <= MAX_X; j++){
      cout << ".";
      if(i == p.getY() - 1 && j == p.getX()) cout << "\bO";
      if(i == p.getY() && j == p.getX() - 1) cout << "\b/";
      if(i == p.getY() && j == p.getX()) cout << "\b|";
      if(i == p.getY() && j == p.getX() + 1) cout << "\b\\";
      if(i == p.getY() + 1 && j == p.getX() - 1) cout << "\b/";
      if(i == p.getY() + 1 && j == p.getX() + 1) cout << "\b\\";
    }
    cout << "*" << endl;
  }

  for(int i = 0; i <= MAX_X + 2; i++) cout << "*";
  cout << endl;
}
