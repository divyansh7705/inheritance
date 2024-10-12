# inheritance

##Aim:-
To understand the concept of inheritance.

## software used :-
visual studio code

## Thepry:-
When creating a `README` file for a C++ project that demonstrates the concept of inheritance, you want to explain not only the functionality of your code but also provide a theoretical explanation of inheritance, its usage in C++, and how it is implemented in your project.

Here’s a general structure you could follow for your `README` file:

---

# Project Title: **Inheritance in C++**

## Introduction

This project demonstrates the concept of **inheritance** in C++. Inheritance is one of the fundamental concepts of object-oriented programming (OOP), allowing new classes to inherit properties and behaviors (methods) from existing classes. By using inheritance, you can promote code reusability and create hierarchical relationships between classes.

---

## Theory of Inheritance in C++

**Inheritance** allows a class (called the *derived class* or *subclass*) to inherit attributes and methods from another class (called the *base class* or *superclass*). The derived class can access and use the functionality of the base class while also adding or overriding specific functionalities.

### Types of Inheritance in C++
C++ supports different types of inheritance:

1. **Single Inheritance**: A derived class inherits from a single base class.
   ```cpp
   class Base {
   public:
       int x;
       void display() { std::cout << "Base class method" << std::endl; }
   };

   class Derived : public Base {
   public:
       void show() { std::cout << "Derived class method" << std::endl; }
   };
   ```

2. **Multiple Inheritance**: A derived class inherits from more than one base class.
   ```cpp
   class Base1 {
   public:
       void display1() { std::cout << "Base1 method" << std::endl; }
   };

   class Base2 {
   public:
       void display2() { std::cout << "Base2 method" << std::endl; }
   };

   class Derived : public Base1, public Base2 {
   public:
       void show() { std::cout << "Derived class method" << std::endl; }
   };
   ```

3. **Multilevel Inheritance**: A class is derived from a class that is also derived from another class.
   ```cpp
   class A {
   public:
       void methodA() { std::cout << "Class A method" << std::endl; }
   };

   class B : public A {
   public:
       void methodB() { std::cout << "Class B method" << std::endl; }
   };

   class C : public B {
   public:
       void methodC() { std::cout << "Class C method" << std::endl; }
   };
   ```

4. **Hierarchical Inheritance**: Multiple derived classes inherit from a single base class.
   ```cpp
   class Base {
   public:
       void display() { std::cout << "Base class method" << std::endl; }
   };

   class Derived1 : public Base {
   public:
       void show1() { std::cout << "Derived1 class method" << std::endl; }
   };

   class Derived2 : public Base {
   public:
       void show2() { std::cout << "Derived2 class method" << std::endl; }
   };
   ```

## 1) algorithm for hierarchy ingeritance :-

1. **Define the `Jeans` class:**
   - Create a class named `Jeans`.
   - Inside the class:
     - Declare a public string array `type[3]` and initialize it with values: `"Bootcut"`, `"Wide leg"`, and `"Skinny"`.
     - Define a public method `brand()` which prints the brand name `"H&M - &Denim"`.

2. **Define the `Bootcut` class:**
   - Create a class named `Bootcut` that inherits from the `Jeans` class.
   - Inside the class:
     - Declare a public string variable `colour` and initialize it with the value `"Dark Blue"`.

3. **Define the `WideLeg` class:**
   - Create a class named `WideLeg` that also inherits from the `Jeans` class.
   - Inside the class:
     - Declare a public string variable `colour` and initialize it with the value `"Black"`.

4. **In the `main()` function:**
   - Create an object `j1` of class `Bootcut`.
     - Call the `brand()` method from the base class `Jeans` using `j1`.
     - Output the first element of the `type[]` array (`type[0]`), which is `"Bootcut"`, and the `colour` value of `j1`, which is `"Dark Blue"`.
   
   - Create an object `j2` of class `WideLeg`.
     - Call the `brand()` method from the base class `Jeans` using `j2`.
     - Output the second element of the `type[]` array (`type[1]`), which is `"Wide leg"`, and the `colour` value of `j2`, which is `"Black"`.

5. **End the program.**

## 2)algorithm for mulilevel inheritance :-

1. **Define the `Food` class:**
   - Declare a public string variable `cuisine` and initialize it with `"Indian"`.
   - Define a public method `type()` that outputs `"Asian"`.

2. **Define the `Dish` class:**
   - Inherit the `Food` class publicly.
   - Declare a public string variable `dish` and initialize it with `"Biryani"`.

3. **Define the `Restaurant` class:**
   - Inherit the `Dish` class publicly.
   - Declare a public string variable `name` and initialize it with `"Spice Kitchen"`.

4. **In the `main()` function:**
   - Create an object `f3` of class `Restaurant`.
   - Call the `type()` method using `f3`, which prints `"Asian"`.
   - Output the `cuisine` (`"Indian"`) and `dish` (`"Biryani"`) values using `f3`.
   - Output the `name` of the restaurant (`"Spice Kitchen"`) using `f3`.

5. **End the program.**

## 3)algorithm for multiple inheritance :-


1. **Define the `Vehicle` class:**
   - Declare a public string variable `company` and initialize it with `"Ford"`.
   - Define a public method `type()` that outputs `"Mustang"`.

2. **Define the `Specs` class:**
   - Declare a public string variable `mileage` and initialize it with `"8kmpl"`.
   - Define a public method `colour()` that outputs `"Grey"`.

3. **Define the `Car` class:**
   - Inherit the `Vehicle` class and `Specs` class publicly.
   - Declare a public string variable `seater` and initialize it with `"4 seater"`.

4. **In the `main()` function:**
   - Create an object `f2` of class `Car`.
   - Call the `colour()` method using `f2` (from the `Specs` class), which prints `"Grey"`.
   - Output the `company` (from the `Vehicle` class) and call the `type()` method (also from `Vehicle`), which prints `"Ford Mustang"`.
   - Output the `seater` value from the `Car` class.
   - Output the `mileage` value from the `Specs` class.

5. **End the program.**

 ## 4) algorithm for single inheritance :-

1. **Define the `Uni` class:**
   - Declare a public string variable `university` and initialize it with `"Symbiosis:"`.
   - Define a public method `discipline()` that outputs `"Engineering"`.

2. **Define the `Dep` class:**
   - Inherit the `Uni` class publicly.
   - Declare a public string variable `department` and initialize it with `"Electronics & Communication"`.

3. **In the `main()` function:**
   - Create an object `d` of class `Dep`.
   - Call the `discipline()` method using `d` (inherited from `Uni`), which prints `"Engineering"`.
   - Output the `university` attribute (inherited from `Uni`) followed by the `department` attribute (from `Dep`).

4. **End the program.**

## conclusion :-
In this experiment types of inheritance were studied
