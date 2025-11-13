// 函数: sub_7069b0
// 地址: 0x7069b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = nullptr

while (true)
    if (result != 0)
        result += 0x14c
    else
        result = *arg1
    
    int32_t edx_2 = arg1[1] * 0x14c + *arg1
    
    if (result u>= edx_2)
        break
    
    while (true)
        int32_t ecx = *(result + 0x148)
        
        if ((ecx & 0xffff0000) != 0)
            int32_t edx_3 = arg1[3]
            arg1[3] = zx.d(ecx.w)
            *(result + 0x148) = edx_3
            arg1[4] -= 1
            break
        
        result += 0x14c
        
        if (result u>= edx_2)
            arg1[3] = 0
            arg1[1] = 0
            return result

arg1[3] = 0
arg1[1] = 0
return result
