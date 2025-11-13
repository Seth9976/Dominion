// 函数: sub_570c80
// 地址: 0x570c80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = 0
int32_t* edx = *arg2
int32_t ecx = *(arg1 + 4)
int32_t result = **(arg1 + 8)
int32_t var_10 = ecx

if (result s> 0)
    do
        int32_t edi_1 = *(ecx + (esi << 2))
        int32_t ebx_1 = *(sub_573400() + 4)
        
        if (edx.w u>= 0x320)
            sub_591930()
        
        if (*(zx.d(edx.w) * 0x64 + ebx_1 + 0x1a4c) == edi_1)
            result.b = 1
            return result
        
        ecx = var_10
        esi += 1
    while (esi s< result)

result.b = 0
return result
