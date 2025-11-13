// 函数: sub_4f16b0
// 地址: 0x4f16b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

for (int32_t i = arg5; i != *(arg4 + 0x6c); i += 1)
    sub_4f16b0(arg4, i + 1, arg6 | 1 << (i u% 0x20))

int32_t esi_2 = 0
void var_d28
uint32_t result = sub_5939a0(&var_d28, arg4)
int32_t i_2 = *(arg4 + 0x6c)

if (i_2 s> 0)
    result = arg6
    void* edx_2 = arg4 + 0x70
    int32_t ecx_2 = 1
    int32_t i_1
    
    do
        if ((result & ecx_2) != 0)
            int32_t var_cb8[0x32b]
            var_cb8[esi_2] = *edx_2
            esi_2 += 1
            result = arg6
        
        edx_2 += 4
        ecx_2 = rol.d(ecx_2, 1)
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

int32_t var_cbc = esi_2

if (esi_2 s>= *(arg4 + 0x60) && esi_2 s<= *(arg4 + 0x5c))
    result = sub_4efcf0(&var_d28, arg2, arg3, &var_d28)

CookieCheckFunction(result)
return result
