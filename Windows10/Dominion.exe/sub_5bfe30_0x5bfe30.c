// 函数: sub_5bfe30
// 地址: 0x5bfe30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg1[4]

if (0x7fffffff - esi u< arg2)
    sub_5b0860()
    noreturn

int32_t eax_1 = esi + arg2
int32_t esi_1 = arg1[5]
int32_t edi_1 = eax_1 | 0xf
uint32_t eax_2
void* const esi_3

if (edi_1 u<= 0x7fffffff)
    uint32_t eax_5 = esi_1 u>> 1
    
    if (esi_1 u> 0x7fffffff - eax_5)
        edi_1 = 0x7fffffff
        goto label_5bfe71
    
    int32_t eax_6 = eax_5 + esi_1
    
    if (edi_1 u< eax_6)
        edi_1 = eax_6
    
    if (edi_1 == 0xffffffff)
        esi_3 = nullptr
        goto label_5bfed9
    
    if (edi_1 + 1 u< 0x1000)
        esi_3 = operator new(edi_1 + 1)
        goto label_5bfed9
    
    eax_2 = edi_1 + 0x24
    
    if (eax_2 u> edi_1 + 1)
        goto label_5bfe75
    
    sub_4f7ee0()
    noreturn

edi_1 = 0x7fffffff
label_5bfe71:
eax_2 = 0x80000023
label_5bfe75:
int32_t eax_3 = operator new(eax_2)

if (eax_3 != 0)
    esi_3 = (eax_3 + 0x23) & 0xffffffe0
    *(esi_3 - 4) = eax_3
label_5bfed9:
    arg1[5] = edi_1
    uint32_t count = arg3
    arg1[4] = eax_1
    arg3 += esi_3
    
    if (esi_1 u<= 0xf)
        memcpy(esi_3, "card_encode", count)
        memcpy(arg3, arg1, esi + 1)
        *arg1 = esi_3
        return arg1
    
    void* edi_4 = *arg1
    memcpy(esi_3, "card_encode", count)
    memcpy(arg3, edi_4, esi + 1)
    int32_t ecx_4 = esi_1 + 1
    
    if (ecx_4 u< 0x1000)
        goto label_5bff2c
    
    void* edx_1 = *(edi_4 - 4)
    ecx_4 += 0x23
    
    if (edi_4 - edx_1 - 4 u<= 0x1f)
        edi_4 = edx_1
    label_5bff2c:
        int32_t var_1c_3 = ecx_4
        operator new(edi_4)
        *arg1 = esi_3
        return arg1

_invalid_parameter_noinfo_noreturn()
noreturn
