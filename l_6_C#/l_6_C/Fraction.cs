using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*
Створити клас Fraction для роботи з дробовими числами. Число має бути
представлене двома полями:
• ціла частина – довге ціле із знаком,
• дробова частина – без-знакове коротке ціле.
Реалізувати методи – арифметичні операції:
• віднімання,
• операції порівняння.
*/

namespace l_6_C
{
	internal class Fraction
	{
        private long x { get; set; } // numerator
        private ushort y { get; set; } // donominator

		public Fraction() {
			this.x = 0;
			this.y = 0;
		}

		public Fraction(long x, ushort y) {
		this.x = x;
		this.y = y;
	}

		public Fraction(Fraction f) {
		this.x = f.x;
		this.y = f.y;
	}

        ~Fraction() {}

		public void Read()
	{
			System.Console.WriteLine("x = ");
			x = Convert.ToInt64(Console.ReadLine());
            System.Console.WriteLine("y = ");
			y = Convert.ToUInt16(Console.ReadLine());
		}

		public void Display()
		{
			Console.WriteLine("x: " + x);
			Console.WriteLine("y: " + y);
		}

		public static Fraction operator ++(Fraction f)
		{
			return new Fraction(f.x++, f.y++);
		}

		public static Fraction operator --(Fraction f)
		{
			return new Fraction(f.x--, f.y--);
		}


		public static String ToString(Fraction f)
		{
			String s = "\nFirst: " + f.x + "\nSecond: " + f.y;
			return s;
		}

		public static Fraction operator -(Fraction f1, Fraction f2)
		{
			long num = (f1.x * f2.y) - (f1.y * f2.x);
			int denom = f1.y * f2.y;
			return new Fraction(num, (ushort)denom);
		}

		public static bool operator ==(Fraction f1, Fraction f2)
		{
			double num1 = f1.x / f1.y;
			double num2 = f2.x / f2.y;
			if (num1 == num2)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		public static bool operator !=(Fraction f1, Fraction f2)
		{
			double num1 = f1.x / f1.y;
			double num2 = f2.x / f2.y;
			if (num1 == num2)
			{
				return false;
			}
			else
			{
				return true;
			}
		}

		public static bool operator >(Fraction f1, Fraction f2)
		{
			double num1 = f1.x / f1.y;
			double num2 = f2.x / f2.y;
			if (num1 > num2)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		public static bool operator <(Fraction f1, Fraction f2)
		{
			double num1 = f1.x / f1.y;
			double num2 = f2.x / f2.y;
			if (num1 < num2)
			{
				return true;
			}
			else
			{
				return false;
			}
		}


	}
}

