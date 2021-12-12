namespace l_1_
{
    internal class Program
    {
        public static void Main(String[] args)
        {
            Line l = new Line();
            l.Read();
            l.Display();
            System.Console.WriteLine(l.Function());
        } 
    }
}