using System;

class Program {
    static void Main(string[] args) {
        // lê a quantidade de números a serem ordenados
        Console.Write("Digite a quantidade de números a serem ordenados: ");
        int n = int.Parse(Console.ReadLine());

        int[] numeros = new int[n];

        // lê os números a serem ordenados
        for (int i = 0; i < n; i++) {
            Console.Write("Digite o " + (i + 1) + "º número: ");
            numeros[i] = int.Parse(Console.ReadLine());
        }

        // ordena os números pares em ordem crescente
        Array.Sort(numeros, delegate(int x, int y) {
            if (x % 2 == 0 && y % 2 == 0) {
                return x.CompareTo(y);
            } else if (x % 2 == 0) {
                return -1;
            } else if (y % 2 == 0) {
                return 1;
            } else {
                return 0;
            }
        });

        // ordena os números ímpares em ordem decrescente
        Array.Sort(numeros, delegate(int x, int y) {
            if (x % 2 != 0 && y % 2 != 0) {
                return y.CompareTo(x);
            } else if (x % 2 != 0) {
                return 1;
            } else if (y % 2 != 0) {
                return -1;
            } else {
                return 0;
            }
        });

        // imprime os números ordenados
        Console.WriteLine("Números ordenados:");
        for (int i = 0; i < n; i++) {
            Console.Write(numeros[i] + " ");
        }
        Console.WriteLine();
    }
}