// 函数: sub_5a7d30
// 地址: 0x5a7d30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
void* edx
ecx, edx = __chkstk(0x10014)
int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_8 = eax_1
float xmm5 = arg1
float var_10010 = xmm5
float* edi = ecx + 8
int32_t var_1000c[0x3ffe]

for (int32_t i = 0; i s< 0x4000; i += 1)
    bool cond:0_1 = 0f >= *edi
    int32_t xmm0_1 = edi[-2]
    int32_t xmm1_1 = edi[-1]
    int32_t var_10018 = xmm0_1
    int32_t var_10014_1 = xmm1_1
    
    if (not(cond:0_1) && not(0.0250000004f f> xmm0_1) && not(xmm0_1 f> 1.97500002f)
            && not(0.0250000004f f> xmm1_1) && not(xmm1_1 f> 0.975000024f))
        eax_1 = sub_5a11b0(eax_1, &var_10018, edx, xmm5, 0)
    
    float xmm0_3
    
    if (cond:0_1 || 0.0250000004f f> xmm0_1 || xmm0_1 f> 1.97500002f || 0.0250000004f f> xmm1_1
            || xmm1_1 f> 0.975000024f || eax_1.b != 0)
        xmm0_3 = -999999f
    else
        float xmm0_2 = *edi
        xmm0_3 = xmm0_2 * xmm0_2
    
    xmm5 = var_10010
    edi = &edi[3]
    var_1000c[i] = xmm0_3

uint32_t result = sub_5ac8c0(&var_1000c)
CookieCheckFunction(result)
return result
