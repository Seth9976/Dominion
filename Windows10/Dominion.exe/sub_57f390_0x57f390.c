// 函数: sub_57f390
// 地址: 0x57f390
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1 = arg4 & 0x30

if (eax_1 != 0)
    if (eax_1 == 0x30)
        return 1
    
    void* eax_4
    int32_t edx
    eax_4, edx = sub_5769e0(eax_1, arg2, arg3, arg4)
    void* edi_1 = eax_4
    
    if (*edi_1 != 6)
        eax_4, edx = sub_591930()
    
    if ((*(edi_1 + 0xac) & 0x100) != 0)
        return 5
    
    if (*(edi_1 + 4) != 0)
        int32_t ecx_2
        ecx_2.b = sub_5915b0(eax_4, edx, arg3, arg4) == 0x801
        return (ecx_2 << 1) + 1
    
    uint32_t eax_6
    int32_t edx_1
    eax_6, edx_1 = sub_5915b0(eax_4, edx, arg3, arg4)
    
    for (void* i = nullptr; i u< 0x20; i += 4)
        if (eax_6 == *(i + 0x820ecc))
            return 0
    
    uint32_t eax_7 = sub_5915b0(eax_6, edx_1, arg3, arg4)
    bool cond:4_1
    
    if (eax_7 s> 0x806)
        cond:4_1 = eax_7 == 0x1115
    label_57f459:
        
        if (not(cond:4_1))
            return 4
    else if (eax_7 != 0x806 && eax_7 != 0x418)
        cond:4_1 = eax_7 == 0x507
        goto label_57f459
else
    uint32_t eax_2 = sub_5915b0(eax_1, arg2, arg3, arg4)
    bool cond:1_1
    
    if (eax_2 s> 0x806)
        cond:1_1 = eax_2 == 0x1115
    label_57f3c8:
        
        if (not(cond:1_1))
            return 1
    else if (eax_2 != 0x806 && eax_2 != 0x418)
        cond:1_1 = eax_2 == 0x507
        goto label_57f3c8

return 2
