// 函数: sub_6bcb90
// 地址: 0x6bcb90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* eax_3 = sub_5af880(**(arg3 + 0x2e4))
int128_t* result
int128_t xmm0_1
int128_t var_30
void* eax_5

if (*(*(arg3 + 0x2dc) * 0x168 + *eax_3 + 0xe1) == 0)
    if (*(arg3 + 0x2e0) == 0)
        eax_5 = *(arg3 + 0x2e4) + 0x2c
        goto label_6bcbd7
    
    int128_t var_50
    int128_t* eax_7 = sub_6bcb90(&var_50)
    var_30 = *eax_7
    int128_t var_20_1 = eax_7[1]
    sub_4eb600(&var_30, arg3 + 0x288, &var_50, &var_30)
    result = arg4
    *result = var_50
    int128_t var_40
    xmm0_1 = var_40
else
    eax_5 = arg3 + 0x2a8
label_6bcbd7:
    sub_4eb600(eax_5, arg3 + 0x288, &var_30, eax_5)
    result = arg4
    *result = var_30
    int128_t var_20
    xmm0_1 = var_20
result[1] = xmm0_1
CookieCheckFunction(result)
return result
