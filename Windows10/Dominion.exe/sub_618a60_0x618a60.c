// 函数: sub_618a60
// 地址: 0x618a60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_1 = sub_4b9680(&sub_4b9480()[2], arg1)
int32_t eax_2 = *(eax_1 + 0x14)

if (eax_2 == 0x3e8)
    void* result = data_cc8dc8
    int32_t ecx_1 = 0
    int32_t edx_1 = *(result + 0x1e1a0)
    
    if (edx_1 s> 0)
        do
            if (*(result + 0x42b0) == *(eax_1 + 0x18))
                return result
            
            ecx_1 += 1
            result += 0x7868
        while (ecx_1 s< edx_1)
else if (eax_2 == 1)
    void* eax_3 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    
    if (*(eax_1 + 0x18) == *(eax_3 + 0x4250))
        return sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) __tailcall

return nullptr
