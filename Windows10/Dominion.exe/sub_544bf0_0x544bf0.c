// 函数: sub_544bf0
// 地址: 0x544bf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
void* eax = sub_573400()
void* result = sub_5887c0(eax, *(eax + 0xc), *(eax + 4), 0)

if (result == 0)
    return result

sub_562400(result, 0x3eb, result, 0x20)
void* eax_1 = sub_573400()
uint32_t esi_1 = zx.d(result.w)
int32_t ebx_1 = *(eax_1 + 0xc)
void* edi_1 = *(eax_1 + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_2 = esi_1 * 0x64
sub_576e90(eax_2, edi_1, &var_8, ebx_1, *(eax_2 + edi_1 + 0x1a4c), 0)
int32_t var_24_1 = var_8 + 1
return sub_5652d0(esi_1)
