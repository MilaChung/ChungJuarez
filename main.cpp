//===============================================================================
//                  Contabilidade Camila e Diego
//===============================================================================

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <math.h>

using namespace std;

int mes, mes_atual, ano, ano_atual, conta_mes, conta_ano, opcao, escolha, decisao;
int Mes[12];
int Ano[100];

double Luz[12][3000];
double Net[12][3000];
double Gas[12][3000];
double Unimed[12][3000];
double Supermercado[12][3000];
double Farmacia[12][3000];


void Apresentacao()
{
	cout << "Bem vindo(a) ao programa de contabilidade Chung Juarez \n";  
        cout << "\n";
        cout << "Escolha uma opção abaixo: \n";
        cout << "1) Inserir dados \n";
        cout << "2) Obter dados \n";
        cin >> opcao;
}

void Inserir_dados()
{               
    fstream Contabilidade;
    fstream Contabilidade_detalhada;
    Contabilidade.open("Contabilidade.txt", ios::out|ios::app); 
    Contabilidade_detalhada.open("Contabilidade_detalhada.txt", ios::out|ios::app); 
    
    conta_mes = 0;
    conta_ano = 0;
    
    cout << "Por favor insira o número correspondente ao mês \n";
    cin >> mes;
            
    cout << "Por favor insira o número correspondente ao ano \n";
    cin >> ano;
    
    cout << "Escolha uma das opções abaixo: \n";
    cout << "1) Luz \n"
            "2) Net \n"
            "3) Gás \n"
            "4) Unimed \n"
            "5) Supermercado \n"
            "6) Farmácia \n"
            "7) Todas as anteriores \n" << endl;
    
    cin >> escolha;
    
    if (escolha == 1)
    {
        cout << "Entre com a conta de luz de " << mes << "/" << ano << "\n" << endl;
        cin >> Luz[mes][ano];
        Contabilidade_detalhada << "Luz " << mes << "/" << ano  << " Valor = \n" << Luz[mes][ano];
        Contabilidade << mes << " " << ano  << " \n" << Luz[mes][ano];
        
    }if (escolha == 2)
    {    
        cout << "Entre com a conta da net de " << mes << "/" << ano << "\n" << endl;
        cin >> Net[mes][ano];   
        Contabilidade_detalhada << "Net " << mes << "/" << ano  << " Valor = \n" << Net[mes][ano];
        Contabilidade << mes << " " << ano  << " \n" << Net[mes][ano];
        
    } if (escolha == 3)
    {    
        cout << "Entre com a conta de gás de " << mes << "/" << ano << "\n" << endl;
        cin >> Gas[mes][ano]; 
        Contabilidade_detalhada << "Gás " << mes << "/" << ano  << " Valor = " << Gas[mes][ano];
        Contabilidade << mes << " " << ano  << " " << Gas[mes][ano];
        
    } if (escolha == 4)
    {    
        cout << "Entre com a conta da Unimed de " << mes << "/" << ano << "\n" << endl;
        cin >> Unimed[mes][ano]; 
        Contabilidade_detalhada << "Unimed " << mes << "/" << ano  << " Valor = " << Unimed[mes][ano];
        Contabilidade << mes << " " << ano  << " " << Unimed[mes][ano];
        
    } if (escolha == 5)
    {    
        cout << "Entre com a conta de supermercado de " << mes << "/" << ano << "\n" << endl;
        cin >> Supermercado[mes][ano]; 
        Contabilidade_detalhada << "Supermecado " << mes << "/" << ano  << " Valor = " << Supermercado[mes][ano];
        Contabilidade << mes << " " << ano  << " " << Supermercado[mes][ano];
        
    } if (escolha == 6)
    {    
        cout << "Entre com a conta de farmácia de " << mes << "/" << ano << "\n" << endl;
        cin >> Farmacia[mes][ano]; 
        Contabilidade_detalhada << "Farmácia " << mes << "/" << ano  << " Valor = " << Farmacia[mes][ano];
        Contabilidade << mes << " " << ano  << " " << Farmacia[mes][ano];
        
    }if (escolha == 7)
    {
        cout << "Entre com a conta de luz de " << mes << "/" << ano << endl;
        cin >> Luz[mes][ano];
        cout << "Entre com a conta da net de " << mes << "/" << ano << endl;
        cin >> Net[mes][ano];
        cout << "Entre com a conta de gás de " << mes << "/" << ano << endl;
        cin >> Gas[mes][ano]; 
        cout << "Entre com a conta da Unimed de " << mes << "/" << ano << endl;
        cin >> Unimed[mes][ano];   
        cout << "Entre com a conta de supermercado de " << mes << "/" << ano << endl;
        cin >> Supermercado[mes][ano];         
        cout << "Entre com a conta de farmácia de " << mes << "/" << ano << endl;
        cin >> Farmacia[mes][ano];    
        
        Contabilidade_detalhada << "Luz " << mes << "/" << ano  << " Valor = " << Luz[mes][ano];
        Contabilidade_detalhada << "Net " << mes << "/" << ano  << " Valor = " << Net[mes][ano];
        Contabilidade_detalhada << "Gás " << mes << "/" << ano  << " Valor = " << Gas[mes][ano];
        Contabilidade_detalhada << "Unimed " << mes << "/" << ano  << " Valor = " << Unimed[mes][ano];
        Contabilidade_detalhada << "Supermecado " << mes << "/" << ano  << " Valor = " << Supermercado[mes][ano];
        Contabilidade_detalhada << "Farmácia " << mes << "/" << ano  << " Valor = " << Farmacia[mes][ano];
        
        Contabilidade << mes << " " << ano  << " " << Luz[mes][ano];
        Contabilidade << mes << " " << ano  << " " << Net[mes][ano];
        Contabilidade << mes << " " << ano  << " " << Gas[mes][ano];
        Contabilidade << mes << " " << ano  << " " << Unimed[mes][ano];
        Contabilidade << mes << " " << ano  << " " << Supermercado[mes][ano];
        Contabilidade << mes << " " << ano  << " " << Farmacia[mes][ano];
    }else
    {
        cout << "Opção inválida" << endl;
    }
    
    for (int meses=0; meses<conta_mes; meses++)
    {      
        Mes[meses] = mes;
        
        if (mes != Mes[meses])
        {
            conta_mes++;
        }
    }
    
    for (int anos=0; anos<conta_ano; anos++)
    {        
        Ano[anos] = ano;
        
        if (ano != Ano[anos])
        {
            conta_ano++;
        }                
    }
    
    Contabilidade.close(); 
    //cout << "conta_mes = \n" << conta_mes;
    //cout << "conta_ano = \n" << conta_ano << endl;           
}

