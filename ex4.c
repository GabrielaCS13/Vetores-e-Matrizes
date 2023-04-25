
using System;

class Program {
    static void Main(string[] args) {
        int[,] matrizA = { {1, 2}, {3, 4}, {5, 6} };
        int[,] matrizB = { {1, 2, 3}, {4, 5, 6} };
        int[,] matrizC = new int[3, 3];

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matrizC[i, j] = 0;
                for (int k = 0; k < 2; k++) {
                    matrizC[i, j] += matrizA[i, k] * matrizB[k, j];
                }
            }
        }

        Console.WriteLine("Matriz C:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                Console.Write(matrizC[i, j] + " ");
            }
            Console.WriteLine();
        }
    }
}
