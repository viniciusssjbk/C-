#include <iostream>
using namespace std;

int main() {
  string word;
  cout << "escreva uma palavra para gerar um looping:\n";
  cin >> word;
  for (char c : word) {
    cout << c << "\n";
  }
  return 0;
}

