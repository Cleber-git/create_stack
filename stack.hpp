#include <iostream>

const int max_itens = 100;
typedef int tipoItem;

class stack
{
private:
    int tamanho;
    tipoItem* estrutura;


public:
    stack();
    ~stack();
    void insert( tipoItem item);
    void remove();
    void print()const;
    bool isFull()const;
    bool isEmpty()const;
    int lenght()const;

};

