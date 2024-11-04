// simple inheritance program for test polymorphism ( virtual pointer ) and signature ( const , final )

#include<cstdio>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// lvl 0
class lvl0
{
public:
    lvl0()
    {
        age=10;
        printf("lvl0 Constructor 1\n");
    }

    lvl0(int x)
    {
        age=10;
        printf("lvl0 Constructor 2\n");
    }

    virtual ~lvl0()
    {
        printf("lvl0 Destructor\n");
    }

    virtual lvl0* copy() const
    {
        return new lvl0 (*this);
    }

    // can use pure virtual function for lvl0::print() , because all sub classes inherited lvl0 contain print()
    // but i don't make this class as Abstract Base Class ( ABC class ) , because i want too test it
    virtual void print() const // when didn't use signature ( const ) in ( lvl0 --> base class) , ( const ) in sub classes useless
    {
        printf("lvl0 print()\n");
    }

   int age;
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// lvl 1
class lvl1_A: public virtual lvl0
{
public:
    lvl1_A()
    {
        printf("lvl1_A Constructor 1\n");
    }

    lvl1_A(int x) : lvl0(1)
    {
        printf("lvl1_A Constructor 2\n");
    }

    ~lvl1_A()
    {
        printf("lvl1_A Destructor\n");
    }

    lvl0* copy() const
    {
        return new lvl1_A (*this);
    }

    void print() const
    {
        printf("lvl1_A print()\n");
    }
};

class lvl1_B: public virtual lvl0
{
public:
    lvl1_B()
    {
        printf("lvl1_B Constructor 1\n");
    }

    lvl1_B(int x) : lvl0(1)
    {
        printf("lvl1_B Constructor 2\n");
    }

    ~lvl1_B()
    {
        printf("lvl1_B Destructor\n");
    }

    lvl0* copy() const
    {
        return new lvl1_B (*this);
    }

    void print() const
    {
        printf("lvl1_B print()\n");
    }
};

class lvl1_C: public virtual lvl0
{
public:
    lvl1_C()
    {
        printf("lvl1_C Constructor 1\n");
    }

    lvl1_C(int x) : lvl0(1)
    {
        printf("lvl1_C Constructor 2\n");
    }

    ~lvl1_C()
    {
        printf("lvl1_C Destructor\n");
    }

    lvl0* copy() const
    {
        return new lvl1_C (*this);
    }

    void print() const
    {
        printf("lvl1_C print()\n");
    }
};

class lvl1_D: public virtual lvl0
{
public:
    lvl1_D()
    {
        printf("lvl1_D Constructor 1\n");
    }

    lvl1_D(int x) : lvl0(1)
    {
        printf("lvl1_D Constructor 2\n");
    }

    ~lvl1_D()
    {
        printf("lvl1_D Destructor\n");
    }

    lvl0* copy() const
    {
        return new lvl1_D (*this);
    }

    void print() const
    {
        printf("lvl1_D print()\n");
    }
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// lvl 2
class lvl2_DiamondProblem : public lvl1_A, lvl1_B, lvl1_C, lvl1_D
{
public:
    lvl2_DiamondProblem()
    {
        printf("lvl2_DiamondProblem Constructor 1\n");
    }

    lvl2_DiamondProblem(int x) : lvl1_A(1),lvl1_B(1),lvl1_C(1),lvl1_D(1)
    {
        printf("lvl2_DiamondProblem Constructor 2\n");
    }

    ~lvl2_DiamondProblem()
    {
        printf("lvl2_DiamondProblem Destructor\n");
    }

    lvl0* copy() const
    {
        return new lvl2_DiamondProblem (*this);
    }

    void print() const
    {
        printf("lvl2_DiamondProblem print()\n");
    }
};

class lvl2_A: public lvl1_A
{
public:
    lvl2_A()
    {
        printf("lvl2_A Constructor 1\n");
    }

    lvl2_A(int x) : lvl1_A(1)
    {
        printf("lvl2_A Constructor 2\n");
    }

    ~lvl2_A()
    {
        printf("lvl2_A Destructor\n");
    }

    lvl0* copy() const
    {
        return new lvl2_A (*this);
    }

    void print() const
    {
        printf("lvl2_A print()\n");
    }
};

class lvl2_B: public lvl1_B
{
public:
    lvl2_B()
    {
        printf("lvl2_B Constructor 1\n");
    }

    lvl2_B(int x) : lvl1_B(1)
    {
        printf("lvl2_B Constructor 2\n");
    }

    ~lvl2_B()
    {
        printf("lvl2_B Destructor\n");
    }

    lvl0* copy() const
    {
        return new lvl2_B (*this);
    }

    void print() const
    {
        printf("lvl2_B print()\n");
    }
};

class lvl2_C: public lvl1_C
{
public:
    lvl2_C()
    {
        printf("lvl2_C Constructor 1\n");
    }

    lvl2_C(int x) : lvl1_C(1)
    {
        printf("lvl2_C Constructor 2\n");
    }

    ~lvl2_C()
    {
        printf("lvl2_C Destructor\n");
    }

