# 🎮 Dots and Boxes Game

> Juego clásico de estrategia implementado en **C++** por terminal  
> Desarrollado por Kato 420 🧠💻

---

## 🧩 Descripción del Proyecto

Dots and Boxes es un juego de consola interactivo donde dos jugadores se turnan para dibujar líneas y cerrar cuadros.  
Cada cuadro cerrado será marcado con la inicial del jugador (`A` o `B`), y se lleva un conteo de turnos y puntos.

---

## 🚀 Características Principales

- Jugabilidad por turnos
- Lógica de detección automática de cuadros cerrados
- Visual limpio en consola con tableros de 6x6 o 10x10
- Validaciones de entrada robustas (solo jugadas válidas)
- Contador de puntos por jugador

---

## 🛠 Requisitos de Instalación

- Sistema operativo: Linux o WSL (Windows Subsystem for Linux)
- Compilador: `g++` con soporte C++17
- Recomendado: CMake para compilar fácilmente
- Opcional: `gh` para publicar en GitHub

---

## ⚙️ Guía de Instalación

```bash
# Clonar el repositorio
git clone https://github.com/kato420/pf
cd dots-and-boxes

# Crear carpeta de compilación
mkdir build && cd build

# Compilar con CMake
cmake ..
make

# Ejecutar el juego
./dots_and_boxes

