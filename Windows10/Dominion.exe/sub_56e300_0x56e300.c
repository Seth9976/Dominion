// 函数: sub_56e300
// 地址: 0x56e300
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
void* eax = sub_573400()
uint32_t esi_1 = zx.d(sub_56b800())
int32_t edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_3 = esi_1 * 0x64
int32_t edi_1 = *(eax_3 + edi + 0x1a4c)
uint32_t eax_4 = sub_576b30(eax_3, *(eax + 0xc), *(eax + 4), 7, edi_1, 0, 0)
sub_574a80(&var_8, *(eax + 0xc), *(eax + 4), edi_1, &var_8)
void* result
result.b = eax_4 s>= var_8
return result
