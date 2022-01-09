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
#include <cstdlib>
//#include <chrono>
//#include <complex.h>
//#include <ctype.h>
//#include <errno.h>
//#include <fenv.h>
//#include <float.h>
#include <iostream>
//#include <inttypes.h>
//#include <iso646.h>
#include <limits.h>
//#include <locale.h>
#include <math.h>
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

#include <unistd.h>
#include <term.h>

// Internal references
#include "bi3_framework.hpp"
#include "bi3_foundationCore/Admin_tools/bi3_ErrorHandling.hpp"

/*void cleanConsole(){
    if (!cur_term)
    {
        int result;
        setupterm( NULL, STDOUT_FILENO, &result );
        if (result <= 0) return;
    }
    
    putp( tigetstr( "clear" ) );
}*/
// function for registering data to the console
template<typename inputType>
void logtoConsole(inputType message, bool endLine) {
    std::cout << message;
    if (endLine == true) {std::cout << std::endl;}
}
// function for registering data to the booklog file
template<typename inputType>
void logtoFile(inputType message,
               inputType logTimeID,
               inputType logFileLocation,
               inputType logFilePointer) {
    //FILE *logFilePointer;
    //if ((logFilePointer = fopen("~/Downloads/Framework_Booklog.txt", "W+")) == NULL) {
        //logtoConsole("Booklog file cannot be opened. The program will now create a new file.", true);
    //}
    std::string fullLog = " · ID# %s"+logTimeID+" — %s"+message+"\n ";
    logtoConsole("Writing to file: %s"+logFileLocation+"___>>\n"+fullLog,true);
    fprintf(logFilePointer = fopen(logFileLocation,"a+"),"%s",static_cast<void>(fullLog));
    fclose(logFilePointer);
}
// function for conforming a log's ID# based on the current system time
char* timetoLogID(clock_t initExecutionTime){
    time_t timer = time(NULL); // get current time; same as: time(&timer);*/
    clock_t logTime;
    struct tm y2k = {0}; y2k.tm_hour = 0; y2k.tm_min = 0; y2k.tm_sec = 0; y2k.tm_year = 100; y2k.tm_mon = 0; y2k.tm_mday = 1;
    
    double seconds;
    seconds = difftime(timer,mktime(&y2k));
    
    //time(&logTime);  // get current time; same as: timer = time(NULL)
    logTime = clock() - initExecutionTime;
    const char sentence[] = "ID# %lu:"+&logTime;//&((float)logTime)/CLOCKS_PER_SEC);
    
    std::string s = std::to_string(number);
    char const *pchar = s.c_str();  //use char const* as target type
    
    // ejemplo de conversión de int a char
#include <iostream>
#include <charconv> // from_chars, to_chars 
#include <string>
    
    int main() {
        std::string str { "xxxxxxxx" };
        const int value = 1986;
        
        const auto res = std::to_chars(str.data(),
                                       str.data() + str.size(),
                                       value);
        
        if (res.ec == std::errc())    {
            std::cout << str << ", filled: "
            << res.ptr - str.data() << " characters\n";
        }
        else if (res.ec == std::errc::value_too_large) {
            std::cout << "value too large!\n";
        }
    }
    
    // ejemplo de conversión de float a char
    std::string str{ "xxxxxxxxxxxxxxx" }; // 15 chars for float
    const auto res = std::to_chars(str.data(), str.data() + str.size(),  value);
    if (res.ec == std::errc())     {
        std::cout << str << ", filled: "
        << res.ptr - str.data() << " characters\n";
    }
    else if (res.ec == std::errc::value_too_large)     {
        std::cout << "value too large!\n";
    }
    
    
    return sentence;
}
// main loop for (demo) managing data using the Bi3 Framework
int main(int argc, const char * argv[]) {
    // Setting up the working environment for this demo
    bool terminationFlag = false;
    clock_t initialExecutionTime = clock();
    const char logFileLocation[] = "Framework_Logbook.txt"; //validate appropiate support location
    FILE *logFilePointer ;
    if ((logFilePointer = fopen(logFileLocation, "r+")) == NULL) {
        logtoConsole("Logbook file cannot be opened. The program will now create a new file.", true);
        char *logID = timetoLogID(initialExecutionTime);
        logtoConsole(logID, true);
        //logtoFile("New execution log.", "1", logFileLocation, logFilePointer);
    }
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
                //cleanConsole();
                std::cout << initialExecutionTime << std::endl;
                logtoConsole(salute, true);
                std::cout << "Ingrese una opción para el programa (1 ~ 8)";
                std::cin >> control;

                switch (control) {
                    case '1':
                        // 1. crear un nuevo modelo desde objeto vacio tipo "BIM_model"
                        std::cout << "Creando nuevo modelo...";
                        break;
                 
                    case '2':
                        // 2. cargar un modelo BIM desde contenido en archivo (si existe)
                        std::cout << "Cargando modelo de archivo...";
                        break;
                 
                    case '3':
                        // 3. intercambiar de modelo activo en la sesión de trabajo
                        std::cout << "Intercambiando el modelo activo...";
                        break;
                 
                    case '4':
                        // 4. editar el modelo BIM activo en la sesión de trabajo (múltiples submenus)
                        std::cout << "Editando el modelo activo...";
                        break;
                 
                    case '5':
                        // 5. guardar en archivo el estado del modelo activo en la sesión de trabajo
                        std::cout << "Guardando en archivo el modelo activo...";
                        break;
                 
                    case '6':
                        // 6. preparar & revisar informes de la información en el modelo activo
                        std::cout << "Preparando informes del modelo activo...";
                        break;
                    case '7':
                        // 7. Realizar ajustes a la configuración del programa
                        std::cout << "Ajustando la configuración del programa...";
                        break;
                    case '8':
                        // 8. terminar la sesión de trabajo
                        std::cout << "Cerrarndo sesión...";
                        control='e';
                        break;
                        
                 
                    default:
                        // — el programa calcula los parámetros relevantes del modelo activo
                        std::cout << "Calculando los parámetros relevantes del modelo...";
                        
                        break;
                }
                
                // C. correr las rutinas y funciones que presentan la información BIM procesada
                //logtoFile("Process step #");logtoConsole(cycle);
                //logtoFile(object1);
                // Program exits if the file pointer returns NULL.
                //exit(1);
                
                logtoConsole(" + ", true);control = std::cin.get();logtoConsole("/cl", true);
                cycle += 1;
                std::cout << cycle;
            } while ((control != 'e'));
            // if error message throw "exception"; // Throw an exception when a problem arise
            // if error code throw 12345;
            // if error object throw errorObj;

        }
        catch (const bi3_ErrorObj errorObject) {
            // Block of code to handle & report errors during main routine/loop
            //logtoFile("Exception #errorObject.errorCode : \n", <#inputType logTimeID#>, <#inputType *logFilePointer#>)
            std::cerr << "errorObject.errorDescription" << std::endl;
        }
        catch (std::exception stdException){
            // Block of code to handle & report errors during main routine/loop
            logtoConsole(stdException.what(), true);
        }
        catch (const int errorCode) {
            // Block of code to handle & report errors during main routine/loop
            logtoConsole(errorCode, true);
        }
        catch (const char* errorMessage) {
            // Block of code to handle & report errors during main routine/loop
            logtoConsole(errorMessage, true);
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
