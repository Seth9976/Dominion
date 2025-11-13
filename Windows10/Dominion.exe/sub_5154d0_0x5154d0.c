// 函数: sub_5154d0
// 地址: 0x5154d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = data_cca780
int32_t var_c
int32_t eax
char const* const ecx_1

if (*ecx == 0)
    eax = sub_50b5b0(ecx[1])
    
    if (eax != 0)
        return sub_50b2a0(eax)
    
    char const* const var_8_1 = "MissionPiece_ExpTwist"
    var_c = 0x1926
    ecx_1 = "expTwist != CPIECE_NONE"
else
    char const* const var_8 = "MissionPiece_ExpTwist"
    var_c = 0x1923
    ecx_1 = "setup.params.type == CAMPAIGNTYPE_EXPANSION"

sub_63b870(eax, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", var_c, 
    "MissionPiece_ExpTwist")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
