// 函数: sub_6b1d40
// 地址: 0x6b1d40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** ecx = arg2
int32_t esi
int32_t var_2c = esi
int32_t edi
int32_t var_30 = edi
*(arg1 + 0x58) = ecx
*(arg1 + 0x5c) = arg3
struct _EXCEPTION_REGISTRATION_RECORD** eax_1 = sub_6a0f60(ecx)
void* edx = data_147b078
void* const edi_1

if (eax_1 != 0)
    uint32_t ecx_1 = zx.d(eax_1.w)
    
    if (ecx_1 u< *(edx + 0x3c))
        edi_1 = ecx_1 * 0x24c + *(edx + 0x38)
        
        if (*(edi_1 + 0x248) != eax_1)
            edi_1 = nullptr
    else
        edi_1 = nullptr
else
    edi_1 = nullptr

int32_t ecx_4 = 0

if (arg3 == 0)
    eax_1.b = 0
else
    struct _EXCEPTION_REGISTRATION_RECORD** eax_2 = sub_6a0f60(arg3)
    void* edx_1 = data_147b078
    uint32_t eax_3
    
    if (eax_2 != 0)
        eax_3 = zx.d(eax_2.w)
    
    if (eax_2 == 0 || eax_3 u>= *(edx_1 + 0x3c))
        ecx_4 = *0x24
        eax_1.b = 1
    else
        eax_1 = eax_3 * 0x24c + *(edx_1 + 0x38)
        
        if (eax_1[0x92] != eax_2)
            eax_1 = nullptr
        
        ecx_4 = eax_1[9]
        eax_1.b = 1

*(arg1 + 0x20) = eax_1.b
int32_t* edx_3 = *(arg1 + 8)
(*(*edx_3 + 0x84))(edx_3, 1, edi_1 + 0x30, ecx_4)
int32_t* ecx_6 = *sub_5af880(arg2)
int32_t eax_7 = *ecx_6
float xmm2_1 = ecx_6[3] f* ecx_6[2]
double xmm0_2[0x2] = _mm_cvtepi32_pd(zx.q(eax_7)) f+ *((eax_7 u>> 0x1f << 3) + &data_893660)
int32_t eax_9 = ecx_6[1]
float xmm1_1 = _mm_cvtpd_ps(xmm0_2) * xmm2_1
double xmm0_5[0x2] = _mm_cvtepi32_pd(zx.q(eax_9)) f+ *((eax_9 u>> 0x1f << 3) + &data_893660)
*(edi_1 + 0x48) = xmm1_1
float xmm0_7 = _mm_cvtpd_ps(xmm0_5) * xmm2_1
*(edi_1 + 0x4c) = xmm0_7
int32_t var_2c_1 = 0
int32_t var_28_1 = int.d(sub_4d5cb0(xmm1_1 + 0.5f))
int32_t var_24 = int.d(sub_4d5cb0(xmm0_7 + 0.5f))
return (*(*(edi_1 + 0x30) + 0x5c))(0.o)
