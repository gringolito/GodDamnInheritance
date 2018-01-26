/**
 * \file
 * \brief God Damn Inheritance example
 */

#include "damn_inheritance.h"

class GOD_DAMN_INHERITANCE : public MyGodDamnInheritance {
   public:
    GOD_DAMN_INHERITANCE() = default;
    virtual ~GOD_DAMN_INHERITANCE() = default;

    void OverrideThis() override {};

    static int Sum(int a, int b)
    {
        return MyGodDamnSum(a, b);
    }

    static void Print(int a)
    {
        MyGodDamnPrint(a);
    }
};

int main()
{
    GOD_DAMN_INHERITANCE::Print(GOD_DAMN_INHERITANCE::Sum(2, 2));

    return 0;
}
