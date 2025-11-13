// 函数: sub_5638e0
// 地址: 0x5638e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
uint32_t esi_1 = zx.d(arg1.w)
int32_t edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t esi_2 = *(esi_1 * 0x64 + edi + 0x1a4c)

if (sub_563820(esi_2, 4) == 0)
    return 0

uint32_t result = sub_563590(esi_2)

if (result != 0)
    void* eax_5 = sub_573400()
    
    if (sub_583720(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), result, 0x476, nullptr, 0x476, 0, 0, 4)
            == 0)
        return 0

return result
