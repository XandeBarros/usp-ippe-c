#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Funcionario {
  int id;
  char nome[200];
  int idade;
  char telefone[50];
  char cargo[100];
  float salario;
};

int menu() {
  int result;
  printf("\n*#*#*#*#*#*#*#*#*#*#*#*#*#*# Menu Principal #*#*#*#*#*#*#*#*#*#*#*#*#*#*\n");
  printf("\nEscolha uma opção do menu abaixo ;) \n\n");

  printf("1) Inserir Funcionário.\n");
  printf("2) Listar Funcionários.\n");
  printf("3) Procurar Funcionário (ID).\n");
  printf("4) Procurar Funcionário (nome).\n");
  printf("5) Eliminar Funcinário.\n");
  printf("6) Editar Funcinário.\n");
  printf("7) Sair.\n");
  printf("Opção número: ");
  scanf("%d", &result);

  return result;
}

// Functions Prototype 
int inserirFuncionario(int numFunc, struct Funcionario funcionario[]);
void listarFuncionarios(int numFunc, struct Funcionario funcionario[]);
void procurarFuncionarioID(int numFunc, struct Funcionario funcionario[]);
void procurarFuncionarioNome(int numFunc, struct Funcionario funcionario[]);
void eliminarFuncionario(int numFunc, struct Funcionario funcionario[]);
void editarFuncionario(int numFunc, struct Funcionario funcionario[]);
void imprimeFuncionario(struct Funcionario funcionario[], int i);

int main() {
  int menuOption, numFuncionarios = 0;
  struct Funcionario funcionario[100];

  while(1) {
    menuOption = menu();
    if(menuOption == 7) {
      break;
    }

    switch (menuOption)
    {
    case 1:
      numFuncionarios = inserirFuncionario(numFuncionarios, funcionario);
      break;
    case 2:
      listarFuncionarios(numFuncionarios, funcionario);    
      break;
    case 3:
      procurarFuncionarioID(numFuncionarios, funcionario);
      break;
    case 4:
      procurarFuncionarioNome(numFuncionarios, funcionario);
      break;
    case 5:
      eliminarFuncionario(numFuncionarios, funcionario);
      break;
    case 6:
      editarFuncionario(numFuncionarios, funcionario);
      break;
    default:
      break;
    }
  }
}

int inserirFuncionario(int numFunc, struct Funcionario funcionario[]) {
  printf("\n*#*#*#*#*#*#*#*#*#*#*#*#*#*# Cadastro de Funcionário #*#*#*#*#*#*#*#*#*#*#*#*#*#*\n");

  __fpurge(stdin);
  printf("Nome: ");
  // fgets(funcionario[numFunc].nome, 200, stdin);
  scanf("%[^\n]", funcionario[numFunc].nome);

  __fpurge(stdin);
  printf("Telefone: (xx) xxxxx-xxxx ");
  // fgets(funcionario[numFunc].telefone, 15, stdin);
  scanf("%[^\n]", funcionario[numFunc].telefone);

  __fpurge(stdin);
  printf("Cargo: ");
  // fgets(funcionario[numFunc].cargo, 100, stdin);
  scanf("%[^\n]", funcionario[numFunc].cargo);

  printf("Idade: ");
  scanf("%d", &funcionario[numFunc].idade);

  printf("Salário: ");
  scanf("%f", &funcionario[numFunc].salario);

  printf("ID: ");
  scanf("%d", &funcionario[numFunc].id);

  numFunc++;

  return numFunc;
}

void listarFuncionarios(int numFunc, struct Funcionario funcionario[]) {
  printf("\n*#*#*#*#*#*#*#*#*#*#*#*#*#*# Lista de Funcionários #*#*#*#*#*#*#*#*#*#*#*#*#*#*\n");

  for(int i = 0; i < numFunc; i++){
    imprimeFuncionario(funcionario, i);
  }
}

void procurarFuncionarioID(int numFunc, struct Funcionario funcionario[]) {
  printf("\n*#*#*#*#*#*#*#*#*#*#*#*#*#*# Busca de Funcionário (Por ID) #*#*#*#*#*#*#*#*#*#*#*#*#*#*\n");

  int ID, aux = 0;

  printf("ID: ");
  scanf("%d", &ID);

  for(int i = 0; i < numFunc; i++) {
    if(funcionario[i].id == ID) {
      imprimeFuncionario(funcionario, i);
      aux++;
    }
  }

  if(!aux) {
    printf("Nenhum funcinário cadastrado com esse ID ;(");
  }
}

