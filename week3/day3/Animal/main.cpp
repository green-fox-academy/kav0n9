#include <iostream>
#include "cmake-build-debug/Animal.h"

int main() {

Animal horse;
horse.play();
std::cout <<"Horse's hunger is: " << horse.gethunger() << "\nHorse's thirst is: " << horse.getthirst() << std::endl;

Animal chicken;
chicken.eat();
chicken.drink();
std::cout << "Chicken's hunger is: " << chicken.gethunger() << "\nChicken's thirst is: " << chicken.getthirst() << std::endl;

Animal otter;
otter.play();
otter.drink();
otter.eat();
otter.play();
std::cout << "Otter's hunger is: " << otter.gethunger() << "\nOtter's thirst is: " << otter.getthirst() << std::endl;

    return 0;
}