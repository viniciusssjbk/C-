#include <iostream>
using namespace std;

int main() {
  int x, y,conta;

  cout << "escreva o primeiro numero";
  cin >> x;
  cout << "Escreva o segundo numero";
  cin >> y;
  cout << "Escreva a equação \n 1  + \n 2 -";
  cin >> conta;
  switch (conta)
  {
  case 1:
    cout << x+y;
    break;
  
  case 2:
  cout << x-y;
    break;
  }
  return 0;
}

