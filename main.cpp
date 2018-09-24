#include <iostream>
#include <string>
using namespace std;

struct Nodo{
  char dato;
  Nodo *izq,*der;
};

Nodo *crearNodo(char data){
  Nodo *nodo = new Nodo();
  nodo->dato = data;
  nodo->izq = NULL;
  nodo->der= NULL;
  return nodo;
}

void insertar(Nodo &arbol, char* str){
  if (arbol == NULL){
    Nodo *nodo = new Nodo();
    arbol = nodo;
  }else if (*str == '+'){
    /* code */
  }else{
    char vroot = arbol->dato;
    if (data < vroot){
      insertar(arbol->izq,data);
    }else{
      insertar(arbol->der,data);
    }
  }
}

Nodo *arbol = NULL;

void menu() {
      system("cls");
      cout<<"==========================================================="<<endl;
      cout<<"\t\tPractica Operaciones"<<endl;
      cout<<"==========================================================="<<endl;

      //char* str="7/4*((a+b)*a)+3";
      //char* str="7/4*((a+-+--b)*a)+3";
      //char* str="2+(3)";
      //char* str="7/4*((a+b)^4*a)+3";
      char* str="2+1";
}

int main(int argc, char const *argv[]) {
    menu();
    /*cout << "\nPress enter to continue ..."; 
    cin.get(); */
    return EXIT_SUCCESS;
}
