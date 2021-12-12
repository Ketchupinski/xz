namespace l_6_C
{
    internal class Program
    {
        public static void Main(String[] args)
        {
            Fraction f = new Fraction();
            f.Read();
            f.Display();

            Fraction x = new Fraction(1, 8);
            x.Display();

            Fraction r = new Fraction();
            r = f - x;
            Console.WriteLine("f - x: " + Fraction.ToString(r));

            bool res = f == x;
            Console.WriteLine("f == x: " + res);

            res = f != x;
            Console.WriteLine("f != x: " + res);

            res = f > x;
            Console.WriteLine("f > x: " + res);

            res = f < x;
            Console.WriteLine("f < x: " + res);
        }
    }
}