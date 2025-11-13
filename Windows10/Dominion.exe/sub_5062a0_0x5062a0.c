// 函数: sub_5062a0
// 地址: 0x5062a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
int16_t esi = (*arg2).w
void* var_1c = arg1
var_1c = 5
uint32_t result
int32_t edx

if (sub_568470(&var_1c, edx, esi, var_1c).b != 0)
    int32_t edi_1 = *(arg1 + 4)
    uint32_t esi_1 = zx.d(esi)
    result = *(sub_573400() + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t ebx_1 = esi_1 * 0x64
    
    if (*(ebx_1 + result + 0x1a4c) != edi_1)
        void* eax_3 = sub_573400()
        void* edi_2 = *(eax_3 + 4)
        
        if (esi_1 u>= 0x320)
            eax_3 = sub_591930()
        
        int32_t edx_1 = *(ebx_1 + edi_2 + 0x1a4c)
        var_1c = nullptr
        
        if (sub_5754f0(eax_3, edx_1, edi_2, 4, var_1c).b != 0)
            result.b = 1
            return result

result.b = 0
return result
