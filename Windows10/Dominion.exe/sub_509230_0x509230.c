// 函数: sub_509230
// 地址: 0x509230
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_34 = ecx
int32_t var_38 = 0
void var_28

if (sub_568960(__security_cookie ^ &var_28, 0x209, 0, 0) == 0)
    uint32_t eax_2
    eax_2.b = 0
    CookieCheckFunction(eax_2)
    return eax_2

int32_t var_24[0x6]
void* eax_4
int32_t ecx_4
eax_4, ecx_4 = sub_58bc10(*(sub_573400() + 4), &var_24)
int32_t var_34_1 = ecx_4
int32_t var_38_1 = 0
uint32_t eax_5 = sub_568960(eax_4, 0x209, 0, 0)
int32_t eax_7
int32_t edx_1
edx_1:eax_7 = muls.dp.d(0x66666667, sub_568c80())
int32_t edx_2 = edx_1 s>> 2
uint32_t eax_9
eax_9.b = ((edx_2 u>> 0x1f) + edx_2) * eax_5 * 2 s> var_24[*(sub_573400() + 0xc)]
CookieCheckFunction(eax_9)
return eax_9
