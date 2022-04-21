#include<iostream>
#include<string>
#include"Employee.h"

using namespace::std;

void getDataEmployee(Employee [], int&);
void displayDataEmployee(Employee [], int);
bool searchEmployeeByName(Employee [], int);
bool searchEmployeeById(Employee [], int);
void addEmployee(Employee [], int& );
void eliminateEmployee(Employee [], int&);
void menu();
void employeeCount(int&);
int deleteEmployee(Employee [], int, int);

const int SIZE = 10;

int main() {

    Employee myArrayOfEmployee[SIZE];
    int EmployeeCount = 0;
    int choice;
    // Obtener la cantidad de empleados a modificar 
    employeeCount(EmployeeCount);

    do {
        
        menu();
        //Pedirle al usuario que entre la opcion que desea
        cout << "Entre la opcion que desea: " << endl;
        cin >> choice;
        
           switch (choice)
        {
        case 1: 
            // Anadir empleado
            addEmployee(myArrayOfEmployee, EmployeeCount);
            break;
        case 2:
            // Eliminar empleado
            eliminateEmployee(myArrayOfEmployee, EmployeeCount);
            break;
        case 3:
            // Buscar empleado por Nombre
            searchEmployeeByName(myArrayOfEmployee, EmployeeCount);
            break;
        case 4:
            // Buscar empleado por ID
            searchEmployeeById(myArrayOfEmployee, EmployeeCount);
            break;
        case 5:
            // Modificar el departamento en donde labora el empleado
            break;
        case 6:
            //Modificar el departamento en donde labora el empleado
            break;
        case 7:
            //Imprimir un Empleado
            displayDataEmployee(myArrayOfEmployee, EmployeeCount);
            break;
        case 8:
            displayDataEmployee(myArrayOfEmployee, EmployeeCount);
            break;
        case 9:
            break;
        default:
            cout << "Entrada invalida intente nuevamente." << endl;
            break;
        }//end switch
        system("cls");

    } while (choice != 9);

    // esto puede ser una funcion aparte
    //llamado de recolectar data del Empleado
    //getDataEmployee(myArrayOfEmployee, EmployeeCount);
    //Imprimir la data del empleado
    displayDataEmployee(myArrayOfEmployee, EmployeeCount);

    system("pause");
    return 0;
}//end main



void getDataEmployee(Employee myArrayOfEmployee[], int& EmployeeCount) {
    string name, position, department;
    int idNumber;

    for (int i = 0; i < EmployeeCount; i++) {
        cin.ignore();
        cout << "Entre el nombre del empleado:" << endl;
        getline(cin, name, '\n');
        cout << "Entre el Id del Empleado:" << endl;
        cin >> idNumber;
        cin.ignore();
        cout << "Entre el departemento del empleado:" << endl;
        getline(cin, department, '\n');
        cout << "Entre  la posicion del empleado:" << endl;
        cin.ignore();
        getline(cin, position, '\n');
        myArrayOfEmployee[i].setEmployee(name, idNumber, department, position);
    }//end for
}


void displayDataEmployee(Employee myArrayOfEmployee[], int n) {
    cout << "Name  ID Number Department Position\n";
    for (int i = 0; i < n; i++) {
        myArrayOfEmployee[i].display();
    }//end for
    system("pause");
}

//Anadir Empleado
void addEmployee(Employee myArrayOfEmployee[], int& n) {
    string name, position, department;
    int idNumber;
    
    if (n > 0 && n < SIZE) {

        cin.ignore();
        cout << "Entre el nombre del empleado:" << endl;
        getline(cin, name, '\n');
        cout << "Entre el Id del Empleado:" << endl;
        cin >> idNumber;
        cin.ignore();
        cout << "Entre el departemento del empleado:" << endl;
        getline(cin, department, '\n');
        cout << "Entre  la posicion del empleado:" << endl;
        //cin.ignore();
        getline(cin, position, '\n');
        myArrayOfEmployee[n].setEmployee(name, idNumber, department, position);

        n++;
    }// end if
    else
        cout << "El arreglo not tiene capacidad para anadir mas elementos\n";
}
//Eliminar Empleado
void eliminateEmployee(Employee myArrayOfEmployee[], int& EmployeeCount) {
    bool posName;
    int newIndex = 0;
    // Buscar el empleado a modificar
     posName = searchEmployeeByName(myArrayOfEmployee, EmployeeCount);
	// eliminar a empleado de myArrayOfEmployee
     EmployeeCount = deleteEmployee(myArrayOfEmployee, EmployeeCount, posName);
}
// need to continue on this!!
int deleteEmployee(Employee myArrayofEmployee[], int EmployeeCount, int pos) {
    int i, newIndex = 0;
	int l = pos - 1;
	int r = pos + 1;

    for (i = 0; i < EmployeeCount; i++) {
        if (i <= l || i >= r) {
            myArrayofEmployee[newIndex] = myArrayofEmployee[i];// maybe add . para llamar a una funcion miembro
            newIndex++;
        }//end if
    }//end for
    return newIndex;
}
//Buscar Empleado por nombre
bool searchEmployeeByName(Employee myArrayOfEmployee[], int EmployeeCount) {

    int i = 0;
    bool flag = false;
    string employeeName;

    cin.ignore();
    cout << "Entre el nombre del empleado a ser buscado:" << endl;
    getline(cin, employeeName);
    for (i = 0; i < EmployeeCount; i++) {
        if (myArrayOfEmployee[i].getName() == employeeName) {
            myArrayOfEmployee[i].display();
            flag = true;
            system("pause");
        }//end if
        else
            cout << "Empleado no existe en arreglo." << endl;
    }//end for
    return flag;
}
//Buscar Empleado por ID
bool searchEmployeeById(Employee myArrayOfEmployee[], int EmployeeCount) {
    int employeeId;
    bool flag = false;
    cout << "Entre el nombre del empleado a ser buscado:" << endl;
    cin >> employeeId;
    for (int i = 0; i < EmployeeCount; i++) {
        if (myArrayOfEmployee[i].getIdNumber() == employeeId) {
            myArrayOfEmployee[i].display();
            flag = true;
        }//end if
        else
            cout << "Empleado no existe en arreglo." << endl;
    }//end for
    return flag;
}
//Pedir cantidad de Empleados que desea modificar
void employeeCount(int& EmployeeCount) {
        cout << "Entre la cantidad de Empleados que desear modificar < 10:" << endl;
        cin >> EmployeeCount;
        cout << endl;
}

//Menu
void menu() {

    cout << "\nMenu de opciones\n";
    cout << "1.-Anadir un empleado\n";
    cout << "2.-Eliminar un Empleado\n";
    cout << "3.-Buscar un Empleado por nombre \n";
    cout << "4.-Buscar un empleado por su ID \n";
    cout << "5.-Modificar la posicion del Empleado\n";
    cout << "6.-Modificar el departamento en donde labora el empleado\n";
    cout << "7.-Imprimir un Empleado\n";
    cout << "8.-Imprimir el contenido del arreglo\n";
    cout << "9.- Salida\n";
}