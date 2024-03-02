int main() {
    int numero, soma = 0;
    
    cout << "Digite os valores inteiros (digite 0 para parar):\n";

    do {
        cout << "Digite um número: ";
        cin >> numero;
        soma += numero;
    } while (numero != 0);

    cout << "A soma dos valores é: " << soma << endl;
    
    if (soma > 0)
        cout << "A soma é positiva." << endl;
    else if (soma < 0)
        cout << "A soma é negativa." << endl;
    else
        cout << "A soma é zero." << endl;

    return 0;
}

int main() {
    int numero, soma = 0;
    
    cout << "Digite os valores inteiros (digite 0 para parar):\n";

    do {
        cout << "Digite um número: ";
        cin >> numero;
        soma += numero;
    } while (numero != 0);

    cout << "A soma dos valores é: " << soma << endl;
    
    if (soma > 0)
        cout << "A soma é positiva." << endl;
    else if (soma < 0)
        cout << "A soma é negativa." << endl;
    else
        cout << "A soma é zero." << endl;

    return 0;
}
