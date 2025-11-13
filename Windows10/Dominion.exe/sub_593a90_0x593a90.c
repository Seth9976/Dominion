// 函数: sub_593a90
// 地址: 0x593a90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = arg3 + arg2 * 0x5a30
int32_t esi = 0
int32_t i = 0
int32_t result

if (*(ecx + 0x1752c) s> 0)
    void* edx = arg3
    void* ebx_1 = ecx + 0x18e78
    
    do
        uint32_t eax = zx.d(*ebx_1)
        
        if (eax u>= 0x320)
            sub_591930()
            edx = arg3
        
        if (*(eax * 0x64 + edx + 0x1a4c) == arg4)
            if (esi s> 0)
                result.b = 0
                return result
            
            esi += 1
        
        i += 1
        ebx_1 += 4
    while (i s< *(ecx + 0x1752c))

result.b = 1
return result
