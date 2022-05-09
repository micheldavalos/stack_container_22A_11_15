#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int*> punteros;

    for (size_t i = 0; i < 10; i++)
    {
        //int* p = new int(i);
        punteros.push_back(new int(i));
    }

    // for (auto it = punteros.begin(); 
    // it != punteros.end(); it++) {
    //     int* e = *it;
    //     cout << *e << endl;
    // }

    for (auto e: punteros) {
        cout << *e << endl;
    }

    list<int*> copia(punteros);

    punteros.remove_if([](int* e){
        if (*e % 2 == 0) {
            delete e;
            return true;
        } else {
            return false;
        }
    });

    cout << "Punteros" << endl;
    for (auto e: punteros) {
        cout << *e << endl;
    }
    cout << "Copia" << endl;
    for (auto e: copia) {
        cout << *e << endl;
    }


    return 0;
}