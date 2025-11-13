// 函数: sub_6dbcb0
// 地址: 0x6dbcb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float var_70
float* ecx
sub_6db800(ecx, &var_70)
float xmm0 = var_70
void var_5c
void* ecx_1 = &var_5c
float xmm6_1 = xmm0 - 0f
float var_6c
float xmm5_1 = var_6c - 0f
float var_68
float xmm4_1 = var_68 - 0f
int32_t i_1 = 7
*arg1 = xmm6_1
arg1[1] = xmm5_1
arg1[2] = xmm4_1
arg1[3] = xmm0 + 0f
arg1[4] = var_6c + 0f
arg1[5] = var_68 + 0f
int32_t i

do
    float xmm0_2 = *(ecx_1 - 8)
    
    if (not(xmm6_1 <= xmm0_2))
        xmm6_1 = xmm0_2
        *arg1 = xmm6_1
    else if (not(xmm0_2 <= arg1[3]))
        arg1[3] = xmm0_2
    
    float xmm0_3 = *(ecx_1 - 4)
    
    if (not(xmm5_1 <= xmm0_3))
        arg1[1] = xmm0_3
        xmm5_1 = xmm0_3
    else if (not(xmm0_3 <= arg1[4]))
        arg1[4] = xmm0_3
    
    float xmm0_4 = *ecx_1
    
    if (not(xmm4_1 <= xmm0_4))
        arg1[2] = xmm0_4
        xmm4_1 = xmm0_4
    else if (not(xmm0_4 <= arg1[5]))
        arg1[5] = xmm0_4
    
    ecx_1 += 0xc
    i = i_1
    i_1 -= 1
while (i != 1)
CookieCheckFunction(arg1)
return arg1
