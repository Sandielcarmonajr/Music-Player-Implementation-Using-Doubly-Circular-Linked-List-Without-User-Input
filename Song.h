//Song.h

#include <iostream>
#include <string>

class Song{
private:
 std::string songTitle;   // The title of the song
 std::string singerName;  // The name of the singer
  
  public:
   Song(std::string sTitle = "", std::string sName = "") // Constructor
    : songTitle(sTitle), singerName(sName) {} 
                                      
   ~Song(){}                       // Destructor
   std::string getSongTitle() const {return songTitle;}      // Returns the song title
   std::string getSingerName()const {return singerName;}     // Returns the singer name
   void setSongTitle(std::string title) { songTitle = title; }  // Sets the song title
   void setSingerName(std::string name) { singerName = name; } // Sets the singer name
  
  // Overload << operator to print Song objects
   friend std::ostream& operator<<(std::ostream& os, const Song& song) {
        os << "\"" << song.songTitle << "\" by " << song.singerName;
        return os;
    }
  

};