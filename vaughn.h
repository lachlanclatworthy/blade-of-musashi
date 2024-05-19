#ifndef VAUGHN_H
#define VAUGHN_H

#include <iostream>
#include <string>

class Vaughn
{
    std::string name;
public:
    Vaughn() : name("no_name") { std::cout << "Creation of Vaughn!" << std::endl; }
    Vaughn(std::string n) : name(n) { std::cout << "Creation of Vaughn. I am " << this->name << std::endl; }
    ~Vaughn() {std::cout << "Destruction of Vaughn!" << std::endl;}

    void callout();
    const std::string &getName();
};

void initVaughn();

#endif // VAUGHN_H
