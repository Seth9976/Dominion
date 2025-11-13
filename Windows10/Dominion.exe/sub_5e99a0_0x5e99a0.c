// 函数: sub_5e99a0
// 地址: 0x5e99a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg2
int32_t i = 0
int32_t edi = 0xffffffff

if (*(arg1 + 0x11a8) s> 0)
    void* esi_1 = arg1 + 0x5c
    
    do
        void* eax_1
        
        if (*esi_1 == 1)
            eax_1 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
            arg2 = var_8
        
        int32_t eax_2
        
        if (*esi_1 != 1 || *(esi_1 + 4) != *(eax_1 + 0x4250))
            eax_2 = *esi_1
        
        if ((*esi_1 == 1 && *(esi_1 + 4) == *(eax_1 + 0x4250)) || eax_2 == 0x3e8 || eax_2 == 0x3e9)
            edi = *(esi_1 + 8)
            
            if (edi == arg2)
                return arg2
        
        i += 1
        esi_1 += 0x22c
    while (i s< *(arg1 + 0x11a8))

if (edi != 0xffffffff)
    return edi

return 0
