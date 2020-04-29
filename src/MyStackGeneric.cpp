#include "MyStackGeneric.h"

template <class T>
MyStackGeneric<T>::MyStackGeneric(){
    this->size=0;
    this->mipila.fill(0);
}

template<class T>
void MyStackGeneric<T>::push(T valor){ //int valor, char valor, etc
    this->mipila[this->size]=valor;
    this->size++;
}

template <class T>
void MyStackGeneric<T>::pop(){
    if(this->size==0) cerr<<"pila vacía";
    this->mipila[this->size-1]=0;
    this->size--;
}

template <class T>
T MyStackGeneric<T>::top(){
    return this->mipila[this->size-1];
}

//template <class T>
//ostream& operator<< (ostream& os, const MyStackGeneric<T>& A){
//    for (int i = 0; i <A.size; ++i) {
//        os <<'['<<A.mipila.at(i)<<']';
//    }
//    os << endl;
//    return os;
//}