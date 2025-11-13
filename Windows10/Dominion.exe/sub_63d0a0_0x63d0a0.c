// 函数: sub_63d0a0
// 地址: 0x63d0a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t count = arg1[4]
uint32_t count_1 = count

if (0x7fffffff - count u< 1)
    sub_5b0860()
    noreturn

int32_t esi = arg1[5]
int32_t edi_1 = (count + 1) | 0xf
uint32_t eax_1
char* esi_2

if (edi_1 u<= 0x7fffffff)
    uint32_t eax_4 = esi u>> 1
    
    if (esi u> 0x7fffffff - eax_4)
        edi_1 = 0x7fffffff
        goto label_63d0da
    
    int32_t eax_5 = eax_4 + esi
    
    if (edi_1 u< eax_5)
        edi_1 = eax_5
    
    if (edi_1 != 0xffffffff)
        if (edi_1 + 1 u< 0x1000)
            esi_2 = operator new(edi_1 + 1)
            goto label_63d13c
        
        eax_1 = edi_1 + 0x24
        
        if (eax_1 u> edi_1 + 1)
            goto label_63d0de
        
        sub_4f7ee0()
        noreturn
    
    esi_2 = nullptr
label_63d146:
    arg1[4] = count + 1
    arg1[5] = edi_1
    
    if (esi u<= 0xf)
        memcpy(esi_2, arg1, count)
        esi_2[count_1] = arg2
        esi_2[count_1 + 1] = 0
        *arg1 = esi_2
        return arg1
    
    void* edi_2 = *arg1
    memcpy(esi_2, edi_2, count)
    esi_2[count_1] = arg2
    esi_2[count_1 + 1] = 0
    int32_t ecx_2 = esi + 1
    
    if (ecx_2 u< 0x1000)
        goto label_63d187
    
    void* edx_3 = *(edi_2 - 4)
    ecx_2 += 0x23
    
    if (edi_2 - edx_3 - 4 u<= 0x1f)
        edi_2 = edx_3
    label_63d187:
        int32_t var_1c_4 = ecx_2
        operator new(edi_2)
        *arg1 = esi_2
        return arg1
else
    edi_1 = 0x7fffffff
label_63d0da:
    eax_1 = 0x80000023
label_63d0de:
    int32_t eax_2 = operator new(eax_1)
    
    if (eax_2 != 0)
        esi_2 = (eax_2 + 0x23) & 0xffffffe0
        *(esi_2 - 4) = eax_2
    label_63d13c:
        count = count_1
        goto label_63d146
_invalid_parameter_noinfo_noreturn()
noreturn
