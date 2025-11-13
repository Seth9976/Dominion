// 函数: sub_58efc0
// 地址: 0x58efc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_571b30(arg1, data_cce9b0)
int32_t eax_2 = *(eax + 0x9c) & 0x940
int32_t var_c
char const* const ecx

if (((*(eax + 0x98) & 0x7f000400) | eax_2) == 0)
    int32_t ecx_1 = data_cce9b4
    
    if (ecx_1 s< 0xa)
        *(data_cce9c4 + (ecx_1 << 2)) = arg1
        data_cce9b4 += 1
        
        if (sub_58e890(arg1, 0) != 0)
            return 1
        
        int32_t result = data_cce9c4
        int32_t ecx_4 = data_cce9b4 - 1
        data_cce9b4 = ecx_4
        *(result + (ecx_4 << 2)) = 0
        result.b = 0
        return result
    
    char const* const var_8_1 = "RollKingdom_AddCard"
    var_c = 0x45c4
    ecx = "c.numKingdom < NUM_KINGDOM_PILES"
else
    char const* const var_8 = "RollKingdom_AddCard"
    var_c = 0x45c3
    ecx = "!PregameIsLandscape(what)"

sub_63b870(eax_2, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_c, 
    "RollKingdom_AddCard")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
