#pragma once
#include <iostream>
#include <string>

class Human {
private:
    std::string name = "";
    int gender = 0; //0: female; 1: male
    int age = 1;

public:
    std::string getName() const;
    int getGender() const;
    int getAge() const;

    void inputName();
    void inputGender();
    void inputAge();
    void inputInfor();

    void setName(std::string name);
    void setGender(int gender);
    void setAge(int age);

};