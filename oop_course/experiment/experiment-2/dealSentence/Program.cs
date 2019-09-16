using System;

namespace dealSentence
{
    class Program
    {
        class Sentence {
            private string ret;
            public void setArgs(string[] args) {
                ret = args[args.Length-1];
                for (int i = 0; i < args.Length-1; i++) deal(args[i]);
            }
            public void deal(string para) {
                    if (para == "-w") {
                        split();
                    } else if (para == "-r") {
                        reverse();
                    } else if (para == "-u") {
                        upper();
                    }
            }
            public void split() {
                ret = ret.Replace(" ", "\n");
            }
            public void reverse() {
                char[] str = ret.ToCharArray();
                Array.Reverse(str);
                ret = new String(str);
            }
            public void upper() {
                ret = ret.ToUpper();
            }
            public void output() {
                Console.WriteLine(ret);
            }
        }
        static void Main(string[] args)
        {
            if (args.Length == 0 || args.Length > 4) {
                Console.WriteLine("输入参数数量错误");
            } else if (args.Length == 1) {
                Console.WriteLine(args[0]);
            } else {
                Sentence newSen = new Sentence();
                newSen.setArgs(args);
                newSen.output();
            }
        }
    }
}