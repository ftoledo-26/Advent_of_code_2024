# Guard Gallivant

## Enunciado

Los Historiadores han utilizado su dispositivo especial para transportarte al laboratorio prototipo de fabricación de trajes en el Polo Norte... ¡en el año 1518! Tener acceso directo a la historia resulta muy conveniente, pero también debes evitar paradojas temporales. Esto incluye esquivar al único guardia que patrulla esta parte del laboratorio.

Tu tarea es predecir el recorrido del guardia para que los Historiadores puedan moverse con seguridad.

## Descripción del problema

El mapa inicial del laboratorio (proporcionado en tu entrada) tiene el siguiente formato:

- `.` representa un espacio vacío.
- `#` representa un obstáculo.
- `^`, `>`, `v`, `<` indica la posición inicial del guardia y la dirección en la que está mirando.

El guardia sigue un protocolo estricto para patrullar:

1. Si hay un obstáculo directamente frente a él, gira 90 grados a la derecha.
2. Si no hay obstáculo, avanza un paso en la dirección actual.

El guardia sigue este protocolo hasta que abandona el área delimitada por el mapa.

## Ejemplo

Dado el siguiente mapa:

....#..... 
.........#
.......... 
..#.......
.......#..
..........
.#..^..... 
........#. 
#......... 
......#...


El guardia sigue este camino:

1. Avanza hacia arriba hasta encontrar un obstáculo.
2. Gira a la derecha (a la dirección `>`).
3. Continúa hasta encontrar otro obstáculo, y así sucesivamente.

Al final, el camino del guardia es el siguiente:

....#.....
....XXXXX#
....X...X.
..#.X...X.
..XXXXX#X.
..X.X.X.X.
.#XXXXXXX.
.XXXXXXX#.
#XXXXXXX..
......#X..


En este caso, el guardia visitará 41 posiciones distintas.

## Objetivo

Escribe un programa que, dado un mapa de entrada:

1. Prediga el recorrido del guardia.
2. Calcule cuántas posiciones únicas visitará antes de salir del área.

## Entradas

- Un mapa rectangular compuesto por `.` (espacios vacíos), `#` (obstáculos) y un único símbolo de posición inicial del guardia (`^`, `>`, `v`, `<`).

## Salidas

- Un número entero que representa la cantidad de posiciones únicas visitadas por el guardia.

## Ejecución del programa

El programa debe:

1. Leer el mapa de entrada desde un archivo o una entrada estándar.
2. Implementar la lógica para simular el movimiento del guardia.
3. Imprimir la cantidad de posiciones únicas visitadas.

## Ejemplo de ejecución

### Entrada

....#.....
.........#
..........
..#.......
.......#..
..........
.#..^.....
........#.
#.........
......#...


### Salida
41

¡Buena suerte resolviendo el problema!
