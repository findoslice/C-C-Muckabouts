#include <iostream>
 
int main()
{
    int count(0); // count how many times the loop iterates
    char G_BITFLAG(0x0);
    char G_OFF(0x1);
    char G_GAY(0x2);

    while (~G_BITFLAG & G_OFF)
    {
        std::cout << "Enter 'exit' to exit this loop or any other key to continue: ";
        std::string ch;
        std::cin >> ch;
        G_BITFLAG ^= G_GAY;

 
        if (ch == "exit")
            G_BITFLAG |= G_OFF;
        else if (G_BITFLAG & G_GAY){
            std::cout << "you're gay lol" << std::endl;
        }
        else
        {
            ++count;
            std::cout << "We've iterated " << count << " times\n";
        }
    }
 
    return 0;
}