void procurarFuncionarioNome(int numFunc, struct Funcionario funcionario[]) {
    printf("\n*#*#*#*#*#*#*#*#*#*#*#*#*#*# Busca de Funcionário (Por Nome) #*#*#*#*#*#*#*#*#*#*#*#*#*#*\n");

  
  char NOME[200];
  int aux = 0;

  __fpurge(stdin);
  printf("Nome: ");
  scanf("%[^\n]", NOME);

  for(int i = 0; i < numFunc; i++) {
    if(!strcmp(funcionario[i].nome, NOME)) {
      imprimeFuncionario(funcionario, i);
      aux++;
    }
  }

  if(!aux) {
    printf("Nenhum funcinário cadastrado com esse Nome ;(");
  }
}

void eliminarFuncionario(int numFunc, struct Funcionario funcionario[]) {
  printf("\n*#*#*#*#*#*#*#*#*#*#*#*#*#*# Eliminação de Funcionário #*#*#*#*#*#*#*#*#*#*#*#*#*#*\n");
  int ID, aux;

  printf("ID do Funcionário a ser eliminado: ");
  scanf("%d", &ID);

  for(int i = 0; i < numFunc; i++) {
    if(funcionario[i].id == ID) {
      strcpy(funcionario[i].nome, "ELIMINADO");
      aux++;
    }
  }

  if(!aux) {
    printf("Nenhum funcinário eliminado, esse ID não existe no sistema");
  }
}

void editarFuncionario(int numFunc, struct Funcionario funcionario[]) {
  printf("\n*#*#*#*#*#*#*#*#*#*#*#*#*#*# Edição de Funcionário #*#*#*#*#*#*#*#*#*#*#*#*#*#*\n");
  int ID, aux = 0;

  printf("ID do Funcionário a ser editado: ");
  scanf("%d", &ID);

  for(int i = 0; i < numFunc; i++) {
    if(funcionario[i].id == ID) {
      char saux[1];

      __fpurge(stdin);
      printf("Editar Nome? s/n ");
      scanf("%[^\n]", &saux);

      if(!strcmp(saux, "s")) {
        char nome[200];
        __fpurge(stdin);
        printf("Novo Nome: ");
        scanf("%[^\n]", nome);
        strcpy(funcionario[i].nome, nome);
      }

      __fpurge(stdin);
      printf("Editar Telefone? s/n ");
      scanf("%[^\n]", &saux);

      if(!strcmp(saux, "s")) {
        char telefone[50];
        __fpurge(stdin);
        printf("Novo Telefone: ");
        scanf("%[^\n]", telefone);
        strcpy(funcionario[i].telefone, telefone);
      }

      __fpurge(stdin);
      printf("Editar Cargo? s/n ");
      scanf("%[^\n]", &saux);

      if(!strcmp(saux, "s")) {
        char cargo[100];
        __fpurge(stdin);
        printf("Novo Cargo: ");
        scanf("%[^\n]", cargo);
        strcpy(funcionario[i].cargo, cargo);
      }

      __fpurge(stdin);
      printf("Editar Idade? s/n ");
      scanf("%[^\n]", &saux);

      if(!strcmp(saux, "s")) {
        int idade;
        printf("Nova Idade: ");
        scanf("%d", &idade);
        funcionario[i].idade = idade;
      }

      __fpurge(stdin);
      printf("Editar Salário? s/n ");
      scanf("%[^\n]", &saux);

      if(!strcmp(saux, "s")) {
        float salario;
        printf("Novo Salário: ");
        scanf("%f", &salario);
        funcionario[i].salario = salario;
      }

      aux++;
    }
  }

  if(!aux) {
    printf("Nenhum funcinário pode ser editado, esse ID não existe no sistema");
  }
}

void imprimeFuncionario(struct Funcionario funcionario[], int i) {
  if(!strcmp(funcionario[i].nome, "ELIMINADO")) return;
  printf("\n");
  printf("ID: %d\n", funcionario[i].id);
  printf("Nome: %s\n", funcionario[i].nome);
  printf("Idade: %d\n", funcionario[i].idade);
  printf("Telefone: %s\n", funcionario[i].telefone);
  printf("Cargo: %s\n", funcionario[i].cargo);
  printf("Salário: %.2f\n", funcionario[i].salario);
}
