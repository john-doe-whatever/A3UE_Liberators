// this file is used to add params for your extender
// see Params.hpp in the main Antistasi files for more examples

class Params
{
    class AllParams; // this line is aboslutely necessary
    class ExtenderParams; // this line is aboslutely necessary
    class AIParams : AllParams
    {
        type = "AI";
        title = $STR_params_ai;
        //tooltip = $STR_params_ai_desc;
        values[] = {};
        texts[] = {};
        default = 0;
    };

    class AIBalanceParams : AIParams
    {
        type = "AIBalance";
        title = $STR_params_aiBalanceParams;
        //tooltip = $STR_params_aiBalanceParams_desc;
        values[] = {};
        texts[] = {};
        default = 0;
    };

    class A3A_invaderBalanceMul: AIBalanceParams
    {
        attr[] = {"server"};
        title = $STR_params_resource_balance_inv;
        tooltip = $STR_params_resource_balance_inv_desc;
        values[] = {5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
        texts[] =  {"0.5x","0.6x","0.7x","0.8x","0.9x","1.0x","1.1x","1.2x","1.3x","1.4x","1.5x","1.6x","1.7x","1.8x","1.9x","2.0x"};
        class difficulty
        {
            class solo
            {
                easy = 10;
                medium = 12;
                hard = 14;
            };
            class small
            {
                easy = 12;
                medium = 14;
                hard = 16;
            };
            class medium
            {
                easy = 14;
                medium = 16;
                hard = 18;
            };
            class large
            {
                easy = 16;
                medium = 18;
                hard = 20;
            };
        };
        default = 12;
        lockInGame = 1;
    };

    class liberatorsSpecificParams: ExtenderParams // this class is the base class for all of your params
    {
        title = "[A3UE] Liberators: Liberators Mode Parameters";
        values[] = {0};
        texts[] = {""};
        default = 0;
    };
    
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
                lockedByDependency = 1;
            };
        };
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

    class liberatorsSpecificParamsSpacer: ExtenderParams
    {
        title = "";
        values[] = {""};
        texts[] = {""};
        default = "";
    };


    class liberatorsAdditionalCommonParams: ExtenderParams
    {
        title = "[A3UE] Liberators: Additional Common Parameters";
        values[] = {0};
        texts[] = {""};
        default = 0;
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

    class enableOccupantPunishments: ExtenderParams
    {
        title = $STR_params_enableOccupantPunishments_title;
        tooltip = $STR_params_enableOccupantPunishments_desc;
        values[] = {1,0};
        texts[] = {$STR_params_afk_enabled, $STR_params_afk_disabled};
        default = 0;
        lockOnSave = 0;
        lockInGame = 0;
    };

    class occupantPunishmentChance: ExtenderParams
    {
        title = $STR_params_occupantPunishmentChance_title;
        tooltip = $STR_params_occupantPunishmentChance_desc;
        values[] = {0,25,50,75,100};
        texts[] = {"0","0.25","0.5","0.75","1"};
        default = 50;
        lockOnSave = 0;
        lockInGame = 0;
    };

    class liberatorsCommonParamsSpacer: ExtenderParams // this class is the base class for all of your params
    {
        title = "";
        values[] = {""};
        texts[] = {""};
        default = "";
    };
};