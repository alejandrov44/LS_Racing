<p align="center">
  <img src="assets/Logo_We_Love_Challenge.png" style="width: 40%;"/>
</p>

# LS Racing Simulator

[![en](https://img.shields.io/badge/lang-en-red.svg)](https://github.com/alejandrov44/LS_Racing/blob/master/README.md)
[![es](https://img.shields.io/badge/lang-es-yellow.svg)](https://github.com/alejandrov44/LS_Racing/blob/master/README.es.md)

Proyecto realizado con todo nuestro sudor y lágrimas por [Blak](https://github.com/blakjord) y [yo](https://github.com/alejandrov44).

¡Personaliza tu coche para ganar un torneo contra la IA!

Este es un sencillo simulador de carreras escrito en C, utilizando la libreria Allegro 5 para los gráficos y el input. Fue una de mis prácticas en la universidad, en la asignatura de C avanzado y funcionamiento de sistemas operativos.

## 📚 Instalación de Prerrequisitos

* **Clonar el Repositorio**: Copia el repositorio en tu maquina local.

* **CMake (3.15 o superior):** Requerido para compilar el proyecto. [Enlace de descarga](https://cmake.org/download/)

* **MinGW estándar de 32 bits (Serie 4.8):** Dentro de la carpeta `Instalation`, descomprime `Compiler+Allegro.zip` y ejecuta `GCC_Installer.exe` para instalar solo el compilador GCC.

* **Libreria Allegro 5:** Necesitas la libreria Allegro 5, dentro de la misma carpeta `Instalation`, hay una carpeta `Alegro5.1` que debe copiarse en el directorio donde instalaste MinGW. Si se te pide reemplazar elementos, acepta y ahora tendrás todos los elementos necesarios para ejecutar el proyecto.

## 🛠️ Compilación del Proyecto

1.  **Vincular CMake para usar el compilador GCC de MinGW**: este paso depende del IDE que estés usando.

2.  **Configurar el Proyecto con CMake:**
    * Modifica la variable `ALLEGRO_DIR` en el archivo `CMakeLists.txt` para que apunte al directorio donde instalaste MinGW con Allegro 5.
    * Luego, crea un directorio `build` y ejecuta CMake dentro:
    ```bash
    mkdir build
    cd build
    cmake ..
    ```

3.  **Compilar el Proyecto:**
    ```bash
    cmake --build .
    ```

4.  **Ejecutar el Juego:**
    * Se generará el ejecutable `LS_Racing.exe` en el directorio `build`.
    * Ejecuta el .exe con todos los parámetros necesarios (configuración de la IA).
    ```bash
    ./LS_Racing.exe ../assets/fitxerPeces.txt ../assets/fitxerGPs.txt ../assets/fitxerCorredors.bin ../assets/fitxerBase.bin
    ```

## ✨ Características

* **`main.c`:** Punto de entrada del juego, aquí gestionamos las llamadas a todos los demás módulos.
* **`LS_allegro.c/LS_allegro.h`:** Inicialización y funciones de utilidad de Allegro.
* **`lectura.c/lectura.h`:** Lectura de archivos y carga de datos.
* **`configuracion.c/configuracion.h`:** Configuración del manejo del coche en el juego.
* **`carrera.c/carrera.h`:** Lógica del juego para la carrera.
* **`clasificacion.cpp/clasificacion.h`:** Clasificación y resultados de las carreras.
* **`lista.cpp/lista.h`:** Estructura de datos de lista enlazada.
* **`grafico.cpp/grafico.h`:** Funciones de renderizado gráfico.
* **`tipos.h`:** Tipos de datos personalizados.

## 🗒️ Notas Importantes

* Este proyecto se compila como C++ debido a las dependencias en tiempo de ejecución de la biblioteca Allegro.
* Asegúrate de que tu instalación de MinGW esté correctamente configurada y que el directorio `bin` esté en tu variable de entorno `PATH`.

## ⭐ Muestra Tu Apoyo

Si encuentras este proyecto útil o inspirador, dale una ⭐ en GitHub. Significa mucho para mí y me ayudará en futuros desarrollos.

## 🐛 Errores y Solicitudes de Funcionalidades

¿Encontraste un error? ¿Tienes una idea para mejorar el juego? 🤔 No dudes en abrir un issue o sugerir una nueva funcionalidad.

1. Ve a la pestaña **Issues** en el repositorio.
2. Haz clic en **New Issue**.
3. Proporciona una descripción clara del error o solicitud de funcionalidad.
4. Si es aplicable, incluye capturas de pantalla o pasos para reproducir el problema.

Tu feedback es importante y ayuda a mejorar este proyecto para todos. ¡Gracias por contribuir!

## 📜 Licencia

Este proyecto está bajo la Licencia MIT. ¡Siéntete libre de usarlo, modificarlo y compartirlo! 🌈

## 📧 Contáctame

- 💼 [Sitio Web de Portafolio](https://alejandrov44.github.io/portfolio/)
- 🔗 [LinkedIn](https://www.linkedin.com/in/alejandro-viana/)
- 📧 [Discord](https://discord.gg/yGMknyc9)

