using System;

class Program {
    static bool VerificarIgualdade(int[] vetor1, int[] vetor2, int n) {
        for (int i = 0; i < n; i++) {
            if (vetor1[i] != vetor2[i]) {
                return false;
            }
        }
        return true;
    }

    static void Main(string[] args) {
        int[] vetor1 = { 1, 2, 3 };
        int[] vetor2 = { 1, 2, 3 };
        int n = 3;

        if (VerificarIgualdade(vetor1, vetor2, n)) {
            Console.WriteLine("Os vetores possuem conteúdo igual.");
        } else {
            Console.WriteLine("Os vetores não possuem conteúdo igual.");
        }
    }
}
