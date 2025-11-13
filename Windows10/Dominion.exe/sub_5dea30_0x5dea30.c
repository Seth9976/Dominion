// 函数: sub_5dea30
// 地址: 0x5dea30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1
int32_t var_14
int32_t ecx_6
char* ecx_7

switch (*(arg2 + 0x2c))
    case 0
        return *(*(arg2 + 0x98) * 0x64 + arg1 + 0x1a48)
    case 1
        ecx_6 = *(arg2 + 0x170)
        
        if (ecx_6 != 0)
            return sub_571b30(ecx_6, *(arg1 + 0xd48))
        
        char const* const var_10_2 = "CardDef"
        var_14 = 0x3dda
        ecx_7 = "gfx.cardPH.what != CARD_NONE"
        goto label_5deb29
    case 3
        int32_t edx_2 = *(arg2 + 0x70)
        
        if (edx_2 == 0 || *(arg2 + 0x5c) s>= 0x27)
            return sub_571b30(*(arg2 + 0x30), *(arg1 + 0xd48))
        
        ecx_6 = *(arg2 + 0x30)
        
        if (ecx_6 == 0xd3d || ecx_6 == 0xd30)
            return sub_571b30(ecx_6, *(arg1 + 0xd48))
        
        return *(*(sub_5cba00(edx_2) + 0x98) * 0x64 + arg1 + 0x1a48)
    case 5
        int32_t ecx_1 = *(arg2 + 0x1f8)
        
        if (ecx_1 == 2)
            return *(*(arg2 + 0x1fc) * 0x64 + arg1 + 0x1a48)
        
        if (ecx_1 == 3)
            return sub_571b30(sub_5915b0(arg2, arg2, arg1, *(arg2 + 0x1fc)), *(arg1 + 0xd48))
        
        char const* const var_10_1 = "CardDef"
        var_14 = 0x3dd5
        goto label_5deb1a
    default
        char const* const var_10_3 = "CardDef"
        var_14 = 0x3deb
    label_5deb1a:
        ecx_7 = "Halt"
    label_5deb29:
        sub_63b870(arg2, &data_801800, ecx_7, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            var_14, "CardDef")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
