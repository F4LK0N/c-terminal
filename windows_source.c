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
    char string_buffer[MAX_COMMAND_SIZE] = "";
    char command_atual[MAX_COMMAND_SIZE] = "";
    
    //command_atual
    //command_history[]
    
    
    
    
    
    while(true){
                
        //TECLA PRESIONADA
        if(key_buffer>0){

            //ENTER
            if(key_buffer==13){
                for(int i=0; i<(MAX_COMMAND_SIZE); i++){
                    command_atual[i]=string_buffer[i];
                    if(string_buffer[i]==0){ 
                        string_buffer[0]=0;
                        break; 
                    }
                }
            }



            
            //ALFANUMERICO
            if(key_buffer==32 || (key_buffer>96 && key_buffer<123) || (key_buffer>47 && key_buffer<58)){
                                   
                for(int i=0; i<(MAX_COMMAND_SIZE-1); i++){
                    if(string_buffer[i]==0){
                        string_buffer[i]=key_buffer;
                        i++;
                        string_buffer[i]=0;
                        break;
                    }
                }
            }
        }
        
        

        
        //INPUT
        
        
        //EXECUTION
        
        
        
        //DISPLAY
        system("cls");
        
        printf("KEY BUFFER: %i\n", key_buffer);
        
        printf(
        "### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###\n"
        "Comando Atual: %s\n", command_atual);  printf(
        "### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
//        "\n"
//        "\n"
        //"\n"
//        "\n"
//        "\n"
//        "\n"
//        "\n"
//        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "\n"
        "### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ### ###\n"
        "Comando: %s", string_buffer);
        
        key_buffer = _getch();
        
        //EXIT
        if(key_buffer==27){ break; }
    }
    
    //EXIT
    return 0;
}
