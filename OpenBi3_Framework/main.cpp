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

// External references and libraries
#include <algorithm>
//#include <assert.h>
//#include <chrono>
//#include <complex.h>
//#include <ctype.h>
//#include <errno.h>
//#include <fenv.h>
//#include <float.h>
#include <iostream>
//#include <inttypes.h>
//#include <iso646.h>
//#include <limits.h>
//#include <locale.h>
//#include <math.h>
//#include <setjmp.h>
//#include <signal.h>
//#include <stdalign.h>
//#include <stdarg.h>
//#include <stdatomic.h>
//#include <stdbool.h>
//#include <stddef.h>
#include <stdexcept>
//#include <stdint.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdnoreturn.h>
#include <string>
//#include <tgmath.h>
//#include <thread>
//#include <time.h>
//#include <uchar.h>
//#include <wchar.h>
//#include <wctype.h>

// Internal references
#include "bi3_framework.hpp"

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
    // A. iniciar sesión de trabajo preparando el entorno Bi3
    
    unsigned int cycle = 1;
    char control = '0';

    const std::string salute = "Mensaje de bienvenida";
    // Main BIM-data manipulation proccess routine
    try {
        
        
        
        do {
            // B. hacer continuamente un switch hasta que el usuario elija salir (X)
            /*switch (<#expression#>) {
                case <#constant#>:
                    // 1. crear un nuevo modelo desde objeto vacio tipo "BIM_model"
                    <#statements#>
                    break;
                
                case <#constant#>:
                    // 2. cargar un modelo BIM desde contenido en archivo (si existe)
                    <#statements#>
                    break;
                
                case <#constant#>:
                    // 3. intercambiar de modelo activo en la sesión de trabajo
                    <#statements#>
                    break;
                    
                case <#constant#>:
                    // 4. editar el modelo BIM activo en la sesión de trabajo (múltiples submenus)
                    <#statements#>
                    break;
                    
                case <#constant#>:
                    // 5. guardar en archivo el estado del modelo activo en la sesión de trabajo
                    <#statements#>
                    break;
                    
                case <#constant#>:
                    // 6. terminar la sesión de trabajo
                    <#statements#>
                    break;
                    
                default:
                    // — por defecto el programa permite ajustar la configuración del programa
                    break;
            }*/
            
            // C. correr las rutinas y funciones que presentan la información BIM procesada
            //list("Process step #");log(cycle);
            log("\n··· Objects created ···························\n");
            //list(object1);
            log("");
            
            control = std::cin.get();log("");
            cycle += 1;
        } while ((control != 'e'));
        //throw exception; // Throw an exception when a problem arise

    }
    catch (const char* errorMessage ) {
        // Block of code to handle & report error during main routine/loop
        std::cerr << errorMessage << std::endl;
    }
    /*catch (...) {
        // Block of code to handle & report error during main routine/loop
    }
    catch (...) {
        // Block of code to handle & report error during main routine/loop
    }
    catch (...) {
        // Block of code to handle & report error during main routine/loop
    }
    catch (...) {
        // Block of code to handle & report error during main routine/loop
    }*/
    // D. liberar recursos empleados por el entorno Bi3 con el cierre de la sesión
    return 0;
}
