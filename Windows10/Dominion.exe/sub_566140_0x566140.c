// 函数: sub_566140
// 地址: 0x566140
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = arg3
int32_t i = 0
void* result_1 = result

if (*(result + 0xc80) s> 0)
    do
        int32_t ebx_1 = *(result + (i << 2))
        void* eax = sub_573400()
        int32_t eax_1 = *(eax + 4)
        uint32_t eax_2 = zx.d(ebx_1.w)
        
        if (eax_2 u>= 0x320)
            sub_591930()
        
        sub_582d10(eax_1, *(eax_2 * 0x64 + eax_1 + 0x1a70), *(eax + 4), ebx_1, arg2, arg7, arg4, 
            arg5, *(eax + 0x28), *(eax + 0x2c), *(eax + 0x30), 0, arg6, nullptr, 0, arg8, arg9)
        result = result_1
        i += 1
    while (i s< *(result + 0xc80))

return result
