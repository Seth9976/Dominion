// 函数: sub_4bb0c0
// 地址: 0x4bb0c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = nullptr

while (true)
    if (result != 0)
        result += 0xc
    else
        result = *arg1
    
    int32_t edx_2 = *arg1 + arg1[1] * 0xc
    
    if (result u>= edx_2)
        break
    
    while (true)
        int32_t ecx_2 = *(result + 8)
        
        if ((ecx_2 & 0xffff0000) != 0)
            int32_t edx_3 = arg1[3]
            arg1[3] = zx.d(ecx_2.w)
            *(result + 8) = edx_3
            arg1[4] -= 1
            break
        
        result += 0xc
        
        if (result u>= edx_2)
            arg1[3] = 0
            arg1[1] = 0
            return result

arg1[3] = 0
arg1[1] = 0
return result
