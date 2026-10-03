class CfgFunctions 
{
    //be careful when overwriting functions as version updates can break your extension
    class A3A 
    {
        class Base 
        {
            class chooseAttack 
            {
                file = QPATHTOFOLDER(Base\fn_chooseAttack.sqf);
            };
        };
        class OrgPlayers
        {
            class tierCheck 
            {
                file = QPATHTOFOLDER(OrgPlayers\fn_tierCheck.sqf);
            };
        };
        class Missions
        {
            class findIfNearAndHostile
            {
                file = QPATHTOFOLDER(Missions\fn_findIfNearAndHostile.sqf);
            };
            class missionRequest
            {
                file = QPATHTOFOLDER(Missions\fn_missionRequest.sqf);
            };
        };
    };
    class ADDON 
    {
        class Liberators 
        {
            file = QPATHTOFOLDER(Liberators);
            class initLiberators 
            {
                postInit = 1;
            };
        };
    };
};
