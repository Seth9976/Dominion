// 函数: sub_6dad50
// 地址: 0x6dad50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
void* eax_2 = *(arg3 + 0x2c)
int64_t* eax_4

if (eax_2 != 0)
    if (*(eax_2 + 0x80) s<= 0)
        sub_63b870(eax_2, &data_801800, "index >= 0 && index < mSize", 
            "C:\x\ax2017\Engine\xArray.h", 0xb5, "XArray<struct Mat4>::operator []")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void var_90
    eax_4 = sub_731ef0(eax_2, *(eax_2 + 0x7c), arg5 * 0x34 + *(arg2 + 0x20), &var_90)
else
    if (*(arg2 + 0x10) != 4)
        sub_63b870(eax_2, &data_801800, 
            "defSubMesh.vertexFormat == VERTEX_FORMAT_POS_NORM_COL_TEX", 
            "C:\x\ax2017\Engine\Structure.cpp", 0x42b, "sStructureGetAnimatedVertexPosition")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax_4 = arg5 * 0x2c + *(arg2 + 0x20)

int64_t xmm0 = *eax_4
float xmm1 = *(arg3 + 0x24)
float xmm6[0x4] = *(arg3 + 0x14)
int64_t xmm0_1 = *(arg3 + 8)
float xmm0_3 = xmm1 f* xmm0.d
float xmm4_1 = xmm6[0] f* xmm6
float eax_6 = *(arg3 + 0x10)
float xmm0_5 = xmm1 f* xmm0:4.d
float xmm1_1 = xmm1 f* eax_4[1].d
float xmm0_7 = _mm_shuffle_ps(xmm6, xmm6, 0x55)
float xmm2_1 = xmm0_7 * xmm0_7
float xmm1_3 = _mm_shuffle_ps(xmm6, xmm6, 0xff)
float var_60 = xmm6[0]
float xmm5_1 = xmm1_3 * xmm1_3
float xmm2_3 = _mm_shuffle_ps(xmm6, xmm6, 0xaa)
float xmm3_1 = xmm2_3 * xmm2_3
float xmm7_1 = xmm0_7 * xmm1_3
float xmm3_3 = xmm0_7 f* xmm6
float xmm2_4 = xmm2_3 * var_60
float xmm6_2 = xmm2_3 * xmm1_3
float xmm2_6 = xmm5_1 - xmm4_1
float xmm2_8 = xmm2_3 * xmm0_7
float xmm0_9 = var_60 * xmm1_3
*arg4 = (xmm3_3 - xmm6_2) * (xmm0_5 + xmm0_5) + (xmm4_1 + xmm5_1 - xmm2_1 - xmm3_1) * xmm0_3
    + (xmm2_4 + xmm7_1) * (xmm1_1 + xmm1_1) f+ xmm0_1.d
arg4[1] = (xmm6_2 + xmm3_3) * (xmm0_3 + xmm0_3) + (xmm2_6 + xmm2_1 - xmm3_1) * xmm0_5
    + (xmm2_8 - xmm0_9) * (xmm1_1 + xmm1_1) f+ xmm0_1:4.d
arg4[2] = (xmm0_9 + xmm2_8) * (xmm0_5 + xmm0_5) + (xmm2_4 - xmm7_1) * (xmm0_3 + xmm0_3)
    + (xmm2_6 - xmm2_1 + xmm3_1) * xmm1_1 + eax_6
CookieCheckFunction(arg4)
return arg4
