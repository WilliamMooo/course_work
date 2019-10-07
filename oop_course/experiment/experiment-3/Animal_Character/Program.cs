using System;

namespace Animal_Character
{
    class Program
    {
        class Animal {
            private string name;
            private int age;
            public Animal(string nam, int ag) {
                name = nam;
                age = ag;
                introduce();
            }
            public void introduce() {
                Console.WriteLine("name: {0}\nage: {1}", name, age);
            }
            public virtual void show() { }
        }

        class Fish:Animal {
            public Fish(string nam, int ag) : base(nam, ag) {
                show();
            }
            public override void show() {
                Console.WriteLine("{0}", "吐出一串气泡亮相");
            }
        }

        class Shark:Fish {
            public Shark(string nam, int ag):base(nam, ag) { }
            public override void show() {
                Console.WriteLine("{0}", "张口露尖牙亮相");
            }
        }

        class Bird:Animal {
            public Bird(string nam, int ag):base(nam, ag) {
                show();
            }
            public override void show() {
                Console.WriteLine("{0}", "轻轻拍打翅膀亮相");
            }
        }

        class Eagle:Bird {
            public Eagle(string nam, int ag) : base(nam, ag) { }
            public override void show() {
                Console.WriteLine("{0}", "展翅盘旋亮相");
            }
        }

        static void Main(string[] args) {
            Animal newGuy = new Animal("unknow", 0);
            Fish newFish = new Fish("fish", 1);
            Shark newShark = new Shark("shark", 2);
            Bird newBird = new Bird("bird", 1);
            Eagle newEagle = new Eagle("eagle", 2);
        }
    }
}
