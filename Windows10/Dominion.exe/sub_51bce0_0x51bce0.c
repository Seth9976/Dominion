// 函数: sub_51bce0
// 地址: 0x51bce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
int32_t var_18
char const* const var_14
char* ecx

if (arg3 != 0)
    void* esi_1 = arg3 * 0x4c
    
    if (*(esi_1 + 0x78e304) == arg3)
        int32_t edx = **(esi_1 + &data_78e308)
        int32_t* eax_1 = *(esi_1 + &data_78e30c)
        *arg2 = edx
        arg1 = arg4
        *arg1 = *eax_1
        
        if (edx != 0)
            return arg1
        
        var_14 = "DoodadGetGfx"
        var_18 = 0x2ad6
        ecx = "texture != NULL"
    else
        var_14 = "DoodadDefGet"
        var_18 = 0x2acd
        ecx = "def.doodad == doodad"
else
    var_14 = "DoodadDefGet"
    var_18 = 0x2acb
    ecx = "doodad != DOODAD_NONE"

sub_63b870(arg1, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", var_18, 
    var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
