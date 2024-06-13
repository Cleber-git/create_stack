#include "stack.hpp"
#include <iostream>


using namespace std;

stack::stack() : tamanho(0), estrutura(new tipoItem[ max_itens ])
{
}
stack::~stack(){
    delete[] estrutura;
}

int stack::lenght()const{
    return tamanho;
}

void stack::insert( const tipoItem item ){
    
    if( tamanho == (max_itens-1) ){

        puts("Stack overFlow hehehe");
        exit(1);

    } 
    cout << tamanho << endl;
    estrutura[ tamanho ] = item;
    tamanho++;
    cout << item << endl;

    
}

bool stack::isEmpty()const{
    return tamanho == 0;
}

bool stack::isFull() const{
    return tamanho == max_itens -1;
}

void stack::remove(){

    if( tamanho == 0 ){
        cout <<"ERROR: Stack empty" << endl;
        return;
    }
    
    cout << "Item removido: [ " << estrutura[ tamanho-1 ] << "]" << endl; 
    tamanho--;
}

void stack::print()const{

    string separador = (tamanho > -1 && tamanho < max_itens)?", ":"";
    cout << "[ ";
    for(int i =0 ; i < tamanho; i++){
        cout << estrutura[ i ] << separador;
    }
    cout << " ]" << endl;

}