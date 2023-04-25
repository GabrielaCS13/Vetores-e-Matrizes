using System;

class Program {
    static void Main(string[] args) {
        int[] vetorOriginal = new int[10];
        int[] vetorModificado = new int[10];

        for (int i = 0; i < 10; i++) {
            do {
                Console.Write("Digite o " + (i + 1) + "º número (inteiro e positivo): ");
                vetorOriginal[i] = int.Parse(Console.ReadLine());
            } while (vetorOriginal[i] <= 0);
        }

        for (int i = 0; i < 10; i++) {
            if (i % 2 == 0) {
                vetorModificado[i] = vetorOriginal[i] / 2;
            } else {
                vetorModificado[i] = vetorOriginal[i] * 3;
            }
        }

        Console.WriteLine("Vetor original:");
        for (int i = 0; i < 10; i++) {
            Console.Write(vetorOriginal[i] + " ");
        }
        Console.WriteLine();

        Console.WriteLine("Vetor modificado:");
        for (int i = 0; i < 10; i++) {
            Console.Write(vetorModificado[i] + " ");
        }
        Console.WriteLine();
    }
}
