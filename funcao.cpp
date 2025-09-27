#include <iostream>
using namespace std;

int contar=0;

void contador(string &x){
    
    for(char c : x){
        if(c == 'a'|| c == 'a'){
            contar ++;
        }
    }
    cout << "na palavra " <<x <<" tem: "<<contar<<" a(s)\n";
}
int main(){
    string palavra;
    cout << "escreva uma palavra: ";
    cin >> palavra;
    contador(palavra);
    
    return 0;
}
