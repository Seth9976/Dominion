// 函数: sub_5695c0
// 地址: 0x5695c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t esi = zx.d(arg3.w)

if (arg2 != 0x3ea)
    void* eax_3 = sub_573400()
    int32_t ecx_1 = *(eax_3 + 4)
    
    if (esi u>= 0x320)
        sub_591930()
    
    uint32_t eax_4 = sub_582d10(eax_3, *(esi * 0x64 + ecx_1 + 0x1a70), *(eax_3 + 4), arg3, arg2, 
        arg4, 0x3eb, 2, *(eax_3 + 0x28), *(eax_3 + 0x2c), *(eax_3 + 0x30), 0, 0, nullptr, 0, 
        nullptr, nullptr)
    return eax_4

void* eax = sub_573400()
int32_t eax_1 = *(eax + 4)

if (esi u>= 0x320)
    sub_591930()

uint32_t eax_2 = sub_582d10(eax_1, *(esi * 0x64 + eax_1 + 0x1a70), *(eax + 4), arg3, 0x3ea, arg4, 
    0x3eb, 4, *(eax + 0x28), *(eax + 0x2c), *(eax + 0x30), 0, 0, nullptr, 0, nullptr, nullptr)
return eax_2
