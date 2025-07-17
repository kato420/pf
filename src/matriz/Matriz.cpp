#include "Matriz.h"
#include <iomanip>
#include <iostream>

void Matriz::verMatriz(matriz m)
{
  const int ancho = 3;

  for (const auto &fila : m)
  {
    for (const auto &celda : fila)
    {
      std::cout << std::setw(ancho) << celda;
    }
    std::cout << "\n";
  }
}

matriz Matriz::getM1()
{
  return this->m1;
}

matriz Matriz::getM2()
{
  return this->m2;
}

std::string Matriz::getJ1()
{
  return this->j1;
}

std::string Matriz::getJ2()
{
  return this->j2;
}

void Matriz::setJ2(std::string j2)
{
  this->j2 = j2;
}

void Matriz::setJ1(std::string j1)
{
  this->j1 = j1;
}

void Matriz::infoMenu()
{
  std::cout << "\n";
  std::cout << "═══ DOTS & BOXES ═══\n";
  std::cout << "--------------------\n";
  std::cout << "1. Tablero 6 x 6\n";
  std::cout << "2. Tablero 10 x 10\n";
  std::cout << "0. Salir\n";
}

void Matriz::menuJugar()
{
  int opt;
  bool valid = false;

  do
  {
    std::system("clear");
    infoMenu();
    std::cout << "Seleccione una opción: ";
    std::cin >> opt;

    if (std::cin.fail())
    {
      std::cin.clear();
      std::cin.ignore(1000, '\n');
      std::cout << "\n Entrada inválida. Solo números 0, 1 o 2.";
      std::cin.get();
    }
    else if (opt < 0 || opt > 3)
    {
      std::cout << "\n Opción fuera de rango. Intente nuevamente.";
      std::cin.get();
      std::cin.ignore();
    }
    else
    {
      valid = true;
    }

  } while (!valid);

  std::system("clear");
  std::cout << " Opción válida seleccionada: " << opt << "\n";

  switch (opt)
  {
  case 1:
    std::cout << "inicio del juego 6x6: \n";
    while (jugar(m1))
    {
    }
    break;
  case 2:
    std::cout << "inicio del juego 10x10: \n";
    while (jugar(m2))
    {
    }
    break;
  case 0:
    std::cout << "JUEGO TERMINADO\n";
    break;
  default:
    std::cout << "Nivel secreto: \n";
    while (jugar(prueba))
    {
    }
    break;
  }
}

bool Matriz::jugar(matriz &m)
{
  int oriFila, oriCol, destFila, destCol;
  int cuadrosTotales = ((m[0].size() - 1) / 2) * ((m[0].size() - 1) / 2);
  if (count_a + count_b == cuadrosTotales)
  {
    std::cout << "Juego terminado\n";
    std::cout << "Puntaje final:\n";
    std::cout << "Jugador A (" << j1 << "): " << count_a << "\n";
    std::cout << "Jugador B (" << j2 << "): " << count_b << "\n";
    if (count_a > count_b)
      std::cout << "Ganador: A (" << j1 << ")\n";
    else if (count_b > count_a)
      std::cout << "Ganador: B (" << j2 << ")\n";
    else
      std::cout << "¡Empate!\n";

    return false;
  }
  while (true)
  {
    std::system("clear");

    std::cout << "=============\n";
    std::cout << "JUGADOR: " << ((turno % 2 == 0) ? "A (" + j1 + ")" : "B (" + j2 + ")") << "\n";
    std::cout << "=============\n\n";

    verMatriz(m);

    std::cout << "\nIngrese origen (fila columna): ";
    if (!(std::cin >> oriFila >> oriCol) || oriFila < 1 || oriFila > m[0].size() / 2 ||
        oriCol < 1 || oriCol > m[0].size() / 2)
    {
      std::cin.clear();
      std::cin.ignore(1000, '\n');
      std::cout << "\nEntrada inválida. Presione Enter para continuar...";
      std::cin.ignore();
      std::cin.get();
      continue;
    }

    std::cout << "Ingrese destino (fila columna): ";
    if (!(std::cin >> destFila >> destCol) || destFila < 1 || destFila > m[0].size() / 2 ||
        destCol < 1 || destCol > m[0].size() / 2)
    {
      std::cin.clear();
      std::cin.ignore(1000, '\n');
      std::cout << "\nEntrada inválida. Presione Enter para continuar...";
      std::cin.ignore();
      std::cin.get();
      continue;
    }

    break;
  }

  int x1 = oriFila * 2 - 1;
  int y1 = oriCol * 2 - 1;
  int x2 = destFila * 2 - 1;
  int y2 = destCol * 2 - 1;

  std::system("clear");

  // bool movimientoValido = false;

  if (x1 == x2 && std::abs(y1 - y2) == 2)
  {
    int midY = (y1 + y2) / 2;

    if (m[x1][midY] != " ")
    {
      std::cout << "\nYa hay una línea en esa posición. Intente de nuevo.\n";
      std::cout << "Presione Enter para continuar...";
      std::cin.ignore();
      std::cin.get();
      return true;
    }

    m[x1][midY] = "-";
    // movimientoValido = true;
  }
  else if (y1 == y2 && std::abs(x1 - x2) == 2)
  {
    int midX = (x1 + x2) / 2;

    if (m[midX][y1] != " ")
    {
      std::cout << "\nYa hay una línea en esa posición. Intente de nuevo.\n";
      std::cout << "Presione Enter para continuar...";
      std::cin.ignore();
      std::cin.get();
      return true;
    }

    m[midX][y1] = "|";
    // movimientoValido = true;
  }
  else
  {
    std::cout
        << "\nMovimiento inválido. Solo se permiten líneas horizontales o verticales contiguas.\n";
    std::cout << "Presione Enter para continuar...";
    std::cin.ignore();
    std::cin.get();
    return true;
  }

  char letraActual = (turno % 2 == 0) ? 'A' : 'B';
  int puntos = analizar(m, letraActual);

  verMatriz(m);
  std::cout << "\n";

  if (puntos == 0)
  {
    turno++;
  }
  else
  {
    if (letraActual == 'A')
    {
      count_a += puntos;
    }
    else
    {
      count_b += puntos;
    }
    std::cout << letraActual << " completó " << puntos << " cuadro(s)! Juega otra vez.\n";
    std::cout << "Presione Enter para continuar...";
    std::cin.ignore();
    std::cin.get();
  }
  return 1;
}

int Matriz::analizar(matriz &m, char letra)
{
  int contador = 0;
  for (int i = 1; i < m.size() - 1; i++)
  {
    for (int j = 1; j < m[i].size() - 1; j++)
    {
      if (m[i][j] == " ")
      {
        if (m[i - 1][j] == "-" && m[i + 1][j] == "-" && m[i][j - 1] == "|" && m[i][j + 1] == "|")
        {
          m[i][j] = std::string(1, letra);
          contador++;
        }
      }
    }
  }
  return contador;
}
