
#ifndef EJ_3_11_CONJUNTO_H
#define EJ_3_11_CONJUNTO_H


class conjunto{
private:
    int *P;
    int tMax;
    int tAct;
public:
    conjunto(int);
    conjunto(const conjunto&);
    void operator=(conjunto x);
    void agregar(int);
    void eliminar(int);
    int existe(int);
    int gettMax();
    int gettAct();
    void Mostrar();
    conjunto operator+(conjunto);
    conjunto operator-(conjunto);
    conjunto operator*(conjunto);
    ~conjunto();
};


#endif //EJ_3_11_CONJUNTO_H
