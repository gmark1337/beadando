#include <iostream>
#include <string>


struct kocsi
    {
        std::string marka;
        std::string modell;        
        std::string szin;
        int evjarat;
        int ar;        
    };

int Kereso(const kocsi Kocsik[], int meret, const std::string& marka, const std::string& modell, const std::string& szin, int evjarat, int ar)
{
    for (int i = 0; i < meret; i++)
    {
        if(Kocsik[i].marka == marka && Kocsik[i].modell == modell && Kocsik[i].szin == szin && Kocsik[i].evjarat == evjarat && Kocsik[i].ar == ar){
            return i;
        }
    }
    return -1;
}

int main()
{
    kocsi Kocsik[20] = 
    {
        {"Audi", "A1", "Piros", 2010, 143000},
        {"Volvo", "XC60", "Pezsgo_metal", 2018, 10990000},
        {"Kia", "Sorento", "Fekete", 2006, 700000},
        {"Fiat", "Panda","Piros", 2004, 165000},
        {"Opel", "Mokka", "Szurke", 2018, 3390000},
        {"Toyota", "Camry", "Sotetkek", 1995, 1100100},
        {"BMW", "3 Series", "Ezust", 2019, 35000},
        {"Volkswagen", "Golf", "Fekete", 2017, 18900},
        {"Audi", "Q5", "Feher", 2021, 42500},
        {"Mercedes", "E-Class", "Szurke", 2018, 40000},
        {"Subaru", "Forester", "Zold", 2016, 19000},
        {"Toyota", "Highlander", "Ezust", 2019, 28500},
        {"Honda", "CR-V", "Kek", 2017, 24000},
        {"Ford", "Explorer", "Piros", 2020, 34200},
        {"Chevrolet", "Tahoe", "Feher", 2018, 38500},
        {"Nissan", "Pathfinder", "Fekete", 2019, 31000},
        {"BMW", "5 Series", "Kek", 2017, 43000},
        {"Volkswagen", "Tiguan", "Szurke", 2020, 27800},
        {"Audi", "A6", "Ezust", 2018, 39000},
        {"Mercedes", "GLC-Class", "Piros", 2019, 41500},       
    };


    std::string marka,modell,szin;
    int evjarat,ar;

    std::cout << "Add meg a kivant kocsidat:" << "\n" <<"Marka: " << "";
    getline(std::cin, marka);

    std::cout <<"Modell: " <<"";
    getline(std::cin, modell);

    std::cout <<"Szin: " << "";
    getline(std::cin, szin);

    std::cout << "Ev:" << "";
    std::cin >> evjarat;

    std::cout << "Ar: " << "";
    std::cin >> ar;

    int index = Kereso(Kocsik, 20, marka, modell, szin, evjarat, ar);
    if(index == -1)
    {
        std::cout << "Ilyen kocsi nincs rogzitve az adatbazisban " << std::endl;
    }
    else
    {
        std::cout << "Kocsit megtalaltuk" << "\n" << index + 1  << "sorban van" << std::endl;
    }
    return 0;
}