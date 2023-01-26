using System;

namespace MyApplication
{
    class Program
    {
        static void Main(string[] args)
        {
            int usuario;
            Random x = new Random();
            int aleatorio = x.Next(1, 10);
            do
            {
                Console.WriteLine("Adivina el numero aleatorio entre 1 y 10 ");
                usuario = int.Parse(Console.ReadLine());
                if (aleatorio != usuario)
                {   
                    if (usuario > aleatorio)
                    {
                        Console.WriteLine("El numero aleatorio es menor");  
                    }else if(usuario < aleatorio)
                    {
                        Console.WriteLine("El numero aleatorio es mayor"); 
                    }
                    Console.WriteLine("Intentalo otra vez");
                }
            } while (aleatorio != usuario);
            Console.WriteLine("Correcto!!");
            Console.WriteLine("NUMERO ALEATORIO " + aleatorio);
        }
    }
}

