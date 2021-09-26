#include <iostream>

using namespace std;

int main()
{
	//comienzo declarando las variables, alguna de estas tienen un valor ya que me es importante tanto para efectuar un repetir y para el saldo asi como el valor del pin
   int o,e;
    int retiro=0;
    char again='s';
    string n;
    int q=5000;
    int d=650;
    float c,st;
    int p=2021;
    
    cout<<"\nPrograma para realizar transacciones bancarias\n";
	cout<<"\nIngrese su nombre: ";
	cin>>n;
	cout<<"\nIngrese su Carne: "; 
	cin>>c;
	
    cout<<"\nIngrese Su Pin: ";
    cin>>p;
     //hago un if y evaluo si el pin es igual a 2021
    if (p==2021){
    cout<<"\nBienvenido "<<n; cout<<"\nSu numero de carne es "<<c;
	cout<<"\nElige la moneda que deseas utilizar, si quieres usar quetzales escribe 1 en cambio si deseas usar Dolar escribe 0: ";//segun la moneda hago una condicional para esta

	cin>>o;
	if (o==1){
	    cout<<"\nTu saldo actual es de Q"<<q;//muestro el saldo

	cout<<"\nCuanto quieres retirar? ";
	cin>>e;
	st=q-e;
	cout<<"\nHas retirado: Q"<<e; 
	cout<<"\nTu saldo actual es de: Q"<<st;
	if (st<1){cout<<"\nSaldo insuficiente para efectuar esta transaccion";}
	cout<<"\nQuieres seguir retirando(s/n)? \n";//pregunto si quiere seguir retirando

	cin>>again;
	 while (again=='s'||again=='s'){ //efectuo una sentencia repetir hasta que escriban un valor diferete a "s"

	q=st;
	cout<<"\nCuanto quieres retirar? ";
	cin>>e;
	st=q-e;
	cout<<"\nHas retirado: Q"<<e; 
	cout<<"\nTu saldo actual es de: Q"<<st;
	if (st<1){cout<<"\nSaldo insuficiente para efectuar esta transaccion";}
	cout<<"\nQuieres seguir retirando(s/n)? \n";
	cin>>again;
	 }
	 cout<<"\nGracias por usar el programa"<<endl;

//este es el else de la condicion que pregunta que moneda usar, dentro de este else puse un if si es que la respuesta es igual a 0 es decir la moneda es dolares

	} else {
	    //efectuo lo mismo que el anterior if con el cambio que el saldo ahora es la variable d que vale 650 y en vez de Q pongo $

	    if (o==0){
	      cout<<"\nTu saldo actual es de $"<<d;
	cout<<"\nCuanto quieres retirar? ";
	cin>>e;
	st=d-e;
	cout<<"\nHas retirado: $"<<e; 
	cout<<"\nTu saldo actual es de: $"<<st;
	if (st<1){cout<<"\nSaldo insuficiente para efectuar esta transaccion";}
	cout<<"\nQuieres seguir retirando(s/n)? \n";
	cin>>again;
	 while (again=='s'||again=='s'){
	d=st;
	cout<<"\nCuanto quieres retirar? ";
	cin>>e;
	st=d-e;
	cout<<"\nHas retirado: $"<<e; 
	cout<<"\nTu saldo actual es de: $"<<st;
	if (st<1){cout<<"\nSaldo insuficiente para efectuar esta transaccion";}
	cout<<"\nQuieres seguir retirando(s/n)? \n";
	cin>>again;
	
	 }
	cout<<"\nGracias por usar el programa"<<endl;  
	    }
	 
	} 
	
    } 

    //cierro los if anidados los else y el repetir

    
    else {
        cout<<"Ingrese el pin correcto";
    }
     //cierro con el else del primer if

    
    return 0;
}
