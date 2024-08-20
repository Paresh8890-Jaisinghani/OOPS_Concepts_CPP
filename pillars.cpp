#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int age;
    int height;

public:
    int getage()
    {
        return this->age;
    }
};

class Human
{

public:
    int height;
    int weight;
    int age;

    void speak(){
        cout<<"speaking"<<endl;
    }

public:
    int getAge()
    {
        return this->age;
    }

    void setweight(int w)
    {
        this->weight = w;
    }
};


//single inheritance
class Male : protected Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male class is called" << endl;
    }

    int getheight(){
        return this->height;
    }
};

class Animal {
    public:
    int age;
    int weight;

    void bark(){
        cout<<"Barking"<<endl;
    } 

};


//multilevel inheritance
class Dog : public Animal{

};

class Breed : public Dog{

};


//multiple inheritance
class Run : public Human,public Animal{

};



//Herarhical inheritance 
class A : public Animal{
    public:
    void func1(){
        cout<<"a class called"<<endl;
    }
};

class B : public Animal{
    public:
    void func2(){
        cout<<"b class called"<<endl;
    }
};

class C : public Animal{
    public:
    void func3(){
        cout<<"c class called"<<endl;
    }
};


class FunctionOverloading{
    public:

    void sayhello(){
        cout<<"Hello"<<endl;
    }

    int sayhello(int n){
        cout<<"hello n"<<endl;
        return n;
    }

    int sayhello(string t){
        cout<<"hello t"<<endl;
        
    }
};

class Add{
    public:
    int a;
    int b;

    public:
    int add(){
        return a + b;
    }
    
    void operator+ (Add &obj){
        int val1 = this->a;
        int val2 = obj.a;

        cout<<"operator overloading is called "<<val2 - val1<<endl;
    }

    void operator() (){
        cout<<"Bracket called"<<endl;
    }
};



int main()
{
//     Student h1;
//     Male male;

//    cout<<male.getheight()<<endl;

    // cout<<male.getAge()<<endl;
    // male.setweight(20);


    // cout<<male.age<<endl;
    // cout<<male.weight<<endl;
    // male.sleep();


    // Dog dg;
    // dg.bark();


    // Breed bruso;
    // bruso.bark();


    // Run obj;

    // obj.speak();
    // obj.bark();


    //heirarchial inheritance
    // A a;
    // B b;
    // C c;

    // a.func1();
    // a.bark();
    // b.func2();
    // c.func3();

    //compile time (static)
    //Polymorphism (Function Overloading)
    // FunctionOverloading temp;
    // temp.sayhello();

    //compile time(static)
    //Polymorphism(operator Overloading) (oveloading + sign)
    Add addtion;
    addtion.a = 10;
    addtion.b = 20;

    Add substrat;
    substrat.a = 30;
    substrat.b = 40;

    addtion + substrat;
    addtion();


    //Run time(dynamic)







    return 0;
}

// 1. Encapsulation : wraping up the data variables(member) and member functions together, Information hiding or data hiding
// Fully Encapsulated class : all members are marked as private
// Advantages : - read only variables , data hiding

// 2. Inheritance : inheriting properties of super class(base class / parent class) by sub class(child class)
//modes of inheritance : public -> public : access , private-> public : notaccessible , public -> private : private , public -> protected : protected
// private data member of any class can not be accessible


//protected modifier same as private but can be accessible by sub class but not outside the class


//Types of Inheritance : 1)Single 2)Multi-level 3)Multiple 4)Hybrid 5)Heirarhical
//1)Single inheritance : onle one sub class
//2)Multilevel inheritance : A->B->C->D
//3)Multiple inheritance : A-> B && C-> B
//4)Heirarchical : one class serve as parent class for more than one class.
//5)Hybrid inheritance : combination of more than one type of inheritance


//Inheritance ambugity : same function name in different classes 



//Polymorphism : many forms : existing in different forms
//1) Compile time polymorphism : (binding code in compile time) -Function overloading , operator overloading
//-- Function overloading : if function names are same then input parameters should be different 
//-- Operator overloading : variable can be used in different way (like use + to substract);


//Run time polymorphism  -- (binding code in run time)Function overriding
//parent class and sub class should have same method name
//parent class and sub class should have same argument(parameter)
//sub class should ne inherited



//Abstraction (Implementation hiding)
//using access modifier we can access somem parts and some not
