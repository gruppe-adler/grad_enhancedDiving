class CfgVehicles {
    class Logic;
    class Module_F: Logic {
        class ArgumentsBaseUnits {
            class Units;
        };
        class ModuleDescription {
            class AnyBrain;
        };
    };
     
    class grad_enhancedDiving_params:Module_F {
        scope = 2;
        displayName = "Enhanced Diving Settings";
        icon ="";
        category = "Enhanced Diving";
        function = "grad_enhancedDiving_fnc_setModuleSetting";
        functionPriority = 0;
        isGlobal = 1;
        isTriggerActivated = 0;
        isDisposable = 1;
        is3DEN = 0;
        author = "Salbei";
        class Arguments : ArgumentsBaseUnits {   
			class activ {
				displayName = $STR_grad_enhancedDiving_activ;
				description = $STR_grad_enhancedDiving_activ_desc;
				typeName = "BOOL"; 
				defaultValue = "0";				
			}
			class maxppO {
				displayName = $STR_grad_enhancedDiving_maxppO;
				description = $STR_grad_enhancedDiving_maxppO_desc;
				typeName = "NUMBER";
				defaultValue = "1.1";
			};
			class tempC {
				displayName = $STR_grad_enhancedDiving_tempC;
				description = $STR_grad_enhancedDiving_tempC_desc;
				typeName = "NUMBER";
				defaultValue = "20";
			};
			class rate {
				displayName = $STR_grad_enhancedDiving_rate;
				description = $STR_grad_enhancedDiving_rate_desc;
				typeName = "NUMBER";
				defaultValue = "25";
			};
			/*
			 class Units {
				displayName = $STR_grad_enhancedDiving_unit;
				description = $STR_grad_enhancedDiving_unit_desc;
				typeName = "STRING";
				defaultValue = "B_diver_F, B_diver_TL_F, B_diver_exp_F";
			 };
			 */
		};
		class ModuleDescription : ModuleDescription {
			description = $STR_grad_enhancedDiving_description;
		};
	};

    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                #include "ACE_SelfActions.hpp"
            };
			class grad_enhancedDiving_emergencyAsent {
				displayName = $STR_grad_enhancedDiving_emergencyAsent;
				condition = "(EDGEARON)";
				statement = "[] call grad_enhancedDiving_fnc_emergencyAscent";
				showDisabled = 1;
				exceptions[] = {"isNotSwimming"};
				priority = 2.5;
				icon = "";
			};
        };
    };
};

class CfgFactionClasses {
	class NO_CATEGORY;
	class enhancedDiving: NO_CATEGORY {
	displayName = "Divo Meter";
        priority = 2;
        side = 7;
	};
};
