using System;

namespace dealSentence
{
    class Program
    {
        class Sentence {
            private string[] para;
            private string ret;
            public bool setArgs(string[] args) {
                if (args.Length == 0 || args.Length > 4) {
                    Console.WriteLine("输入参数数量错误");
                    return false;
                } else if (args.Length == 1) {
                    Console.WriteLine(args[0]);
                    return false;
                } else {
                    for (int i = 0; i < args.Length-1; i++) {
                        para[i] = args[i];
                    }
                    return true;
                }
            }
            public void deal() {
                foreach (string i in para) {
                    if (i == "-w") {
                        split();
                    } else if (i == "-r") {
                        reverse();
                    } else if (i == "-u") {
                        upper();
                    }
                }
            }
            public void split() {
                ret.Replace(" ", "\n");
            }
            public void reverse() {
                ret.Reverse();
            }
            public void upper() {
                ret.ToUpper();
            }
            public void output() {
                Console.WriteLine(ret);
            }
        }
        static void Main(string[] args)
        {
            Console.WriteLine(args.Length);
            Sentence newSen = new Sentence();
            bool flag = newSen.setArgs(args);
            if (flag) {
                newSen.deal();
            }
        }
    }
}
