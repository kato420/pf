# 🎮 Dots and Boxes

<!-- ![Logo](https://raw.githubusercontent.com/kato420/pf/master/img/logo.png) -->
<p align="center">
  <img src="https://raw.githubusercontent.com/kato420/pf/master/img/logo.png" width="400">
</p>

## 📖 Descripción del Proyecto

Este proyecto implementa el clásico juego de **Dots and Boxes** (Puntos y Cajas) en un entorno de consola utilizando el lenguaje **C++**.  
Dos jugadores se turnan para dibujar líneas entre puntos en una cuadrícula.  
Cuando un jugador completa un cuadro, ese cuadro es marcado con su letra (`A` o `B`) y gana un punto.  
El juego continúa hasta que todos los cuadros estén completados.

El propósito principal del proyecto es reforzar conceptos de programación como:

- Programación orientada a objetos en C++
- Manejo de matrices y estructuras dinámicas
- Interacción usuario-terminal
- Validación de entradas y lógica de juego

---

## ✨ Características Principales

- 🕹️ **Modo por turnos:** jugadores alternan entre `A` y `B`
- 🎯 **Detección automática de cuadros cerrados**
- 🧠 **Sistema de puntuación inteligente** con control de turnos
- 🧱 **Tamaños de tablero configurables:** 6x6 y 10x10
- 🧾 **Validación de jugadas:** solo permite líneas contiguas horizontales o verticales
- 💬 **Interfaz amigable por terminal**, usando solo entradas numéricas
- 🔄 **Repetición de turno si se completa un cuadro**
- 🧹 Limpieza de pantalla para cada nuevo turno (`system("clear")`)

## 🛠 Requisitos de Instalación

Para compilar y ejecutar este proyecto, necesitarás:

- ✅ **Sistema operativo:** Linux (nativo) o WSL (Windows Subsystem for Linux)
- ✅ **Compilador C++17**: `g++` versión 9.0 o superior
- ✅ **CMake** 3.10 o superior (para gestión del build)
- ❇️ Opcional: `make` o `ninja` como generadores de build
- ❇️ Opcional: `Neovim`, `VSCode` o cualquier editor C++ con soporte para CMake

---

## ⚙️ Guía de Instalación

Puedes compilar y ejecutar el proyecto de forma manual con `CMake` y `make`, o simplemente usar el script automático incluido en el repositorio.

### ✅ Opción Rápida (recomendada)

```bash
# Clona el repositorio
git clone https://github.com/kato420/pf
cd pf

# Da permisos de ejecución al runner (solo la primera vez)
chmod +x runner

# Ejecuta el script
./runner
```

---

## 📋 Instrucciones o Reglas de Uso

El juego **Dots and Boxes** sigue las reglas clásicas del juego de "Puntos y Cajas", adaptadas para consola:

### 🎯 Objetivo

Completar más cuadros que tu oponente, ganando así la partida.

### 👥 Jugadores

- El juego es para **dos jugadores**: A y B.
- Cada jugador realiza una jugada por turno, a menos que complete un cuadro.  
  Si completa uno o más cuadros, puede seguir jugando en el mismo turno.

### 🔧 Cómo jugar

- Se juega en un tablero de 6x6 o 10x10 (se elige al inicio).
- En cada turno, se debe ingresar la **coordenada de la línea** que se quiere dibujar.
- Solo se permiten líneas horizontales (`-`) y verticales (`|`) entre puntos válidos.
- Al cerrar un cuadro (con 4 lados), el centro del mismo se marca con la letra del jugador (`A` o `B`).
- El sistema valida automáticamente si la jugada es válida.

### 🧠 Reglas

- No se pueden sobrescribir líneas ya dibujadas.
- Se gana al final quien tenga más cuadros capturados.
- En caso de empate en puntaje, se declara empate.

### 🕹 Controles

- Entrada por consola, indicando coordenadas.
- Pulsar **Enter** para continuar después de cada turno.

---

<!-- ## 🧭 Diagramas de Clases -->
<!---->
<!-- El siguiente diagrama representa la estructura de la clase `Matriz`, utilizada para gestionar la lógica central del juego.   -->
<!-- Se detallan sus atributos principales, así como los métodos públicos que permiten inicializar el tablero, procesar jugadas, y determinar cuadros cerrados. -->

<!-- ![Diagrama de Clase](https://raw.githubusercontent.com/kato420/pf/master/img/diagrama.png) -->
<h3>📘 Diagrama de Clases</h3>
<p>El siguiente diagrama representa la estructura de la clase <code>Matriz</code>, utilizada para gestionar la lógica central del juego.</p>
<p>Se detallan sus atributos principales, así como los métodos públicos que permiten inicializar el tablero, procesar jugadas y determinar cuadros cerrados.</p>

<p align="center">
  <img src="https://raw.githubusercontent.com/kato420/pf/master/img/diagrama.png" width="450">
</p>

<!-- <img src="https://raw.githubusercontent.com/kato420/pf/master/img/diagrama.png" alt="Diagrama de Clases" width="500"> -->

---

## 🎥 Video Demostrativo

Puedes ver una demostración del juego en el siguiente enlace:

[🔗 Ver Video](https://www.youtube.com/watch?v=tu_enlace_aqui)

<!-- Reemplaza la URL por la real cuando tengas el video subido -->

---

## 👥 Autores

Este proyecto fue desarrollado por:

- **Huamán Yay Alexis**
- **Ricse Roca Irene Fernanda**

> ¡Gracias por revisar nuestro trabajo! ✨
