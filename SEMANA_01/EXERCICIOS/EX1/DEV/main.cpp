#include <iostream>
#include <string>
#include <vector>
#include<algorithm> 
using namespace std;
// 1 -  Faça uma função que recebe uma certa medida e ajusta ela percentualmente 
// entre dois valores mínimo e máximo e retorna esse valor

int func1(){
int min, max, medida;
min = 100;
max = 300;
medida = (min + max)/2;
  cout << medida;
return 0;

}

// 2 - Faça uma função que simule a leitura de um sensor lendo o 
// valor do teclado ao final a função retorna este valor

int  func2()
{
  int i;
  cout << "valor: ";
  cin >> i;
  cout << "o valor é " << i;
  return 0;
}

// 4 - Faça uma função que recebe um vetor com 4 posições que contém 
// o valor da distância de um pequeno robô até cada um dos seus 4 lados.
// A função deve retornar duas informações: A primeira é a direção 
// de maior distância ("Direita", "Esquerda", "Frente", "Tras") e a 
// segunda é esta maior distância.
int func3 ()
{
  vector<float> num;
  int d, e, f, t, m;
  cout << "direita: ";
  cin >> d;
  num.push_back(d);
  cout << "esquerda: ";
  cin >> e;
  num.push_back(e);
  cout << "frente: ";
  cin >> f;
  num.push_back(f);
  cout << "tras: ";
  cin >> t;
  num.push_back(t);

  if (d == *max_element(num.begin(), num.end())){
    cout << "Maior distancia: Direita";
  }
  if (e == *max_element(num.begin(), num.end())){
    cout << "Maior distancia: Esquerda";
  }
  if (f == *max_element(num.begin(), num.end())){
    cout << "Maior distancia: Frente";
  }
  if (t == *max_element(num.begin(), num.end())){
    cout << "Maior distancia: Tras";
  }
  
  
  }

int func4 ()
{
  vector<float> num;
  int d, e, f, t;
  cout << "direita: ";
  cin >> d;
  num.push_back(d);
  cout << "esquerda: ";
  cin >> e;
  num.push_back(e);
  cout << "frente: ";
  cin >> f;
  num.push_back(f);
  cout << "tras: ";
  cin >> t;
  num.push_back(t);
  
  cout << "Maior valor digitado: " << *max_element(num.begin(), num.end()) << endl;
  return 0;
  }

// 5 - Faça uma função que pergunta ao usuário se ele deseja continuar o mapeamento e 
// retorna verdadeiro ou falso
static int r=1;
int  input() {
  int i;
  cout << "valor: ";
  cin >> i;
  if (i>0){
    r = 1;
  }
  else{
    r = 0;
  }
  return r;
}
int func5(){
while (r > 0){
  input();
return 0;
}
  }

int main(){
  // so descomentar e comentar as funcoes  para testar elas 
func1();
//200
//func2();
// se eu escrer 200 ele printa 200
//func3();
//Recebe os valores e printa o nome dele (frente, tras etc)
//func4();
//recebe os valores e printa o maior numero entre eles 
//func5();
//vai mandar input ate voce digitar 0
}