// this file is used to add params for your extender
// see Params.hpp in the main Antistasi files for more examples

class Params
{
    class AllParams; // this line is aboslutely necessary
    class ExtenderParams; // this line is aboslutely necessary
    
    class areInvadersFriendly: ExtenderParams
    {
        title = $STR_params_are_invaders_friendly_title;
        tooltip = $STR_params_are_invaders_friendly_desc;
        values[] = {1,2};
        texts[] = {$STR_params_are_invaders_friendly_1,$STR_params_are_invaders_friendly_2};
        default = 1;
        lockOnSave = 1;
        lockInGame = 1;
        class dependencies
        {
            class gameMode
            {
                value = 2;
                dependentValue = 1;
                lockedByDependency = 1;
            };
            class areRivalsEnabled
            {
                value = 2;
                dependentValue = 0;
                lockedByDependency = 0;
            };
        };
    };
    class govInvFightSimulationDistancePlayer: ExtenderParams
    {
        title = $STR_params_govInvFightSimulationDistancePlayer_title;
        tooltip = $STR_params_govInvFightSimulationDistancePlayer_desc;
        values[] = {1000,2000,3000,4000,5000,6000,7000,8000,9000,10000};
        texts[] = {"1000","2000","3000","4000","5000","6000","7000","8000","9000","10000"};
        default = 3000;
        lockOnSave = 0;
        lockInGame = 0;
    };
    class govInvFightSimulationDistanceHq: ExtenderParams
    {
        title = $STR_params_govInvFightSimulationDistanceHq_title;
        tooltip = $STR_params_govInvFightSimulationDistanceHq_desc;
        values[] = {1000,2000,3000,4000,5000,6000,7000,8000,9000,10000};
        texts[] = {"1000","2000","3000","4000","5000","6000","7000","8000","9000","10000"};
        default = 3000;
        lockOnSave = 0;
        lockInGame = 0;
    };

    class liberatorsWarLevelCoef: ExtenderParams
    {
        title = $STR_params_liberatorsWarLevelCoef_title;
        tooltip = $STR_params_liberatorsWarLevelCoef_desc;
        values[] = {0,25,50,75,100};
        texts[] = {"0","0.25","0.5","0.75","1"};
        default = 25;
        lockOnSave = 0;
        lockInGame = 0;
    };

    class liberatorsVictoryCondition: ExtenderParams
    {
        title = $STR_params_liberatorsVictoryCondition_title;
        tooltip = $STR_params_liberatorsVictoryCondition_desc;
        values[] = {0, 1, 2};
        texts[] = {$STR_params_liberatorsVictoryCondition_0,$STR_params_liberatorsVictoryCondition_1,$STR_params_liberatorsVictoryCondition_2};
        default = 0;
        lockOnSave = 0;
        lockInGame = 0;
    };

    class LiberatorsSpacer : AllParams {};
};