#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_medical_vitals"};
        author = ECSTRING(common,ACETeam);
        authors[] = {"Glowbal", "KoffeinFlummi"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "Statemachine.hpp"
#include "CfgEventHandlers.hpp"
