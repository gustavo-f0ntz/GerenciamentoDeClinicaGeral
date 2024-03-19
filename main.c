#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TAD medicos/medicos.c"
#include "TAD pacientes/pacientes.c"

int main(void)
{

    int opcao;
    Lista *listaPacientes = criaLista();

    do
    {
        printf("\t\nBem vindo a Clinica\n\n");
        printf("Escolha uma opcao: \n");
        printf("1 - Cadastro medico\n");
        printf("2 - Remover medico\n");
        printf("3 - Cadastro paciente\n");
        printf("4 - Remover paciente\n");
        printf("5 - Editar cadastro de paciente\n");
        printf("6 - Buscar por paciente\n");
        printf("7 - Listar medicos e seus pacientes\n");
        printf("8 - listar pacientes\n");
        printf("0 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf(" %d", &opcao);
        switch (opcao)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            listaPacientes = addPaciente(preenchePaciente(), listaPacientes);
            break;
        case 4:
            removePaciente(&listaPacientes);
            break;
        case 5:
            editPaciente(listaPacientes);
            break;
        case 6:
            buscaPaciente(listaPacientes);
            break;
        case 7:
            break;
        case 8:
            listPacientes(listaPacientes);
            break;
        case 9:
            break;
        case 10:
            break;
        case 0:
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }
    } while (opcao != 0);

    // Lista *lista = criaLista();
    // Paciente *paciente1 = preenchePaciente();
    // Paciente *paciente2 = preenchePaciente();
    // Paciente *paciente3 = preenchePaciente();
    // lista = addPaciente(paciente1, lista);
    // lista = addPaciente(paciente2, lista);
    // lista = addPaciente(paciente3, lista);
    // listPacientes(lista);
    // removePaciente(&lista);
    // listPacientes(lista);
    // editPaciente(lista);
    // listPacientes(lista);
    // buscaPaciente(lista);

    return 0;
}