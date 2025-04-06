#include <iostream>
#include <string>
using namespace std;
int main() {
string name;
bool suicidio=true; 
 int investigacion=0; 
cout<<"¡¡Bienvenido a 'la cuenta regresiva'!! \n \nUn  juego donde depende de ti  sobrevivir    ¿Podras lograrlo?"<<endl; 
cout<<"Para comenzar ingresa tu nombre:"; getline(cin,name); cout<<endl<<endl<<endl;
cout<<"hola "<<name<<" recuerda que uno no puede escapar de su destino."<<endl;
cout<<"El dia transcurre con normalidad hasta que vas a la universidad y ves un contador en la cabeza de tu mejor amiga con un '1'"<<endl;
cout<<"decides ignorarlo aunque te deja confundido...."<<endl;
cout<<"te vas de la universidad con ella y quedan en verse en el micro de la universidad la mañana siguiente"<<endl;
cout<<"llegas al micro no la ves por ningun lado, tampoco contesta los mensajes"<<endl;
cout<<"es confuso pero prefieres no darle importancia"<<endl;
cout << "Pasaron las horas y te enteras de la peor noticia... Tu mejor amiga ha muerto en un accidente trágico.\n";
cout << "El impacto te deja sin palabras, pero hay algo que no puedes olvidar... Ese contador en su cabeza.\n\n";

cout << "Esa noche, aún en shock, decides mirarte en el espejo."<<endl;
cout << "Un escalofrío recorre tu cuerpo cuando ves lo imposible..."<<endl;
cout << "Un número flotando sobre tu reflejo: '7'"<<endl;
cout << "Cada día que pasa, el número baja... ¿Qué significa esto?\n\n";
for(int dia=1;dia<=7;dia++){
    if(suicidio==false){
        cout<<"aceptaste tu destino fin del juego"<<endl; break;
    }
    switch (dia){
    case 1: cout<<"\n\nVes ese 7 encima tuyo sientes miedo...\n \n¿Que haras? \na)investigar \nb)llorar y hacerme bolita todo el dia \nc)suicidarme"<<endl;
    char eleccion; cin>>eleccion; 
    switch (eleccion){
        case 'a': cout<<"investigas y tu conocimiento del tema aumenta"<<endl; investigacion++; break;
        case 'b': cout<<"te quedas llorando echo bolita sin saber que hacer"<<endl; break;
        case 'c': cout<<"agarras un cuchillo y te cortas  el cuello"<<endl; suicidio= false; break;
        default: cout<< "no sabes que hacer y pierdes el dia"<<endl; break;
    } break;
    case 2: cout<<"\n\nCorres al espejo y ves el 6... entonces no era un sueño realmente ella murio y me toca a mi"<<endl;
    cout<<"\n \n¿que haras? \na)investigar \nb)llorar todo el dia \nc)suicidarme"<<endl;
    char eleccion2; cin>>eleccion2; 
    switch (eleccion2){
        case 'a': cout<<"investigas y encuentras noticias de situaciones similares"<<endl; investigacion++; break;
        case 'b': cout<<"te quedas llorando sin saber que hacer"<<endl; break;
        case 'c': cout<<"Agarras un frasco de clonazepam y tomas 15 pastillas.... \n\npoco a poco te vas durmiendo y la ves a ella"<<endl; suicidio= false; break;
    default: cout<< "no sabes que hacer y pierdes el dia"<<endl; break;
        
    } break;
    case 3: cout<<"\n\nahora son 5 dias ¿realmente importa lo que haga? ¿puedo hacer algo? lo dudo"<<endl;
    cout<<"¿Que deberia hacer?\na)investigar\nb)mirar tiktok y hacerme pendejo todo el dia\nc)suicidarme"<<endl;
    char eleccion3; cin>>eleccion3; 
    switch (eleccion3){
    case'a': cout<<"sales y preguntas a tu docente de pensamiento critico al respecto de la muerte"<<endl; investigacion++; break;    
    case'b': cout<<"te quedas todo el dia mirando tiktok ignorando la realidad"<<endl; break;
    case'c': cout<<"agarras un cuchillo y te cortas la muñecas... mientras pierdes el conocimiento agradeces lo vivido"<<endl; suicidio= false; break;
     default: cout<< "no sabes que hacer y pierdes el dia"<<endl; break;
    } break;
    case 4: cout<<"\n\nson 4 dias empiezas a aceptar la muerte como una opcion"<<endl;
    cout<<"¿Que deberia hacer?\na)investigar\nb)ir a una discoteca\nc)suicidarme"<<endl;
    char eleccion4; cin>>eleccion4;
    switch(eleccion4){
    case 'a': cout<<"vas a una iglesia a preguntar si saben algo al respecto"<<endl; investigacion++; break;
    case 'b': cout<<"vas a una discoteca y tomas todo el dia\n\n\n tomaste demás y te sientes muy agotado, duermes todo el dia"<<endl; dia=5; break;
    case 'c': cout<<"vas a un zoologico y te lanzas donde un tigre"<<endl; suicidio=false;break;
     default: cout<< "no sabes que hacer y pierdes el dia"<<endl; break;
    } break;
    case 5: cout<<"\n\nen 3 dias morire ¿vivi como queria yo o como los demas querian que viva?"<<endl;
    cout<<"¿Que deberia hacer?\na)investigar\nb)mirar grey's anatomy\nc)suicidarme"<<endl;
    char eleccion5; cin>>eleccion5;
    switch(eleccion5){
    case 'a': cout<<"encuentras a un loco de la esquina que te habla sobre la muerte"<<endl; investigacion++; break;
    case 'b': cout<<"miras grey's anatomy todo el dia"<<endl; break;
    case 'c': cout<<"subes al ultimo piso de tu universidad y te lanzas, mientras caes recuerdas toda ru vida"<<endl; suicidio=false;break;
     default: cout<< "no sabes que hacer y pierdes el dia"<<endl; break;
    } break;
    case 6: cout<<"\n\nen 2 dias morire y estare con ella nuevamente... la extraño"<<endl;
    cout<<"¿Que deberia hacer?\na)investigar\nb)ir a ver a mi familia\nc)suicidarme"<<endl;
    char eleccion6; cin>>eleccion6;
    switch(eleccion6){
    case 'a': cout<<"encuentras a un chaman que te explica que no se escapar de la muerte"<<endl; investigacion++; break;
    case 'b': cout<<"Tomas todo el dia para estar con tu familia, te sientes feliz de verlos"<<endl; break;
    case 'c': cout<<"tomas cianuro y tienes una muerte dolorosa..."<<endl; suicidio=false;break;
     default: cout<< "no sabes que hacer y pierdes el dia"<<endl; break;
    } break;
    case 7: cout<<"\n\nes mi ultimo dia siento miedo, pero a la vez relajacion es raro..."<<endl;
    cout<<"¿Que deberia hacer?\na)investigar una ultima vez\nb)ir a la iglesia\nc)suicidarme me ire bajo mis condiciones"<<endl;
    char eleccion7; cin>>eleccion7;
    switch(eleccion7){
    case 'a': cout<<"encuentras a alguien que dice que ve tu contador..."<<endl; investigacion++; break;
    case 'b': cout<<"vas a una iglesia intentando buscar consuelo final"<<endl; break;
    case 'c': cout<<"agarras el arma de tu abuelo y te disparas en la cabeza"<<endl; suicidio=false;break;
     default: cout<< "no sabes que hacer y pierdes el dia"<<endl; break;
    }
}
} 
   if(suicidio==false){
    }else if(investigacion>5){
        cout<<"con toda la informacion que reuniste viste que la unica opcion para aumentar tu contador es matar a alguien, ya que eso te dara su tiempo de vida"<<endl;
        cout<<"estas en la calle, hay una mujer frente a ti \na)la empujas a un coche\nb)no haces nada"<<endl;
       char vivir; cin>>vivir;
        switch(vivir){
            case 'a': cout<<"la empujas y corres a tu casa, te miras al espejo tu contador subio 30 años, sientes una gran culpa por matar a la mujer"<<endl; break;
            case 'b': cout<<"aceptas tu destino, no quitaras la vida de nadie quieres irte en paz"<<endl; break;
             default: cout<<"no supiste que hacer y se te fue la oportunidad"<<endl;  cout<<"\n\n\nno pudiste hacer nada, das tu ultimo aliento y se detiene tu corazón"<<endl; break;
        }
    }else if(investigacion<5){ cout<<"\n\n\nNo pudiste hacer nada tu contador llegó a 0 es inevitable, te miras en el espejo sonries das un ultimo aliento te desplomas en el piso  y se detiene tu corazón"<<endl;}
    return 0;
}
