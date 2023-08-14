//
// Created by lvlas on 12/08/2023.
//

#include <iostream>
#include "../lib/HexVec.h"

using namespace std;

HexVec::HexVec(int x, int y) {
    this->x = x;
    this->y = y;
}

HexVec HexVec::operator+ (HexVec v) const {
    return {v.x + x, v.y + y};
}

HexVec HexVec::operator- (HexVec v) const {
    return { x - v.x, y - v.y};
}

int HexVec::distance(HexVec Va, HexVec Vb) {    // Calcula o tamanho do menor caminho, em hexagonos, para chegar até o outro vetor
    HexVec diff = Va - Vb;
    // Se ambos estiverem na mesma direção
    return diff.length();
}

int HexVec::length() const {
    if (x > 0 and y > 0 or x < 0 and y < 0) {
        return max(x, y);
    } else {
        return abs(x) + abs(y);
    }
}

void HexVec::print() const {
    cout << "(" << x << ", " << y << ")" << endl;
}
