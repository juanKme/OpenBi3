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
#include <stdio.h>
#include <stdlib.h>
//#include <stdnoreturn.h>
#include <string>
//#include <tgmath.h>
//#include <thread>
#include <time.h>
//#include <uchar.h>
//#include <wchar.h>
//#include <wctype.h>

// Internal references
#include "bi3_framework.hpp"
#include "bi3_foundationCore/Admin_tools/bi3_ErrorHandling.hpp"
template<typename inputType>
void logtoConsole(inputType message, bool endLine) {
    std::cout << message;
    if (endLine == true) {std::cout << std::endl;}
}

template<typename inputType>
void logtoFile(inputType message,
               inputType logTime,
               inputType *logFilePointer) {
    std::string fullLog = " · Booklog record : "+logTime+" — "+message+"\n";
    fprintf(logFilePointer = fopen("Framework_Booklog.txt", "a+"), "%s", fullLog);
    fclose(logFilePointer);
}

int main(int argc, const char * argv[]) {
    // Setting up the working environment for the framework interac
    bool terminationFlag = false;
    time_t logTime;
    FILE *logFilePointer;
    char sentence[1000]; // not really necessary
    
    struct tm y2k = {0};
    double seconds;
    y2k.tm_hour = 0;   y2k.tm_min = 0; y2k.tm_sec = 0;
    y2k.tm_year = 100; y2k.tm_mon = 0; y2k.tm_mday = 1;
    time(&logTime);  // get current time; same as: timer = time(NULL)
    
    if ((logFilePointer = fopen("Framework_Booklog.txt", "a+")) == NULL) {
        logtoConsole("Booklog file cannot be opened. The program will now create a new file.", true);
        logFilePointer = fopen("Framework_Log.txt", "a");
    }
    
    //logtoFile("Testing", logTime, *logFilePointer);
    fclose(logFilePointer);
    
    do {
        // A. iniciar sesión de trabajo preparando el entorno Bi3
        unsigned int cycle = 1;
        char control = '0';
        const std::string salute = " — Mensaje de bienvenida | Entorno de trabajo preparado — ";
        
        // Main BIM-data manipulation proccess routine
        try {
            
            do {
                // B. hacer continuamente un switch hasta que el usuario elija salir (X)
                logtoConsole(salute, true);

                switch (control) {
                    case '1':
                        // 1. crear un nuevo modelo desde objeto vacio tipo "BIM_model"
                        //<#statements#>
                        break;
                 
                    case '2':
                        // 2. cargar un modelo BIM desde contenido en archivo (si existe)
                        //<#statements#>
                        break;
                 
                    case '3':
                        // 3. intercambiar de modelo activo en la sesión de trabajo
                        //<#statements#>
                        break;
                 
                    case '4':
                        // 4. editar el modelo BIM activo en la sesión de trabajo (múltiples submenus)
                        //<#statements#>
                        break;
                 
                    case '5':
                        // 5. guardar en archivo el estado del modelo activo en la sesión de trabajo
                        //<#statements#>
                        break;
                 
                    case '6':
                        // 6. terminar la sesión de trabajo
                        //<#statements#>
                        break;
                 
                    default:
                        // — por defecto el programa permite ajustar la configuración del programa
                        char oper;
                        float num1, num2;
                        std::cout << "Enter an operator (+, -, *, /): ";
                        std::cin >> oper;
                        std::cout << "Enter two numbers: " << std::endl;
                        std::cin >> num1 >> num2;
                        break;
                }
                
                // C. correr las rutinas y funciones que presentan la información BIM procesada
                //logtoFile("Process step #");logtoConsole(cycle);
                //logtoFile(object1);
                // Program exits if the file pointer returns NULL.
                //exit(1);
                
                logtoConsole(" + ", true);control = std::cin.get();logtoConsole("/cl", true);
                cycle += 1;
            } while ((control != 'e'));
            // if error message throw "exception"; // Throw an exception when a problem arise
            // if error code throw 12345;
            // if error object throw errorObj;

        }
        catch (const bi3_ErrorObj errorObject) {
            // Block of code to handle & report errors during main routine/loop
            std::cerr << "Exception #" << "errorObject.errorCode" << " : " << std::endl;
            std::cerr << "errorObject.errorDescription" << std::endl;
        }
        catch (std::exception stdException){
            // Block of code to handle & report errors during main routine/loop
            std::cerr << "Exception:" << stdException.what() << std::endl;
        }
        catch (const int errorCode) {
            // Block of code to handle & report errors during main routine/loop
            std::cerr << "Exception #" << errorCode << std::endl;
        }
        catch (const char* errorMessage) {
            // Block of code to handle & report errors during main routine/loop
            std::cerr << "Exception: " << errorMessage << std::endl;
        }
    } while (terminationFlag == false);
    
    
    // D. liberar recursos empleados por el entorno Bi3 con el cierre de la sesión
    return 0;
    /* / exiting program
    if (logFilePointer == NULL) {
        printf("Error!");
        exit(1);
    }*/
}
