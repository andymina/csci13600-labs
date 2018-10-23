Hi, Prof. Zamansky!

So I completed the lab, but structured the files differently than how I normally do so. I put all of the functions in main.cpp. I wasn't sure how to include functions for testing in tests.cpp so I literally put:

#include "main.cpp"

which I'm sure is probably 90% bad practice. What the correct way of keeping all functions in main.cpp and still being able to call them from tests.cpp?


Another issue I ran into was actually running tests.cpp. Whenever it would try to compile, the compiler would yell that the main function was being defined in two places: once in main.cpp and once in catch.cpp. I wasn't able to run my tests, but I'm fairly certain they work. What's the fix for that as well? I don't want to go back to making separate files for each function.

Thanks,
Andy
