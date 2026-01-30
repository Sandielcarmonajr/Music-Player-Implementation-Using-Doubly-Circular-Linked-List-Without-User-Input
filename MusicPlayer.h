//MusicPlayer.h
#include "CircleDLinkedList.h"
#include <iostream>
#include <string>

class MusicPlayer{
    private:
    std::string type;             // Type of music player
    CircleDLinkedList playlist;   // Doubly circular linked list of songs

public:
   MusicPlayer(std::string t = "Default Player") : type(t) {}   // Constructor 
  
   virtual ~MusicPlayer(){}      // Destructor
  
   void play(){  // Plays the current song (prints the song 
        if (playlist.empty())// details
            std::cout << "No songs in the playlist.\n";
        else
            std::cout << "🎵 Now playing: " << playlist.getCurrentSong() << std::endl;
    }
                                   
   void next(){               // Moves to the next song and plays it
        playlist.advance();
        play();
    }
   void previous(){            // Moves to the previous song and plays it
        playlist.retreat();
        play();
    }
   void addSong(const Song& s) { playlist.add(s); }  // Adds a song before the current song
   void removeSong() { playlist.remove(); }           // Removes the current song
   int size() const { return playlist.size(); }           // Returns current number of songs
   bool empty() const { return playlist.empty(); }          // Checks if the music player is empty
   Song getCurrentSong() const { return playlist.getCurrentSong(); }  // Returns the current song
  
    // Prints playlist from current song (true = forward, false = reverse,  recursive)
   void print(bool forward) { playlist.print(forward); }  //Should be implemented as an recursive function
};