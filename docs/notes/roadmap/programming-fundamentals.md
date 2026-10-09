---
description: OOP, object-oriented design, and design patterns — the programming fundamentals section of the interview prep roadmap.
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/notes/roadmap/programming-fundamentals
---
# Programming Fundamentals

*Part of the [Interview Prep Roadmap](./). Coverage ratings are explained there.*

## Object-Oriented Programming
What problem OOP solves, the fundamentals of classes and objects, the four pillars, relationships between classes, and the keywords that tie it together.

*Coverage: rich*

### Motivation for OOP
- Problems OOP solves
- Difference from procedural programming

### Classes & Objects
- Identity, state, and behavior of an object
- Constructors
- Instance vs. object

### Pillars of OOP
- Encapsulation
- Abstraction
- Inheritance
- Polymorphism

### Class Relationships
- Inheritance (is-a)
- Composition (has-a)
- Aggregation
- Association
- Abstract classes vs. interfaces
- Upcasting and downcasting

### Special Keywords & Gotchas
- `static`
- `final`
- `this`
- Multiple inheritance and the diamond problem

## Object-Oriented / Low-Level Design
Turning a word problem into a class design — identifying entities, modeling relationships between them, and handling systems with more than one kind of actor.

*Coverage: thin*

### Modeling Entities & Relationships
- Identifying entities from a word problem (`ParkingLot`, `Vehicle`, `Product`)
- Entity attributes
- Relationships between entities (a `Car` is-a `Vehicle`; a `VendingMachine` has `Product`s)

### Role-Based System Modeling
- Multiple actors acting on the same data (admins, cashiers, checkers, users)
- Class design driven by actor responsibilities

## Design Patterns & SOLID Principles
What a design pattern is and why they exist, the SOLID principles that guide good design, and Singleton as a concrete pattern built on top of them.

*Coverage: thin*

### Design Pattern Fundamentals
- Reusable solutions to recurring design problems
- When to reach for a design pattern
- Creational, structural, and behavioral categories

### SOLID Principles
- Single Responsibility Principle
- Open/Closed Principle
- Liskov Substitution Principle
- Interface Segregation Principle
- Dependency Inversion Principle

### Singleton Pattern
- Definition and purpose
- Implementation
- Thread-safety issues in the naive implementation
