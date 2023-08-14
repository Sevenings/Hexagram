//
// Created by lvlas on 12/08/2023.
//
#include "../lib/HexVec.h"
#include <iostream>
#include <list>

using namespace std;

int teste1();

int aprendendoListas();

int main() {
    aprendendoListas();
    return 0;
}

int aprendendoListas() {
    list<int> lista{1, 454, 24, 5, 12, 0};

    /*
    for (int i : lista) {
        cout << i << endl;
    }
     */

    // Usando iterator
    for (auto it = lista.begin(); it != lista.end(); ++it) {
        cout << *it << endl;
    }

    cout << endl;

    // Métodos melhores: For Each
    // Vantagens: Sintaxe melhor
    for (int & it : lista) {
        cout << it << endl;
    }

    cout << "O tamanho maximo da lista: " << lista.max_size() << endl;

    list<int> espelho = lista;
    espelho.reverse();

    cout << " " << endl;

    for (int & i : lista) {
        cout << i << endl;
    }

    cout << " " << endl;

    for (int & i : espelho) {
        cout << i << endl;
    }

    return 0;
}


int teste1() {
    HexVec a(23, 54);
    HexVec b(-32, 40);

    HexVec soma = a + b;
    HexVec diff = a - b;

    //soma.print();
    //diff.print();

    std::cout << "Vetor A: ";
    a.print();

    std::cout << "Vetor B: ";
    b.print();

    std::cout << "Vetor Diff: ";
    diff.print();

    int distancia = HexVec::distance(a, b);

    std::cout <<  distancia << std::endl;

    std::cout << "Tamanho do Vetor A: ";
    std::cout << a.length() << std::endl;

    std::cout << "Tamanho do Vetor B: ";
    std::cout << b.length();

    std::cout << "ATUALIZADO!\nAgora temos mais organizacao!" << std::endl;

    return 0;
}
