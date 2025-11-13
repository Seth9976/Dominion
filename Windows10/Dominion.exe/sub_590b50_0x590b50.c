// 函数: sub_590b50
// 地址: 0x590b50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 1
int32_t result = 0

if (*(arg3 + 0x1520) s> 1)
    do
        uint32_t ebx_1 = zx.d(i.w)
        
        if (ebx_1 u>= 0x320)
            sub_591930()
        
        void* eax_1 = ebx_1 * 0x64 + arg3
        void* eax_2 = sub_571b30(*(eax_1 + 0x1a4c), *(arg3 + 0xd48))
        
        if (((*(eax_2 + 0x98) & 0x7f000400) | (*(eax_2 + 0x9c) & 0x940)) == 0
                && *(eax_1 + 0x1a70) == arg2)
            *(arg4 + (result << 2)) = i
            result += 1
        
        i += 1
    while (i s< *(arg3 + 0x1520))

return result
