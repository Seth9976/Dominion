// 函数: sub_513f80
// 地址: 0x513f80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()

if (*(eax + 0x40) == 0)
    sub_591930()

uint32_t esi_2 = zx.d((*(eax + 0x40)).w)
int32_t edi = *(sub_573400() + 4)

if (esi_2 u>= 0x320)
    sub_591930()

int32_t esi_3 = *(esi_2 * 0x64 + edi + 0x1a4c)
void* eax_3 = sub_573400()
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = muls.dp.d(0x51eb851f, 
    sub_5727e0(eax_3, esi_3, *(eax_3 + 4), 1, 0xffffffff, nullptr) - *(eax_3 + 4) - 0x1a48)
int32_t edx_2 = edx_1 s>> 5
void* eax_6 = sub_573400()
return sub_583720(eax_6, *(eax_6 + 0xc), *(eax_6 + 4), (edx_2 u>> 0x1f) + edx_2, 0x476, nullptr, 
    0x476, 0, 4, 4)
