using System;

class Program {
  static void Main(string[] args) {
    int[,] matriz = new int[4, 4];
    int somaQuadrados = 0;

    // Loop para preencher a matriz com os valores informados pelo usuário
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        Console.Write("Digite o valor para a posição [{0},{1}]: ", i, j);
        matriz[i, j] = int.Parse(Console.ReadLine());
      }
    }

    // Imprime a matriz
    Console.WriteLine("Matriz informada:");
    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        Console.Write("{0}\t", matriz[i, j]);
      }
      Console.WriteLine();
    }

    // Soma os quadrados dos elementos da primeira coluna
    for (int i = 0; i < 4; i++) {
      somaQuadrados += (int)Math.Pow(matriz[i, 0], 2);
    }

    Console.WriteLine("A soma dos quadrados dos elementos da primeira coluna é: {0}", somaQuadrados);
  }
}
 