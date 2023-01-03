
#ifndef COLA_INTERFAZ_ARREGLO_COLA_H
#define COLA_INTERFAZ_ARREGLO_COLA_H

#include "ColaInterfaz.h"
#define SIZE 10
template <class E>
class Cola : public ColaInterfaz<E>{
private:
    int *arr;
    int cantidad;
    int capacity;
public:
    Cola(int size = SIZE );
    ~Cola();
    void enqueue(const E& e) throw(QueueFULL);
    void dequeue();
    const E& front () const throw(QueueEmpty);
    int size() const;
    bool empty()const;
    bool isFull();
};
template <class E>
Cola<E>::Cola(int size) {
    arr = new E[size];
    capacity = size;
    cantidad = -1;
}
template <class E>
Cola<E>::~Cola<E>() {
    delete [] arr;
}
template <class E>
void Cola<E>::enqueue(const E& e) throw(class QueueFULL) {
    if (isFull()){
        throw QueueFULL("lA COLA ESTA LLENA!");
    }
    arr[++cantidad] = e;
}
template <class E>
void Cola<E>::dequeue() {
    if (empty()){
        throw QueueFULL("Error Pila Vacia \n Programa Terimino \n");
/*        cout<<"Error Pila Vacia \n Programa Terimino \n";
        exit(EXIT_FAILURE);*/
    } else{
        for(int i =0; i<cantidad; i++){
            arr[i]= arr[i+1];
        }
        --cantidad;
    }
}

template <class E>
const E& Cola<E>::front() const throw(class QueueEmpty) {
    if (!empty()){
        return arr[0];
    }else{
        throw QueueEmpty("Front en una cola Vacia");
    }
}
template <class E>
int Cola<E>::size() const {
    return cantidad + 1;
}
template <class E>
bool Cola<E>::empty() const {
    return cantidad == - 1;
}
template <class E>
bool Cola<E>::isFull(){
    return cantidad == capacity - 1;
}
#endif //COLA_INTERFAZ_ARREGLO_COLA_H
