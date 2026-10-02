
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    int x = 150;
    float y = 15.933;
    short z = 250;
    std::cout << "x = 150\n";
    std::cout << "y = 15.933\n ";
    std::cout << "z = 250\n";

    int day = 10;          
    std::string month = "июль"; 
    int year = 2007;

    std::cout << "Моя дата рождения: " << day << " "
        << month << " " << year << " года\n";

    const double const_n = 2.3;
    const std::string const_str = "WINDOWS";

    std::cout << const_n << " " << const_str ;
}
