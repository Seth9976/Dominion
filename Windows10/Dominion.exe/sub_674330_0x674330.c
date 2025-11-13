// 函数: sub_674330
// 地址: 0x674330
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
data_ca9a74 = 1
data_ca9a78 = 0
int32_t var_20
sub_63c270(&var_20)
int32_t xmm1 = var_20
data_ca9a7c = xmm1
int32_t var_1c
data_ca9a80 = var_1c
data_ca9a8c = 0
data_ca9a84 = xmm1
data_ca9a88 = var_1c
sub_63c270(&var_20)
uint32_t eax_2
int32_t edx
eax_2, edx = sub_669c00(var_20, var_1c)
data_ca9a90 = eax_2
float var_34
int128_t* eax_4
int32_t edx_1
eax_4, edx_1 = sub_674000(&var_34, edx, 0, &var_34)
data_ca9a98 = *eax_4
int128_t xmm0_2 = *sub_674000(&var_34, edx_1, 1, &var_34)
void* eax_7 = data_147abe8
data_ca9a94 = 0
data_ca9aa8 = xmm0_2
float xmm0_3 = *(eax_7 + 0x2c)
uint32_t i = 0
uint32_t i_1 = 0

if (data_c28c58 s> 0)
    int32_t* ebx_1 = &data_ca9ab8
    
    do
        void* eax_8 = sub_665600((&data_c27c58)[i])
        void var_18
        int128_t* eax_9 = sub_67d460(eax_8 + 0x554, xmm0_3, &var_18)
        float var_44[0x4]
        float* eax_10 = sub_64c550(eax_8 + 0x14, xmm0_3, &var_44)
        float xmm2_3 = *eax_10
        float xmm1_2 = eax_10[2] - xmm2_3
        float xmm2_4 = eax_10[1]
        float var_2c_1 = xmm1_2 f* *(eax_9 + 8) + xmm2_3
        float xmm1_6 = eax_10[3] - xmm2_4
        var_34 = xmm1_2 f* *eax_9 + xmm2_3
        i = i_1 + 1
        i_1 = i
        float var_28_1 = xmm1_6 f* *(eax_9 + 0xc) + xmm2_4
        float var_30_1 = xmm1_6 f* *(eax_9 + 4) + xmm2_4
        *ebx_1 = var_34.o
        ebx_1 = &ebx_1[4]
    while (i s< data_c28c58)

CookieCheckFunction(i)
return i
