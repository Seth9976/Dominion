// 函数: sub_5cd340
// 地址: 0x5cd340
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_6 = *(arg1 + 0x2c)
int32_t var_8
char const* const ecx

switch (eax_6)
    case 0
        return *(arg1 + 0xa0)
    case 3
        return *(arg1 + 0x58)
    case 4
        return *(arg1 + 0x1c4)
    case 6
        return *(arg1 + 0x1e4)
    case 7
        if (*(arg1 + 0x224) == 0)
            return *(arg1 + 0x228)
        
        char const* const var_4 = "GfxGetOwner"
        var_8 = 0xcb2
        ecx = "gfx.arrow.source.type == DOMARROWSOURCE_PLAYER"
        goto label_5cd3a2
    default
        char const* const var_4_1 = "GfxGetOwner"
        var_8 = 0xcb5
        ecx = "Halt"
    label_5cd3a2:
        sub_63b870(eax_6, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_8, 
            "GfxGetOwner")
        
        if (sub_63bc30() == 0)
            noreturn sub_63bb00() __tailcall
        
        breakpoint
