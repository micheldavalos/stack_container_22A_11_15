#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pila;
    
    pila.push(-1);

    for (size_t i = 0; i < 10; i++)
    {
        pila.push(i);
    }

    cout << "tamaño: " << pila.size() << endl;
    cout << "tope: " << pila.top() << endl;

    stack<int> copia(pila);
    while (!copia.empty())
    {
        int e = copia.top(); // consultar
        cout << e << endl;
        copia.pop(); // desapilar
    }

    cout << "tamaño copia: " << copia.size() << endl;
    copia.pop();


    

    return 0;
}