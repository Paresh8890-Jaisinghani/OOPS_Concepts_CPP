#include <bits/stdc++.h>
using namespace std;

// class is a userdefined datatype
// class serve as a building blocks for an object
// instances of object
// 1 byte of memory allocated in empty class for  tracking an object

// Access Modifier : 1)Public,2)Private,3)Protectd
// by default all are private : only accessible within the class

// getter and setter : functions within the class to get and set varibles of private

// this-keyword : stores address of object , means "this" is a pointer , pointing to the address of an object

class Queen
{
public:
    int pos;
    char lev;
};

class Hero
{
private:
    int health;

public:
    char level;
    char *name;

    //belonging to class
    //to access no need to make an object

    static int timetocomplete;

    // default constructor
    Hero()
    {
        cout << "Deafult Constructor is called" << endl;
        name = new char[100];
    }

    // parameterized constructor
    Hero(int health)
    {
        cout << "address of parametrized constructor " << this << endl;

        // this keyword stores current object address , here current object is 'w' called in the main function
        this->health = health;
    }

    Hero(int health, int level)
    {
        this->health = health;
        this->level = level;
    }

    // //copy constructor
    Hero(Hero &temp)
    {
          
        //Deep copy by making new char array
        // address changes that's why new no change in the values of name variable
        char *t = new char(strlen(temp.name) + 1);
        strcpy(t, temp.name);
        this->name = t;

        cout << "copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << this->health << endl;
        cout << this->level << endl;
    }

    void printlev()
    {
        cout << level << endl;
    }
    void printhel()
    {
        cout << health << endl;
    }

    void printshallow()
    {
        cout << "name is " << this->name << endl;
        cout << "health is " << this->health << endl;
        cout << "level is " << this->level << endl;
    }

    int gethealth()
    {
        return health;
    }

    char getlev()
    {
        return level;
    }

    void sethealth(int h)
    {
        health = h;
    }

    void setlev(char le)
    {
        level = le;
    }

    void setname(char name[])
    {
        this->name = name;
    }

    //static function
    //only called for static members
    //no this keyword as this keyword is for an object
    static int random(){
        cout<<timetocomplete<<endl;
    }

    //destructor
    //For static objects destructor is called manually
    //memory deallocate 
    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }
};

//static member belonging to class
int Hero :: timetocomplete = 10;

int main()
{

    cout<<Hero::timetocomplete<<endl;
    Hero::random();

    // parametrized constructor
    //  Hero w(50);
    //  cout<<"address is same "<<&w<<endl;

    // calling the constructor
    // default constructor
    //  cout<<"testing"<<endl;
    //  Hero *q = new Hero;
    //  cout<<"testing"<<endl;

    // copy constructor
    //  Hero d(90,'r');
    //  Hero D(d);

    // D.print();

    // Static allocation
    //  Hero h1;
    // constructor is called : 1)invoke at the time of object creation , 2)No return type , 3)No input parameter

    // dynamic allocation
    //  Hero *a = new Hero;
    //  a->sethealth(100);
    //  a->setlev('R');
    //  cout<<"level of a is "<<(a->gethealth())<<endl;
    //  cout<<"health of a is "<<(a->getlev())<<endl;

    // h1.setlev('Q');
    // h1.sethealth(80);

    // cout<<"h1 health is "<<h1.gethealth()<<endl;
    // cout<<"h1 level is "<<h1.getlev()<<endl;
    // Queen h2;
    // 8 bytes allocated : padding and greedy alignment
    // padding : extra bytes allocated to int and 8bytes variables to align data members to a specific boundary
    // greedy alignment is used to minimize padding by ordering the data members of a class in decreasing order of size

    // cout<<sizeof(h2)<<endl;

    // h1.printhel();
    // h1.printlev();
    // cout<<"size"<<" "<<sizeof(h1)<<endl;

    Hero p;
    // p.sethealth(10);
    // p.setlev('D');
    // char name[7] = "paresh";

    // p.setname(name);

    // p.printshallow();

    Hero hero(p);
    // hero.printshallow();

    // shallow copy : if one name changes other also changes
    // name variable is a pointer so it stores address , if something changes , values at address changes
    // p.name[0] = 'j';
    // p.printshallow();
    // hero.printshallow();
    

    //copy assignment operator
    // hero = p;
    // hero.printshallow();

   //manuall call for destructor for dynamic allocation 
   Hero *he = new Hero;
   delete he;


}


//const keyword
//a variable that can't be changed after declaration 


//const member functions : only called for const keyword, can't change the value of const keyword just a read only function