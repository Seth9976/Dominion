// 函数: sub_6ae280
// 地址: 0x6ae280
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(arg1 + 0x38) != 0)
    void* eax = nullptr
    int32_t edx_1
    
    while (true)
        if (eax != 0)
            eax += 0x24c
        else
            eax = *(arg1 + 0x38)
        
        edx_1 = *(arg1 + 0x38)
        int32_t ecx_1 = *(arg1 + 0x3c) * 0x24c + edx_1
        
        if (eax u>= ecx_1)
            break
        
        while ((*(eax + 0x248) & 0xffff0000) == 0)
            eax += 0x24c
            
            if (eax u>= ecx_1)
                goto label_6ae2c9
        
        int32_t edx_2 = *(arg1 + 0x44)
        *(arg1 + 0x44) = zx.d(*(eax + 0x248))
        *(eax + 0x248) = edx_2
        *(arg1 + 0x48) -= 1
    
label_6ae2c9:
    *(arg1 + 0x3c) = 0
    *(arg1 + 0x44) = 0
    
    if (edx_1 != 0)
        _aligned_free(edx_1)
    
    __builtin_memset(arg1 + 0x38, 0, 0x14)
    *(arg1 + 0x50) = 0

int32_t* ecx_2 = *(arg1 + 0xc)

if (ecx_2 != 0)
    (*(*ecx_2 + 8))(ecx_2)

int32_t* ecx_3 = *(arg1 + 4)

if (ecx_3 != 0)
    (*(*ecx_3 + 8))(ecx_3)

int32_t* ecx_4 = data_147b078

if (ecx_4 != 0)
    sub_64c080(ecx_4, 0x64)
    data_147b078 = 0
