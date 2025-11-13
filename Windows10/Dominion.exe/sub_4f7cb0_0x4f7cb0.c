// 函数: sub_4f7cb0
// 地址: 0x4f7cb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int64_t xmm0 = *arg3
int64_t xmm0_1 = *arg2
int32_t eax_2 = xmm0_1.d
int32_t temp0 = xmm0.d
bool cond:0 = eax_2 s< temp0

if (eax_2 == temp0)
    cond:0 = xmm0_1:4.d s< xmm0:4.d

eax_2.b = cond:0

if (eax_2.b != 0)
    int64_t xmm1_1 = *arg2
    int32_t ecx = arg2[1].d
    *arg2 = *arg3
    arg2[1].d = arg3[1].d
    *arg3 = xmm1_1
    arg3[1].d = ecx

int64_t xmm0_3 = *arg2
int64_t xmm0_4 = *arg4
uint32_t result = xmm0_4.d
int32_t temp1 = xmm0_3.d
bool cond:1 = result s< temp1

if (result == temp1)
    cond:1 = xmm0_4:4.d s< xmm0_3:4.d

result.b = cond:1

if (result.b != 0)
    int64_t xmm1_2 = *arg4
    int32_t ebx_1 = arg4[1].d
    *arg4 = *arg2
    arg4[1].d = arg2[1].d
    *arg2 = xmm1_2
    arg2[1].d = ebx_1
    int64_t xmm0_6 = *arg3
    result = xmm1_2.d
    int32_t temp2_1 = xmm0_6.d
    bool cond:2_1 = result s< temp2_1
    
    if (result == temp2_1)
        cond:2_1 = xmm1_2:4.d s< xmm0_6:4.d
    
    result.b = cond:2_1
    
    if (result.b != 0)
        *arg2 = *arg3
        result = arg3[1].d
        arg2[1].d = result
        *arg3 = xmm1_2
        arg3[1].d = ebx_1

CookieCheckFunction(result)
return result
