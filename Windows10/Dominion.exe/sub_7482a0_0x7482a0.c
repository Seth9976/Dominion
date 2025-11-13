// 函数: sub_7482a0
// 地址: 0x7482a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ebx
ebx.b = arg1
data_1593c78 = 1
data_1593c7c = 0
float var_14
sub_63c270(&var_14)
float xmm1 = var_14
data_1593c80 = xmm1
int32_t var_10
data_1593c84 = var_10
data_1593c90 = 0
data_1593c88 = xmm1
data_1593c8c = var_10
sub_63c270(&var_14)
uint32_t eax_2
int32_t edx
eax_2, edx = sub_747370(var_14, var_10)
data_1593c94 = eax_2
float var_1c
int128_t* eax_4
int32_t edx_1
eax_4, edx_1 = sub_748080(&var_1c, edx, 0, &var_1c)
data_1593c9c = *eax_4
int128_t* result = sub_748080(&var_1c, edx_1, 1, &var_1c)
int32_t i = 0
int128_t xmm0_2 = *result
data_1593c98 = ebx.b
data_1593cac = xmm0_2

if (data_151345c s> 0)
    int32_t* esi_1 = &data_1593cbc
    
    do
        result = sub_744f10((&data_151245c)[i], nullptr)
        i += 1
        float xmm2_1 = result[1].d
        float xmm1_2 = *(result + 0x18) - xmm2_1
        float xmm0_5 = xmm1_2 f* *(result + 0x98) + xmm2_1
        float xmm2_2 = *(result + 0x14)
        var_14 = xmm1_2 f* result[0xa].d + xmm2_1
        float xmm1_6 = *(result + 0x1c) - xmm2_2
        var_1c = xmm0_5
        float var_10_1 = xmm1_6 f* *(result + 0xa4) + xmm2_2
        float var_18_1 = xmm1_6 f* *(result + 0x9c) + xmm2_2
        *esi_1 = var_1c.o
        esi_1 = &esi_1[4]
    while (i s< data_151345c)

CookieCheckFunction(result)
return result
