// 函数: sub_5e3790
// 地址: 0x5e3790
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t var_8 = arg1
*arg2 = 1
char const* const var_20
int32_t var_1c
char const* const var_18
char* result
char* ecx_3
int32_t edi_2

if (*(arg1 + 0x2c) != 1)
label_5e390b:
    edi_2 = data_b604e0
else
    result = *(arg1 + 0x178)
    
    if (result == 0)
        goto label_5e390b
    
    int32_t edx = data_b809e4
    uint32_t ecx = zx.d(result.w)
    
    if (ecx u>= edx)
        goto label_5e390b
    
    int32_t edi_1 = data_b809e0
    void* ebx_2 = ecx * 0x1c30 + edi_1
    
    if (*(ebx_2 + 0x1c28) != result || ebx_2 == 0 || *(ebx_2 + 0xa4) != 0x474)
        goto label_5e390b
    
    int32_t ecx_1 = *(ebx_2 + 0x9c)
    
    if (ecx_1 == 0)
    label_5e38f7:
        var_18 = "CalcCardFaceup"
        var_1c = 0x4afb
        ecx_3 = "sourcePile"
    label_5e3c32:
        var_20 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    label_5e3c3c:
        sub_63b870(result, &data_801800, ecx_3, var_20, var_1c, var_18)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = zx.d(ecx_1.w)
    
    if (result u>= edx)
        goto label_5e38f7
    
    result = result * 0x1c30 + edi_1
    
    if (*(result + 0x1c28) != ecx_1 || result == 0)
        goto label_5e38f7
    
    int32_t ecx_2 = *(result + 0x68)
    
    if (ecx_2 == 0)
        var_18 = "CalcCardFaceup"
        var_1c = 0x4afc
        ecx_3 = "sourcePile->pile.cardId"
        goto label_5e3c32
    
    result = sub_5de8b0(ecx_2)
    
    if (result == 0)
        var_18 = "LookupCard"
        var_1c = 0x3d96
        ecx_3 = &data_871964
        goto label_5e3c32
    
    result = sub_5cbb20(result)
    edi_2 = data_b604e0
    int32_t edx_1 = edi_2
    
    if (edi_2 == 0xffffffff)
        edx_1 = 0
    
    int32_t ecx_5 = *(ebx_2 + 0xa4)
    
    if (ecx_5 s> 0x45f)
        if (ecx_5 != 0x474)
            goto label_5e3911
        
        if (result s> 0xe0d)
            if (result == 0x1100)
                goto label_5e38e9
            
            if (result == 0x1101)
                goto label_5e38e9
            
            if (result == 0x1302 && *(ebx_2 + 0xa0) != edx_1)
                result.b = 0
                return result
        else
            if (result == 0xe0d)
                goto label_5e38e9
            
            if (result s> 0xc15)
                if (result == 0xd16 && *(ebx_2 + 0xa0) != edx_1)
                    result.b = 0
                    return result
            else if ((result == 0xc15 || result == 0x401 || result == 0xb08)
                    && *(ebx_2 + 0xa0) != edx_1)
                result.b = 0
                return result
    else if (ecx_5 == 0x45f)
    label_5e38e9:
        
        if (*(ebx_2 + 0xa0) != edx_1)
            result.b = 0
            return result
    else if (ecx_5 != 2 && ecx_5 == 0x3ed)
        result.b = 0
        return result

label_5e3911:

if (*(arg1 + 0x2c) != 0)
    result.b = 1
    return result

void* ebx_3 = *(arg1 + 0xa4)

if (ebx_3 - 7 u<= 0x41 && ebx_3 s>= 0x48)
    sub_591930()
    edi_2 = data_b604e0

if (ebx_3 - 7 u<= 0x41 && *((ebx_3 << 4) + 0xb81ffc) == 0x1301)
    result.b = 1
    return result

if (*(arg1 + 0x114) != 0)
    result.b = 0
    return result

if (*(arg1 + 0x128) != 0)
    result.b = 1
    return result

if (*(arg1 + 0xa4) == 0x3ed)
    result.b = 0
    return result

if (*(arg1 + 0x1a18) == 0)
label_5e39d3:
    
    if (edi_2 == 0xffffffff)
        result.b = 1
        return result
