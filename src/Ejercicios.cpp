#include "Ejercicios.h"
#include "MyStackGeneric.h"
#include "MyStackGeneric.cpp"
#include "MyStackInt.h"
//#include "SistemaL.h"
//#include "SistemaL.cpp"
//#include "usuario.h"
//#include "usuario.cpp"

void printList(list<int> mylist, string title){
    cout<<title;
    for(auto x: mylist){
        cout<<"["<<x<<"]";
    }
    cout<<endl;
}
void Ejercicio1(){
 //   SistemaL menu;
//    imprimir_menu(menu);
}
void Ejercicio2(){
    cout<<"EJERCICIO 2:\n------------"<<endl;
    MyStackInt stack1;
    cout<<"Agregando elementos."<<endl;
    stack1.push(23);
    cout<<"Pila actual: "<<stack1;
    stack1.push(53);
    cout<<"Pila actual: "<<stack1;
    stack1.push(3);
    cout<<"Pila actual: "<<stack1;
    stack1.push(4);
    cout<<"Pila actual: "<<stack1;
    stack1.push(32);
    cout<<"Pila actual: "<<stack1;
    cout<<"Remover un elemento: "<<endl;
    stack1.pop();
    cout<<"Pila actual: "<<stack1;
    cout<<"Último valor agregado: "<<stack1.top()<<endl<<endl<<endl;
}
void Ejercicio3(){
    cout<<"EJERCICIO 3:\n------------"<<endl;
//    array<int, 10> arr1 = {1, 2, 35, 4, 55, 66, 35, 8, 90, 20};
//    array<int, 7> arr2 = {56, 34, 777, 35, 45, 90, 8};
    int arr1[] = {1, 777, 35, 4, 55, 66, 35, 8, 90, 20};
    int arr2[] = {56, 34, 777, 35, 45, 90, 8};
    list<int> list1(arr1, arr1 + sizeof(arr1) / sizeof(int));
    list<int> list2(arr2, arr2 + 7);
    printList(list1, "Lista 1: ");
    printList(list2, "Lista 2: ");
    cout<<"Sorting: "<<endl;
    list1.sort();
    list2.sort();
    printList(list1, "Lista 1: ");
    printList(list2, "Lista 2: ");
    cout<<"Merging: "<<endl;
    list1.merge(list2);
    printList(list1, "Lista 1: ");
    printList(list2, "Lista 2: ");
    cout<<"Binary Search: "<<endl;
    int x=66;
    bool bs = binary_search(list1.begin(),list1.end(), x);
    if(bs)cout<<"El valor "<<x<<" está en la Lista 1."<<endl;
    else cout<<"No se encuentra el valor "<<x<<'.'<<endl;
    x=84;
    bs = binary_search(list1.begin(),list1.end(), x);
    if(bs)cout<<"El valor "<<x<<" está en la Lista 1."<<endl;
    else cout<<"No se encuentra el valor "<<x<<'.'<<endl;
    cout<<"Lower Bound: "<<endl;
    vector<int> vec1(list1.begin(), list1.end());
    vector<int>::iterator lw;
    lw=lower_bound(vec1.begin(),vec1.end(),vec1.back());
    cout<< "Lower_bound en la posicion "<< lw-vec1.begin() <<endl;
}
void Ejercicio4(){
    cout<<"EJERCICIO 4:\n------------"<<endl;
    cout<<"Pila de Enteros:"<<endl;
    MyStackGeneric<int> stack1;
    cout<<"Agregando elementos."<<endl;
    stack1.push(23);
    cout<<"Pila actual: "<<stack1;
    stack1.push(53);
    cout<<"Pila actual: "<<stack1;
    stack1.push(3);
    cout<<"Pila actual: "<<stack1;
    stack1.push(4);
    cout<<"Pila actual: "<<stack1;
    stack1.push(32);
    cout<<"Pila actual: "<<stack1;
    cout<<"Remover un elemento: "<<endl;
    stack1.pop();
    cout<<"Pila actual: "<<stack1;
    cout<<"Último valor agregado: "<<stack1.top()<<endl<<endl;
    cout<<"Pila de Chars: "<<endl;
    MyStackGeneric<char> stack2;
    cout<<"Agregando elementos."<<endl;
    stack2.push('a');
    cout<<"Pila actual: "<<stack2;
    stack2.push('b');
    cout<<"Pila actual: "<<stack2;
    stack2.push('c');
    cout<<"Pila actual: "<<stack2;
    stack2.push('d');
    cout<<"Pila actual: "<<stack2;
    stack2.push('m');
    cout<<"Pila actual: "<<stack2;
    cout<<"Remover un elemento: "<<endl;
    stack2.pop();
    cout<<"Pila actual: "<<stack2;
    cout<<"Último valor agregado: "<<stack2.top()<<endl;
}