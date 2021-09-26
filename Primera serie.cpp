#include <iostream>

using namespace std;

int main() 
{
    //en esta parte declaro todas las variables que usare
    int x,r;
    float d,p,t,l,a,h,pv;
    
    cout<< "Programa para el calculo del valor a pagar por el usuario por el traslado del paquete \n";
	cout<<"Cuando se hagan preguntas directas debe escribir la respuesta de manera numerica como se le muestra ahora: Si=1 No=0\n";
	//creo un menu con los articulos
	cout<<"Este es el menu de los articulos existentes: \n";
	cout<<"\n1-Documentos\n";
	cout<<"2-Paqueteria\n";
	cout<<"3-Mobiliario\n";
	cout<<"4-Repuestos\n";
	cout<<"5-Art. Electronicos\n";
	//pido que seleccione un articulo escribiendo su numero correspondiente
	cout<<"\nSeleccione el tipo de mercaderia que desea enviar segun el numero correspondiente a esta : \n";
	cin>>x;
	//segun el numero creo un switch con 5 casos uno para cada articulo
	switch (x){
	    case 1: 
	    //cen este primer caso solamente coloco que la tarifa es de 40 ya que asi lo indican las instrucciones y al final un break para que no siga imprimiendo texto en la pantalla del demas swithc
	    cout<<"\nSu tarifa de traslado es de 40Q a cualquier parte del pais";
	    cout<<"\nEl tipo de mercaderia indicada es Documentos";break;
	    
	    case 2:
	    //en el caso 2 pregunto si conoce el presio del articulo y de esto creo un switch con las 2 posibles respuestas, si=1 no=0
	    cout<<"\nConoce el peso del articulo?";
	    cin>>r;
	    
	    switch (r) {
	    	//se es verdadero pido el peso del articulo y luego muestro un menu con los kilometros dependiendo del departamento
	        case 1:
	        cout<<"\nIngrese el peso en kg de su articulo (el peso maximo es de 35 kg): ";
		    cin>>p;
					cout<<"\nSe le mostrara un menu con la cantidad de kilometros segun la ubicacion a la que desea enviar el articulo";
					cout<<"\nGuatemala-10km";
					cout<<"\nIzabal-300km";
					cout<<"\nPeten-460km";
					cout<<"\nChiquimula-178km";
					cout<<"\nRetalhuleu-200km";
					cout<<"\nIngrese la cantidad de kilometros que recorrera el paquete segun el departamento al que sera enviado: ";
					cin>>d;
					//pido la distancia segun el departamento y hago la formula para calular la tarifa
	        t=(p*2.5)+(d*0.13);
					cout<<"\nEl tipo mercaderia indicada es Paqueteria";
					cout<<"\nLa distancia es de "<<d;cout<<"km";
					cout<<"\nSu tarifa es de: Q"<<t;break;
					//luego de eso escribo los resultados de cada uno poniendo su respectiva variable y al final un break
			case 0: 
		        	cout<<"\nDebido a que no conoce el peso de su paquete procederemos a calcular el peso volumetrico del mismo "; 
		        	//si no se conoce el peso calculo el peso volumetrico y pido todos los datos correspondientes para poder efectuar su ecuacion
					cout<<"\nIngrese el largo del paquete en cm: ";
					cin>>l;
					cout<<"\nIngrese la anchura paquete en cm: ";
					cin>>a;
					cout<<"\nIngrese la altura del paquete en cm: ";
					cin>>h;
					pv=(l*a*h)/2272; //realizo la ecuacion
					cout<<"\nSe le mostrara un menu con la cantidad de kilometros segun la ubicacion a la que desea enviar el articulo"; //vuelvo a mostrar el menu
					cout<<"\nGuatemala-10km";
					cout<<"\nIzabal-300km";
					cout<<"\nPeten-460km";
					cout<<"\nChiquimula-178km";
					cout<<"\nRetalhuleu-200km";
					cout<<"\nIngrese la cantidad de kilometros que recorrera el paquete segun el departamento al que sera enviado: ";
					cin>>d;
					t=(pv*2.5)+(d*0.13);
					cout<<"\nEl tipo mercaderia indicada es Paqueteria";
					cout<<"\nLa distancia es de "<<d;cout<<"km";
					cout<<"\nSu tarifa es de: Q"<<t;break;
					//y hago lo mismo que en el anterior caso cambiando la formula de t ya que en vez de peso real ahora es el peso volumetrico
					
					default:cout<<"\nSeleccion invalida";break;
	    }break;
	    
	    case 3: //de aqui en adelante copio el mismo codigo ya que se efectua lo mismo con el cambio en el tipo de paquete seleccionado
	    
 cout<<"\nConoce el peso del articulo?";
	    cin>>r;
	    
	    switch (r) {
	        case 1:
	        cout<<"\nIngrese el peso en kg de su articulo (el peso maximo es de 35 kg): ";
		    cin>>p;
					cout<<"\nSe le mostrara un menu con la cantidad de kilometros segun la ubicacion a la que desea enviar el articulo";
					cout<<"\nGuatemala-10km";
					cout<<"\nIzabal-300km";
					cout<<"\nPeten-460km";
					cout<<"\nChiquimula-178km";
					cout<<"\nRetalhuleu-200km";
					cout<<"\nIngrese la cantidad de kilometros que recorrera el paquete segun el departamento al que sera enviado: ";
					cin>>d;
	        t=(p*2.5)+(d*0.13);
					cout<<"\nEl tipo mercaderia indicada es Mobiliario"; //en este caso es mobiliario
					cout<<"\nLa distancia es de "<<d;cout<<"km";
					cout<<"\nSu tarifa es de: Q"<<t;break;
					
			case 0:
		        	cout<<"\nDebido a que no conoce el peso de su paquete procederemos a calcular el peso volumetrico del mismo ";
					cout<<"\nIngrese el largo del paquete en cm: ";
					cin>>l;
					cout<<"\nIngrese la anchura paquete en cm: ";
					cin>>a;
					cout<<"\nIngrese la altura del paquete en cm: ";
					cin>>h;
					pv=(l*a*h)/2272;
					cout<<"\nSe le mostrara un menu con la cantidad de kilometros segun la ubicacion a la que desea enviar el articulo";
					cout<<"\nGuatemala-10km";
					cout<<"\nIzabal-300km";
					cout<<"\nPeten-460km";
					cout<<"\nChiquimula-178km";
					cout<<"\nRetalhuleu-200km";
					cout<<"\nIngrese la cantidad de kilometros que recorrera el paquete segun el departamento al que sera enviado: ";
					cin>>d;
					t=(pv*2.5)+(d*0.13);
					cout<<"\nEl tipo mercaderia indicada es Mobiliario";
					cout<<"\nLa distancia es de "<<d;cout<<"km";
					cout<<"\nSu tarifa es de: Q"<<t;break;
					
					default:cout<<"\nSeleccion invalida";break;
	    }break;
	    
	    case 4:
	    
	     cout<<"\nConoce el peso del articulo?";
	    cin>>r;
	    
	    switch (r) {
	        case 1:
	        cout<<"\nIngrese el peso en kg de su articulo (el peso maximo es de 35 kg): ";
		    cin>>p;
					cout<<"\nSe le mostrara un menu con la cantidad de kilometros segun la ubicacion a la que desea enviar el articulo";
					cout<<"\nGuatemala-10km";
					cout<<"\nIzabal-300km";
					cout<<"\nPeten-460km";
					cout<<"\nChiquimula-178km";
					cout<<"\nRetalhuleu-200km";
					cout<<"\nIngrese la cantidad de kilometros que recorrera el paquete segun el departamento al que sera enviado: ";
					cin>>d;
	        t=(p*2.5)+(d*0.13);
					cout<<"\nEl tipo mercaderia indicada es Repuestos"; //en este caso es repuestos
					cout<<"\nLa distancia es de "<<d;cout<<"km";
					cout<<"\nSu tarifa es de: Q"<<t;break;
					
			case 0:
		        	cout<<"\nDebido a que no conoce el peso de su paquete procederemos a calcular el peso volumetrico del mismo ";
					cout<<"\nIngrese el largo del paquete en cm: ";
					cin>>l;
					cout<<"\nIngrese la anchura paquete en cm: ";
					cin>>a;
					cout<<"\nIngrese la altura del paquete en cm: ";
					cin>>h;
					pv=(l*a*h)/2272;
					cout<<"\nSe le mostrara un menu con la cantidad de kilometros segun la ubicacion a la que desea enviar el articulo";
					cout<<"\nGuatemala-10km";
					cout<<"\nIzabal-300km";
					cout<<"\nPeten-460km";
					cout<<"\nChiquimula-178km";
					cout<<"\nRetalhuleu-200km";
					cout<<"\nIngrese la cantidad de kilometros que recorrera el paquete segun el departamento al que sera enviado: ";
					cin>>d;
					t=(pv*2.5)+(d*0.13);
					cout<<"\nEl tipo mercaderia indicada es Repuestos";
					cout<<"\nLa distancia es de "<<d;cout<<"km";
					cout<<"\nSu tarifa es de: Q"<<t;break;
					
					default:cout<<"\nSeleccion invalida";break;
	    }break;
	    
	    case 5:
	    
	     cout<<"\nConoce el peso del articulo?";
	    cin>>r;
	    
	    switch (r) {
	        case 1:
	        cout<<"\nIngrese el peso en kg de su articulo (el peso maximo es de 35 kg): ";
		    cin>>p;
					cout<<"\nSe le mostrara un menu con la cantidad de kilometros segun la ubicacion a la que desea enviar el articulo";
					cout<<"\nGuatemala-10km";
					cout<<"\nIzabal-300km";
					cout<<"\nPeten-460km";
					cout<<"\nChiquimula-178km";
					cout<<"\nRetalhuleu-200km";
					cout<<"\nIngrese la cantidad de kilometros que recorrera el paquete segun el departamento al que sera enviado: ";
					cin>>d;
	        t=(p*2.5)+(d*0.13);
					cout<<"\nEl tipo mercaderia indicada es Art. Electronicos"; //en este caso son articulos electronicos
					cout<<"\nLa distancia es de "<<d;cout<<"km";
					cout<<"\nSu tarifa es de: Q"<<t;break;
					
			case 0:
		        	cout<<"\nDebido a que no conoce el peso de su paquete procederemos a calcular el peso volumetrico del mismo ";
					cout<<"\nIngrese el largo del paquete en cm: ";
					cin>>l;
					cout<<"\nIngrese la anchura paquete en cm: ";
					cin>>a;
					cout<<"\nIngrese la altura del paquete en cm: ";
					cin>>h;
					pv=(l*a*h)/2272;
					cout<<"\nSe le mostrara un menu con la cantidad de kilometros segun la ubicacion a la que desea enviar el articulo";
					cout<<"\nGuatemala-10km";
					cout<<"\nIzabal-300km";
					cout<<"\nPeten-460km";
					cout<<"\nChiquimula-178km";
					cout<<"\nRetalhuleu-200km";
					cout<<"\nIngrese la cantidad de kilometros que recorrera el paquete segun el departamento al que sera enviado: ";
					cin>>d;
					t=(pv*2.5)+(d*0.13);
					cout<<"\nEl tipo mercaderia indicada es Art. Electronicos";
					cout<<"\nLa distancia es de "<<d;cout<<"km";
					cout<<"\nSu tarifa es de: Q"<<t;break;
					
					default:cout<<"\nSeleccion invalida";break;
	    }break; 
	    
	 default:cout<<"\nSeleccion invalida";
	} //cierro el switch total y agrego un break al final de cada switch anidado para que no siga imprimiendo texto en pantalla
	
    return 0;
}

