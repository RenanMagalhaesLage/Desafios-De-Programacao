/*−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−
 *           UNIFAL − Universidade Federal de Alfenas.
 *             BACHARELADO EM CIENCIA DA COMPUTACAO.
 * Trabalho..: Eight Queens
 * Disciplina: Desafios da Programação
 * Professor.: Luiz Eduardo da Silva
 * Aluno.....: Renan Magalhães Lage
 * Data......: 13/11/2023
 *−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−*/
#include <iostream>
#include <vector>
using namespace std;

bool horizontal(int j, const string& linha) {
    for (int k = 0; k < 8; k++) {
        if (k == j) {
            continue;
        }
        if (linha[k] == '*') {
            return false;
        }
    }
    return true;
}

bool vertical(const vector<string>& tabuleiro, int linha, int coluna) {
    for (int i = 0; i < 8; i++) {
        if (i == linha) {
            continue;
        }
        if (tabuleiro[i][coluna] == '*') {
            return false;
        }
    }
    return true;
}

bool diagonal(const vector<string>& tabuleiro, int linha, int coluna) {
    // Primeira diagonal
    int current_linha = linha;
    int current_coluna = coluna;

    // Ir até o ponto mais alto
    while (true) {
        if (current_coluna == 0 || current_linha == 0) {
            break;
        }
        current_coluna--;
        current_linha--;
    }
    while (true) {
        if (current_linha == linha && current_coluna == coluna) {
            if (current_coluna == 7 || current_linha == 7) {
                break;
            }
            current_coluna++;
            current_linha++;
            continue;
        }
        if (tabuleiro[current_linha][current_coluna] == '*') {
            return false;
        }
        if (current_coluna == 7 || current_linha == 7) {
            break;
        }
        current_coluna++;
        current_linha++;
    }

    // Outra diagonal
    current_linha = linha;
    current_coluna = coluna;
    while (true) {
        if (current_coluna == 7 || current_linha == 0) {
            break;
        }
        current_coluna++;
        current_linha--;
    }
    while (true) {
        if (current_linha == linha && current_coluna == coluna) {
            if (current_coluna == 0 || current_linha == 7) {
                break;
            }
            current_coluna--;
            current_linha++;
            continue;
        }
        if (tabuleiro[current_linha][current_coluna] == '*') {
            return false;
        }
        if (current_coluna == 0 || current_linha == 7) {
            break;
        }
        current_coluna--;
        current_linha++;
    }
    return true;
}

int main() {
    vector<string> tabuleiro(8);
    for (int i = 0; i < 8; i++) {
        getline(cin, tabuleiro[i]);
    }

    bool valido = true;
    int contador = 0;

    // Para cada linha:
    for (int linha = 0; linha < 8; linha++) {
        for (int coluna = 0; coluna < 8; coluna++) {
            if (tabuleiro[linha][coluna] == '*') {
                contador++;
                //Caso os três testes retornem verdadeiro significa que não foi encontrado nenhum erro
                //Caso um retorne falso significa que encontrou uma rainha em um lugar indesejado, fazendo assim entrar no if
                if (!(horizontal(coluna, tabuleiro[linha]) && vertical(tabuleiro, linha, coluna) && diagonal(tabuleiro, linha, coluna))) {
                    valido = false;
                    break;
                }
            }
        }
        if (!valido) { //Caso for encontrado um erro ele já para a execução
            break;
        }
    }

    if (valido && contador == 8) {
        cout << "valid" << endl;
    } else {
        cout << "invalid" << endl;
    }

    return 0;
}

