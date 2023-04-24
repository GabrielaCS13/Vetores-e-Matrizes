using System;

class Program {
    static void Main(string[] args) {
        int[,] matriz = new int[4, 4];
        int soma = 0;

        // Entrada de dados da matriz
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                Console.Write("Digite o valor para a posição [{0},{1}]: ", i, j);
                matriz[i, j] = int.Parse(Console.ReadLine());
            }
        }

        // Soma dos elementos da terceira linha
        for (int j = 0; j < 4; j++) {
            soma += matriz[2, j];
        }

        Console.WriteLine("A soma dos elementos da terceira linha é: " + soma);
    }
}
