#include <iostream>
using namespace std;

int contador = 0;
class palavras{
    public:
    string escrito[100];
    void contar(int &y){

        for(char y : escrito[y]){
            if(y == 'e' || y == 'E'){
                contador++;
            }
        }
        cout << "a palavra "<< escrito[y] <<" tem: "<< contador <<" e(s) \n";
        contador=0;
    }
};
int main(){
    int quant;
    string pq;
    palavras poste[100];
    cout << "Defina quantas palavras voce quer escrever:\n";
    cin >> quant;
    for(int i=0; i<quant;i++){
        cin >> pq;
        poste[i].escrito[i] = pq;
    }
    for(int i=0; i<quant;i++){
        poste[i].contar(i);
    }
    return 0;
}