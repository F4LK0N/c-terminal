#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


//MAX - DEFINIÇÃO DE TAMANHOS MAXIMOS
#define MAX_COMMAND_SIZE 1024 //Quantidade maxima de caracteres por comando.
#define MAX_COMMAND_HISTORY_SIZE 100 //Quantidade maxima do historico de comandos.


//PROGRAMA PRINCIPAL
int main(int argC, char *argV[]){

    int key_buffer = 0;
    char string_buffer[1024];
    
    //string_buffer
    //command_atual
    //command_history[]
    
    
    
    
    
    while(true){

        string_buffer[0]=key_buffer;
        string_buffer[1]=0;
        
        //INPUT
        
        
        //EXECUTION
        
        
        
        //DISPLAY
        system("cls");
        printf(
        "### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###\n"
        "Executando: %s\n", string_buffer);  printf(
        "### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###\n"
        "Comando: ");
        key_buffer = _getch();
        
        if(key_buffer=='e'){ break; }
        
    }
    
    //EXIT
    return 0;
        
        
        
        //int i =0;
//        for(i=0; i<1024; i++){
//                 
//        }
        
        
        
        
        
        system("cls");
        printf("---:>"); printf("%i", key_buffer); printf("<:---\n");
        
        string_buffer[0] = (char) key_buffer;
        string_buffer[1] = (char) key_buffer;
        string_buffer[2] = (char) key_buffer;
        
        printf("---:>"); printf("%c", string_buffer[0]); printf("<:---\n");
        printf("---:>"); printf("%s", string_buffer); printf("<:---\n");
        
        if(string_buffer[2]=='a'){
            printf("2 e = a\n");
        }
        
        
        if(string_buffer[2]==0){
            printf("2 e null\n");
        }
        
        if(string_buffer[3]==0){
            printf("3 e null\n");
        }
        
        if(string_buffer[4]==0){
            printf("4 e null\n");
        }

        
    
    
    
        key_buffer = _getch();
    
    //EXIT
    return 0;
}
