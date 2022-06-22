

#ifndef EJ_4_1_FIG_GEO_H
#define EJ_4_1_FIG_GEO_H


class Fig_Geo{
protected:
    int x;
    int y;
public:
    Fig_Geo(int,int);
    void setX(int);
    void setY(int);
    int getX();
    int getY();
    virtual void mostrar()=0;
    virtual void ocultar()=0;
    void mover(int, int);
};



#endif //EJ_4_1_FIG_GEO_H
