#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
/**FUNCIONES*/
void func1();
void func2(Pila *pila);
void func3(Pila *pila1);
int func4(Pila *pila2);
void func5(Pila *pila3);
void func6(Pila *pila4, Pila *dato);
void func7(Pila *pila5, Pila *dato1);
int func8uno(Pila *pila6);
int func8dos(Pila *pila6);
int func8tres(int num1, int num2);
int func9uno(Pila *pila7);
int func9dos(Pila *pila7);
int func9tres(int contador, int suma);
void func10(Pila *pila8);

int main()
{

    char eleccion;
    int ejercicio;

    do{


        printf("Listado de preguntas: \n");
        printf("\n");
        printf("1-Hacer una funcion que permita ingresar varios elementos a una pila, tanto como quiera el usuario.\n");
        printf("\n");
        printf("2-Hacer una funcion que pase todos los elementos de una pila a otra.\n");
        printf("\n");
        printf("3-Hacer una funcion que pase todos los elementos de una pila a otra, pero conservando el orden.\n");
        printf("\n");
        printf("4-Hacer una funcion que encuentre el menor elemento de una pila y lo retorna. La misma debe eliminar ese dato de la pila.\n");
        printf("\n");
        printf("5-Hacer una funcion que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada Usar la funcion del ejercicio 4.(Ordenamiento por seleccion).\n");
        printf("\n");
        printf("6-Hacer una funcion que inserta en una pila ordenada un nuevo elemento, conservando el orden de esta.\n");
        printf("\n");
        printf("7-Hacer una funcion que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada Usar la funcion del ejercicio 6.(Ordenamiento por insercion).\n");
        printf("\n");
        printf("8-Hacer una funcion que sume y retorne los dos primeros elementos de una pila (tope y anterior), sin alterar su contenido.\n");
        printf("\n");
        printf("9-Hacer una funcion que calcule el promedio de los elementos de una pila, para ello hacer tambien una función que calcule la suma, otra para la cuenta y otra que divida En total son cuatro funciones, y la funcion que calcula el promedio invoca a las otras 3.\n");
        printf("\n");
        printf("10-Hacer una funcion que reciba una pila con numeros de un solo digito (es responsabilidad de quien usa el programa) y que transforme esos digitos en un numero decimal.\n");
        printf("\n");
        printf("Pulse el numero correspondiente a cada ejercicio para dirigirse a el. \n");
        printf("\n");
        scanf("%i", &ejercicio);
        printf("\n");



      switch(ejercicio){
        case 1:
            printf("Usted se encuentra en el ejercicio 1. \n");
            printf("\n");
            func1();
           break;

        case 2:;
            Pila pila;
            inicpila(&pila);

            int i, hasta;
            srand(time(NULL));

            printf("Usted se encuentra en el ejercicio 2. \n");
            printf("\n");

            printf("Cuantos elementos desea cargarle a la pila? ");
            scanf("%i", &hasta);
            printf("\n");

            for(i = 1;i <= hasta; i++){
                apilar(&pila, rand()%10+1);
            }
            printf("Mostrando los elementos:\n ");
            printf("\n");
            mostrar(&pila);
            printf("Pasando los elementos a otra pila...\n");
            printf("\n");

            func2(&pila);
           break;

        case 3:;
            Pila pila1;
            inicpila(&pila1);
            int i1, hasta1;
            srand(time(NULL));


            printf("Usted se encuentra en el ejercicio 3. \n");
            printf("\n");


            printf("Cuantos elementos desea cargarle a la pila? ");
            scanf("%i", &hasta1);
            printf("\n");

            for(i1 = 1;i1 <= hasta1; i1++){
                apilar(&pila1, rand()%10+1);
            }
            printf("MOSTRANDO LOS ELEMENTOS DE LA PILA \n");
            mostrar(&pila1);
            printf("\n");
            printf("Pasando los elementos a otra pila...\n");
            printf("\n");

            func3(&pila1);
           break;

        case 4:;
            int i2,hasta2, elementoMenor;
            Pila pila2;
            inicpila(&pila2);
            srand(time(NULL));

            printf("Usted se encuentra en el ejercicio 4. \n");
            printf("\n");

            printf("Cuantos elementos desea cargarle a la pila? ");
            scanf("%i", &hasta2);
            printf("\n");

            for(i2 = 1;i2 <= hasta2; i2++){
                apilar(&pila2, rand()%50+1);
            }
            printf("MOSTRANDO LOS ELEMENTOS DE LA PILA \n");
            mostrar(&pila2);
            printf("\n");
            printf("ENCONTRANDO EL ELEMENTO MENOR DE LA PILA... \n");
            printf("\n");

            elementoMenor = func4(&pila2);

            printf("EL ELEMENTO MENOR DE LA PILA ES: %i \n", elementoMenor);
            printf("\n");
           break;

        case 5:;
            int i3, hasta3;
            Pila pila3;
            inicpila(&pila3);
            srand(time(NULL));

            printf("Usted se encuentra en el ejercicio 5. \n");
            printf("\n");

            printf("Cuantos elementos desea cargarle a la pila? ");
            scanf("%i", &hasta3);
            printf("\n");

            for(i3 = 1;i3 <= hasta3; i3++){
                apilar(&pila3, rand()%100+1);
            }
            printf("MOSTRANDO LOS ELEMENTOS DE LA PILA \n");
            mostrar(&pila3);
            printf("\n");

            func5(&pila3);

           break;

        case 6:;
            int i4, hasta4;
            Pila pila4, dato;
            inicpila(&pila4);
            inicpila(&dato);
            srand(time(NULL));

            printf("Usted se encuentra en el ejercicio 6. \n");
            printf("\n");

            printf("Cuantos elementos desea cargarle a la pila? ");
            scanf("%i", &hasta4);
            printf("\n");

            for(i4 = 1; i4 <= hasta4; i4++){
                apilar(&pila4, rand()%50+1);
            }
            printf("MOSTRANDO LOS ELEMENTOS DE LA PILA \n");
            mostrar(&pila4);
            printf("\n");

            printf("Que numero quiere insertarle a la pila? ");
            leer(&dato);
            printf("\n");
            printf("MOSTRANDO EL DATO A INGRESAR: ");
            mostrar(&dato);
            printf("\n");

            func6(&pila4, &dato);
           break;

        case 7:;
            int i5, hasta5;
            Pila pila5, dato1;
            inicpila(&pila5);
            inicpila(&dato1);
            srand(time(NULL));

            printf("Usted se encuentra en el ejercicio 7. \n");
            printf("\n");

            printf("Cuantos elementos desea cargarle a la pila? ");
            scanf("%i", &hasta5);
            printf("\n");

            for(i5 = 1; i5 <= hasta5; i5++){
                apilar(&pila5, rand()%50+1);
            }
            printf("MOSTRANDO LOS ELEMENTOS DE LA PILA \n");
            mostrar(&pila5);
            printf("\n");

            printf("Que numero quiere insertarle a la pila? ");
            leer(&dato1);
            printf("\n");
            printf("MOSTRANDO EL DATO A INGRESAR: ");
            mostrar(&dato1);
            printf("\n");

            func7(&pila5, &dato1);
           break;


        case 8:;
            int i6, hasta6, num1, num2, suma;
            Pila pila6;
            inicpila(&pila6);
            srand(time(NULL));

            printf("Usted se encuentra en el ejercicio 8. \n");
            printf("\n");

            printf("Cuantos elementos desea cargarle a la pila? ");
            scanf("%i", &hasta6);
            printf("\n");

            for(i6 = 1; i6 <= hasta6; i6++){
                apilar(&pila6, rand()%50+1);
            }
            printf("MOSTRANDO LOS ELEMENTOS DE LA PILA \n");
            mostrar(&pila6);
            printf("\n");

            num1 = func8uno(&pila6);
            num2 = func8dos(&pila6);
            suma = func8tres(num1, num2);

            printf("MOSTRANDO EL TOPE DE LA PILA: %i ", num1);
            printf("\n");
            printf("\n");
            printf("MOSTRANDO EL ANTERIOR DEL TOPE DE LA PILA: %i ", num2);
            printf("\n");
            printf("\n");
            printf("MOSTRANDO LA SUMA DEL TOPE Y DE SU ANTERIOR: %i ", suma);
            printf("\n");
            printf("\n");
            break;


        case 9:;
            int i7, contador7, suma7;
            float promedio7;
            Pila pila7;
            inicpila(&pila7);
            srand(time(NULL));

            printf("Usted se encuentra en el ejercicio 9. \n");
            printf("\n");


            for(i7 = 1; i7 <= rand()%20+1; i7++){
                apilar(&pila7, rand()%50+1);
            }
            printf("MOSTRANDO LOS ELEMENTOS DE LA PILA \n");
            mostrar(&pila7);
            printf("\n");

            contador7 = func9uno(&pila7);
            printf("CONTANDO ELEMENTOS DE LA PILA... \n ");
            printf("\n");
            printf("TOTAL DE ELEMENTOS: %i ", contador7);
            printf("\n");
            printf("\n");
            suma7 = func9dos(&pila7);
            printf("LA SUMA DE LOS ELEMENTOS ES: %i", suma7);
            printf("\n");
            printf("\n");
            promedio7 = func9tres(contador7, suma7);
            printf("EL PROMEDIO ES: %0.2f", promedio7);
            printf("\n");
            printf("\n");

            break;

        case 10:;
            int i8;
            Pila pila8;
            inicpila(&pila8);
            srand(time(NULL));

            printf("Usted se encuentra en el ejercicio 10. \n");
            printf("\n");


            for(i8 = 0; i8 < 5; i8++){
                apilar(&pila8, rand()%9+1);
            }
            printf("MOSTRANDO LOS ELEMENTOS DE LA PILA: \n");
            mostrar(&pila8);
            printf("\n");

            func10(&pila8);
           break;

        default:
            printf("NUMERO INGRESADO INCORRECTO. INTENTE NUEVAMENTE.");
            printf("\n");
            printf("\n");



           }
    printf("Pulse 's' si desea continuar: ");
    fflush(stdin);
    scanf("%c", &eleccion);
    printf("\n");

    }while(eleccion == 's');

}

