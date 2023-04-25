using System;

class Program {
    static void Main(string[] args) {
        int[,] matriz = new int[4, 4];

        // Leitura dos elementos da matriz
        Console.WriteLine("Entre com os elementos da matriz:");
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                Console.Write("Matriz[{0},{1}]: ", i, j);
                matriz[i, j] = int.Parse(Console.ReadLine());
            }
        }

        // Soma dos elementos da diagonal principal
        int soma = 0;
        for (int i = 0; i < 4; i++) {
            soma += matriz[i, i];
        }

        // Exibição do resultado
        Console.WriteLine("A soma dos elementos da diagonal principal é: {0}", soma);
    }
}
