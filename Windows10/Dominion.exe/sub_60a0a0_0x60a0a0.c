// 函数: sub_60a0a0
// 地址: 0x60a0a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t esi = arg3
int32_t var_10 = arg2
int32_t var_14 = esi
int32_t var_c = 1
int32_t edi = esi - 1

if (arg2 s>= 3)
    edi = esi

if (arg2 s>= 3)
    esi -= 2

int32_t eax_3
int32_t edx
edx:eax_3 = muls.dp.d(0x38e38e39, arg2 * 0x17)
int32_t edx_1 = edx s>> 1
int32_t eax_4
int32_t edx_2
edx_2:eax_4 = muls.dp.d(0x51eb851f, edi)
int32_t edx_3 = edx_2 s>> 7
int32_t eax_7
int32_t edx_6
edx_6:eax_7 = sx.q(edi)
int32_t eax_13 = arg5 - mods.dp.d(
    sx.q(((eax_7 + (edx_6 & 3)) s>> 2) + (edx_3 u>> 0x1f) + (edx_1 u>> 0x1f) + esi + edx_1 + edx_3
        - edi s/ 0x64 + 5), 
    7)
void var_20
int64_t* eax_14 = sub_64b530(eax_13, eax_13, &var_14, &var_20)
int32_t ecx_9 = eax_14[1].d
*arg4 = *eax_14
arg4[1].d = ecx_9
CookieCheckFunction(arg4)
return arg4
