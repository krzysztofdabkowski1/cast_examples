#include <iostream>

class Person 
{
    public:

        virtual void Introduce() = 0;
        // {
        //     std::cout<<"Person"<<std::endl;
        // }
};

class Mark: public Person
{
    public:

        virtual void Introduce()
        {
            std::cout<<"Mark"<<std::endl;
        }
};

class Chris: public Person
{
    public:

        virtual void Introduce()
        {
            std::cout<<"Chris"<<std::endl;
        }
};

class Zibi: public Person 
{
    public:

        void Introduce()
        {
            std::cout<<"Zibi TOP"<<std::endl;
        }
};