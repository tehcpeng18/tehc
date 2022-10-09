//not so good story (text adventure) c++
//im just experimenting with what i've learn so far so excuse the story lol
//i've never seen anyone do the code like mine so i figure i should share it eventho the story is not that interesting
#include <iostream>

int main() {

    int choice1 = 0;
    int tries = 0;

    std::cout << "After mid episode 9 we know that max is in a coma and we seen el in max's mind\n";
    std::cout << "but there is no consciousness present there.\n"; 
    std::cout << "She suppose to be dead by now but we know that el revive her with el's power.\n\n";
    std::cout << "Choose which posible outcome that will happen to max in the next season\n\n";
    std::cout << "1) She actually in vecna's lair (trapped)\n";
    std::cout << "2) She will gain her consciousness\n";
    std::cout << "3) She will end up dead eventually\n";
    std::cin >> choice1;

    if (choice1 == 1) {
     std::cout << "Max is now in vecna's lair,\n";
     std::cout << "vecna is comsuming her consciousness bit by bit so that he get stronger day by day.\n";
     std::cout << "El knows about this but kept it a secret from everyone for a moment because she need to\n";
     std::cout << "become stronger than vecna in order to defeat him\n";
    }
    else if (choice1 == 2) {

     std::cout << "While everyone is preparing for another battle the FINALE to defeat vecna,\n";
     std::cout << "El been training so hard lately so that she gain more power and to safe Max.\n";
     std::cout << "El finally firgure out how to find Max's consciousness,\n";
     std::cout << "at the hospital El use her power to find Max again,\n";
     std::cout << "but it failed.\n";

    }
    else if (choice1 == 3) {

     std::cout << "Lucas always come to visit max and read her a story of 'Lord of the rings'.\n";
     std::cout << "Suddenly one day,\n";
     std::cout << "As Lucas was reading the book, he heard a beeping sound and he look to the\n";
     std::cout << "screen and he see the flat line,\n";
     std::cout << "indicates that Max is no longer alive anymore.\n";

    }
    else {
        for (tries = 0; tries < 3; tries++) {
         std::cout << "You's enter wrong number please try again: ";
         std::cin >> choice1;
        }
        if (tries == 3) {
         std::cout << "You've entered wrong number for 3 times now please restart the game again\n";
        }
    }

    return 0;

}
