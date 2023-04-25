
using System;

class Program {
    static void Main(string[] args) {
        int[] vetor1 = new int[20];
        int[] vetor2 = new int[20];
        int[] vetorDiferenca = new int[20];
        int[] vetorSoma = new int[20];
        int[] vetorMultiplicacao = new int[20];

        Console.WriteLine("Digite os 20 números do primeiro vetor:");
        for (int i = 0; i < 20; i++) {
            Console.Write("Digite o " + (i + 1) + "º número: ");
            vetor1[i] = int.Parse(Console.ReadLine());
        }


        Console.WriteLine("Digite os 20 números do segundo vetor:");
        for (int i = 0; i < 20; i++) {
            Console.Write("Digite o " + (i + 1) + "º número: ");
            vetor2[i] = int.Parse(Console.ReadLine());
        }


        for (int i = 0; i < 20; i++) {
            vetorDiferenca[i] = vetor1[i] - vetor2[i];
        }


        for (int i = 0; i < 20; i++) {
            vetorSoma[i] = vetor1[i] + vetor2[i];
        }

        
        for (int i = 0; i < 20; i++) {
            vetorMultiplicacao[i] = vetor1[i] * vetor2[i];
        }

        Console.WriteLine("Vetor 1:");
        ImprimeVetor(vetor1);

        Console.WriteLine("Vetor 2:");
        ImprimeVetor(vetor2);

        Console.WriteLine("Vetor diferença:");
        ImprimeVetor(vetorDiferenca);

        Console.WriteLine("Vetor soma:");
        ImprimeVetor(vetorSoma);

        Console.WriteLine("Vetor multiplicação:");
        ImprimeVetor(vetorMultiplicacao);
    }

    static void ImprimeVetor(int[] vetor) {
        for (int i = 0; i < vetor.Length; i++) {
            Console.Write(vetor[i] + " ");
        }
        Console.WriteLine();
    }
}

