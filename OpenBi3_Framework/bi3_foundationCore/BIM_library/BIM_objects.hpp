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

#ifndef BIM_objects_hpp
#define BIM_objects_hpp

// External references and libraries
#include <stdio.h>

// Internal references
#include "bi3_dataTypes.hpp"

#endif /* BIM_object_hpp */

//  ==============================================================================
//      LEVEL 0 — DATA-TYPE DEFINITIONS FOR FUNDAMENTAL BIM OBJECTS CLASSES
//  ==============================================================================

//  _____ C0 — CORE BIM DATA TYPE FOR CROSS-FRAMEWORK CLASSES. ___________________
//  ______________________________________________________________________________
class bimData {
    private
    // Object properties
    const (type) BOparent;
    const (type) BOuniqueID;
    (type) BOname;
    (type) BOdescription;
    (type) BOstatus;
    (type) BOversion;
    (type) BOtimestamp;
    
    // Object functions
    void setBOuniqueID();
    void updateBO((type) newBOversion, (type) newBOname, (type) newBOdescription, (type) newBOtimestamp, (type) newBOstatus, bimdata newBOdata);
    
public:
    // Object properties
    
    
    // Object functions
    (type) readBOuniqueID();
    (type) readBOversion();
    (type) readBOname();
    (type) readBOdescription();
    (type) readBOtimestamp();
    (type) readBOstatus();
    (type) readBOdataSize();
    (type) readBOdataValue();
    void updateBOversion((type) newBOversion);
    void updateBOname((type) newBOname);
    void updateBOdescription((type) newBOdescription);
    void updateBOupdate((type) newBOtimestamp);
    void updateBOstatus((type) newBOstatus);
    void updateBOdata(bi3Dataset newBOdata);
    
};



//  ==============================================================================
//      LEVEL 1 — DATA-TYPE DEFINITIONS FOR BIM ASSET CLASSES
//  ==============================================================================

//  _____ C1 — BASIC BIM DATA TYPE FOR ASSETS OR PROJECT OBJECTS. ________________
//  ______________________________________________________________________________
class bimProject : public bimData {
    private
    // Object properties
    
    
    // Object functions
    
    
public:
    // Object properties
    std::array<bimMember,1> BPmembers;
    
    // Object functions
    
    
};

//  _____ C1.1 — SPECIALIZED BIM DATA TYPE FOR BUILDING-PROJECT OBJECTS. _________
//  ______________________________________________________________________________
class bimBuildingPrj : public bimProject {
    private
    // Object properties
    
    
    // Object functions
    
    
public:
    // Object properties
    
    
    // Object functions
    
    
};

//  _____ C1.2 — SPECIALIZED BIM DATA TYPE FOR ROADWAYS-PROJECT OBJECTS. _________
//  ______________________________________________________________________________
class bimRoadwayPrj : public bimProject {
    private
    // Object properties
    
    
    // Object functions
    
    
public:
    // Object properties
    
    
    // Object functions
    
    
};


//  ==============================================================================
//      LEVEL 2 — DATA-TYPE DEFINITIONS FOR BIM ASSET'S COMPONENTS CLASSES
//  ==============================================================================

//  _____ C2 — BASIC BIM DATA TYPE FOR PROJECT'S COMPONENT OBJECTS. ______________
//  ______________________________________________________________________________
class bimMember : public bimData {
    private
    // Object properties
    
    
    // Object functions
    
    
public:
    // Object properties
    
    
    // Object functions
    
    
};


//  _____ C2.2 — SPECIALIZED BIM DATA TYPE FOR X-COMPONENT OBJECTS. ______________
//  ______________________________________________________________________________
class bimBuildingPrj : public bimData {
    private
    // Object properties
    
    
    // Object functions
    
    
public:
    // Object properties
    
    
    // Object functions
    
    
};

//  _____ C2.2 — SPECIALIZED BIM DATA TYPE FOR X-COMPONENT OBJECTS. ______________
//  ______________________________________________________________________________
class bimRoadwayPrj : public bimData {
    private
    // Object properties
    
    
    // Object functions
    
    
public:
    // Object properties
    
    
    // Object functions
    
    
};


//  ==============================================================================
//      LEVEL 0 — FUNDAMENTAL BIM OBJECTS DATA-TYPE DEFINITIONS
//  ==============================================================================

//  _____ C2.2 — SPECIALIZED BIM DATA TYPE FOR X-COMPONENT OBJECTS. ______________
//  ______________________________________________________________________________
class bimFeature : public bimData {
    private
    // Object properties
    
    
    // Object functions
    
    
public:
    // Object properties
    
    
    // Object functions
    
    
};


// ===============================================================================
//    LEVEL 1 BIM OJECTS DATA-TYPE DEFINITIONS
// ===============================================================================

//  _____ C1.2 — DATA-TYPE DEFINITION FOR ROADWAYS PROJECTS CLASSES ______________
//  ______________________________________________________________________________
class bim_set : public bimData {
    private
    // Object properties
    
    
    // Object functions
    
    
public:
    // Object properties
    
    
    // Object functions
    
    
};


// ===============================================================================
//    LEVEL 1 BIM OJECTS DATA-TYPE DEFINITIONS
// ===============================================================================

//  _____ C1.2 — DATA-TYPE DEFINITION FOR ROADWAYS PROJECTS CLASSES ______________
//  ______________________________________________________________________________
class bimProperty : public bimData {
    private
    // Object properties
    
    
    // Object functions
    
    
public:
    // Object properties
    
    
    // Object functions
    
    
};


// ===============================================================================
//    LEVEL 1 — BIM OJECTS DATA-TYPE DEFINITIONS
// ===============================================================================

//  _____ C1.2 — DATA-TYPE DEFINITION FOR ROADWAYS PROJECTS CLASSES ______________
//  ______________________________________________________________________________
class bimObject : public bimData {
private
    // Object properties
    

    // Object functions
    
    
public:
    // Object properties
    
    
    // Object functions
    
    
};




// ===============================================================================
//    LEVEL 1 BIM OJECTS DATA-TYPE DEFINITIONS
// ===============================================================================

//  _____ C1.2 — DATA-TYPE DEFINITION FOR ROADWAYS PROJECTS CLASSES ______________
//  ______________________________________________________________________________
class bimdata {
    private
    // Object properties
    
    
    // Object functions
    
    
public:
    // Object properties
    
    
    // Object functions
    
    
};

