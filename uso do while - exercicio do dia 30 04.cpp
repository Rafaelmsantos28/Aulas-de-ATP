/*

Fa�a um programa em C++ que recebe: 
a) tempo de empresa
b) cargo (v-vendedor, c-chefia, e-estoque
c) sal�rio

Pede-se:

a) mostrar remunera��o   V --> 0,5% por ano na empresa
						 C --> 2000,0
						 E --> + 10% por quinqu�nio
b) maior tempo de empresa
c) m�dia da remunera��o dos vendedores
d) remunera��o do funcion�rio de estoque h� menos tempo na empresa
e) se todos os chefes t�m mais de 10 anos na empresa

*/

#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    
    int i, tempoempresa, salario, maiortempo, contvendedores, contsalariov, menortempoestoque, remutempo;
    char cargo;
    bool flag_maisde10;
    
    
    tempoempresa = 0;
    salario = 0;
    maiortempo = 0;
    contvendedores = 0;
    contsalariov = 0;
    menortempoestoque = 200;
    remutempo = 0;
    i= 0;
    flag_maisde10 =false;
    
    while (i < 5)
    {
        cin >> tempoempresa >> cargo >> salario;
        
        if(tempoempresa > maiortempo)
        
            maiortempo = tempoempresa;
        
        
        if (cargo == 'V' || cargo == 'v')
        {
            cout << "Novo sal�rio de vendedor � de: " << salario * 1.05 << endl;
            contvendedores = contvendedores + 1;
            contsalariov = contsalariov + (salario * 1.05);
        }
        
        else if (cargo == 'C' || cargo == 'c')
        {
		
            cout << "Novo sal�rio de chefia � de: " << salario + 2000 << endl;
            
            if(tempoempresa <10)
		    flag_maisde10 = true;
		    
		}
        
            
        else if (cargo == 'E' || cargo == 'e')
        {
        	salario = salario + ((salario/10)*(tempoempresa/5));
            cout << "Novo sal�rio de estocador � de: " << salario << endl;
            
            if(tempoempresa<menortempoestoque)
            {
                menortempoestoque = tempoempresa;
                remutempo = salario;
            }
            
        }
            
        else
            cout << "Cargo indefinido, portanto desconsiderado." << endl;
        
            i = i + 1;
    }
    
    std::cout << "O maior tempo na empresa foi de: " << maiortempo << " anos." << endl;
    
    if (contvendedores>0)
    
    cout << "A m�dia de remunera��o dos vendedores foi de: R$ " << contsalariov/contvendedores << endl;
    
    else
    
    cout << "N�o houve dados sobre n�mero de venderores" << endl;
    
    cout << "A remunera��o do funcion�rio de estoque a menos tempo na empresa foi de: R$ " << remutempo << endl;
    
    if (flag_maisde10==true)
    	cout << "Nem todos os chefes est�o na empresa a mais de 10 anos";
    else
    	cout << "Todos os chefes est�o a mais de 10 anos na empresa";
    
    return 0;
    
    
    
}
