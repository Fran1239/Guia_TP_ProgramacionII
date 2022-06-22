#ifndef EJ_3_4_CRONOMETRO_H
#define EJ_3_4_CRONOMETRO_H

class cronometro{
private:
    int horas;
    int minutos;
    int segundos;
public:
    cronometro();
    int GetHoras();
    int GetMin();
    int GetSeg();
    void SetHoras(int);
    void SetMin(int);
    void SetSeg(int);
    void Reset();
    void operator ++();
};



#endif //EJ_3_4_CRONOMETRO_H
