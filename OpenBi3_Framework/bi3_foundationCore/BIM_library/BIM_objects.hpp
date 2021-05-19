/*
 ===============================================================================
 ·File:       BIM_objects.hpp
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

#ifndef BIM_objects_header
#define BIM_objects_header

#pragma once

// Internal references
#include "../Data_types/bi3_dataTypes.hpp"

// External references and libraries



//  ==============================================================================
//      BIM LEVEL 0 — DATA TYPE DEFINITIONS FOR FUNDAMENTAL BIM CLASSES
//  ==============================================================================

//  _____ C0 — CORE DATA TYPE FOR CROSS-FRAMEWORK BIM CLASSES. ___________________
//  ______________________________________________________________________________
class bimData {
private:
    // Object private properties
    bi3TextM        BOname;
    bi3TextXL       BOdescription;
    bi3TextS        BOstatus;
    bi3N8           BOversion;
    bi3TimeF        BOtimestamp;
    
    // Object private functions
    void setBOuniqueID(bimData parentObject);
    void updateBO(bi3TextM  newBOname,
                  bi3TextXL newBOdescription,
                  bi3TextS  newBOstatus,
                  bi3N8     newBOversion,
                  bi3TimeF  newBOtimestamp,
                  bimdata   newBOdata);
    
public:
    // Object public properties
    const bi3TEN    BOuniqueID;
    std::array<bi3TEN> contenido;
    
    // Object public functions
    bi3TextM        readBOname();
    bi3TextXL       readBOdescription();
    bi3TextS        readBOstatus();
    bi3N8           readBOversion();
    bi3TimeF        readBOtimestamp();
    bi3DataSet      readBOdataSize();
    bimdata         readBOdataValue();
    void updateBO(bi3TextM newBOname);
    void updateBO(bi3TextXL newBOdescription);
    void updateBO(bi3TextS newBOstatus);
    void updateBO(bi3N8 newBOversion);
    void updateBO(bi3TimeF newBOtimestamp);
    void updateBO(bi3Dataset newBOdata);
    
};

#endif /* BIM_object_hpp */
