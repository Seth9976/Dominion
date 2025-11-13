// 函数: sub_682cf0
// 地址: 0x682cf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edx = *sub_5af880(arg1)
int32_t eax_1 = *edx
float xmm3_1 = edx[3] f* edx[2]
double xmm0_2[0x2] = _mm_cvtepi32_pd(zx.q(eax_1)) f+ *((eax_1 u>> 0x1f << 3) + &data_893660)
int32_t eax_3 = edx[1]
float xmm2 = _mm_cvtpd_ps(xmm0_2)
double xmm0_5[0x2] = _mm_cvtepi32_pd(zx.q(eax_3)) f+ *((eax_3 u>> 0x1f << 3) + &data_893660)
void* eax_5 = data_147abe4
bool cond:0 = *(eax_5 + 0x38) == 0
float xmm1 = _mm_cvtpd_ps(xmm0_5)
int128_t var_40 = data_893580
float var_50 = arg2
float var_4c = arg3
float var_44 = xmm1 * xmm3_1 + arg3
float var_48 = xmm2 * xmm3_1 + arg2
var_50.o = var_50.o
void* eax_7
float* edx_2

if (cond:0)
    eax_7 = &var_40
    edx_2 = &var_50
else
    void var_30
    void var_20
    char result = sub_682670(eax_5 + 0x28, &var_40, &var_50, eax_5 + 0x28, &var_20, &var_30)
    
    if (result == 0)
        return result
    
    eax_7 = &var_30
    edx_2 = &var_20

return sub_6827e0(eax_7, edx_2, arg1, eax_7, &data_bf23ac, nullptr)
