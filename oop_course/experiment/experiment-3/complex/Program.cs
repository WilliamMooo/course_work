using System;

namespace complex
{
    class Complex {
        private double real;
        private double imag;
        public Complex(double x, double y) {
            real = x;
            imag = y;
        }
        static public Complex operator -(Complex left, Complex right) {
            return (new Complex(left.real - right.real, left.imag - right.imag));
        }
        static public Complex operator + (Complex left, Complex right) {
            return (new Complex(left.real + right.real, left.imag + right.imag));    
        }
        public void display() {
            string sign = "+";
            if (imag < 0) sign = "-";
            Console.WriteLine("{0} {1} {2}i", real, sign ,imag);    
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Complex x = new Complex(1, 2);
            Complex y = new Complex(3, 4);
            Complex z = new Complex(1.5, 2.5);
            z.display();
            z += x;
            z.display();
            z -= y;
            z.display();
            z = x - y;
            z.display();
            z = x + y;
            z.display();
        }
    }
}
