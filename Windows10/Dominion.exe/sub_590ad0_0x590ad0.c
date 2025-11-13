// 函数: sub_590ad0
// 地址: 0x590ad0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edx = arg3
int32_t i = 1
void* var_8 = edx
int32_t result = 0

if (*(edx + 0x1520) s> 1)
    do
        uint32_t ebx_1 = zx.d(i.w)
        
        if (ebx_1 u>= 0x320)
            sub_591930()
            edx = var_8
        
        void* ecx_1 = ebx_1 * 0x64 + edx
        
        if (*(ecx_1 + 0x1a78) == *(ecx_1 + 0x1a70))
            if (ebx_1 u>= 0x320)
                sub_591930()
                edx = var_8
            
            if (*(ecx_1 + 0x1a70) == arg2)
                *(arg4 + (result << 2)) = i
                result += 1
        
        i += 1
    while (i s< *(edx + 0x1520))

return result
