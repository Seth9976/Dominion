// 函数: sub_5404d0
// 地址: 0x5404d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int16_t eax = sub_56b800()
void* eax_1 = sub_573400()
uint32_t esi_1 = zx.d(eax)
int32_t ebx = *(eax_1 + 0xc)
void* edi = *(eax_1 + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_2 = esi_1 * 0x64
sub_576e90(eax_2, edi, &var_8, ebx, *(eax_2 + edi + 0x1a4c), 0)
uint32_t eax_3 = sub_56b800()
char result = sub_5690c0(eax_3, 0x3e9, eax_3, 0x15)

if (result == 0)
    return result

int32_t __saved_ebx_1 = var_8 + 1
return sub_564740(0)
