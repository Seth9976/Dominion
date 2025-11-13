// 函数: sub_5cdee0
// 地址: 0x5cdee0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = sub_5cde50(arg3)
uint32_t eax_1 = sub_5cdc20(eax, *(arg3 + 0x5c), *(arg3 + 0x58), *(arg3 + 0x6c))
int32_t ecx
ecx.b = eax_1.b
*(arg3 + 0x90) = ecx.b

if (eax == 3)
    *(arg3 + 0x90) = 1
    ecx.b = 1
else if (eax == 2)
    *(arg3 + 0x90) = 1
    ecx.b = 1
else if (eax == 4 || eax == 1)
    ecx.b = 0
    *(arg3 + 0x90) = 0

int32_t esi = *(arg3 + 0x5c)
int32_t edx_1 = *(arg3 + 0x58)

if (esi s> 0x3ea)
    if (esi == 0x3eb)
        eax_1, ecx = sub_5cda30(data_b80b08)
        
        if (eax_1 == 1 || eax_1 == 4)
            if (edx_1 != data_b80b44)
                ecx.b = 1
            else
                ecx.b = 0
        else if (eax_1 != 5 || edx_1 != data_b80b44)
            ecx.b = 1
        else
            ecx.b = 0
    else
    label_5cdf75:
        eax_1 = esi - 7
        
        if (eax_1 u<= 0x40)
            int32_t ebx_2 = esi << 4
            
            if (*(ebx_2 + 0xb81ffc) == 0x1128)
                ecx.b = 1
            else if (esi s> 0x48)
                ecx.b = 0
            else
                if (esi s>= 0x48)
                    eax_1 = sub_591930()
                
                if (*(ebx_2 + 0xb81ffc) == 0xd3d)
                    ecx.b = 1
                else
                    if (esi s>= 0x48)
                        eax_1 = sub_591930()
                    
                    if (*(ebx_2 + 0xb81ffc) == 0xd30)
                        ecx.b = 1
                    else
                        if (esi s>= 0x48)
                            eax_1 = sub_591930()
                        
                        if (*(ebx_2 + 0xb81ffc) == 0x1301)
                            ecx.b = 1
                        else
                            ecx.b = 0
else if (esi == 0x3ea)
    ecx.b = 1
else
    eax_1 = esi - 2
    
    if (esi == 2)
        ecx.b = 1
    else
        uint32_t temp1_1 = eax_1
        eax_1 -= 0x3e7
        
        if (temp1_1 != 0x3e7)
            goto label_5cdf75
        
        ecx.b = 0

*(arg3 + 0x91) = ecx.b

if (eax == 3)
    ecx.b = 1
    *(arg3 + 0x91) = 1
else if (eax == 2)
    *(arg3 + 0x91) = 0
    ecx.b = 0
else if (eax == 4)
    *(arg3 + 0x91) = 0
    ecx.b = 0
else if (eax == 1)
    ecx.b = 1
    *(arg3 + 0x91) = 1

int32_t esi_1 = *(arg3 + 0x5c)
char const* const var_24
int32_t var_20
char const* const var_1c_1
char* ecx_2

if (esi_1 != 0x44d)
label_5ce08e:
    int32_t edx_2
    edx_2.b = *(arg3 + 0x90) != 0
    int32_t eax_3 = 0
    
    if (ecx.b != 0)
        eax_3 = 2
        
        if (esi_1 == 0x3ea)
            eax_3 = 3
    
    sub_5c90f0(eax_3, edx_2, *(arg3 + 0x1c28), eax_3)
    int32_t esi_2 = *(arg3 + 0x70)
    void* result = *(arg3 + 0x5c) - 6
    
    if (result u<= 0x42)
        result = *(arg3 + 0x30)
        
        if (result != 0x70d && result != 0x718 && result != 0xd3d && result != 0xd30
                && result != 0x1128 && result != 0x1301)
            return result
    
    int32_t edi_1 = 0
    
    if (esi_2 == 0)
        return result
    
    uint32_t ebx
    ebx.b = arg4
    
    while (true)
        eax_1 = zx.d(esi_2.w)
        
        if (eax_1 u>= data_b809e4)
            break
        
        void* ecx_5 = eax_1 * 0x1c30 + data_b809e0
        
        if (*(ecx_5 + 0x1c28) != esi_2)
            break
        
        int32_t eax_5 = *(ecx_5 + 0x154)
        *(ecx_5 + 0xb0) = eax_5
        *(ecx_5 + 0xb8) = eax_5
        
        if (*(ecx_5 + 0x150) == 0)
            result = nullptr
        else
            result = *(ecx_5 + 0x144)
        
        esi_2 = *(ecx_5 + 0x1b94)
        *(ecx_5 + 0xb4) = edi_1
        edi_1 += 1
        *(ecx_5 + 0xc0) = result
        *(ecx_5 + 0xbc) = result
        
        if (ecx_5 != arg2)
            result = sub_5cca10(ecx_5, ebx.b)
        
        if (esi_2 == 0)
            return result
    
    var_1c_1 = "DataArray<struct DomGfx>::DataArrayGet"
    var_20 = 0x6d
    var_24 = "C:\x\ax2017\Engine\DataArray.h"
    ecx_2 = "DataArrayTryToGet(id) != NULL"
else if (*(arg3 + 0x90) != 0)
    if (ecx.b != 0)
        goto label_5ce08e
    
    var_1c_1 = "PileAdjustCards"
    var_20 = 0xf46
    var_24 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_2 = "gfxPile.pile.isSorted"
else
    var_1c_1 = "PileAdjustCards"
    var_20 = 0xf45
    var_24 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_2 = "gfxPile.pile.isStacked"

sub_63b870(eax_1, &data_801800, ecx_2, var_24, var_20, var_1c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
