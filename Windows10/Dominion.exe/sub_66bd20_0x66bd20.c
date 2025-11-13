// 函数: sub_66bd20
// 地址: 0x66bd20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ecx
uint32_t eax_2 = sub_64e7a0(ecx)
int32_t var_a10[0x281]
uint32_t eax_3 = sub_66a920(eax_2, &var_a10, eax_2, nullptr)
int32_t var_a20
char* ecx_2

if (arg2 s>= 0)
    if (arg2 s< eax_3)
        int32_t eax_4 = arg2 * 5
        int32_t ecx_4 = var_a10[eax_4 + 4]
        *arg3 = *(&var_a10 + (eax_4 << 2))
        arg3[1].d = ecx_4
        CookieCheckFunction(arg3)
        return arg3
    
    char const* const var_a1c_1 = "FieldGetPropDef"
    var_a20 = 0x406d
    ecx_2 = "propIndex < numDefs"
else
    char const* const var_a1c = "FieldGetPropDef"
    var_a20 = 0x406c
    ecx_2 = "propIndex >= 0"

sub_63b870(eax_3, &data_801800, ecx_2, "C:\x\ax2017\Engine\UI2.cpp", var_a20, "FieldGetPropDef")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
