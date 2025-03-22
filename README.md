# CPP Module 03 – Inheritance, Polymorphism, and Diamond Problems

## Table of Contents

1. [Project Overview](#project-overview)
2. [Core Concepts Introduced](#core-concepts-introduced)
   - [Class Inheritance](#class-inheritance)
   - [Virtual Functions](#virtual-functions)
   - [Dynamic Polymorphism](#dynamic-polymorphism)
   - [Diamond Inheritance & Virtual Inheritance](#diamond-inheritance--virtual-inheritance)
3. [Exercise Breakdown](#exercise-breakdown)
   - [Ex00: ClapTrap Base Class](#ex00-claptrap-base-class)
   - [Ex01: Introducing ScavTrap](#ex01-introducing-scavtrap)
   - [Ex02: FragTrap Joins the Battle](#ex02-fragtrap-joins-the-battle)
   - [Ex03: DiamondTrap and the Diamond Problem](#ex03-diamondtrap-and-the-diamond-problem)
4. [Compiling and Running](#compiling-and-running)
5. [Conclusion & What’s Next](#conclusion--whats-next)

---

## Project Overview

This module focuses on **object-oriented inheritance** and **polymorphism** in C++. You will:

- Learn how to use inheritance to reuse and extend code
- Understand virtual methods and how they allow **dynamic dispatch**
- Tackle the classic **diamond problem** and how to solve it using **virtual inheritance**

The code revolves around combat units (`ClapTrap`, `ScavTrap`, `FragTrap`, `DiamondTrap`) with abilities inherited and extended through class hierarchies.

---

## Core Concepts Introduced

### Class Inheritance

Inheritance allows a class to derive properties and behaviors from another.

```cpp
class ClapTrap {
  // base functionality
};

class ScavTrap : public ClapTrap {
  // inherits ClapTrap, adds new features
};
```

The `public` inheritance means public and protected members remain accessible in the derived class.

### Virtual Functions

In C++, if a base class function is marked `virtual`, it tells the compiler: "this function can be overridden in derived classes."

```cpp
class A {
public:
    virtual void speak();
};

class B : public A {
public:
    void speak() override; // called when used via A*
};
```

This is essential for **runtime polymorphism**.

### Dynamic Polymorphism

Polymorphism means you can treat derived classes like their base class, but still get behavior specific to the actual object type.

```cpp
ClapTrap* bot = new ScavTrap("Bot42");
bot->attack("target"); // ScavTrap::attack is called
```

This only works if `attack()` is `virtual` in the base class.

### Diamond Inheritance & Virtual Inheritance

The diamond problem happens when a class inherits from two classes that themselves inherit from a common base.

```
      ClapTrap
      /     \
ScavTrap   FragTrap
      \     /
    DiamondTrap
```

This leads to **ambiguity**: does `DiamondTrap` have one `ClapTrap` or two?

C++ solves this with **virtual inheritance**:

```cpp
class ScavTrap : virtual public ClapTrap {};
class FragTrap : virtual public ClapTrap {};
```

Now `DiamondTrap` inherits **a single shared instance** of `ClapTrap`.

---

## Exercise Breakdown

### Ex00: ClapTrap Base Class

**Goal:** Implement a base class `ClapTrap` with basic stats (HP, EP, attack damage) and basic methods (`attack`, `takeDamage`, `beRepaired`).

**What we learn:**

- Class encapsulation
- Constructor initialization
- Default/copy constructors and destructors
- Basic interaction through methods

### Ex01: Introducing ScavTrap

**Goal:** Create a subclass `ScavTrap` that inherits from `ClapTrap` and introduces a new behavior `guardGate()`.

**What we learn:**

- Class inheritance
- Constructor chaining (`ScavTrap` constructor calling `ClapTrap` constructor)
- Overriding methods like `attack()`
- Member hiding vs method overriding

### Ex02: FragTrap Joins the Battle

**Goal:** Add `FragTrap`, another subclass of `ClapTrap`, with its own special method `highFivesGuys()`.

**What we learn:**

- Multiple inheritance levels
- Combining multiple specialized behaviors
- More constructor chaining and overloading

### Ex03: DiamondTrap and the Diamond Problem

**Goal:** Create `DiamondTrap`, a class that inherits from both `ScavTrap` and `FragTrap`.

**What we learn:**

- The **diamond problem** and how to solve it using **virtual inheritance**
- Managing member ambiguity (e.g., `ClapTrap::_name` vs `DiamondTrap::_name`)
- Overriding the `whoAmI()` method to show class identity
- Explicit qualification when needed:

```cpp
ClapTrap::attack(target); // avoid ambiguity
```

---

## Compiling and Running

1. Navigate to the relevant folder:

```sh
cd ex02
```

2. Compile with make:

```sh
make
```

3. Run the binary:

```sh
./trap
```

4. Cleaning:

```sh
make clean     # remove object files
make fclean    # remove object files and binaries
make re        # rebuild everything
```

---

## Conclusion & What’s Next

In this module, we:

- Practiced building class hierarchies through inheritance
- Used virtual methods for runtime polymorphism
- Solved complex inheritance with **virtual base classes**

These concepts are central to real-world C++ design — from UI frameworks to game engines.

In **CPP04**, we’ll take this further with **abstract classes**, **pure virtual functions**, and explore **interface-driven design**.

