// 函数: sub_4bc100
// 地址: 0x4bc100
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t esi = *(arg1 + 0x11a0)
int32_t edx = 0

if (esi s> 0)
    void* ecx_2 = arg1 + 0x58
    
    do
        if (*(ecx_2 - 4) == 1 && *ecx_2 == *(eax + 0x4250))
            return ecx_2 - 0x18
        
        edx += 1
        ecx_2 += 0x22c
    while (edx s< esi)

return 0
