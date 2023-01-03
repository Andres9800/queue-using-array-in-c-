#include "Cola.h"
int main() {
    try{
        Cola<int> * cola1 = new Cola <int>;
        cola1->enqueue(45);
        cout<<"Tamannos: "<<cola1->size()<<"\t";
        cola1->enqueue(55);
        cout<<cola1->size()<<"\t";
        cola1->enqueue(65);
        cout<<cola1->size()<<"\t";
        cola1->enqueue(75);
        cout<<cola1->size()<<endl;
        cout<<cola1->front()<<"\t";
        cola1->dequeue();
        cout<<cola1->front()<<"\t";
        cola1->dequeue();
        cout<<cola1->front()<<"\t";
        cola1->dequeue();
        cout<<cola1->front()<<"\t";
        cola1->dequeue();
    }catch (RuntimeException e){
        cout<<"Exception: "<<e.getMessage()<<'\n';
    }
    return 0;
}
