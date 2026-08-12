#include <iostream>
#include <string>
#include "Human.h"

void Human::setName(std::string name) {
    this->name = name;
}

void Human::setAge(int age) {
    if (age > 0 && age <= 150) {
        this->age = age;
    } else {
        std::cout << "!Invalid Age. Age must be in [1, 150]\n";
    }
}

void Human::setGender(int gender) {
    if (gender == 0 || gender == 1) {
        this->gender = gender;
    } else {
        std::cout << "!Invalid Gender. Gender must be '0': female or '1': male\n";
    }
}

std::string Human::getName() const {
    return name;
}

int Human::getGender() const {
    return gender;
}

int Human::getAge() const {
    return age;
}

void Human::inputName() {
    std::cout << "Enter name: ";
    getline(std::cin, name);
}

void Human::inputGender() {
    std::cout << "Enter gender (0: female - 1: male): ";
    std::cin >> gender;
    
    while (gender != 0 && gender != 1) {
        std::cout << "!Invalid Gender. Please enter 0 (female) or 1 (male) again: ";
        std::cin >> gender;
    }
}

void Human::inputAge() {
    std::cout << "Enter Age (1 <= Age <= 150): ";
    std::cin >> age;

    while (age < 1 || age > 150) {
        std::cout << "!Invalid Age. Please enter Age (1 <= Age <= 150): ";
        std::cin >> age;
    }
}

void Human::inputInfor() {
    inputName();
    inputGender();
    inputAge();
}

