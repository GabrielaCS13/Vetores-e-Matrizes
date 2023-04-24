using System;

class Program
{
    static void Main(string[] args)
    {
        int[,] matriz = new int[4, 4];

        // Ler valores da matriz
        Console.WriteLine("Digite os valores da matriz:");

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                Console.Write("Matriz[{0},{1}] = ", i, j);
                matriz[i, j] = int.Parse(Console.ReadLine());
            }
        }

        // Imprimir todos os elementos da matriz
        Console.WriteLine("\nMatriz:");
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                Console.Write(matriz[i, j] + "\t");
            }
            Console.WriteLine();
        }
    }
}
