#include <iostream>
#include <string>
#include <unistd.h>


int countdown() {

    float numSeconds;
    float* pointer = &numSeconds;
    float pointedTo= *pointer;
    std::cout << "Welcome to my countdown stopwatch timer!" << std::endl;
    std::cout << "How many seconds to count down from??" << std::endl;
    std::cin >> pointedTo;
    std::cout << "Starting to count down from " << pointedTo << " seconds:" << std::endl;
    for(pointedTo; pointedTo > 0; pointedTo--) {
        std::cout  << "Time left: " << pointedTo << "   " << "\r" << std::flush;
        sleep(1);

    }

    std::cout << std::endl << "TIMES UP!!!" << std::endl;



    return 0;

}

int main()
{
    countdown();
    return 0;
}
