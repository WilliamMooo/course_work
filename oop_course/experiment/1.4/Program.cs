using System;

namespace myApp
{
    class Rectangle {
        private double length;
        private double width;
        private double posX;
        private double posY;
        private double area;
        public void diplay() {
            Area();
            // string output = "长：" + length + "\n宽：" + width + "\n左上角坐标：" + posX + " " + posY;
            Console.WriteLine("长:{0}, 宽:{1}, 左上角坐标:({2}, {3}), 面积: {4}", length, width, posX, posY, area);
        }
        public void Area() {
            area = length*width;
        }
        public Rectangle(double len, double wid, double x, double y) {
            length = len;
            width = wid;
            posX = x;
            posY = y;
        }
        public Rectangle() {
            length = 1;
            width = 1;
            posX = 1;
            posY = 1;
        }
    }
    class Program
    {
        static void Main() {
            Rectangle rec1 = new Rectangle(1, 2, 3, 4);
            Rectangle rec2 = new Rectangle();
            rec1.diplay();
            rec2.diplay();
            Console.Write("请输入长方形的长：");
            double len = Convert.ToDouble(Console.ReadLine());
            Console.Write("请输入长方形的宽：");
            double wid = Convert.ToDouble(Console.ReadLine());
            Console.Write("请输入长方形的左上角坐标x：");
            double x = Convert.ToDouble(Console.ReadLine());
            Console.Write("请输入长方形的左上角坐标y：");
            double y = Convert.ToDouble(Console.ReadLine());
            Rectangle rec3 = new Rectangle(len, wid, x, y);
            rec3.diplay();

            // int I1 = 10;
            // long L1 = 10000000000;
            // float F1 = 3.14F;
            // double D1 = 6.28;
            // decimal Deci = 9.42M;
            // I1 = (int)L1;
            // D1 = F1;
            // F1 = (float)D1;
            // Deci = (decimal)F1;
            // Console.WriteLine("I1={0},L1={1},F1={2},D1={3},Deci={4}", I1, L1, F1, D1, Deci);
        }
    }
}
