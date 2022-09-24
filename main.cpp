#include <chrono>
#include <thread>
#include <iostream>

using namespace std::chrono_literals;

int main()
{
    std::this_thread::sleep_for(std::chrono::seconds(1));

    for (int i = 0; i < 1000; i++)
    {
        std::cout << "Hello world" << std::endl;
        std::this_thread::sleep_for(0.25s);
    }

    return 0;
}

