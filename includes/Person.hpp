#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person {
    public:
        Person(const string name, 
               const string lastName, 
               const int64_t pesel, 
               const bool gender,       // true - male, false - female
               const string address);
               
        void setAddress(const string newAddress);
        int32_t getPESEL() const;
        string getLastName() const; 
        virtual void show() = 0;
        virtual ~Person() {};
        
    protected:
        string name_;
        string lastName_;
        int64_t pesel_;
        bool gender_;
        string address_;
};
