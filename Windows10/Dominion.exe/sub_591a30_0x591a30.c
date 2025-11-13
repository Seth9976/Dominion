// 函数: sub_591a30
// 地址: 0x591a30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
int32_t esi = *(arg3 + 0x1520)
int32_t edi = 1
void* var_8 = arg3

if (esi s> 1)
    do
        uint32_t eax = zx.d(edi.w)
        
        if (eax u>= 0x320)
            sub_591930()
            arg3 = var_8
            esi = *(arg3 + 0x1520)
        
        int32_t eax_1 = eax * 0x64
        
        if (*(eax_1 + arg3 + 0x1a70) == arg2 && *(eax_1 + arg3 + 0x1a4c) == arg4)
            result += 1
        
        edi += 1
    while (edi s< esi)

return result
