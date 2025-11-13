// 函数: sub_55beb0
// 地址: 0x55beb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
void* eax = sub_573400()

if (*(eax + 0x40) == 0)
    sub_591930()

int16_t esi_1 = (*(eax + 0x40)).w
void* eax_1 = sub_573400()
uint32_t esi_2 = zx.d(esi_1)
int32_t ebx = *(eax_1 + 0xc)
void* edi = *(eax_1 + 4)

if (esi_2 u>= 0x320)
    sub_591930()

int32_t eax_2 = esi_2 * 0x64
sub_576e90(eax_2, edi, &var_8, ebx, *(eax_2 + edi + 0x1a4c), 0)
int32_t var_18 = var_8
return sub_564f00(esi_2)
