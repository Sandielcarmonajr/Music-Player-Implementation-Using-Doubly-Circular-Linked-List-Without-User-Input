//DNode.h
#include "Song.h"

class DNode{
    private:
    Song elem;
    DNode* next;
    DNode* prev;
    
    
    public:
    static int activeNodes;  // Static variable to track the number of active 
                              // nodes
                              
    DNode(const Song& e, DNode* p = nullptr, DNode* n = nullptr): 
    elem(e), next(n), prev(p) {activeNodes++;}
    
     ~DNode(){ activeNodes--; }
    
     friend class CircleDLinkedList;
    
};