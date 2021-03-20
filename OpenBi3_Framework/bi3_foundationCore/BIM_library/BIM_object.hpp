/*
 ===============================================================================
 ·File:       BIM_object.hpp
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

#ifndef BIM_object_hpp
#define BIM_object_hpp

// External references and libraries
#include <stdio.h>

// Internal references
#include "bi3_dataSet.hpp"

#endif /* BIM_object_hpp */

// ===============================================================================
//    BIM OJECTS DATA-TYPE DEFINITION
// ===============================================================================


class bimob {
private
    // Object properties
    const (type) projectIntegratedUniqueID;
    (type) BOversion;
    (type) BOname;
    (type) BOdescription;
    (type) BOtimestamp;
    (type) BOstatus;
    bi3Dataset BOdata;
    

    // Object functions
    setPIID();
    (type) updateBO((type) newBOversion, (type) newBOname, (type) newBOdescription, (type) newBOtimestamp, (type) newBOstatus, bi3Dataset newBOdata);
    
public:
    // Object properties
    (type) BOparent
    
    // Object functions
    (type) readBOpiid();
    (type) readBOversion();
    (type) readBOname();
    (type) readBOdescription();
    (type) readBOtimestamp();
    (type) readBOstatus();
    (type) readBOdataSize();
    (type) readBOdataValue();
    updateBOversion((type) newBOversion);
    updateBOname((type) newBOname);
    updateBOdescription((type) newBOdescription);
    updateBOupdate((type) newBOtimestamp);
    updateBOstatus((type) newBOstatus);
    updateBOdata(bi3Dataset newBOdata);
    
    
    
};

