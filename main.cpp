#include "stack.hpp"
#include <iostream>

using namespace std;



void showMenu(){

    cout<< "=================================================" << endl;
    cout<< "Write 0 for exit of program"          << endl;
    cout<< "Write 1 for insert in the structure"  << endl;
    cout<< "Write 2 for remove item of structure" << endl;
    cout<< "Write 3 for print items of structure" << endl;
    cout<< "Write 4 for see lenght of structure"  << endl;
    cout<< "=================================================" << endl;

}

int main(){

    showMenu();

    stack* pilha = new stack();
    int op = -1;


    do{

        cin >> op;

        switch ( op )
        {
        case 1:
            tipoItem item;
            cout << "Write the value for insert: ";
            cin >> item;
            pilha->insert( item );
            // item = 0;
            break;
        case 2:
            pilha->remove();
            break;
        case 3:
            pilha->print();
            break;
        case 4:
            cout << "Length of structure: " << pilha->lenght() << endl;
            break;
        default:
            break;
        }
        cout << "-> ";

        

    }while( op != 0  );





} 
