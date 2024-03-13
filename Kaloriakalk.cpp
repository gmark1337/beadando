#include <iostream>

int main()
{
    struct kaloria 
    {
    int eletkor;    
    double testsuly;
    double magassag;
    std::string nem;
    double kaloriabevitel;
    };

    kaloria david;
    kaloria fanni;

    david.eletkor = 22;
    david.magassag = 185;
    david.nem = "F";
    david.testsuly = 100;

    fanni.eletkor = 20;
    fanni.magassag = 158;
    fanni.nem = "N";
    fanni.testsuly = 52;

    if(david.nem == "F")
    {
        david.kaloriabevitel = 66.46 + (13.8 * david.testsuly) + (5 * david.magassag) - (6.8 * david.eletkor);
    }
    else
    {
        david.kaloriabevitel = 655 + (9.6 * david.testsuly) + (1.9 * david.magassag) - (4.7 * david.eletkor);
    }

    if(fanni.nem == "N")
    {
        fanni.kaloriabevitel = 655 + (9.6 * fanni.testsuly) + (1.9 * fanni.magassag) - (4.7 * fanni.eletkor);
    }
    else
    {
        fanni.kaloriabevitel = 66.46 + (13.8 * fanni.testsuly) + (5 * fanni.magassag) - (6.8 * fanni.eletkor);
    }
    std::cout << david.kaloriabevitel << std::endl;
    std::cout << fanni.kaloriabevitel << std::endl;
    return 0;
}

