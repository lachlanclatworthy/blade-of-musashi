#include <vaughn.h>

void initVaughn() {
    const int VAUGHN_COUNT = 20;
    for (int i = 0; i < VAUGHN_COUNT; i++ ) {
        Vaughn v[] = {std::string("Michael"), std::string("Vincent"), std::string("Francis"), std::string("Vaughn")};
        for (Vaughn &x : v) x.callout();
    }
}

void Vaughn::callout() {
    std::cout << "Greetings! I am " << this->getName() << ", my friend..." << std::endl;
}

const std::string &Vaughn::getName() {
    return this->name;
}
