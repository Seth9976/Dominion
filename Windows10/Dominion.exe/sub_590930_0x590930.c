// 函数: sub_590930
// 地址: 0x590930
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = arg3
int32_t var_c = arg2
int32_t i = 0
void* var_8 = eax
int32_t result = 0

if (*(eax + 0x1520) s> 0)
    void* edi_1 = eax + 0x1a68
    
    do
        if (*(edi_1 - 0x18) == 0x474 && *edi_1 == arg2)
            if (result s>= 0x320)
                sub_591930()
                eax = var_8
                arg2 = var_c
            
            *(arg4 + (result << 2)) = i
            result += 1
        
        i += 1
        edi_1 += 0x64
    while (i s< *(eax + 0x1520))

return result