void func1() {

    Pila pila;
    inicpila(&pila);
    int i, hasta;
    printf("Cuantos datos desea cargarle a la pila? \n");
    scanf("%i", &hasta);

    for(i = 1; i <= hasta; i++){
        leer(&pila);
        printf("\n");
    }

    printf("Mostrando la pila con los elementos cargados: \n");
    mostrar(&pila);
}

void func2(Pila *pila) {
    Pila aux;
    inicpila(&aux);

    while(!pilavacia(pila)){
        apilar(&aux, desapilar(pila));
    }
    printf("Mostrando los elementos:\n ");
    printf("\n");
    mostrar(&aux);
}

void func3(Pila *pila1) {

    Pila aux;
    inicpila(&aux);

    while(!pilavacia(pila1)){
        apilar(&aux, desapilar(pila1));
    }
    while(!pilavacia(&aux)){
        apilar(pila1, desapilar(&aux));
    }
    printf("Mostrando los elementos conservados en el mismo orden:\n ");
    printf("\n");
    mostrar(pila1);
}

int func4(Pila *pila2) {

    Pila aux, menor;
    inicpila(&aux);
    inicpila(&menor);
    int elementoMenor;


    if(!pilavacia(pila2)){
        apilar(&menor, desapilar(pila2));
    }
    while(!pilavacia(pila2)){
        if(tope(pila2) < tope(&menor)){
            apilar(&aux, desapilar(&menor));
            apilar(&menor, desapilar(pila2));
        }else{
            apilar(&aux, desapilar(pila2));
        }
    }
    while(!pilavacia(&aux)){
        apilar(pila2, desapilar(&aux));
    }

    printf("VOLVIENDO A MOSTRAR LA PILA: \n");
    mostrar(pila2);
    printf("\n");
    elementoMenor = tope(&menor);

    return(elementoMenor);

}


