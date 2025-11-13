// 函数: sub_52e910
// 地址: 0x52e910
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result

if (*(*(sub_573400() + 4) + 0x19cc) == *(sub_573400() + 0xc))
    void* eax_2 = sub_573400()
    int32_t esi_1 = *(*(eax_2 + 0xc) * 0x5a30 + *(eax_2 + 4) + 0x174f4)
    result = sub_573400()
    
    if (esi_1 s< 2 && sub_583fc0(result, *(result + 0xc), *(result + 4), 0xa00) + esi_1 s>= 2
            && sub_56d6b0() s> 0)
        result.b = 1
        return result

result.b = 0
return result
