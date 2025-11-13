// 函数: sub_540bb0
// 地址: 0x540bb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
int16_t ebx = (*arg2).w
int32_t* eax_1 = *(arg1 + 4)
uint32_t esi = zx.d(ebx)
int32_t eax_3 = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

uint32_t result

if (*(esi * 0x64 + eax_3 + 0x1a4c) != eax_1)
    int32_t eax_5 = *(arg1 + 8) + 2
    
    if (sub_568470(eax_5, eax_3, ebx, eax_5).b != 0)
        result.b = 1
        return result

result.b = 0
return result
