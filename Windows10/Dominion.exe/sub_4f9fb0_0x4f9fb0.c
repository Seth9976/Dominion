// 函数: sub_4f9fb0
// 地址: 0x4f9fb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_4 = sub_573400()
int32_t result

if (*(*(eax_4 + 0xc) * 0x5a30 + *(eax_4 + 4) + 0x174f4) s< 2)
    void* eax = sub_573400()
    int32_t esi_1 = *(*(eax + 0xc) * 0x5a30 + *(eax + 4) + 0x174f4)
    void* eax_2 = sub_573400()
    
    if (sub_583fc0(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 0xa00) + esi_1 s>= 2)
        result.b = 1
        return result

result.b = 0
return result
