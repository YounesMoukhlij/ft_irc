

#include "header/IRC.hpp"



int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc != 4)
    {
        std::cerr << "Error : The program started like this ./ircserv port password !" << std::endl;
    }
	signal(SIGINT, signal_handler);


}