    lvl0* copy() const
    {
        return new lvl2_C (*this);
    }

    void print() const
    {
        printf("lvl2_C print()\n");
    }
};

class lvl2_D: public lvl1_D
{
public:
    lvl2_D()
    {
        printf("lvl2_D Constructor 1\n");
    }

    lvl2_D(int x) : lvl1_D(1)
    {
        printf("lvl2_D Constructor 2\n");
    }

    ~lvl2_D()
    {
        printf("lvl2_D Destructor\n");
    }

    lvl0* copy() const
    {
        return new lvl2_D (*this);
    }

    void print() const
    {
        printf("lvl2_D print()\n");
    }
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// lvl 3
class lvl3_A: public lvl2_A
{
public:
    lvl3_A()
    {
        printf("lvl3_A Constructor 1\n");
    }

    lvl3_A(int x) : lvl2_A(1)
    {
        printf("lvl3_A Constructor 2\n");
    }

    ~lvl3_A()
    {
        printf("lvl3_A Destructor\n");
    }

    lvl0* copy() const
    {
        return new lvl3_A (*this);
    }

    void print()  const
    {
        printf("lvl3_A print()\n");
    }
};

class lvl3_B: public lvl2_B
{
public:
    lvl3_B()
    {
        printf("lvl3_B Constructor 1\n");
    }

    lvl3_B(int x) : lvl2_B(1)
    {
        printf("lvl3_B Constructor 2\n");
    }

    ~lvl3_B()
    {
        printf("lvl3_B Destructor\n");
    }

    lvl0* copy() const
    {
        return new lvl3_B (*this);
    }

    void print() const
    {
        printf("lvl3_B print()\n");
    }
};

class lvl3_C: public lvl2_C
{
public:
    lvl3_C()
    {
        printf("lvl3_C Constructor 1\n");
    }

    lvl3_C(int x) : lvl2_C(1)
    {
        printf("lvl3_C Constructor 2\n");
    }

    ~lvl3_C()
    {
        printf("lvl3_C Destructor\n");
    }

    lvl0* copy() const
    {
        return new lvl3_C (*this);
    }

    void print() const
    {
        printf("lvl3_C print()\n");
    }
};

class lvl3_D: public lvl2_D
{
public:
    lvl3_D()
    {
        printf("lvl3_D Constructor 1\n");
    }

    lvl3_D(int x) : lvl2_D(1)
    {
        printf("lvl3_D Constructor 2\n");
    }

    ~lvl3_D()
    {
        printf("lvl3_D Destructor\n");
    }

    lvl0* copy() const
    {
        return new lvl3_D (*this);
    }

    void print() const
    {
        printf("lvl3_D print()\n");
    }
};

// we can use signature ( final ) for print() , copy() in last level ( lvl3 )

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void fn(lvl0 &x)
{
    x.print();
}

int main()
{
    printf("------------------------------------------------------------------------------------------------\n");
    printf("create different classes FROM one class ( lvl0 --> base class )\n\n");
    lvl0* p[13];

    p[0]=new lvl0();
    printf("\n\n");

    p[1]=new lvl1_A();      printf("\n");
    p[2]=new lvl1_B();      printf("\n");
    p[3]=new lvl1_C(1);  printf("\n");
    p[4]=new lvl1_D(1);  printf("\n\n");

    p[5]=new lvl2_A();      printf("\n");
    p[6]=new lvl2_B();      printf("\n");
    p[7]=new lvl2_C(1);  printf("\n");
    p[8]=new lvl2_D(1);  printf("\n\n");

    p[9]=new lvl3_A();       printf("\n");
    p[10]=new lvl3_B();      printf("\n");
    p[11]=new lvl3_C(1);  printf("\n");
    p[12]=new lvl3_D(1);  printf("\n\n");

    for(int i=0;i<13;++i) fn(*p[i]);
    printf("------------------------------------------------------------------------------------------------\n");

    printf("------------------------------------------------------------------------------------------------\n");
    printf("copy different class BY one class ( lvl0 --> base class )\n\n");
    lvl0* p2[13];

    for(int i=0;i<13;++i) p2[i]=p[i]->copy();
    //for(int i=0;i<13;++i) p2[i]=p[i]; // error
    //delete p[1]; // proof above error

    for(int i=0;i<13;++i) fn(*p2[i]);
    printf("------------------------------------------------------------------------------------------------\n");

    printf("------------------------------------------------------------------------------------------------\n");
    printf("handled diamond problem :: \n\n");
    // Diamond Problem: can solve it by virtual pointer during inheritance
    lvl2_DiamondProblem x;
    x.age=1000;
    printf("age :: %i\n",x.age);
    printf("------------------------------------------------------------------------------------------------\n");

    printf("------------------------------------------------------------------------------------------------\n");
    printf("delete all pointers because saving memory\n");
    for(int i=0;i<13;++i)
    {
        delete p[i];  p[i]=nullptr;
        printf("\n");

        delete p2[i]; p2[i]=nullptr;
        printf("\n\n");
    }
    printf("------------------------------------------------------------------------------------------------\n");

    return 0;
}
