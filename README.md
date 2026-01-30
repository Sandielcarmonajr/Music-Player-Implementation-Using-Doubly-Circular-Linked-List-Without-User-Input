-------------------------------------------------------------------------------
# Implementation Explanation Document

## Student Information
- Full Name: Sandiel Carmona jr.
- Course Name: CSCI 373 – Data Structures
- Course Description: This course focuses on object-oriented programming, data organization, 
and memory management through structures like stacks, queues, and linked lists.
- Assignment Title: Midterm Project – Music Player Using Doubly Circular Linked List
- Date: 10/19/2025

## 1. Introduction
The assignment required building a Music Player system using a doubly circular linked list. 
The goal was to use classes, constructors, destructors, recursion, and 
dynamic memory allocation to simulate playlist management without user input. 
I structured my code into four classes: Song, DNode, CircleDLinkedList, and MusicPlayer. 
Each file served a single responsibility. The Song class held song information. 
The DNode class handled links and node tracking. The CircleDLinkedList managed adding, 
removing, and printing songs recursively. 
The MusicPlayer class controlled playback, navigation, and list updates.

## 2. Tools and Technologies Used
[List the tools, technologies, or platforms you used to implement the assignment. 
This could include programming languages, development environments, operating 
systems, AI tools, or libraries.]

- Tool 1: C++
- Tool 2: Geeksforgeeks for definitions and explainion 
- Tool 3: CodeLabZone (Integrated Development Environment for compiling and testing assignments)

## 3. Implementation Details
### Key Components
- Classes{
    
    Song: Stores title and artist.
    DNode: Represents one node in the list with next and previous pointers.
    CircleDLinkedList: Manages node operations and recursive printing.
    MusicPlayer: Controls playback and uses the list for navigation.
    
}

- Functions{
    
add(): Adds a new song after the cursor.

remove(): Deletes the current song and updates links.

advance() and retreat(): Move between songs.

print(): Displays the playlist recursively.

play(), next(), previous(): Control playback and navigation.

}
- Algorithms{
Circular linking for node continuity.

Recursive traversal for forward and reverse printing.
}

### Design Choices
I separated each class into its own header to improve clarity. I made print 
recursive to avoid explicit loops and demonstrate call stack control. 
I added a static variable in DNode to count active nodes for memory tracking. 
Each function checks empty states to prevent invalid pointer access.

## 4. Challenges, Solutions, and Error Report
### Technical Challenges
- Challenge 1: Undefined reference error in linking.
  - Solution: I added the missing Song constructor definition inside the class.

- Challenge 2: Circular pointer logic errors.
  - Solution: I adjusted the add() and remove() logic to update both previous 
              and next pointers correctly.

### Error Report
- Common Errors Encountered:
  - Error 1: MusicPlayer.h failed to compile.
    - Cause: The file used “Public:” instead of “public:” and included stray “-” 
             symbols before method declarations.
    - Solution: Rewrote the header file with proper syntax and consistent access specifiers.
  
  - Error 2: Undefined class names in main.cpp.
    - Cause: Headers were not included in the correct order.
    - Solution: Included DNode.h before using static variable declarations.
    
  - Error 3: Linker failure for Song constructor.
    - Cause: The constructor was declared but not defined.
    - Solution: Added an inline definition in Song.h using an initialization list.
    
## 5. Testing Strategy
### Verification Methods
I tested the program without user input. I created three sample songs and added 
them to the playlist. I used fixed function calls: play(), next(), previous(), 
addSong(), removeSong(), and print(). I verified correct traversal in both forward 
and reverse directions. I confirmed proper node deletion and memory tracking through 
the active node count. The final output matched the expected playlist flow and structure.

## 6. Conclusion
The project met every requirement in the instructions. The code demonstrated 
correct use of OOP principles, recursive design, and circular linked list operations. 
I learned how to handle pointer logic, prevent segmentation faults, and use static 
variables for node tracking. My biggest improvement was debugging linker and compilation errors. 
Those errors helped me understand the importance of file structure and proper class declaration.

## 7. References
- Reference 1: GeeksforGeeks. (2025, July 23). Introduction to Circular Doubly Linked List.
https://www.geeksforgeeks.org/introduction-to-circular-doubly-linked-list/
-------------------------------------------------------------------------------
