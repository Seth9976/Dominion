// 函数: sub_67aca0
// 地址: 0x67aca0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = data_c23bec

if (edx != 0)
    uint32_t eax_1 = zx.d(edx.w)
    
    if (eax_1 u< data_c23bac)
        void* eax_3 = eax_1 * 0x18d0 + data_c23ba8
        
        if (*(eax_3 + 0x18c8) == edx && eax_3 != 0)
            *(eax_3 + 0x13c1) = 0
    
    data_c23bec = 0

int32_t result = *(arg1 + 0x18c8)
*(arg1 + 0x13c1) = 1
data_c23bec = result
return result
