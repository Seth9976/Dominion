// 函数: sub_5680f0
// 地址: 0x5680f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
uint32_t esi_1 = zx.d(arg3)
int32_t ecx = *(eax + 0xc)
void* ebx = *(eax + 4)
int32_t var_8 = ecx

if (esi_1 u>= 0x320)
    sub_591930()
    ecx = var_8

int32_t eax_1 = esi_1 * 0x64
sub_576e90(eax_1, ebx, &var_8, ecx, *(eax_1 + ebx + 0x1a4c), 0)
uint32_t var_34[0x6]
uint128_t xmm0 = *sub_576c00(&var_34, var_8)
int64_t var_1c = xmm0.q
int32_t result

if (_mm_bsrli_si128(xmm0, 8) == 0 && var_1c:4.d == 0)
    result = var_1c.d
    
    if (result s>= arg2)
        result.b = result s<= arg4
        return result

result.b = 0
return result
