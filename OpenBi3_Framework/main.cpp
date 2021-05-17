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
#include <bi3_framework.h>

// External references and libraries
#include <stdio>
#include <iostream>
#include <fstream>


// Demo code here...

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
    unsigned object2 = _NRY1(_0n8);
    unsigned object3 = _DUO1(_0dz);
    unsigned object4 = _HEP1(_0p3);
    unsigned object5 = _HEP2(_0pA,_0pD);
    unsigned object6 = _HEP3(_0pG,_0pL,_0pO);
    unsigned object7 = _HEP4(_0pR,_0pT,_0pV,_0pZ);
    //char object8[] = (_TRYWORD(_0pG,_0pL,_0pO,_0pA,_0pD,_0pZ,_0pR,_0pT,_0pV));
    
    //ter<0> tritVar;
    //char b = TRYBLE('A','J','3');
    //char w = TRYWORD(1101,1111,0100,0011,0100,0011,0011,0100,0011);
    
    //base27 a = "42"_b27;
    //unsigned b = _0t1;
    
    
    unsigned int cycle = 1;
    char control = '0';
    do {
        // Printing process
        //list("Process step #");log(cycle);
        log("\n··· Objects created ···························\n");
        list(object1);
        list(object2);
        list(object3);
        list(object4);
        list(object5);
        list(object6);
        list(object7);
        //list(object8);
        
        log("");
        
        //std::cout << tritVar.value << '\n';
        //std::cout << 1 << "*" << b << " = " << base27(1 * b) << std::endl;
        
        //log(" Enter new value for number 1:");
        //number1 = std::cin.get();log("");
        log("");
        
        control = std::cin.get();log("");
        cycle += 1;
    } while ((control != 'e'));
    return 0;
}

try {
    // Block of code to try
    throw exception; // Throw an exception when a problem arise
}
catch (...) {
    // Block of code to handle errors
}
