#include <iostream>

// Alfabeto: Símbolos permitidos (a-z, A-Z, 0-9, ;, {, }, etc.)
// Gramática: Reglas que dictan que 'main' debe retornar un entero y terminar con ';'
int main() {
    std::cout << "Hola, Lenguajes Formales!" << std::endl;
    return 0; // El valor 0 indica que el programa terminó correctamente
}

#include <iostream>
#include <windows.h> // Para la función Sleep()

// 1.Definición de los estados posibles
enum EstadoSemaforo {
    ROJO,
    VERDE,
    AMARILLO
};

int main() {
    // Estado inicial
    EstadoSemaforo estadoActual = ROJO;

    std::cout << "Iniciando Maquina de Estados del Semaforo..." << std::endl;

    while (true) { // El bucle mantiene la máquina activa
        switch (estadoActual) {
            case ROJO:
                std::cout << "[ESTADO: ROJO] - Detenerse" << std::endl;
                Sleep(3000); // Espera 3 segundos
                estadoActual = VERDE; // Transición al siguiente estado
                break;

            case VERDE:
                std::cout << "[ESTADO: VERDE] - Avanzar" << std::endl;
                Sleep(3000);
                estadoActual = AMARILLO;
                break;

            case AMARILLO:
                std::cout << "[ESTADO: AMARILLO] - Precaucion" << std::endl;
                Sleep(1000);
                estadoActual = ROJO;
                break;
        }
    }

    return 0;
}
