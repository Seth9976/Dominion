// 函数: sub_508420
// 地址: 0x508420
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_c = arg1
int32_t entry_ebx
uint32_t result = sub_562bb0(2, 0, arg2, entry_ebx)

if (result == 0)
    return result

void* eax = sub_573400()
uint32_t esi_1 = zx.d(result.w)
int32_t ebx = *(eax + 0xc)
void* edi = *(eax + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_1 = esi_1 * 0x64
sub_576e90(eax_1, edi, &var_c, ebx, *(eax_1 + edi + 0x1a4c), 0)
int32_t var_1c_1 = 0xc
int32_t var_20_2 = 0
int32_t var_24_2 = 0
return sub_5657e0(esi_1, var_c.b + 3, 2)
