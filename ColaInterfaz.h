
#ifndef COLA_INTERFAZ_ARREGLO_COLAINTERFAZ_H
#define COLA_INTERFAZ_ARREGLO_COLAINTERFAZ_H
#include "RuntimeException.h"
template <class E>
class ColaInterfaz {
public:
    virtual int size() const =0;
    virtual bool empty() const =0;
    virtual const E& front() const throw(QueueEmpty) =0;
    virtual void enqueue(const E& e) throw(QueueFULL) =0;
    virtual void dequeue() throw(QueueEmpty) =0;
};


#endif //COLA_INTERFAZ_ARREGLO_COLAINTERFAZ_H
