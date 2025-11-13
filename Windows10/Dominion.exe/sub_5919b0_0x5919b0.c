// 函数: sub_5919b0
// 地址: 0x5919b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 1
int32_t result = 0

if (*(arg3 + 0x1520) s> 1)
    do
        uint32_t edi_1 = zx.d(i.w)
        
        if (edi_1 u>= 0x320)
            sub_591930()
        
        int32_t eax = edi_1 * 0x64
        
        if (*(eax + arg3 + 0x1a70) == arg2)
            int32_t edx = *(eax + arg3 + 0x1a4c)
            
            if (edx != 0 && sub_5754f0(eax, edx, arg3, arg4, arg5) != 0)
                result += 1
        
        i += 1
    while (i s< *(arg3 + 0x1520))

return result
