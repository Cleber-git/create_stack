#include "stack.hpp"


using namespace std;

stack::stack(){

    tamanho = 0;
    estrutura = new tipoItem[tamanho];

}
stack::~stack(){
    delete estrutura;
}

int stack::lenght()const{
    return tamanho;
}

void stack::insert(const tipoItem item){
    if(max_itens == tamanho){
        "Stack overFlow hehehe";
        return;
    } 
    estrutura[tamanho] = item;
    tamanho++;
}

bool stack::isEmpty()const{

    if(tamanho == 0) return true;
    return false;

}

bool stack::isFull() const{

    if( tamanho == max_itens ) return true;
    return false;
}

void stack::remove(){

    if( tamanho == 0 ){
        cout <<"ERROR: Stack empty" << endl;
        return;
    }
    
    cout << "Item removido: [ " << estrutura[tamanho-1] << "]" << endl; 
    tamanho--;

}

void stack::print()const{

    string separador = (tamanho > 1)?", ":"";
    cout << "[ ";
    for(int i =0 ; i < tamanho; i++){
        cout << estrutura[ i ] << separador;
    }
    cout << " ]" << endl;

}