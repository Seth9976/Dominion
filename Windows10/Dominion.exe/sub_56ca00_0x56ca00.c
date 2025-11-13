// 函数: sub_56ca00
// 地址: 0x56ca00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = 0
void* edx = arg1
int32_t var_8 = 0
int32_t edi = 0
void* var_14 = edx
int32_t ecx = *(edx + 0xc80)

if (ecx s<= 0)
    return eax

do
    uint32_t esi_2 = zx.d((*(edx + (eax << 2))).w)
    int32_t eax_2 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    int32_t i = *(esi_2 * 0x64 + eax_2 + 0x1a4c)
    int32_t eax_4 = 0
    
    if (edi s<= 0)
    label_56ca5f:
        *(arg2 + (edi << 2)) = i
        edi += 1
    else
        while (*(arg2 + (eax_4 << 2)) != i)
            eax_4 += 1
            
            if (eax_4 s>= edi)
                goto label_56ca5f
    
    edx = var_14
    eax = var_8 + 1
    var_8 = eax
while (eax s< ecx)

return edi
