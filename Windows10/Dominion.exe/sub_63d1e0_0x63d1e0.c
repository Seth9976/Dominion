// 函数: sub_63d1e0
// 地址: 0x63d1e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t count = arg1[4]
uint32_t count_1 = count

if (0x7fffffff - count u< 8)
    sub_5b0860()
    noreturn

int32_t esi = arg1[5]
int32_t edi_1 = (count + 8) | 0xf
uint32_t eax_1
int64_t* esi_2

if (edi_1 u<= 0x7fffffff)
    uint32_t eax_4 = esi u>> 1
    
    if (esi u> 0x7fffffff - eax_4)
        edi_1 = 0x7fffffff
        goto label_63d21a
    
    int32_t eax_5 = eax_4 + esi
    
    if (edi_1 u< eax_5)
        edi_1 = eax_5
    
    if (edi_1 != 0xffffffff)
        if (edi_1 + 1 u< 0x1000)
            esi_2 = operator new(edi_1 + 1)
            goto label_63d27c
        
        eax_1 = edi_1 + 0x24
        
        if (eax_1 u> edi_1 + 1)
            goto label_63d21e
        
        sub_4f7ee0()
        noreturn
    
    esi_2 = nullptr
label_63d286:
    arg1[4] = count + 8
    arg1[5] = edi_1
    
    if (esi u<= 0xf)
        memcpy(esi_2, arg1, count)
        *(esi_2 + count_1) = 0
        *(esi_2 + count_1 + 8) = 0
        *arg1 = esi_2
        return arg1
    
    void* edi_2 = *arg1
    memcpy(esi_2, edi_2, count)
    int32_t ecx_3 = esi + 1
    *(esi_2 + count_1) = 0
    *(esi_2 + count_1 + 8) = 0
    
    if (ecx_3 u< 0x1000)
        goto label_63d2c9
    
    void* edx = *(edi_2 - 4)
    ecx_3 += 0x23
    
    if (edi_2 - edx - 4 u<= 0x1f)
        edi_2 = edx
    label_63d2c9:
        int32_t var_1c_4 = ecx_3
        operator new(edi_2)
        *arg1 = esi_2
        return arg1
else
    edi_1 = 0x7fffffff
label_63d21a:
    eax_1 = 0x80000023
label_63d21e:
    int32_t eax_2 = operator new(eax_1)
    
    if (eax_2 != 0)
        esi_2 = (eax_2 + 0x23) & 0xffffffe0
        *(esi_2 - 4) = eax_2
    label_63d27c:
        count = count_1
        goto label_63d286
_invalid_parameter_noinfo_noreturn()
noreturn
