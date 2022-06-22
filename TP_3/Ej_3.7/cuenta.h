
#ifndef EJ_3_7_CUENTA_H
#define EJ_3_7_CUENTA_H

class cuenta{
protected:
    int nroCta;
    float saldo;
    float tInteres;
public:
    cuenta(int, float);
    void deposito(float m);
    int extraccion(float m);
    void acredInteres();
    int getNroCta();
    float getSaldo();
    float getTasaInteres();
};




#endif //EJ_3_7_CUENTA_H
