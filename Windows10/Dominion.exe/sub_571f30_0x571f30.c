// 函数: sub_571f30
// 地址: 0x571f30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(arg3 + 0x19a4) s>= 0x100)
    sub_591930()

int32_t edi = *(arg3 + 0x19a4)
int32_t result = 0

if (edi s> 0)
    int32_t ecx = arg4
    void* eax = arg3 + 0x152d0
    
    do
        if (*(eax - 8) == ecx && *(eax - 4) == arg2)
            if (*eax == arg5 && *(eax + 4) == arg6 && (*(eax + 0x10) | *(eax + 0x14)) == 0)
                return result
            
            ecx = arg4
        
        result += 1
        eax += 0x20
    while (result s< edi)

return 0xffffffff
