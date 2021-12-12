using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace l_1_
{
    internal class Line
    {
        private double first;
        private double second;

        public double GetFirst()
        {
            return first;
        }

        public double GetSecond()
        {
            return second;
        }

        public void SetFirst(int first)
        {
            if (first != 0)
            {
                this.first = first;
            }
        }

        public void SetSecond(int second)
        {
            this.second = second;
        }

        public bool Init(double a, double b)
        {
            if (a != 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        public void Read()
        {
            double A = 0, B = 0;
            do
            {
                System.Console.WriteLine("first = ");
                A = Convert.ToInt32(Console.ReadLine());
                System.Console.WriteLine("second = ");
                B = Convert.ToInt32(Console.ReadLine());
            } while (!Init(A, B));
            first = A;
            second = B;
        }

        public void Display()
        {
            Console.WriteLine("first: " + first);
            Console.WriteLine("second: " + second);
        }


        public double Function()
        {
            return second * (-1) / first;
        }
}
}
