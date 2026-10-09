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

**Resources** · [Java OOP — W3Schools](https://www.w3schools.com/java/java_oop.asp) · [OOP concepts — GeeksforGeeks](https://www.geeksforgeeks.org/object-oriented-programming-oops-concept-in-java/)

### Motivation for OOP
- Problems OOP solves
- Difference from procedural programming

**Practice**
- [Why OOP instead of procedural programming](/companies/relisource#q-oop-vs-procedural) — Relisource
- [Principles of OOP, and why we use it](/companies/exabyting#q-oop-principles) — Exabyting, with answer

### Classes & Objects
- Identity, state, and behavior of an object
- Constructors
- Instance vs. object

**Practice**
- [Which characteristics represent an object](/companies/bs23#q-oop-object-characteristics) — Brain Station 23
- [Constructor overloading, traced](/companies/bs23#q-oop-constructor-overloading) — Brain Station 23
- [Which classes cannot be instantiated](/companies/bs23#q-oop-instance-creation) — Brain Station 23

### Pillars of OOP
- Encapsulation
- Abstraction
- Inheritance
- Polymorphism

**Practice**
- [Which is *not* a fundamental OOP concept](/companies/bs23#q-oop-not-fundamental-concept) — Brain Station 23
- [The four principles, explained](/companies/exabyting#q-oop-principles) — Exabyting, with answer
- [Overriding vs. overloading](/companies/bkash#q-oop-overriding-vs-overloading) — bKash, with answer
- [Method overloading rules](/companies/bs23#q-oop-method-overloading) — Brain Station 23

### Class Relationships
- Inheritance (is-a)
- Composition (has-a)
- Aggregation
- Association
- Abstract classes vs. interfaces
- Upcasting and downcasting

**Practice**
- [Inheritance, from first principles](/companies/bkash#q-oop-inheritance) — bKash, with answer
- [Which relationship is IS-A](/companies/bs23#q-oop-is-a-relationship) — Brain Station 23
- [Abstract class vs. interface](/companies/wsd#q-oop-abstract-class-vs-interface) — WSD
- [Identify the casting in this code](/companies/bs23#q-oop-upcasting-downcasting) — Brain Station 23
- [What casting is demonstrated](/companies/bs23#q-oop-casting-concept) — Brain Station 23, with answer

### Special Keywords & Gotchas
- `static`
- `final`
- `this`
- Multiple inheritance and the diamond problem

**Practice**
- [What `static` means on a method](/companies/bs23#q-oop-static-keyword) — Brain Station 23, with answer
- [Explain the `static` keyword](/companies/dsi#q-oop-static-keyword) — DSI
- [Purpose of `final`](/companies/bs23#q-oop-final-keyword) — Brain Station 23, with answer
- [`final` on variables and classes](/companies/wsd#q-oop-final-keyword) — WSD
- [What `this` refers to](/companies/bs23#q-oop-this-keyword) — Brain Station 23, with answer
- [Static counter output trace](/companies/bs23#q-oop-static-counter-output) — Brain Station 23
- [The diamond problem](/companies/bs23#q-oop-diamond-problem) — Brain Station 23, with answer

## Object-Oriented / Low-Level Design
Turning a word problem into a class design — identifying entities, modeling relationships between them, and handling systems with more than one kind of actor.

*Coverage: thin*

**Resources** · [Awesome Low Level Design](https://github.com/ashishps1/awesome-low-level-design) — free problem set with worked solutions, good to work through end to end

### Modeling Entities & Relationships
- Identifying entities from a word problem (`ParkingLot`, `Vehicle`, `Product`)
- Entity attributes
- Relationships between entities (a `Car` is-a `Vehicle`; a `VendingMachine` has `Product`s)

**Practice**
- [Design a parking management system](/companies/therap/swe#q-lld-parking-lot) — Therap, with answer
- [Design a vending machine](/companies/therap/swe#q-lld-vending-machine) — Therap, with answer

### Role-Based System Modeling
- Multiple actors acting on the same data (admins, cashiers, checkers, users)
- Class design driven by actor responsibilities

**Practice**
- [Ticket management system with five roles](/companies/bs23#q-lld-ticket-management) — Brain Station 23, with answer

## Design Patterns & SOLID Principles
What a design pattern is and why they exist, the SOLID principles that guide good design, and Singleton as a concrete pattern built on top of them.

*Coverage: thin*

**Resources** · [Refactoring.Guru — Design Patterns](https://refactoring.guru/design-patterns) · [Refactoring.Guru — SOLID](https://refactoring.guru/design-principles)

### Design Pattern Fundamentals
- Reusable solutions to recurring design problems
- When to reach for a design pattern
- Creational, structural, and behavioral categories

**Practice**
- [What design patterns are, and why they matter](/companies/sub#q-dp-what-are-design-patterns) — Stamford University
- [Choosing a pattern for an auth service](/companies/shellbeehaken#q-dp-pattern-for-auth-service) — ShellBeeHaken, with answer

### SOLID Principles
- Single Responsibility Principle
- Open/Closed Principle
- Liskov Substitution Principle
- Interface Segregation Principle
- Dependency Inversion Principle

**Practice**
- [Describe SOLID with examples](/companies/aastha#q-solid-principles) — Astha IT
- [What are the SOLID principles](/companies/revesystems#q-solid-principles) — REVE Systems

### Singleton Pattern
- Definition and purpose
- Implementation
- Thread-safety issues in the naive implementation

**Practice**
- [Implement Singleton](/companies/kite#q-dp-singleton-implement) — Kite Games, full Java implementation plus a thread-safety warning
- [Describe Singleton and write it in Java](/companies/revesystems#q-dp-singleton-java) — REVE Systems
- [Write and explain the Singleton pattern](/companies/revesystems#q-dp-singleton-explain) — REVE Systems
- [Describe the Singleton pattern](/companies/welldev#q-dp-singleton-describe) — WellDev
