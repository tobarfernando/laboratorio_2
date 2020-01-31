#include <iostream>

using namespace std;

float matriz[15][10], filas;
float total_devegado = 0, total_descuento = 0, total_liquido = 0;
int opcion;

int main()
{
	do {
	system("cls");
	cout << "FERNANDO DANIEL TOBAR AREVALO       9959-19-930" << endl << endl;
	cout << "ingrese opcion" << endl;
	cout << "ingresar datos............1" << endl;
	cout << "ver tabla de datos........2" << endl;
	cout << "salir.....................0" << endl;
	cin >> opcion;
	switch (opcion)
	{
	case 1:
		cout << "ingrese cantidad de empleados" << endl;
		cin >> filas;
		for (int j = 0; j < filas; j++)
		{
			system("cls");
			for (int i = 0; i < 14; i++)
			{
				//empleado I
				if (j == 0)
				{
					if (i == 1)
					{
						cout << "primer empleado" << endl << endl;
						cout << "ingrese sueldo" << endl;
						cin >> matriz[i][j];
						total_devegado = matriz[i][j];
					}

					if (i == 2)
					{
						cout << "ingrese sueldo extraordinario" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 3)
					{
						cout << "ingrese bonificaciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 4)
					{
						cout << "ingrese comiciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 5)
					{
						cout << "ingrese otros ingresos" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 6)
					{
						cout << "total devegado" << endl;
						cout << total_devegado << endl;
						matriz[i][j] = total_devegado;
					}

					if (i == 7)
					{
						cout << "IGSS" << endl;
						matriz[i][j] = (total_devegado * 4.83) / 100;
						cout << matriz[i][j] << endl;
						total_descuento = matriz[i][j];
					}

					if (i == 8)
					{
						if (total_devegado >= 5000 && total_devegado < 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 5) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
						if (total_devegado >= 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 8) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
					}

					if (i == 9)
					{
						cout << "ingrese anticipos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 10)
					{
						cout << "ingrese descuentos juridicos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 11)
					{
						cout << "ingrese otros descuentos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 12)
					{
						cout << "total de descuentos" << endl;
						cout << total_descuento << endl;
						matriz[i][j] = total_descuento;
					}

					if (i == 13)
					{
						cout << "sueldo liquido" << endl;
						total_liquido = total_devegado - total_descuento;
						matriz[i][j] = total_liquido;
						cout << matriz[i][j] << endl << endl;
					}
				}
				//empleado II
				if (j == 1)
				{
					if (i == 1)
					{
						cout << "segundo empleado" << endl << endl;
						cout << "ingrese sueldo" << endl;
						cin >> matriz[i][j];
						total_devegado = matriz[i][j];
					}

					if (i == 2)
					{
						cout << "ingrese sueldo extraordinario" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 3)
					{
						cout << "ingrese bonificaciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 4)
					{
						cout << "ingrese comiciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 5)
					{
						cout << "ingrese otros ingresos" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 6)
					{
						cout << "total devegado" << endl;
						cout << total_devegado << endl;
						matriz[i][j] = total_devegado;
					}

					if (i == 7)
					{
						cout << "IGSS" << endl;
						matriz[i][j] = (total_devegado * 4.83) / 100;
						cout << matriz[i][j] << endl;
						total_descuento = matriz[i][j];
					}

					if (i == 8)
					{
						if (total_devegado >= 5000 && total_devegado < 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 5) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
						if (total_devegado >= 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 8) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
					}

					if (i == 9)
					{
						cout << "ingrese anticipos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 10)
					{
						cout << "ingrese descuentos juridicos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 11)
					{
						cout << "ingrese otros descuentos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 12)
					{
						cout << "total de descuentos" << endl;
						cout << total_descuento << endl;
						matriz[i][j] = total_descuento;
					}

					if (i == 13)
					{
						cout << "sueldo liquido" << endl;
						total_liquido = total_devegado - total_descuento;
						matriz[i][j] = total_liquido;
						cout << matriz[i][j] << endl << endl;
					}
				}
				//empleado III
				if (j == 2)
				{
					if (i == 1)
					{
						cout << "tercer empleado" << endl << endl;
						cout << "ingrese sueldo" << endl;
						cin >> matriz[i][j];
						total_devegado = matriz[i][j];
					}

					if (i == 2)
					{
						cout << "ingrese sueldo extraordinario" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 3)
					{
						cout << "ingrese bonificaciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 4)
					{
						cout << "ingrese comiciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 5)
					{
						cout << "ingrese otros ingresos" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 6)
					{
						cout << "total devegado" << endl;
						cout << total_devegado << endl;
						matriz[i][j] = total_devegado;
					}

					if (i == 7)
					{
						cout << "IGSS" << endl;
						matriz[i][j] = (total_devegado * 4.83) / 100;
						cout << matriz[i][j] << endl;
						total_descuento = matriz[i][j];
					}

					if (i == 8)
					{
						if (total_devegado >= 5000 && total_devegado < 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 5) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
						if (total_devegado >= 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 8) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
					}

					if (i == 9)
					{
						cout << "ingrese anticipos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 10)
					{
						cout << "ingrese descuentos juridicos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 11)
					{
						cout << "ingrese otros descuentos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 12)
					{
						cout << "total de descuentos" << endl;
						cout << total_descuento << endl;
						matriz[i][j] = total_descuento;
					}

					if (i == 13)
					{
						cout << "sueldo liquido" << endl;
						total_liquido = total_devegado - total_descuento;
						matriz[i][j] = total_liquido;
						cout << matriz[i][j] << endl << endl;
					}
				}
				//empleado IV
				if (j == 3)
				{
					if (i == 1)
					{
						cout << "cuarto empleado" << endl << endl;
						cout << "ingrese sueldo" << endl;
						cin >> matriz[i][j];
						total_devegado = matriz[i][j];
					}

					if (i == 2)
					{
						cout << "ingrese sueldo extraordinario" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 3)
					{
						cout << "ingrese bonificaciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 4)
					{
						cout << "ingrese comiciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 5)
					{
						cout << "ingrese otros ingresos" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 6)
					{
						cout << "total devegado" << endl;
						cout << total_devegado << endl;
						matriz[i][j] = total_devegado;
					}

					if (i == 7)
					{
						cout << "IGSS" << endl;
						matriz[i][j] = (total_devegado * 4.83) / 100;
						cout << matriz[i][j] << endl;
						total_descuento = matriz[i][j];
					}

					if (i == 8)
					{
						if (total_devegado >= 5000 && total_devegado < 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 5) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
						if (total_devegado >= 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 8) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
					}

					if (i == 9)
					{
						cout << "ingrese anticipos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 10)
					{
						cout << "ingrese descuentos juridicos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 11)
					{
						cout << "ingrese otros descuentos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 12)
					{
						cout << "total de descuentos" << endl;
						cout << total_descuento << endl;
						matriz[i][j] = total_descuento;
					}

					if (i == 13)
					{
						cout << "sueldo liquido" << endl;
						total_liquido = total_devegado - total_descuento;
						matriz[i][j] = total_liquido;
						cout << matriz[i][j] << endl << endl;
					}
				}
				//empleado V
				if (j == 4)
				{
					if (i == 1)
					{
						cout << "quinto empleado" << endl << endl;
						cout << "ingrese sueldo" << endl;
						cin >> matriz[i][j];
						total_devegado = matriz[i][j];
					}

					if (i == 2)
					{
						cout << "ingrese sueldo extraordinario" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 3)
					{
						cout << "ingrese bonificaciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 4)
					{
						cout << "ingrese comiciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 5)
					{
						cout << "ingrese otros ingresos" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 6)
					{
						cout << "total devegado" << endl;
						cout << total_devegado << endl;
						matriz[i][j] = total_devegado;
					}

					if (i == 7)
					{
						cout << "IGSS" << endl;
						matriz[i][j] = (total_devegado * 4.83) / 100;
						cout << matriz[i][j] << endl;
						total_descuento = matriz[i][j];
					}

					if (i == 8)
					{
						if (total_devegado >= 5000 && total_devegado < 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 5) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
						if (total_devegado >= 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 8) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
					}

					if (i == 9)
					{
						cout << "ingrese anticipos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 10)
					{
						cout << "ingrese descuentos juridicos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 11)
					{
						cout << "ingrese otros descuentos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 12)
					{
						cout << "total de descuentos" << endl;
						cout << total_descuento << endl;
						matriz[i][j] = total_descuento;
					}

					if (i == 13)
					{
						cout << "sueldo liquido" << endl;
						total_liquido = total_devegado - total_descuento;
						matriz[i][j] = total_liquido;
						cout << matriz[i][j] << endl << endl;
					}
				}
				//empleado VI
				if (j == 5)
				{
					if (i == 1)
					{
						cout << "sexto empleado" << endl << endl;
						cout << "ingrese sueldo" << endl;
						cin >> matriz[i][j];
						total_devegado = matriz[i][j];
					}

					if (i == 2)
					{
						cout << "ingrese sueldo extraordinario" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 3)
					{
						cout << "ingrese bonificaciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 4)
					{
						cout << "ingrese comiciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 5)
					{
						cout << "ingrese otros ingresos" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 6)
					{
						cout << "total devegado" << endl;
						cout << total_devegado << endl;
						matriz[i][j] = total_devegado;
					}

					if (i == 7)
					{
						cout << "IGSS" << endl;
						matriz[i][j] = (total_devegado * 4.83) / 100;
						cout << matriz[i][j] << endl;
						total_descuento = matriz[i][j];
					}

					if (i == 8)
					{
						if (total_devegado >= 5000 && total_devegado < 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 5) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
						if (total_devegado >= 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 8) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
					}

					if (i == 9)
					{
						cout << "ingrese anticipos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 10)
					{
						cout << "ingrese descuentos juridicos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 11)
					{
						cout << "ingrese otros descuentos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 12)
					{
						cout << "total de descuentos" << endl;
						cout << total_descuento << endl;
						matriz[i][j] = total_descuento;
					}

					if (i == 13)
					{
						cout << "sueldo liquido" << endl;
						total_liquido = total_devegado - total_descuento;
						matriz[i][j] = total_liquido;
						cout << matriz[i][j] << endl << endl;
					}
				}
				//empleado VII
				if (j == 6)
				{
					if (i == 1)
					{
						cout << "septimo empleado" << endl << endl;
						cout << "ingrese sueldo" << endl;
						cin >> matriz[i][j];
						total_devegado = matriz[i][j];
					}

					if (i == 2)
					{
						cout << "ingrese sueldo extraordinario" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 3)
					{
						cout << "ingrese bonificaciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 4)
					{
						cout << "ingrese comiciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 5)
					{
						cout << "ingrese otros ingresos" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 6)
					{
						cout << "total devegado" << endl;
						cout << total_devegado << endl;
						matriz[i][j] = total_devegado;
					}

					if (i == 7)
					{
						cout << "IGSS" << endl;
						matriz[i][j] = (total_devegado * 4.83) / 100;
						cout << matriz[i][j] << endl;
						total_descuento = matriz[i][j];
					}

					if (i == 8)
					{
						if (total_devegado >= 5000 && total_devegado < 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 5) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
						if (total_devegado >= 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 8) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
					}

					if (i == 9)
					{
						cout << "ingrese anticipos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 10)
					{
						cout << "ingrese descuentos juridicos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 11)
					{
						cout << "ingrese otros descuentos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 12)
					{
						cout << "total de descuentos" << endl;
						cout << total_descuento << endl;
						matriz[i][j] = total_descuento;
					}

					if (i == 13)
					{
						cout << "sueldo liquido" << endl;
						total_liquido = total_devegado - total_descuento;
						matriz[i][j] = total_liquido;
						cout << matriz[i][j] << endl << endl;
					}
				}
				//empleado VIII
				if (j == 7)
				{
					if (i == 1)
					{
						cout << "octavo empleado" << endl << endl;
						cout << "ingrese sueldo" << endl;
						cin >> matriz[i][j];
						total_devegado = matriz[i][j];
					}

					if (i == 2)
					{
						cout << "ingrese sueldo extraordinario" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 3)
					{
						cout << "ingrese bonificaciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 4)
					{
						cout << "ingrese comiciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 5)
					{
						cout << "ingrese otros ingresos" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 6)
					{
						cout << "total devegado" << endl;
						cout << total_devegado << endl;
						matriz[i][j] = total_devegado;
					}

					if (i == 7)
					{
						cout << "IGSS" << endl;
						matriz[i][j] = (total_devegado * 4.83) / 100;
						cout << matriz[i][j] << endl;
						total_descuento = matriz[i][j];
					}

					if (i == 8)
					{
						if (total_devegado >= 5000 && total_devegado < 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 5) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
						if (total_devegado >= 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 8) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
					}

					if (i == 9)
					{
						cout << "ingrese anticipos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 10)
					{
						cout << "ingrese descuentos juridicos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 11)
					{
						cout << "ingrese otros descuentos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 12)
					{
						cout << "total de descuentos" << endl;
						cout << total_descuento << endl;
						matriz[i][j] = total_descuento;
					}

					if (i == 13)
					{
						cout << "sueldo liquido" << endl;
						total_liquido = total_devegado - total_descuento;
						matriz[i][j] = total_liquido;
						cout << matriz[i][j] << endl << endl;
					}
				}
				//empleado IX
				if (j == 8)
				{
					if (i == 1)
					{
						cout << "noveno empleado" << endl << endl;
						cout << "ingrese sueldo" << endl;
						cin >> matriz[i][j];
						total_devegado = matriz[i][j];
					}

					if (i == 2)
					{
						cout << "ingrese sueldo extraordinario" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 3)
					{
						cout << "ingrese bonificaciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 4)
					{
						cout << "ingrese comiciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 5)
					{
						cout << "ingrese otros ingresos" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 6)
					{
						cout << "total devegado" << endl;
						cout << total_devegado << endl;
						matriz[i][j] = total_devegado;
					}

					if (i == 7)
					{
						cout << "IGSS" << endl;
						matriz[i][j] = (total_devegado * 4.83) / 100;
						cout << matriz[i][j] << endl;
						total_descuento = matriz[i][j];
					}

					if (i == 8)
					{
						if (total_devegado >= 5000 && total_devegado < 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 5) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
						if (total_devegado >= 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 8) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
					}

					if (i == 9)
					{
						cout << "ingrese anticipos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 10)
					{
						cout << "ingrese descuentos juridicos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 11)
					{
						cout << "ingrese otros descuentos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 12)
					{
						cout << "total de descuentos" << endl;
						cout << total_descuento << endl;
						matriz[i][j] = total_descuento;
					}

					if (i == 13)
					{
						cout << "sueldo liquido" << endl;
						total_liquido = total_devegado - total_descuento;
						matriz[i][j] = total_liquido;
						cout << matriz[i][j] << endl << endl;
					}
				}
				//empleado X
				if (j == 9)
				{
					if (i == 1)
					{
						cout << "decimo empleado" << endl << endl;
						cout << "ingrese sueldo" << endl;
						cin >> matriz[i][j];
						total_devegado = matriz[i][j];
					}

					if (i == 2)
					{
						cout << "ingrese sueldo extraordinario" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 3)
					{
						cout << "ingrese bonificaciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 4)
					{
						cout << "ingrese comiciones" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 5)
					{
						cout << "ingrese otros ingresos" << endl;
						cin >> matriz[i][j];
						total_devegado = total_devegado + matriz[i][j];
					}

					if (i == 6)
					{
						cout << "total devegado" << endl;
						cout << total_devegado << endl;
						matriz[i][j] = total_devegado;
					}

					if (i == 7)
					{
						cout << "IGSS" << endl;
						matriz[i][j] = (total_devegado * 4.83) / 100;
						cout << matriz[i][j] << endl;
						total_descuento = matriz[i][j];
					}

					if (i == 8)
					{
						if (total_devegado >= 5000 && total_devegado < 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 5) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
						if (total_devegado >= 8000)
						{
							cout << "ISR" << endl;
							matriz[i][j] = (total_devegado * 8) / 100;
							cout << matriz[i][j] << endl;
							total_descuento = total_descuento + matriz[i][j];
						}
					}

					if (i == 9)
					{
						cout << "ingrese anticipos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 10)
					{
						cout << "ingrese descuentos juridicos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 11)
					{
						cout << "ingrese otros descuentos" << endl;
						cin >> matriz[i][j];
						total_descuento = total_descuento + matriz[i][j];
					}

					if (i == 12)
					{
						cout << "total de descuentos" << endl;
						cout << total_descuento << endl;
						matriz[i][j] = total_descuento;
					}

					if (i == 13)
					{
						cout << "sueldo liquido" << endl;
						total_liquido = total_devegado - total_descuento;
						matriz[i][j] = total_liquido;
						cout << matriz[i][j] << endl << endl;
					}
				}
			}
		}
		system("pause/null");
		break;
	case 2:
		system("cls");
		cout << "nombre" << "\t" << "puesto" << "\t" << "s. ord" << "\t" << "s. ext" << "\t" << "bon." << "\t" << "comi." << "\t" << "otros" << "\t" << "t. dev"
			<< "\t" << "IGSS" << "\t" << "ISR" << "\t" << "ant." << "\t" << "d. jur" << "\t" << "otr" << "\t" << "t. des" << "\t" << "t. liq" << endl << endl;
		cout << "\t" << "\t";
		for (int j = 0; j < filas; j++)
		{
			for (int i = 1; i < 14; i++)
			{
				cout << matriz[i][j] << "\t";
			}
			cout << endl << endl;
			cout << "\t" << "\t";
		}
		system("pause/null");
		break;
	case 0:
		system("cls");
		cout << "usted esta saliendo" << endl;
		system("pause/null");
		break;
	default:
		cout << "opcion no disponible" << endl;
		break;
		system("pause/null");
	}
	}while (opcion != 0);
	
	system("pause/null");
}