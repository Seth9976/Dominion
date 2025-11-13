// 函数: sub_58dc60
// 地址: 0x58dc60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg3
int32_t result = arg3
int32_t result_1 = result

if ((*(arg2 + 0x16f4) & 2) != 0)
    int32_t i = 0
    
    if (*arg5 s> 0)
        do
            if ((*(sub_571b30(*(arg4 + (i << 2)), result) + 0x98) & 0x20) != 0)
                *arg5 -= 1
                *(arg4 + (i << 2)) = *(arg4 + (*arg5 << 2))
                i -= 1
            
            result = result_1
            i += 1
        while (i s< *arg5)

return result
