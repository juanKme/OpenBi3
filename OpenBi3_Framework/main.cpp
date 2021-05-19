/*
 ===============================================================================
 ·File:       main.cpp
 ·Project:    OpenBi3 framework technology
 
 ·Author:     Juan Torres on 15/03/21
 ·Group:      CTDi Pro. Copyright© 2021
 
 Any use, distribution or reproduction of this material (in part or as a whole),
 done by any entity or group of entities, that is against specified terms in the
 license or without appropriate authorization,  will be sanctioned in conformity
 with any and all applicable laws. Original/source work is published by CTDi Pro
 under the Creative Commons  Attribution-ShareAlike (4.0) International License.
 Unless required by the applicable law or agreed to in writing, this software is
 distributed on an  "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 either express or implied. Visit http://creativecommons.org/licenses/by/4.0/ to
 review the contents and specific language governing permissions and limitations
 under the License or write to Creative Commons at PO Box 1866 in Mountain View,
 CA 94042, United States (USA).
 
 * DISCLAIMER *
 - This is all preliminary work or (pre-alpha). The author takes no responsibility
 for errors present in the code or their effects on other software, due to the
 inclusion or implementation without proper adaptation. However, any report or
 feedback about such errors would be greatly appreciated.
 
 * ACKNOWLEDGEMENT *
 - This work is created to participate in the Hilti Smart Construction Challenge
 contest promoted by Hilti and hosted by the TAIKAI organization. All information
 about the HSCC is found at https://taikai.network/en/hilti/challenges/hiltiscc/.
 
 ===============================================================================
 */

// Internal references
#include "bi3_framework.h"

// External references and libraries
#include <stdio>
#include <iostream>
#include <fstream>


template<typename inputType>
void log(inputType message)
{
    std::cout << message << std::endl;
}
template<typename inputType>
void list(inputType message)
{
    std::cout << message << " - ";
}


int main(int argc, const char * argv[])
{
    unsigned object1 = _TER1(_0t2);

    try {
        // A. iniciar sesión de trabajo preparando el entorno Bi3
        
        // B. hacer continuamente un switch hasta que el usuario elija salir (X)
        
        // 1. crear un nuevo modelo desde objeto vacio tipo "BIM_model"
        
        // 2. cargar un modelo BIM desde contenido en archivo (si existe)
        
        // 3. cambiar de modelo activo en la sesión de trabajo
        
        // 4. editar/modificar el modelo BIM activo en la sesión de trabajo (múltiples submenus)
        
        // 5. guardar en archivo los cambios sobre el modelo activo en la sesión de trabajo
        
        // 6. terminar la sesión de trabajo
        
        // C. correr las rutinas y funciones que presentan la información BIM procesada
        
        // D. liberar recursos empleados por el entorno Bi3 con el cierre de la sesión
        
        do {
            // Printing process
            //list("Process step #");log(cycle);
            log("\n··· Objects created ···························\n");
            list(object1);
            log("");
            
            control = std::cin.get();log("");
            cycle += 1;
        } while ((control != 'e'));
        return 0;
    }

    throw exception; // Throw an exception when a problem arise
}
catch (...) {
    // Block of code to handle errors
}
