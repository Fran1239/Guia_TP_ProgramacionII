#ifndef EJ_4_2_EMPLEADO_H
#define EJ_4_2_EMPLEADO_H


class Empleado{
protected:
    char* Nombre;
    int Edad;
    float Salario;
public:
    Empleado(char*, int, float);
    void setNombre(char*);
    char* getNombre();
    void setEdad(int);
    int getEdad();
    void setSalario(float);
    float getSalario();
    void verDatos();
};



#endif //EJ_4_2_EMPLEADO_H
