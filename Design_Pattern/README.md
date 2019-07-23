# Design Pattern
This repository includes the examples from the [Design Pattern Quick Guide](https://www.tutorialspoint.com/design_pattern/design_pattern_quick_guide). Notes includes my thoughts and the good comments from the cited websites.

### Background
- According to initial authors design patterns are primarily based on the following principles.
    - Program to an interface not an implementation
    - Favor object composition over inheritance
- **Usage of Design Pattern**
    - Design patterns provide a standard terminology and are specific to particular scenario.
    - Design patterns provide best solutions to certain problems faced during software development.
- **Types of Design Pattern**
    - Creational Patterns
        - These design patterns provides way to create objects while hiding the creation logic, rather than instantiating objects directly using new operator. This gives program more flexibility in deciding which objects need to be created for a given use case.
    - Structural Patterns
        - These design patterns concern class and object composition. Concept of inheritance is used to compose interfaces and define ways to compose objects to obtain new functionalities.
    - Behavioral Patterns
        - These design patterns are specifically concerned with communication between objects.
    - J2EE Patterns
        - These design patterns are specifically concerned with the presentation tier. These patterns are identified by Sun Java Center.

<br> <br>
## Creational Patterns
### Factory Pattern
- Factory Pattern is under creational pattern. It's under Creational Pattern.
- Implementation
    - In Factory pattern, we create object without exposing the creation logic to the client and refer to newly created object using a common interface.
    - [Factory Pattern Example](FactoryPattern)
    ![Structure](images/factory_pattern_uml_diagram.jpg "Factory pattern Structure")

### Abstract Factory Pattern
- Abstract Factory patterns work around a super-factory which creates other factories. This factory is also called as factory of factories. Under creational patterns.
- Implementation
    - [Abstract Factory Pattern Example](AbstractFactoryPattern)
        ![Structure](images/abstractfactory_pattern_uml_diagram.jpg "Factory pattern Structure")

### Singleton Pattern
- This pattern involves a single class which is responsible to creates own object while making sure that only single object get created. Under  creational pattern.
- Implementation
    - [Singleton Pattern Example](SingletonPattern)
    <br>![Singleton Pattern Example](images/singleton_pattern_uml_diagram.jpg "Singleton Pattern Example")

### Builder Pattern
- Builder pattern builds a complex object using simple objects and using a step by step approach. This builder is independent of other objects. It is under creational pattern.
- Implementation : a business case of fast-food
- [Builder Pattern Example](BuilderPattern)
<br>![Builder Pattern Example](images/builder_pattern_uml_diagram.jpg "Builder Pattern")

### Prototype Pattern
- Prototype pattern refers to creating duplicate object while keeping performance in mind. This pattern involves implementing a prototype interface which tells to create a clone of the current object. It is used when creation of object directly is costly. It is under creational pattern.
- For example, a object is to be created after a costly database operation. We can cache the object, returns its clone on next request and update the database when needed thus reducing database calls.
- [Prototype Pattern Example](PrototypePattern)
<br>![Prototype Pattern Example](images/prototype_pattern_uml_diagram.jpg "Prototype Pattern Example")
- [What is Interface Cloneable](https://docs.oracle.com/javase/7/docs/api/java/lang/Cloneable.html)

<br><br>
## Structural pattern
### Adapter Pattern
- Adapter pattern works as a bridge between two incompatible interfaces. It is under structural pattern.
- Implementation ：an audio player device can play mp3 files only and wants to use an advanced audio player capable of playing vlc and mp4 files.
    - [Adapter Pattern Example](AdapterPattern)
    <br>![Adapter Pattern Example](images/adapter_pattern_uml_diagram.jpg	 "Adapter Pattern Example")

### Bridge Pattern
- Bridge Pattern is used where we need to decouple an abstraction from its implementation so that the two can vary independently. It is under structural pattern.
- This pattern involves an interface which acts as a bridge which makes the functionality of concrete classes independent from interface implementer classes. Both types of classes can be altered structurally without affecting each other.
- Implementation
    - [Bridge Pattern Example](BridgePattern)
    <br>![Bridge Pattern Example](images/bridge_pattern_uml_diagram.jpg	 "Bridge Pattern Example")

### Filter/Criteria Pattern
- Filter pattern or Criteria pattern is a design pattern that enables developers to filter a set of objects, using different criteria, chaining them in a decoupled way through logical operations. This type of design pattern comes under structural pattern as this pattern is combining multiple criteria to obtain single criteria.
- [Filter/Criteria Pattern](FilterOrCriteria)
<br>![Filter/Criteria Pattern Example](images/filter_pattern_uml_diagram.jpg	 "Filter/Criteria Pattern Example")

### Composite Pattern
- Composite pattern is used where we need to treat a group of objects in similar way as a single object. Composite pattern composes objects in term of a tree structure to represent part as well as whole hierarchy.
- This pattern creates a class contains group of its own objects. This class provides ways to modify its group of same objects.
- Implementation
    - [Composite Pattern Example](CompositePattern)
    <br>![Composite Pattern Example](images/composite_pattern_uml_diagram.jpg "Composite Pattern Example")
