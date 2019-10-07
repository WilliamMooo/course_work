using System;

namespace myDate
{
    class Program
    {
        class MyDate {
            private int month;
            private int day;
            private int year;
            public void setData(int m, int d, int y) {
                if (checkMonth(m) && checkDay(m, d, y) && checkYear(y)) {
                    month = m;
                    day = d;
                    year = y;
                } else {
                    Console.WriteLine("Wrong data!");
                }
            }
            public void display() {
                string m = month.ToString().PadLeft(2, '0');
                string d = day.ToString().PadLeft(2, '0');
                string y = year.ToString().PadLeft(4, '0');
                Console.WriteLine("{0}/{1}/{2}", m, d, y);
            }
            protected bool checkMonth(int m) {
                if (m<0 || m>12) return false;
                else return true;
            }
            protected bool checkDay(int m, int d, int y) {
                int[] days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
                if (isLeapYear(y)) days[1] = 29;
                if (d>0 && d <= days[m-1]) return true;
                else return false;
            }
            protected bool checkYear(int y) {
                if (y >= 0 && y < 10000) return true;
                else return false;
            }
            protected bool isLeapYear(int y) {
                if (y%400==0 || (y%4==0 && y%100!=0) ) return true;
                else return false;
            }
            public MyDate() {
                month = 01;
                day = 01;
                year = 1900;
            }
            public MyDate(int m, int d, int y) {
                setData(m, d, y);
            }
        }
        static void Main(string[] args)
        {
            MyDate oneDate = new MyDate();
            oneDate.display();
            oneDate.setData(2, 29, 1999);
            oneDate.setData(13, 12, 1999);
            oneDate.setData(1, 32, 1999);
            oneDate.setData(2,28,1999); 
            oneDate.display();
            Console.WriteLine(oneDate);
        }
    }
}