void Obter_dados()
{
    fstream Contabilidade;
    Contabilidade.open("Contabilidade.txt", ios::in); 
    
    cout << "Digite o mês desejado \n";
    cin >> mes;
    
    cout << "Digite o ano desejado \n";
    cin >> ano;
    
    cout << "Escolha uma das opções abaixo: \n";
    cout << "1) Luz \n"
            "2) Net \n"
            "3) Gás \n"
            "4) Unimed \n"
            "5) Supermercado \n"
            "6) Farmácia \n"
            "7) Todas as anteriores \n" << endl;
    cin >> escolha;
    
    if (escolha == 1)
    {
        Contabilidade >> mes >> ano >> Luz[mes][ano];
        cout << "Luz " << mes << "/" << ano << " = " << Luz[mes][ano] << "\n" << endl;
    }if (escolha == 2)
    {
        Contabilidade >> mes >> ano >> Net[mes][ano];
        cout << "Net " << mes << "/" << ano << " = " << Net[mes][ano] << "\n" << endl;
    }if (escolha == 3)
    {
        Contabilidade >> mes >> ano >> Gas[mes][ano];
        cout << "Gás " << mes << "/" << ano << " = " << Gas[mes][ano] << "\n" << endl;
    }if (escolha == 4)
    {
        Contabilidade >> mes >> ano >> Unimed[mes][ano];
        cout << "Unimed " << mes << "/" << ano << " = " << Unimed[mes][ano] << "\n" << endl;
    }if (escolha == 5)
    {
        Contabilidade >> mes >> ano >> Supermercado[mes][ano];
        cout << "Supermercado " << mes << "/" << ano << " = " << Supermercado[mes][ano] << "\n" << endl;
    }if (escolha == 6)
    {
        Contabilidade >> mes >> ano >> Farmacia[mes][ano];
        cout << "Farmácia " << mes << "/" << ano << " = " << Farmacia[mes][ano] << "\n" << endl;
    }if (escolha == 7)
    {
        Contabilidade >> mes >> ano >> Luz[mes][ano];
        cout << "Luz " << mes << "/" << ano << " = " << Luz[mes][ano] << "\n" << endl;
        Contabilidade >> mes >> ano >> Net[mes][ano];
        cout << "Net " << mes << "/" << ano << " = " << Net[mes][ano] << "\n" << endl;
        Contabilidade >> mes >> ano >> Gas[mes][ano];
        cout << "Gás " << mes << "/" << ano << " = " << Gas[mes][ano] << "\n" << endl;
        Contabilidade >> mes >> ano >> Unimed[mes][ano];
        cout << "Unimed " << mes << "/" << ano << " = " << Unimed[mes][ano] << "\n" << endl;
        Contabilidade >> mes >> ano >> Supermercado[mes][ano];
        cout << "Supermercado " << mes << "/" << ano << " = " << Supermercado[mes][ano] << "\n" << endl;
        Contabilidade >> mes >> ano >> Farmacia[mes][ano];
        cout << "Farmácia " << mes << "/" << ano << " = " << Farmacia[mes][ano] << "\n" << endl;
    }
    
    Contabilidade.close();
}    

void Escolha()
{
    if (opcao == 1)
    {
        Inserir_dados();
    }if (opcao == 2)
    {
        Obter_dados();
    }else
    {
        cout << "Opção inválida" << endl;
    }
}

int main ()
{
    Apresentacao();
    Escolha();
    
    cout << "Gostaria de algo mais? \n";
    cout << "1) Sim \n";
    cout << "2) Não \n";
    cin >> decisao;
    
    if (decisao == 1)
    {
        Apresentacao();
        Escolha();
    }if (decisao == 2)
    {
        cout << "Obrigada por utilizar o programa de contabilidade Chung Juarez" << endl;
    }else
    {
        cout << "Opção inválida" << endl;
    }
    
    return 0;
}
