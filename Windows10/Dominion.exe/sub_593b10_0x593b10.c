// 函数: sub_593b10
// 地址: 0x593b10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0
void* ecx = arg3 + arg2 * 0x5a30
void* var_c = ecx
int32_t result

if (*(ecx + 0x1752c) s> 0)
    void* edx = arg3
    void* edi_1 = ecx + 0x18e78
    
    do
        uint32_t ebx_1 = zx.d(*edi_1)
        
        if (ebx_1 u>= 0x320)
            sub_591930()
            ecx = var_c
            edx = arg3
        
        if (*(ebx_1 * 0x64 + edx + 0x1a4c) == arg4)
            result.b = 1
            return result
        
        i += 1
        edi_1 += 4
    while (i s< *(ecx + 0x1752c))

result.b = 0
return result
