// 函数: sub_4fbc50
// 地址: 0x4fbc50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1908)
void var_190c
uint32_t result = sub_562690(arg1, &var_190c, 0, 0)
void var_c88
__builtin_memcpy(&var_c88, result, 0xc84)
int32_t i_1 = arg1

if (i_1 s> 0)
    int32_t i
    
    do
        result = sub_563590(0x105)
        
        if (result != 0)
            void* eax = sub_573400()
            result =
                sub_583720(eax, *(eax + 0xc), *(eax + 4), result, 0x476, nullptr, 0x476, 0, 0, 4)
        
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
