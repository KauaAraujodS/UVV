/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Kauã Araujo de Souza
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

// Comece aqui seu programa.
#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int numero = get_int("Você quer a tabuada de qual número? ");
    int começar = get_int("Você quer começar a tabuada por qual número? ");
    int terminar = get_int("Você quer terminar a tabuada por qual número? ");

    if (começar < 0 || começar > 10 || terminar < 0 || terminar > 10 || começar > terminar)
    {
        printf("O número que você quer começar não pode ser maior que 10 e nem menor que 0, tambem não pode ser maior que o número "
               "quer você quer terminar e vice-versa\n");
        return 1;
        }

    for (int i = começar; i <= terminar; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}
