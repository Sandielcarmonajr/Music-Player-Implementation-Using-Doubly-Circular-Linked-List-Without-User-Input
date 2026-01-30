//main.cpp

#include "MusicPlayer.h"

int DNode::activeNodes = 0;
  int main(){ 
      std::cout << "!======Midterm Project: Music Player Using Doubly Circular Linked List======!!!\n";
      
      MusicPlayer player("CSCI 373 Player"); // Initialization
      
      player.addSong(Song("Skyline", "Nujabes"));
      player.addSong(Song("Bohemian Rhapsody", "Queen"));
      player.addSong(Song("Lose Yourself", "Eminem"));
      
      
        // Initial Playback
      std::cout <<"\ninitital playlist:\n";
      player.play();
      player.next();
      player.next();
      player.next();
      player.previous();
      
      // Playlist Review
      std::cout <<"\n==== Playlist review===\n";
      player.print(true);
      player.print(false);
      
      // Modifying the Playlist
      std::cout << "\n=== Modifying the Playlist ===\n";
      std::cout << "Removing current song...\n";
      player.removeSong();
      player.play();
      player.next();
      player.next();
      player.next();
      
       // Final Playlist Review
       
       std::cout << "\n=== Final Playlist Review ===\n";
       player.print(true);
       player.print(false);
       
       // Active node count
       std::cout << "\nActive Nodes: " << DNode::activeNodes << std::endl;
      
      return 0;
  }