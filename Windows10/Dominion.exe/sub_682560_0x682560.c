// 函数: sub_682560
// 地址: 0x682560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

if (arg3[4] == 0)
    void* ecx = data_147abe4
    int32_t ecx_1 = *(ecx + 0x38)
    *arg4 = *(ecx + 0x28)
    arg4[1].d = ecx_1
    CookieCheckFunction(arg4)
    return arg4

void* eax_3 = data_147abe4
int128_t xmm0_1 = *(eax_3 + 0x28)
int32_t edi = *(eax_3 + 0x38)
float var_58[0x4]
float xmm0_2[0x4] = *sub_682450(&var_58, arg3, data_147b06c + 0x124, &var_58)
float xmm1_1 = _mm_shuffle_ps(xmm0_2, xmm0_2, 0xaa)
float var_38

if (xmm1_1 f<= xmm0_2)
    var_38 = xmm1_1
    int32_t var_30_1 = xmm0_2
else
    var_38 = xmm0_2
    float var_30 = xmm1_1

float xmm0_3 = xmm0_2[3]
float xmm1_2 = xmm0_2[1]

if (xmm0_3 <= xmm1_2)
    float var_34_1 = xmm0_3
    float var_2c_1 = xmm1_2
else
    float var_34 = xmm1_2
    float var_2c = xmm0_3

void* ecx_6 = data_147abe4
int128_t xmm0_4 = var_38.o
xmm0_2[3] = arg3[4]
int128_t var_20 = xmm0_4
int128_t* eax_8 = sub_685c60(&var_38, &var_20, ecx_6 + 0x28, &var_38)
int32_t ecx_8 = eax_8[1].d
void* eax_9 = data_147abe4
*(eax_9 + 0x28) = *eax_8
*(eax_9 + 0x38) = ecx_8
*arg4 = xmm0_1
arg4[1].d = edi
CookieCheckFunction(arg4)
return arg4
