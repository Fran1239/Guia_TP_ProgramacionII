
#ifndef EJ_3_5_PUNTO_H
#define EJ_3_5_PUNTO_H

class punto{
private:
    int cx;
    int cy;
public:
    punto();
    punto(int, int);
    void SetX(int);
    void SetY(int);
    int GetX();
    int GetY();
    void operator++();
    void operator--();
    punto operator+(punto);
    punto operator+(int);
    punto operator-(punto);
    punto operator-(int);
    float angulo();
    float modulo();
};



#endif //EJ_3_5_PUNTO_H
