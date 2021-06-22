// OOP_HW-1.cpp

#include <iostream>
#include <cmath>
#include <cstdint>

using namespace std;    

//Task 1.1
class Power
{
private:
    double x;
    double n;

public:
    Power() : x(1.0), n(1.0) {

    }

    void set(double a, double b) {
        x = a;
        n = b;
    }

    void calculate() {
        cout << " " << x << "^" << n << " = " << pow(x, n) << endl;
    }
};

//Task 1.2
class RGBA 
{
private:
    uint8_t m_red;
    uint8_t m_green;
    uint8_t m_blue;
    uint8_t m_alpha;

public:
    RGBA() : m_red(0), m_green(0), m_blue(0), m_alpha(255) {

    }
    
    RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) : m_red(red), m_green(green), m_blue(blue), m_alpha(alpha) {

    }

    void print() {
        cout << " R: " << static_cast<int>(m_red) << " || G: " << static_cast<int>(m_green) << " || B: " << static_cast<int>(m_blue) << " || Alpha: " << static_cast<int>(m_alpha) << endl;
    }
};

//Task 1.3

class Stack 
{
private:
    int stack[10];
    int lenght;

public:
    void reset() {
        for (size_t i = 0; i < 10; i++)
        {
            stack[i] = 0;
        }
        lenght = 0;
    }

    bool push(int a) {
        if (lenght < 10) {
            stack[lenght++] = a;
            return true;
        }
        return false;
    }

    int pop() {
        if (lenght > 0)
        {
            return stack[--lenght];
        }
        cout << "Stack empty." << endl;
        return 0;
    }

    void print() {
        cout << " {";
        for (int i = 0; i < lenght; i++)
        {
            cout << " " << stack[i] << " ";
        }
        cout << "}" << endl;
    }

};

int main()
{
    //Task 1.1
    Power pw;
    pw.set( 2.2 , 3.5 );
    pw.calculate();

    //Task 1.2
    RGBA rgba( 128 , 255 , 0 , 128 );
    rgba.print();

    //Task 1.3
    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();

    return 0;
}

