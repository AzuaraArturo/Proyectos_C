#include <iostream>

int main(){
    int opcion;
    int a, b;
    do
    {
    std::cout<<"=========Menú=========\n"
    <<"1. Sumar \n"
    <<"2. Restar \n"
    <<"3. Multiplicar \n"
    <<"4. Dividir \n"
    <<"5. Salir \n"
    <<"Elige una opción: ";
    std::cin >> opcion;

    switch (opcion)
    {
    case 1:
        std::cout<<"Introduce primer numero: ";
        std::cin >> a;
        std::cout<<"Introduce segundo numero: ";
        std::cin >> b;
        std::cout << "la suma es: " << (a + b) << std::endl;
        break;
    case 2:
        std::cout<<"Introduce primer numero: ";
        std::cin >> a;
        std::cout<<"Introduce segundo numero: ";
        std::cin>>b;
        std::cout<<"La resta es: " << (a - b) << std::endl;
        break;
    case 3:
        std::cout<<"Introduce primer numero: ";
        std::cin >> a;
        std::cout<<"Introduce segundo numero: ";
        std::cin >> b;
        std::cout<<"El producto es: " << (a * b) << std::endl;
        break;

    case 4:
        std::cout<<"Introduce primer numero: ";
        std::cin >> a;
        std::cout<<"Introduce segundo numero: ";
        std::cin >> b;
        std::cout<<"La division es: " << (a / b) << std::endl;
        break;

    default:
        break;
    }

    } while (opcion != 5 );
        std::cout<<"Adios";

    return 0;
    
}