void func5(Pila *pila3) {

    Pila aux, menor, ordenamiento;
    inicpila(&ordenamiento);
    inicpila(&aux);
    inicpila(&menor);

    printf("ORDENANDO LA PILA DE MENOR A MAYOR (SELECCION)... \n");
    printf("\n");

    while(!pilavacia(pila3)){
        apilar(&menor, desapilar(pila3));
        while(!pilavacia(pila3)){
            if(tope(&menor) > tope(pila3)){
                apilar(&aux, desapilar(&menor));
                apilar(&menor, desapilar(pila3));
            }else{
                apilar(&aux, desapilar(pila3));
            }
        }
        while(!pilavacia(&aux)){
            apilar(pila3, desapilar(&aux));
        }
        apilar(&ordenamiento, desapilar(&menor));
    }

    printf("MOSTRANDO LA PILA ORDENADA DE MENOR A MAYOR: \n");
    mostrar(&ordenamiento);
    printf("\n");
}

void func6(Pila *pila4, Pila *dato){
    Pila aux, menor, ordenamiento;
    inicpila(&ordenamiento);
    inicpila(&aux);
    inicpila(&menor);

//ORDENANDO PILA DE MENOR A MAYOR:
 printf("ORDENANDO LA PILA DE MENOR A MAYOR... \n");
    printf("\n");

    while(!pilavacia(pila4)){
        apilar(&menor, desapilar(pila4));
        while(!pilavacia(pila4)){
            if(tope(&menor) > tope(pila4)){
                apilar(&aux, desapilar(&menor));
                apilar(&menor, desapilar(pila4));
            }else{
                apilar(&aux, desapilar(pila4));
            }
        }
        while(!pilavacia(&aux)){
            apilar(pila4, desapilar(&aux));
        }
        apilar(&ordenamiento, desapilar(&menor));
    }

    printf("MOSTRANDO LA PILA ORDENADA DE MENOR A MAYOR: \n");
    mostrar(&ordenamiento);
    printf("\n");

    //PASANDO LOS DATOS A LA PILA
    while(!pilavacia(&ordenamiento)){
        apilar(&aux, desapilar(&ordenamiento));
    }
    while(!pilavacia(&aux)){
        apilar(pila4, desapilar(&aux));
    }

    //INSERTANDOLE UN NUEVO ELEMENTO:

    while(!pilavacia(pila4) && tope(pila4) > tope(dato)){
        apilar(&aux, desapilar(pila4));
    }
    apilar(pila4, desapilar(dato));
    while(!pilavacia(&aux)){
        apilar(pila4, desapilar(&aux));
    }
    printf("MOSTRANDO LA PILA CON EL DATO INSERTADO: ");
    mostrar(pila4);
    printf("\n");
}

