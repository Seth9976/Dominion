// 函数: sub_548b50
// 地址: 0x548b50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint8_t ebx_1 = (*(sub_573400() + 0x5c) u>> 0x1f).b
void* eax_1 = sub_573400()

if (*(eax_1 + 0x40) == 0)
    sub_591930()

int32_t esi_1 = *(eax_1 + 0x40)
int32_t ecx = 0
void* result = *(sub_573400() + 4)
int32_t edx = *(result + 0x19b0)

if (edx s> 0)
    result += 0x38fe8
    
    do
        if (*result == esi_1)
            if (ebx_1 == 0)
                sub_561af0(result, 1, 1, 0)
                return sub_56e9c0(1) __tailcall
            
            int32_t var_c = ecx
            return sub_561e00(result, 1, 1, 0)
        
        ecx += 1
        result += 4
    while (ecx s< edx)

return result
