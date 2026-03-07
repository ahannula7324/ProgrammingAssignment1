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