else
    result = *(arg1 + 0x2e8)
    
    if (result == 1 && *(arg1 + 0x2f0) == 0xe)
        result.b = 1
        return result
    
    int32_t ecx_8 = *(arg1 + 0x418)
    
    if ((ecx_8 == 1 && *(arg1 + 0x420) == 0xe) || (result == 1 && *(arg1 + 0x2f0) == 0xc))
        result.b = 1
        return result
    
    if (ecx_8 != 1)
        goto label_5e39d3
    
    if (*(arg1 + 0x420) == 0xc || edi_2 == 0xffffffff)
        result.b = 1
        return result

result = sub_5cda30(data_b80b08)

if (result != 1)
    if (result == 4 && *(arg1 + 0xa4) == 0x44e && *(arg1 + 0xa0) == edi_2)
        result.b = 0
        return result
else if (*(arg1 + 0xa4) == 0x3eb && *(arg1 + 0xa0) == edi_2)
    result.b = 0
    return result

char* result_1 = nullptr
char* result_2 = nullptr
int32_t ebx_5

if (*(arg1 + 0x1a18) != 0)
    result_1 = *(arg1 + 0xa4)
    ebx_5 = edi_2
    result = result_1
else
    if (*(arg1 + 0x2c) != 0)
        var_18 = "GetCardWhere"
        var_1c = 0x4a88
        ecx_3 = "gfx.type == DOMGFX_CARD"
        goto label_5e3c32
    
    result_2 = *(arg1 + 0xa4)
    
    if (*(arg1 + 0x370) == 1 && *(arg1 + 0x378) == 0x1d)
        *arg2 = 0
        result.b = 0
        return result
    
    result = result_2
    ebx_5 = edi_2

if (result != 0x3eb)
    if (*(arg1 + 0x2c) != 0)
        var_18 = "IsCardKnown"
        var_1c = 0x4a96
        ecx_3 = "gfx.type == DOMGFX_CARD"
        goto label_5e3c32
    
    if (*(arg1 + (edi_2 << 2) + 0xe4) == 0)
        result.b = 0
        return result
    
    if (*(arg1 + 0x1c28) == data_b7fcd0)
        result.b = 1
        return result
    
    if (result_2 != 0)
        if (result_2 s> 0x45f)
            result.b = 1
            return result
        
        if (result_2 != 0x45f)
            if (result_2 == 2)
                result.b = 1
                return result
            
            if (result_2 != 0x3ed)
                result.b = 1
                return result
        else if (*(arg1 + 0xa0) == edi_2)
            result.b = 1
            return result
    
    if (result_1 == 0)
        result.b = 0
        return result
    
    if (result_1 s> 0x45f)
        result.b = 1
        return result
    
    if (result_1 == 0x45f)
        if (*(arg1 + 0xa0) != edi_2)
            result.b = 0
            return result
        
        result.b = 1
        return result
    
    if (result_1 == 2)
        result.b = 1
        return result
    
    if (result_1 != 0x3ed)
        result.b = 1
        return result
    
    result.b = 0
    return result

int32_t eax_1 = sub_5cbb20(arg1)

if (eax_1 != 0)
    result = sub_5754f0(eax_1, eax_1, 0xb80ad8, 0, 0x1000)

if (eax_1 != 0 && result.b != 0)
    result.b = 1
    return result

int32_t ecx_11 = data_b604e0

if (ecx_11 == 0xffffffff)
    ecx_11 = 0

if (sub_5d1210(0, 0x44e, ecx_11, 0, 0) s> 0)
    result.b = 1
    return result

int32_t ecx_12 = data_b604e0

if (ecx_12 == 0xffffffff)
    ecx_12 = 0

if (sub_5d1210(0, 0x44d, ecx_12, 0, 0) != 0)
    result.b = 1
    return result

result = sub_5cba00(*(arg1 + 0x9c))
void* ecx_14 = data_cc8d5c
char* result_3 = result

if (ecx_14 == 0)
    var_18 = "GetClient"
    var_1c = 0x7b
    var_20 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_3 = "gClient"
    goto label_5e3c3c

if (*(ecx_14 + 0x5068) == 0)
    var_18 = "GetActiveConfig"
    var_1c = 0x33b6
    ecx_3 = "c.activeGame.gameType != GAME_NONE"
    goto label_5e3c32

result = sub_5da050(0xbdfb60)

if (result == 2)
    result.b = 1
    return result

if (result == 0)
    result.b = 0
    return result

result = sub_5cde50(result_3)
int32_t ecx_16 = *(arg1 + (ebx_5 << 2) + 0xe4)

if (result != 4)
    if (ecx_16 == 0)
        result.b = 0
        return result
else if (ecx_16 != result)
    result.b = 0
    return result

result.b = 1
return result
