### Entry 1
Date: 2026-03-06
Entry Type: Engineering Decision
Task Worked on: Deciding between header files or just classes for the structure of the project.
Decision: Decided on not using header files.
Error Message: N/a
What I tried: When I created each class file, it asked if I wanted to have a header file (such as Node.h), which made be consider my options.
Fix: I ended up just leaving each class just in a .cpp file, instead of having both .cpp and .h. This was for two reasons. First, in the outline of the code, there is no .h files. Second, having just the .cpp files for my program allows for easy access to change or edit code, and keeps things much simpler.

### Entry 2
Date: 2026-03-07
Entry Type: Bug Fix
Task Worked On: Finding a way for my main function to use the other classes, in this case it was for using MonopolySpace.cpp.
Issue: When testing MonopolySpace.cpp in my main function, I repeatedly kept getting errors.
Error Message: Compile Time error: "unknown type name 'MonopolySpace'" 
What I tried: First I tried to see if I was putting something in wrong in main, while testing it. After trying that and MonopolySpace still showing up red, I knew that main had no way of reaching MonopolySpace. Then I just simply added "MonopolySpace.cpp" to the top using #include. 
Fix: After using #include "MonopolySpace.cpp" it worked and everything ran correctly, meaning my MonopolySpace.cpp class is good to go.

### Entry 3
Date: 2026-03-07
Entry Type: Bug Fix
Task Worked On: In CircularLinkedList.cpp, I needed my Node.cpp class to be connected to it, however it wasn't so I was getting errors in CircularLinkedList.cpp.
Issue: As I started working on the CircularLinkedList class, I noticed "Node" was underlined in red, and was unrecognized, meaning it was unable to use in the class.
Error Message: "No template named 'Node'".
What I tried: I thought this was very similar to the previous bug I had, so I began with trying to #include "CircularLinkedList.cpp" in the Node class. This failed, making me try another possible solution of doing #include "Node.cpp" into my CircularLinkedList class, which finally worked.
Fix: I used #include "Node.cpp" in my CircularLinkedList class, which made all errors go away, and allowed for me to continue to work on that class.

### Entry 4
Date: 2026-03-08
Entry Type: Edge Case/Testing Entry
Task Worked On: movePlayer function in CircularLinkedList.
Issue: When testing it and running it in main, it wouldn't print the correct thing, and wouldn't tell me how many times I passed go (meaning made a full loop of the nodes). I realized this was because it never tested the edge case of an empty list.
Error Message: Process finished with exit code 139 (interrupted by signal 11:SIGSEGV)
What I tried: In movePlayer, I added an if statement to check if the list is empty at the start, simply returning if it is empty.
Fix: This allowed everything to work accordingly, and made it so the passGoCount would add up when there is nodes, and just return if the list was empty.

### Entry 5
Date: 2026-03-08
Entry Type: Edge Case/Testing Entry
Task Worked On: clear() function in CircularLinkedList.
Issue: While testing if my clear function worked, it kept giving me errors, realizing that I was putting it in a infinite loop.
Error Message: untitled3(53654,0x7ff850efcfc0) malloc: *** error for object 0x600002794200: pointer being freed was not allocated, untitled3(53654,0x7ff850efcfc0) malloc: *** set a breakpoint in malloc_error_break to debug
What I tried: First I was confused, and realized I also left out a test case if the board is already cleared, so I added a check for that, and found the same error to occur. I then realized I never checked the tailNode and never set it equal to nullptr, and found that to be the main problem causing the infinite loop.
Fix: After adding the check to make sure it looks if tailNode is pointing to something, then changes it to nullptr if it is, everything ran properly and the loop stopped being infinite.

### Entry 6
Date: 2026-03-08
Entry Type: Engineering Decision
Task Worked On: I decided that I am gonna manually input every space from the actual Monopoly game into a vector, then add those all using addMany in CircularLinkedList.
Decision: I figured this will be more legit, and simpler for me to keep track of everything because I am using the actual game board. Instead of importing something or creating a new game board, I know the Monopoly board the best, and trust myself manually writing everything.
Error Message: N/a
What I tried: Simply adding each space (such as Boardwalk) to the board, until I reach all 40 spaces.
Fix: N/a.
