// 函数: sub_571540
// 地址: 0x571540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
uint32_t ebx = *(arg1 + 8)
int16_t esi = (*arg2).w
int32_t eax_1 = *(arg1 + 0xc)
void* eax_2 = sub_573400()
uint32_t esi_1 = zx.d(esi)
void* edi = *(eax_2 + 4)

if (esi_1 u>= 0x320)
    eax_2 = sub_591930()

return sub_5754f0(eax_2, *(esi_1 * 0x64 + edi + 0x1a4c), edi, ebx, eax_1) ^ 1
