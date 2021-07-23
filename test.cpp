#include <iostream>
using namespace std;

class base
{
public:
   int a, b;

public:
   //Default Constructor
   base()
   {
      a = 10;
      b = 20;
   }

   //Parametrized Constructor
   base(int a, int b)
   {
      this->a = a;
      this->b = b;
      cout << "\nParameterized Constrcutor Called\n";
   }

   //Copy Constructor
   base(const base &obj) = delete
   {
      cout << "\nCopy Contructor Called\n";
      a = obj.a;
      b = obj.b;
   }

   //Assignment Operator
   base operator=(base obj) = delete
   {
      cout << "\nAssignment Operator Called\n";
      base b1;
      b1.a = obj.a;
      b1.b = obj.b;
      return b1;
   }

   //Destructor Called
   ~base()
   {
      cout << "Destructor Called"
           << "\n";
   }

   //Static Function
   static void func1()
   {
      cout << "\n"
           << "Static Function from Base"
           << "\n";
   }

   //Virtual Function
   virtual void func3()
   {
      cout << "\nVirtual Function from Base\n";
   }

   virtual void func4()
   {
      cout << "\nTesting VTable function 4 from base\n";
   }

   virtual void func5()
   {
      cout << "\nTesting VTable function 5 from base\n";
   }

   //Friend Function
   friend void func2();
};

class child : public base
{
public:
   void func1()
   {
      cout << "From Child Function 2"
           << "\n";
   }

   void func3()
   {
      cout << "\nVirtual Function Overridden in Child Class\n";
   }

   void func4()
   {
      cout << "\nTesting VTable function from child\n";
   }
};

//Inline Function
inline void func2()
{
   base b2;
   b2.a = 30;
   b2.b = 40;
   cout << "\n"
        << "Overloaded Friend Function"
        << "\n";
}

//Function Overoading
void func2(int x)
{
   cout << "From Overloaded Function 2 :" << x << "\n";
}

int main()
{
   int x = 10;
   cout << "\nSize of x : " << sizeof(x) << "\n";
   base b1;
   base b2(50, 60);
   cout << "\nSize of Class base : " << sizeof(b1) << "\n";
   base b3 = b2;
   base b4(100, 200);
   base *b5;
   b5 = &b4;
   b4 = b2;
   b1.func1();
   base::func1();

   base *b6;
   child c2;

   b6 = &c2;
   cout << "\nTesting Operator Overriding\n";
   b6->func1();
   c2.func1();

   base *b7;
   child c3;

   b7 = &c3;
   cout << "\nTesting Virtual Functions\n";
   b7->func3();
   c3.func3();

   base *b8 = new child();
   b8->func4();
   b8->func5();
   cout << "a | b : " << b1.a << " | " << b1.b << "\n";
   cout << "a | b : " << b2.a << " | " << b2.b << "\n";
   cout << "a | b : " << b3.a << " | " << b3.b << "\n";
   cout << "a | b : " << b4.a << " | " << b4.b << "\n";
   cout << "a | b : " << b5->a << " | " << b5->b << "\n";
   func2();
   func2(25);

   int y = 20;
   if (y == 20)
   {
      base b2;
   }

   cout << "\nSize : " << sizeof(b1) << "\n";

   child c1;
   c1.func1();
   return 0;
}