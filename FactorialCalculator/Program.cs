namespace FactorialCaculator
{
    // <summary>
    /// Factorial Number
    /// </summary>
    class Program
    {
        static void Main(string[] args)
        {
            // Please enter a number to calculate its factorial:
            var n = int.Parse(Console.ReadLine());
            Console.WriteLine(Factorial(n));
        }
        /// <summary>
        /// Factorial Method finds the nth factorial for the desired input number.
        /// </summary>
        public static string Factorial(int number)
        {
            var factorialNum = 1;
            // You can only calculate the factorial of positive numbers.
            if (number > 0)
            {
                for (var i = 1; i <= number; i++)
                {
                    factorialNum *= i;
                }
                Console.Write($"Factorial of {number} is = ");
            }
            else if (number == 0) // Factorial of zero will always be one.
            {
                return "Factorial of 0 = 1";
            }
            else
            {
                return "Factorial is not defined for a negative number.";
            }

            return factorialNum.ToString();
        }
    }

}