/**
 * \file
 * \brief God Damn Inheritance Design Pattern
 *
 * The God Damn Inheritance desing pattern derives from the Fuckington design
 * pattern, but instead of forcing the user to implement a FUCK class that
 * instantiate the Fuckington, the God Damn Inheritance defines a class where
 * the ONLY way to use it is by implementing a class named GOD_DAMN_INHERITANCE
 * (yes, the uppercase words 'god damn inheritance' joined by underscores '_')
 * in your code and the GOD_DAMN_INHERITANCE class MUST inherit your class.
 *
 * In a God Damn Inheritance all methods and/or members are private (including
 * all constructors and desctructors) your God Damn Inheritance class MUST have
 * a friend class called GOD_DAMN_INHERITANCE, the God Damn Inheritance itself
 * has to have at least on pure virtual non-static private method, that will
 * forces the user to implement the GOD_DAMN_INHERITANCE inheriting your class
 * and implementing this pure virtual method whatever he wants.
 *
 * A good pratice to combine with the God Damn Inheritance is mading all the
 * methods statics so the GOD_DAME_INHERITANCE class can also expose than as
 * static methods and the entire code that uses your implementation will look
 * like this:
 *
 *   ...
 *   GOD_DAMN_INHERITANCE::DoStuff();
 *   GOD_DAMN_INHERITANCE::DoSomething();
 *   GOD_DAMN_INHERITANCE::StopDoingThis();
 *   ...
 *
 * In the GOD_DAMN_INHERITANCE class the user can expose the private methods
 * and/or members whatever he wants. The GOD_DAMN_INHERITANCE class can combine
 * by inheritance how many God Dman Inheritance class you want.
 */

#ifndef GOD_DAMN_INHERITANCE_DAMN_INHERITANCE_H_
#define GOD_DAMN_INHERITANCE_DAMN_INHERITANCE_H_

#include <iostream>

class GOD_DAMN_INHERITANCE;

class MyGodDamnInheritance {
    // You must implement the class GOD_DAMN_INHERITANCE to use
    // MyGodDamnInheritance
    friend class GOD_DAMN_INHERITANCE;

   private:
    MyGodDamnInheritance() = default;
    ~MyGodDamnInheritance() = default;

    virtual void OverrideThis() = 0;

    static int MyGodDamnSum(int a, int b)
    {
        return a + b;
    }

    static void MyGodDamnPrint(int a)
    {
        std::cout << "The god damn number is: " << a << std::endl;
    }
};

#endif  // GOD_DAMN_INHERITANCE_DAMN_INHERITANCE_H_
