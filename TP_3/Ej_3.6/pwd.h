
#ifndef EJ_3_6_PWD_H
#define EJ_3_6_PWD_H



class password{
private:
    int longitud;
    char *clave;
    char listCar[62];
    void creaListCar();
public:
    password();
    password(int);
    void generarPassword();
    void setLongitud(int);
    int getLongitud();
    char* getClave();
    int esFuerte();
};



#endif //EJ_3_6_PWD_H
