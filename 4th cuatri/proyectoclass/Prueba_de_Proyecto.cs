using System;

namespace Prueba
{
    class Prueba
    {
        
        static bool repetir(int[,]maatriz, int numeroaleatorio)
        {
            for (int i = 0; i < 4; i++)
            { 
                for (int j = 0; j < 7;j++) 
                {
                    if(maatriz[i,j]==numeroaleatorio)
                    {
                        return true;
                    }    
                }  
                     
            }
            return false;
        }
        static string[,] Tablero()
        {
            string[,] MatrizTab = new string[4,7];
            for (int i = 0; i < 4; i++)
            { 
                for (int j = 0; j < 7;j++) 
                {
                    MatrizTab[i,j] = "*";                   
                }     
            } 
            return MatrizTab;
        }
        static string[,] Sustnum(int[,] MatrizNumeros, string[,] Tablero, int a, int b)
        {
            Tablero[a,b] = Convert.ToString(MatrizNumeros[a,b]);
            return Tablero;
        }
        static int MatrisAleatorios(int[,] Matriz1, int numeroaleatorio)
        {
            Random aleatorio= new Random();
            for (int i = 0; i < 4; i++)
            { 
                for (int j = 0; j < 7;j++) 
                {
                    numeroaleatorio = aleatorio.Next(1,29);
                    while(repetir(Matriz1,numeroaleatorio))
                    {
                        numeroaleatorio = aleatorio.Next(1,29);   
                    }
                    Matriz1[i,j]= numeroaleatorio;
                    
                }  
                     
            } 
            return ;
        }
        static void Main(string[] args)
        {
            
            
            
            int numal=0;
            int[,] matriz=new int[4, 7];
            string[,] TableroMain = new string[4 , 7];
            //Random aleatorio= new Random();
            
            /*
            for (int i = 0; i < 4; i++)
            { 
                for (int j = 0; j < 7;j++) 
                {
                    numeroaleatorio = aleatorio.Next(1,29);
                    while(repetir(matriz,numeroaleatorio))
                    {
                        numeroaleatorio = aleatorio.Next(1,29);   
                    }
                    matriz[i,j]= numeroaleatorio;
                    
                }  
                     
            } 
            */
            


            TableroMain = Tablero();
            

            Console.WriteLine("Deme las cordenadas del primer numero: ");
            string coords1 = Console.ReadLine();
            int x1 = Convert.ToInt32 (coords1.Substring(0,1));
            int y1 = Convert.ToInt32 (coords1.Substring(2,1));
            Sustnum(matriz, TableroMain, x1,y1);
            Console.WriteLine("Deme las cordenadas del primer numero: ");
            string coords2 = Console.ReadLine();
            int x2 = Convert.ToInt32(coords2.Substring(0,1));
            int y2 = Convert.ToInt32(coords2.Substring(2,1));
            Sustnum(matriz, TableroMain, x2,y2);
            
            
            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 7;j++) 
                {
                    Console.Write(TableroMain[i,j]);
                }
                Console.WriteLine();

             
            }




            /*for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 7;j++) 
                {
                    Console.Write("|\t"+"#" + "\t");
                }
                Console.WriteLine("|");

             
            }*/
            
            



        }
    }    
}