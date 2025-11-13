// 函数: sub_5572d0
// 地址: 0x5572d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_44 = ecx
int32_t eax
sub_561e00(eax, 0, 2, 0)
int32_t var_34
int32_t* result = sub_562880(arg2, arg1, var_34)

if (result == 0)
    return result

void* eax_1 = sub_573400()
uint32_t esi_1 = zx.d(result.w)
int32_t ecx_2 = *(eax_1 + 0xc)
void* edi = *(eax_1 + 4)
var_34 = ecx_2

if (esi_1 u>= 0x320)
    sub_591930()
    ecx_2 = var_34

int32_t eax_2 = esi_1 * 0x64
sub_576e90(eax_2, edi, &var_34, ecx_2, *(eax_2 + edi + 0x1a4c), 0)
uint32_t var_30[0x8]
return sub_562360((*sub_576c00(&var_30, var_34)).d, 0)
