// 函数: sub_571ee0
// 地址: 0x571ee0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3

if (*(arg3 + 0x19a4) s>= 0x100)
    sub_591930()

int32_t edx = *(arg3 + 0x19a4)
int32_t result = 0

if (edx s> 0)
    void* eax = arg3 + 0x152c8
    
    do
        if (*eax == arg4 && *(eax + 4) == arg2)
            return result
        
        result += 1
        eax += 0x20
    while (result s< edx)

return 0xffffffff
