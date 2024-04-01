#include <iostream>
#include <string>
#include <cstdio>

#define MAX_X 10
#define MAX_Y 10

using namespace std;

class Personagem{
private:
  string nome;
  int x, y;

public:
  Personagem(string novoNome) : nome(novoNome) {
    cout << "Novo personagem " << nome << " criado." << endl;
    x = MAX_X/2;
    y = MAX_Y/2;
  }

  void cumprimentar();

  void mover(char c);

  int getX();

  int getY();
};
