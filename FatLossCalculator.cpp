#include <iostream>

int main()
{
    static int cal_kg = 7700;

    float current_weight;
    float target_weight;
    float difference;
    float months;

    std::cout<<"Inserisci il tuo peso in KG: ";
    std::cin>> current_weight;
    std::cout<<std::endl;
    std::cout<<"Inserisci il tuo peso target in KG: ";
    std::cin>> target_weight;
    std::cout<<std::endl;
    std::cout<<"Inserisci la durata in mesi: ";
    std::cin>> months;
    std::cout<<std::endl;

    difference = current_weight - target_weight;
    if(difference <= 0)
    {
        std::cout<< "Inserimento errato";
        return 0;
    }    

    float total_calories = cal_kg * difference;
    float monthly_calories = total_calories / months;
    float weekly_calories = monthly_calories / 4;
    
    float deficit = weekly_calories / 7;

    std::cout<<"Il tuo deficit calorico per perdere " <<difference<<" kg in "<< months << " mesi e' di: "<< deficit << " calorie";
    return 0;
}