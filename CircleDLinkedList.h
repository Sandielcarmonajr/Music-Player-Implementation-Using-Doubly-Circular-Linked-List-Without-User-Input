//CircleDLinkedList.h
#include "DNode.h"
#include <iostream>



class CircleDLinkedList{
    private:
    DNode* cursor;
    int n;
    
    public:
    CircleDLinkedList() : cursor(nullptr), n(0) {}
    ~CircleDLinkedList(){
        while (!empty()) remove();
    }
    
    bool empty() const { return cursor == nullptr; }

    
    int size() const { return n; }       // Returns current number of nodes
   void add(const Song& s){ // Adds a song after the current song, and updates cursor to point to the new song
        DNode* newNode = new DNode(s);
        if (empty()) {
            newNode->next = newNode->prev = newNode;
            cursor = newNode;
        } else {
            DNode* after = cursor->next;
            cursor->next = newNode;
            newNode->prev = cursor;
            newNode->next = after;
            after->prev = newNode;
            cursor = newNode;
        }
        n++;
    }
   void remove(){ // Removes the current song, and updates cursor to point to next song
        if (empty()) return;

        DNode* old = cursor;
        if (old->next == old) cursor = nullptr;
        else {
            old->prev->next = old->next;
            old->next->prev = old->prev;
            cursor = old->next;
        }
        delete old;
        n--;
    }
   void advance() { if (!empty()) cursor = cursor->next; }          // Moves to the next song
   
   void retreat() { if (!empty()) cursor = cursor->prev; }          // Moves to the previous song
   
   Song getCurrentSong() const { return cursor->elem; }  // Returns the current song
   
   void printRecursive(DNode* node, DNode* stop, bool forward) const { // Recursive print helper
        std::cout << node->elem << std::endl;
        DNode* nextNode = forward ? node->next : node->prev;
        if (nextNode != stop)
            printRecursive(nextNode, stop, forward);
    }

   // Prints all songs in list starting from current position (forward or reverse)
   void print(bool forward = true) const {
        if (empty()) {
            std::cout << "Playlist is empty.\n";
            return;
        }
        std::cout << "\nPlaylist (" << (forward ? "Forward" : "Reverse") << "):\n";
        printRecursive(cursor, cursor, forward);
    }
};