// 函数: sub_576dd0
// 地址: 0x576dd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_81c
uint32_t eax_1
int32_t edx
eax_1, edx = sub_576170(arg3, arg2, arg3, &var_81c, arg4, arg5)
int32_t result = 0
int32_t var_414[0x100]
__builtin_memcpy(&var_414, eax_1, 0x404)
int32_t esi_1 = 0
int32_t var_14

if (var_14 s> 0)
    do
        uint32_t eax_2 = var_414[esi_1]
        int32_t eax_5
        
        if ((eax_2.b & 0x30) != 0)
            void* eax_4
            eax_4, edx = sub_5769e0(eax_2, edx, arg3, eax_2)
            eax_5 = *(eax_4 + 0x9c)
        else
            void* eax_3
            eax_3, edx = sub_576940(eax_2, edx, arg3, eax_2)
            
            if (*(eax_3 + 0x4c) != 3)
                edx = sub_591930()
            
            eax_5 = *(eax_3 + 0x54)
        
        esi_1 += 1
        result += eax_5
    while (esi_1 s< var_14)

return result
