//
// Created by lvlas on 12/08/2023.
//

#ifndef HEXAGRAM_HEXVEC_DLL
#define HEXAGRAM_HEXVEC_DLL

class HexVec {
public:
    int x, y;
    HexVec(int, int);

    HexVec operator+ (HexVec) const;

    HexVec operator- (HexVec) const;

    static int distance (HexVec, HexVec);

    int length () const;

    void print() const;
};


#endif //HEXAGRAM_HEXVEC_DLL
