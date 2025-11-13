// 函数: sub_540ab0
// 地址: 0x540ab0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t esi_1 = zx.d((*(arg1 + 4)).w)
int32_t ebx = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t edi_1 = *(arg1 + 4)
int32_t esi_2 = *(esi_1 * 0x64 + ebx + 0x1a58)
void* eax_4 = sub_573400()
char var_c99
void* result =
    sub_565ff0(eax_4, esi_2, edi_1, *(eax_4 + 0xc), 0x462, nullptr, &var_c99, 0xc, nullptr, nullptr)

if (var_c99 != 0)
    int32_t var_18_1 = 0
    int32_t var_c98
    
    if (edi_1 != 0)
        var_c98 = edi_1
        int32_t var_18_2 = 1
    
    result = sub_56f1a0(result, &var_c98, 0x13, 0)

CookieCheckFunction(result)
return result
