// 函数: sub_6a7920
// 地址: 0x6a7920
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 != 0)
    int32_t eax
    sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\Spine.cpp", 0xeb, 
        "TggAttachmentLoader_createAttachment")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ecx
int32_t var_14 = ecx
int32_t eax_1 = sub_6a76c0(*(arg1 + 0xc), arg4)
int32_t* result = sub_707a50(arg3)
result[0x11] = eax_1
int32_t* ecx_5 = *sub_5af880(eax_1)
int32_t eax_3 = *ecx_5
float xmm2_1 = ecx_5[3] f* ecx_5[2]
double xmm0_2[0x2] = _mm_cvtepi32_pd(zx.q(eax_3)) f+ *((eax_3 u>> 0x1f << 3) + &data_893660)
int32_t eax_5 = ecx_5[1]
result[0x22] = 0
result[0x23] = 0x3f800000
result[0x24] = 0
float xmm3 = _mm_cvtpd_ps(xmm0_2)
result[0x25] = 0
result[0x26] = 0x3f800000
result[0x27] = 0
result[0x20] = 0x3f800000
result[0x21] = 0x3f800000
double xmm0_4 = _mm_cvtepi32_pd(zx.q(eax_5))
result[0x12] = 0
result[0x13] = 0
int32_t ecx_6 = int.d(xmm3 * xmm2_1)
float xmm1 = _mm_cvtpd_ps(xmm0_4 f+ *((eax_5 u>> 0x1f << 3) + &data_893660))
result[0x14] = ecx_6
result[0x16] = ecx_6
int32_t eax_7 = int.d(xmm1 * xmm2_1)
result[0x15] = eax_7
result[0x17] = eax_7
return result
