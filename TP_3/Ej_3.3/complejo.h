#ifndef EJ_3_3_COMPLEJO_H
#define EJ_3_3_COMPLEJO_H


class complejo{
private:
    float real;
    float imag;
public:
    complejo();
    complejo(float, float);
    void SetReal(float);
    void SetImag(float);
    float GetReal();
    float GetImag();
    complejo operator+(complejo);
    complejo operator-(complejo);
    complejo operator*(complejo);
    void conjugado();
};



#endif //EJ_3_3_COMPLEJO_H
