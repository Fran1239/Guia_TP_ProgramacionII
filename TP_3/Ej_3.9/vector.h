
#ifndef EJ_3_9_VECTOR_H
#define EJ_3_9_VECTOR_H

class vector{
private:
    int *V;
    int tam;
public:
    vector(int);
    vector(const vector&);
    vector operator+(vector x);
    vector operator-(vector x);
    void operator=(vector x);
    int operator*(vector x);
    int& operator[](int i);
    ~vector();
};







#endif //EJ_3_9_VECTOR_H
