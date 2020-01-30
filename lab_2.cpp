#include <iostream>

using namespace std;

float matriz[15][10], filas, total_devegado=0, total_descuento=0, igss, isr, anticipos, descuento_juridico, otros_descuentos;

int main()
{
	cout << "ingrese cantidad de empleados" << endl;
	cin >> filas;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < filas; j++)
		{
			if (i == 1)
			{
				if (j == 0)
				{
					cout << "primer empleado" << endl << endl;
					cout << "ingrese sueldo" << endl;
					cin >> matriz[i][j];
					total_devegado = total_devegado + matriz[i][j];
				}
			}

			if (i == 2)
			{
				if (j == 0)
				{
					cout << "ingrese sueldo extraordinario" << endl;
					cin >> matriz[i][j];
					total_devegado = total_devegado + matriz[i][j];
				}
			}

			if (i == 3)
			{
				if (j == 0)
				{
					cout << "ingrese bonificaciones" << endl;
					cin >> matriz[i][j];
					total_devegado = total_devegado + matriz[i][j];
				}
			}

			if (i == 4)
			{
				if (j == 0)
				{
					cout << "ingrese comiciones" << endl;
					cin >> matriz[i][j];
					total_devegado = total_devegado + matriz[i][j];
				}
			}

			if (i == 5)
			{
				if (j == 0)
				{
					cout << "ingrese otros ingresos" << endl;
					cin >> matriz[i][j];
					total_devegado = total_devegado + matriz[i][j];
				}
			}

			if (i == 6)
			{
				if (j == 0)
				{
					cout << "total devegado" << endl;
					cout << total_devegado << endl;
				}
			}

			if (i == 7)
				if (j == 0)
				{
					{
						cout << "IGSS" << endl;
						igss = (total_devegado * 4.83) / 100;
						total_descuento = total_descuento + igss;
						cout << igss << endl;
						matriz[i][j] = igss;
					}
				}
		}
	}

	system("pause");
}