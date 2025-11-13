// 函数: sub_633270
// 地址: 0x633270
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t var_4 = arg1
void* result = *(arg1 + 0x2c)
int32_t var_c
char const* const ecx_1

switch (result)
    case nullptr
        int32_t edx_1 = *(arg1 + 0x9c)
        
        if (edx_1 == 0)
            return sub_5cc6c0(sub_5cbb20(arg1))
        
        uint32_t eax = zx.d(edx_1.w)
        
        if (eax u>= data_b809e4)
            return sub_5cc6c0(sub_5cbb20(arg1))
        
        result = eax * 0x1c30 + data_b809e0
        
        if (*(result + 0x1c28) != edx_1 || result == 0)
            return sub_5cc6c0(sub_5cbb20(arg1))
        
        return result
    case 4
        result = sub_5cba00(*(arg1 + 0x1b8))
        
        if (*(result + 0x74) != 0)
            goto label_6332ef
        
        char const* const var_8 = "PodIconGetPile"
        var_c = 0x10feb
        ecx_1 = "pgfxPile->pile.headToken"
        goto label_6333b2
    case 6
        int32_t ecx_7 = *(arg1 + 0x1ec)
        
        if (ecx_7 == 0)
            char const* const var_8_5 = "PodIconGetPile"
            var_c = 0x11009
            ecx_1 = "gfx.tokenIcon.tokenIconCard != CARD_NONE"
            goto label_6333b2
        
        result = sub_5cf840(ecx_7)
        
        if (result != 0)
            return result
        
        char const* const var_8_6 = "PodIconGetPile"
        var_c = 0x1100b
        ecx_1 = "pgfxPile"
        goto label_6333b2
    case 7
        result = *(arg1 + 0x224)
        
        if (result == 0)
            return sub_5cc410(result, *(arg1 + 0x228), 0x3f1, result, result)
        
        if (result != 1)
            char const* const var_8_3 = "PodIconGetPile"
            var_c = 0x11004
            ecx_1 = "gfx.arrow.source.type == DOMARROWSOURCE_PILE"
            goto label_6333b2
        
        result = sub_5cba00(*(arg1 + 0x228))
        
        if (*(result + 0x74) == 0)
            char const* const var_8_4 = "PodIconGetPile"
            var_c = 0x11006
            ecx_1 = "pgfxPile->pile.headToken"
            goto label_6333b2
    case 8
        result = sub_5cba00(*(arg1 + 0x240))
    default
        char const* const var_8_7 = "PodIconGetPile"
        var_c = 0x1100e
        ecx_1 = "Halt"
    label_6333b2:
        sub_63b870(result, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            var_c, "PodIconGetPile")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

label_6332ef:

if (result != 0)
    return result

char const* const var_8_1 = "PodIconGetPile"
var_c = 0x11011
ecx_1 = "pgfxPile"
goto label_6333b2
