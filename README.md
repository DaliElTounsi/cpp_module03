# C++ Module 03 — Inheritance & Multiple Inheritance

This **42 School C++ module** explores class inheritance, constructor/destructor order, specialization of behavior and multiple inheritance in C++98.

## What this module demonstrates

- Base and derived classes
- Public inheritance
- Constructor and destructor chaining
- Reusing and extending inherited behavior
- Method specialization
- Multiple inheritance
- Resolving duplicated base-class state
- Designing class hierarchies with clear responsibilities

## Exercise progression

The module starts with a `ClapTrap` base class and progressively introduces specialized derived classes such as `ScavTrap` and `FragTrap`. The final exercise combines both inheritance branches in `DiamondTrap`, providing a practical example of the classic diamond-inheritance problem.

## Why it matters

Inheritance can reduce duplication, but it also introduces coupling and ambiguity. This module helped me understand both the power and the design cost of class hierarchies, especially when several inheritance paths converge.

## Build

Each exercise contains its own `Makefile`.

```bash
cd ex03
make
```

## Project context

Part of my **42 School software-engineering journey**, documenting my progression through object-oriented architecture in C++98.

---

**Mohamed Ali Chamsa**  
Software & AI Builder · Entrepreneur · 42 School