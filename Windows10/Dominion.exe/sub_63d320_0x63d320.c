// 函数: sub_63d320
// 地址: 0x63d320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t count = arg1[4]

if (0x7fffffff - count u< arg2)
    sub_5b0860()
    noreturn

int32_t eax_1 = count + arg2
int32_t esi_1 = arg1[5]
int32_t edi_1 = eax_1 | 0xf
uint32_t eax_2
void* const esi_3

if (edi_1 u<= 0x7fffffff)
    uint32_t eax_5 = esi_1 u>> 1
    
    if (esi_1 u> 0x7fffffff - eax_5)
        edi_1 = 0x7fffffff
        goto label_63d361
    
    int32_t eax_6 = eax_5 + esi_1
    
    if (edi_1 u< eax_6)
        edi_1 = eax_6
    
    if (edi_1 == 0xffffffff)
        esi_3 = nullptr
        goto label_63d3c9
    
    if (edi_1 + 1 u< 0x1000)
        esi_3 = operator new(edi_1 + 1)
        goto label_63d3c9
    
    eax_2 = edi_1 + 0x24
    
    if (eax_2 u> edi_1 + 1)
        goto label_63d365
    
    sub_4f7ee0()
    noreturn

edi_1 = 0x7fffffff
label_63d361:
eax_2 = 0x80000023
label_63d365:
int32_t eax_3 = operator new(eax_2)

if (eax_3 != 0)
    esi_3 = (eax_3 + 0x23) & 0xffffffe0
    *(esi_3 - 4) = eax_3
label_63d3c9:
    arg1[4] = eax_1
    arg1[5] = edi_1
    void* edi_2 = esi_3 + count
    void* eax_10 = arg4 + edi_2
    
    if (esi_1 u<= 0xf)
        memcpy(esi_3, arg1, count)
        memcpy(edi_2, arg3, arg4)
        *eax_10 = 0
        *arg1 = esi_3
        return arg1
    
    void* edi_3 = *arg1
    memcpy(esi_3, edi_3, count)
    memcpy(edi_2, arg3, arg4)
    int32_t ecx_3 = esi_1 + 1
    *eax_10 = 0
    
    if (ecx_3 u< 0x1000)
        goto label_63d422
    
    void* edx = *(edi_3 - 4)
    ecx_3 += 0x23
    
    if (edi_3 - edx - 4 u<= 0x1f)
        edi_3 = edx
    label_63d422:
        int32_t var_1c_4 = ecx_3
        operator new(edi_3)
        *arg1 = esi_3
        return arg1

_invalid_parameter_noinfo_noreturn()
noreturn
