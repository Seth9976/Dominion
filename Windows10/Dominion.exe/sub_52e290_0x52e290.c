// 函数: sub_52e290
// 地址: 0x52e290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_14 = ecx
int32_t var_18 = 0
int32_t eax
uint32_t result
int32_t ecx_1
result, ecx_1 = sub_568960(eax, 0, 0x3eb, 0)

if (result == 0)
    int32_t var_14_1 = ecx_1
    uint32_t result_1 = result
    result = sub_568960(result, 0, 0x3ec, result)
    
    if (result == 0)
        sub_56e9c0(result + 1)
        int32_t i_1 = 3
        int32_t i
        
        do
            result = sub_563590(0x106)
            
            if (result != 0)
                void* eax_1 = sub_573400()
                result = sub_583720(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), result, 0x476, nullptr, 
                    0x476, 0, 0, 4)
            
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
