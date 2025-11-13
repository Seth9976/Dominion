// 函数: sub_56f910
// 地址: 0x56f910
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
void* ebx = *(eax + 4)

if (sub_591540(eax) == *(eax + 0xc))
    uint32_t esi_1 = zx.d(arg1)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    int32_t eax_3 = esi_1 * 0x64
    
    if (sub_5754f0(eax_3, *(eax_3 + ebx + 0x1a4c), ebx, 4, 0).b != 0)
        int32_t eax_5
        eax_5.b = *(*(eax + 0x64) + 0x20) == arg2 - 1
        return eax_5

uint32_t eax_1
eax_1.b = 0
return eax_1
