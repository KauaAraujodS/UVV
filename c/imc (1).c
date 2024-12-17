/**
 * IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo:Kauã Araujo de Souza
 *    Matrícula: 202416377
 *    Turma: CC1Mc
 *    Email: araujokaua8@gmail.com
 *
 * DECLARAÇÃO DE HONESTIDADE ACADÊMICA:
 * Eu afirmo que o código abaixo foi de minha autoria. Também afirmo que não
 * pratiquei nenhuma forma de "cola" ou "plágio" na elaboração do programa,
 * e que não violei nenhuma das normas de integridade acadêmica da disciplina.
 * Estou ciente de que todo código enviado será verificado automaticamente
 * contra plágio e que caso eu tenha praticado qualquer atividade proibida
 * conforme as normas da disciplina, estou sujeito à penalidades conforme
 * definidas pelo professor da disciplina e/ou instituição.
 */

/**
 * Inclusão de bibliotecas:
 */
#include <cs50.h>
#include <stdio.h>

/**
 * Função main
 */
int main(void)
{
    // TODO: escreva aqui o código que solicita o peso da pessoa (em kg).
    // Seu código só deve aceitar valores válidos entre 40,0 e 200,0 kg
    // (inclusive). Se o peso informado não estiver nessa faixa ou se o usuário
    // informar um dado inválido, seu programa deve continuar a solicitar o peso
    // até que ele informe um peso válido.
    float imc = 0;
    float peso, altura;
    printf("Informe seu peso(kg): ");
    scanf("%f", &peso);

    while (peso < 40.0 || peso > 200.0)
    {

        printf("Informe seu peso: ");
        scanf("%f", &peso);
    }
    // TODO: escreva aqui o código que solicita a altura da pessoa (em m)
    // Seu código só deve aceitar valores válidos entre 1,40 e 2,50 m
    // (inclusive). Se a altura informada não estiver nessa faixa ou se o
    // usuário informar um dado inválido, seu programa deve continuar a
    // solicitar a altura até que ele informe uma altura válida.
    printf("Informe sua altura(m): ");
    scanf("%f", &altura);

    while (altura < 1.4 || altura > 2.5)
    {

        printf("Informe sua altura: ");
        scanf("%f", &altura);
    }
    // TODO: escreva aqui o código que calcula o IMC e imprime a classificação
    // da obesidade no terminal, conforme as especificações do exercício.

    imc = peso / (altura * altura);
    printf("IMC: %.2f; Classificação: ", imc);

    if (imc < 16.0)
    {
        printf("Magreza grau III.\n");
    }
    else if (imc < 17.0)
    {
        printf("Magreza grau II.\n");
    }
    else if (imc < 18.5)
    {
        printf("Magreza grau I.\n");
    }
    else if (imc < 25.0)
    {
        printf("Peso adequado.\n");
    }
    else if (imc < 30.0)
    {
        printf("Pré-obeso.\n");
    }
    else if (imc < 35.0)
    {
        printf("Obesidade grau I.\n");
    }
    else if (imc < 40.0)
    {
        printf("Obesidade grau II.\n");
    }
    else
    {
        printf("Obesidade grau III.\n");
    }
    // Termina o programa:
    return 0;
}
