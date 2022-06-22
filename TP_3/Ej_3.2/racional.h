#ifndef EJ_3_2_RACIONAL_H
#define EJ_3_2_RACIONAL_H


class racional {
private:
    int num;
    int den;
    int error;
    int MCD();
public:
    racional();
    racional(int, int);
    void setNum(int);
    int getNum();
    void setDen(int);
    int getDen();
    int getError();
    void operator++();
    void operator--();
    racional operator+(racional);
    racional operator-(racional);
    void operator+=(int);
    void operator-=(int);
    void simplifica();
    int operator==(racional);

};



#endif //EJ_3_2_RACIONAL_H
