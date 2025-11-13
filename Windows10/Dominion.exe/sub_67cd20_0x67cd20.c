// 函数: sub_67cd20
// 地址: 0x67cd20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
uint32_t result_3 = sub_64e7a0(ecx)
void* eax = sub_64c870(result_3, nullptr)
char const* const var_5c
int32_t var_58_2
char const* const var_54_2
uint32_t result
char* ecx_6
uint32_t result_2

if (eax != 0)
    result = sub_64e7a0(eax)
    result_2 = result
    
    if (*(result_2 + 0x1718) != result_3)
        var_54_2 = "UI2GetChild"
        var_58_2 = 0x1845
        ecx_6 = "child.parent == &ui"
    label_67ceda:
        var_5c = "C:\x\ax2017\Engine\UI2.cpp"
    label_67cee4:
        sub_63b870(result, &data_801800, ecx_6, var_5c, var_58_2, var_54_2)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
else
    result = sub_64e7a0(sub_64c870(result_3, eax))
    result_2 = result

if (arg3 != 0)
    result_2 = result_3

if (*(result_2 + 0x1710) == 0)
    result = sub_64c020(0x60)
    *(result_2 + 0x1708) = result
    *(result_2 + 0x170c) = 0
    *(result_2 + 0x1710) = 4

if (*(result_2 + 0x170c) == 4)
    return result

int32_t* eax_2 = sub_64cc90(result_2)
result = sub_6dd1e0(eax_2, eax_2, &data_8cae70, data_1724a7c, 0x6e)
uint32_t result_1 = result

if (result == 0)
    var_54_2 = "StateEffectDefLookup"
    var_58_2 = 0x5c9e
    ecx_6 = "Halt"
    goto label_67ceda

int32_t edi_1 = 0

if (*(result + 8) s<= 0)
label_67cecb:
    var_54_2 = "StateEffectDefLookup"
    var_58_2 = 0x5ca9
    ecx_6 = "Halt"
    goto label_67ceda

int32_t ecx_7 = 0
int32_t var_3c_1 = 0

while (_stricmp(*(*result + ecx_7), arg2) != 0)
    result = result_1
    edi_1 += 1
    ecx_7 = var_3c_1 + 0x18
    var_3c_1 = ecx_7
    
    if (edi_1 s>= *(result + 8))
        goto label_67cecb

int32_t edx_1 = edi_1 * 3
int32_t var_28_1 = 0
int32_t var_1c_1 = 0
int32_t ecx_10 = *result_1
int32_t xmm0_1 = *(ecx_10 + (edx_1 << 3) + 0x10)
int32_t var_2c_1 = *(ecx_10 + (edx_1 << 3))
int32_t var_24_1 = *(ecx_10 + (edx_1 << 3) + 8)
result = *(result_2 + 0x170c)

if (result s>= *(result_2 + 0x1710))
    var_54_2 = "XArray<struct UI2StateEffect>::Append"
    var_58_2 = 0x96
    var_5c = "C:\x\ax2017\Engine\xArray.h"
    ecx_6 = "mSize < mSizeReserved"
    goto label_67cee4

uint32_t ecx_11 = result * 3
result = *(result_2 + 0x1708)
*(result + (ecx_11 << 3)) = 0.o
*(result + (ecx_11 << 3) + 0x10) = xmm0_1.q
*(result_2 + 0x170c) += 1
return result