func7(Pila *pila5, Pila *dato1){
    Pila aux, menor, ordenamiento, pilaNueva;
    inicpila(&ordenamiento);
    inicpila(&aux);
    inicpila(&menor);
    inicpila(&pilaNueva);

//ORDENANDO PILA DE MENOR A MAYOR:
 printf("ORDENANDO LA PILA DE MENOR A MAYOR... \n");
    printf("\n");

    while(!pilavacia(pila5)){
        apilar(&menor, desapilar(pila5));
        while(!pilavacia(pila5)){
            if(tope(&menor) > tope(pila5)){
                apilar(&aux, desapilar(&menor));
                apilar(&menor, desapilar(pila5));
            }else{
                apilar(&aux, desapilar(pila5));
            }
        }
        while(!pilavacia(&aux)){
            apilar(pila5, desapilar(&aux));
        }
        apilar(&ordenamiento, desapilar(&menor));
    }

    printf("MOSTRANDO LA PILA ORDENADA DE MENOR A MAYOR: \n");
    mostrar(&ordenamiento);
    printf("\n");

    //PASANDO LOS DATOS A LA PILA
    while(!pilavacia(&ordenamiento)){
        apilar(&aux, desapilar(&ordenamiento));
    }
    while(!pilavacia(&aux)){
        apilar(pila5, desapilar(&aux));
    }

    //INSERTANDOLE UN NUEVO ELEMENTO:

    while(!pilavacia(pila5) && tope(pila5) > tope(dato1)){
        apilar(&aux, desapilar(pila5));
    }
    apilar(pila5, desapilar(dato1));
    while(!pilavacia(&aux)){
        apilar(pila5, desapilar(&aux));
    }
    while(!pilavacia(pila5)){
        apilar(&aux, desapilar(pila5));
    }
    while(!pilavacia(&aux)){
        apilar(&pilaNueva, desapilar(&aux));
    }

    printf("MOSTRANDO LA PILA: ");
    mostrar(&pilaNueva);
}

int func8uno(Pila *pila6){
    int num1;

    num1 = tope(pila6);
return num1;
}

int func8dos(Pila *pila6){
    Pila aux;
    inicpila(&aux);
    int num2;

    apilar(&aux, desapilar(pila6));
    num2 = tope(pila6);
    apilar(pila6, desapilar(&aux));

return num2;
}

int func8tres(int num1, int num2){
    int suma;

    suma = num1 + num2;
return suma;
}

int func9uno(Pila *pila7){ //CONTADOR DE ELEMENTOS DE UNA PILA
    Pila aux;
    inicpila(&aux);
    int contador;

    contador = 0;
    while(!pilavacia(pila7)){
        apilar(&aux, desapilar(pila7));
        contador = contador + 1;
    }
    while(!pilavacia(&aux)){
        apilar(pila7, desapilar(&aux));
    }
    return contador;
}

int func9dos(Pila *pila7){ //ACUMULADOR
    Pila aux;
    inicpila(&aux);
    int suma, contador;
    suma = 0;

    while(!pilavacia(pila7)){
        suma = suma + tope(pila7);
        apilar(&aux, desapilar(pila7));
        contador = contador + 1;
    }
    while(!pilavacia(&aux)){
        apilar(pila7, desapilar(&aux));
    }
    return suma;
}
int func9tres(int contador, int suma){
    float promedio;

    promedio = suma / contador;

    return promedio;
}

void func10(Pila *pila8){
    Pila aux1, aux2, aux3, aux4, aux5;
    inicpila(&aux1);
    inicpila(&aux2);
    inicpila(&aux3);
    inicpila(&aux4);
    inicpila(&aux5);
    int num1, num2, num3, num4, num5;

        apilar(&aux1, desapilar(pila8));
        num1 = tope(&aux1);
        apilar(&aux2, desapilar(pila8));
        num2 = tope(&aux2);
        apilar(&aux3, desapilar(pila8));
        num3 = tope(&aux3);
        apilar(&aux4, desapilar(pila8));
        num4 = tope(&aux4);
        apilar(&aux5, desapilar(pila8));
        num5 = tope(&aux5);

    printf("%i%i%i%i%i", num5, num4, num3, num2, num1);
    printf("\n");
    printf("\n");
}
