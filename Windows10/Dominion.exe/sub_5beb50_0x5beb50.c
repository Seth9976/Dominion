// 函数: sub_5beb50
// 地址: 0x5beb50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76949d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_a4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2[2]
int32_t eax_3 = arg2[1]
int32_t var_28 = eax_3
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t var_14_1 = 0

if (eax_3 != 0 && ecx != 0)
    int32_t eax_4
    int32_t edx
    edx:eax_4 = 0x7fffffff
    int32_t eax_6
    int32_t edx_2
    
    if (var_28 s<= divs.dp.d(edx:eax_4, ecx))
        edx_2:eax_6 = 0x7fffffff
    
    if (var_28 s> divs.dp.d(edx:eax_4, ecx) || var_28 s> divs.dp.d(edx_2:eax_6, ecx))
        sub_5b0890()
        noreturn
    
    eax_3 = var_28

int32_t edx_5 = ecx * eax_3
sub_5bffd0(arg1, edx_5, eax_3, ecx)
int128_t* ecx_2 = *arg2
int32_t var_84 = arg2[1]
int32_t var_6c = arg2[1]
int32_t var_68 = 0x3f800000

if (arg1[1] != var_28 || arg1[2] != ecx)
    if (var_28 != 0 && ecx != 0 && var_28 s> divs.dp.d(0x7fffffff, ecx))
        sub_5b0890()
        noreturn
    
    sub_5bffd0(arg1, edx_5, var_28, ecx)

int32_t eax_12 = arg1[1]
int32_t esi_2 = *arg1
int32_t var_2c
int32_t* var_4c = &var_2c
void var_8c
void* var_48 = &var_8c
int32_t var_28_1 = eax_12
void var_21
void* var_44 = &var_21
var_2c = esi_2
int32_t ecx_6 = arg1[2] * eax_12
int32_t* var_40 = arg1
int128_t* eax_14
int32_t edx_8
edx_8:eax_14 = sx.q(ecx_6)
void* edx_11 = ((edx_8 & 3) + eax_14) & 0xfffffffc

if (edx_11 s> 0)
    int32_t ecx_7 = 0
    int32_t edi_1 = 0
    int32_t var_30_1 = 0
    
    while (true)
        float var_60[0x4] = *(ecx_2 + ecx_7)
        float xmm1_1[0x4] = var_68
        float xmm0_4[0x4] =
            sub_5be710(_mm_add_ps(sub_5b0d00(&var_60), _mm_shuffle_ps(xmm1_1, xmm1_1, 0)))
        float xmm5_1[0x4] = data_893880
        float xmm1_4[0x4] = _mm_min_ps(data_893630, xmm0_4)
        eax_14 = ecx_2
        ecx_7 = var_30_1 + 0x10
        var_30_1 = ecx_7
        uint32_t xmm4_1[0x4] = data_8937a0.o
        uint32_t xmm5_2[0x4] = _mm_max_ps(xmm5_1, xmm1_4)
        uint32_t xmm4_2[0x4] = _mm_and_ps(xmm4_1, xmm0_4)
        float xmm2_2[0x4] = _mm_mul_ps(xmm5_2, xmm5_2)
        float xmm4_3[0x4] = __cmpps_xmmps_memps_immb(xmm4_2, data_893380, 1)
        float xmm1_6[0x4] = __mulps_xmmps_memps(xmm2_2, data_8937f0)
        float xmm0_6[0x4] = __mulps_xmmps_memps(xmm2_2, data_893330)
        uint32_t xmm4_4[0x4] = _mm_and_ps(xmm4_3, xmm5_2)
        float xmm1_7[0x4] = __addps_xmmps_memps(xmm1_6, (*"~3a*~3a*~3a*~3a*A")[0].o)
        float xmm0_7[0x4] = __addps_xmmps_memps(xmm0_6, data_893350)
        float xmm1_8[0x4] = _mm_mul_ps(xmm1_7, xmm2_2)
        float xmm0_8[0x4] = _mm_mul_ps(xmm0_7, xmm2_2)
        float xmm1_9[0x4] = __addps_xmmps_memps(xmm1_8, data_893800)
        float xmm0_9[0x4] = __addps_xmmps_memps(xmm0_8, data_8933b0)
        float xmm1_10[0x4] = _mm_mul_ps(xmm1_9, xmm2_2)
        float xmm0_10[0x4] = _mm_mul_ps(xmm0_9, xmm2_2)
        float xmm1_11[0x4] = __addps_xmmps_memps(xmm1_10, (*"A")[0].o)
        float xmm0_11[0x4] = __addps_xmmps_memps(xmm0_10, data_8933d0)
        *(esi_2 + (edi_1 << 2)) = __mulps_xmmps_memps(
            _mm_or_ps(
                _mm_andnot_ps(xmm4_3, 
                    _mm_div_ps(
                        _mm_mul_ps(
                            __addps_xmmps_memps(
                                _mm_mul_ps(
                                    __addps_xmmps_memps(
                                        _mm_mul_ps(
                                            __addps_xmmps_memps(_mm_mul_ps(xmm1_11, xmm2_2), 
                                                *"JCy7JCy7JCy7JCy7"), 
                                            xmm2_2), 
                                        data_893390), 
                                    xmm2_2), 
                                data_8933c0), 
                            xmm5_2), 
                        xmm0_11)), 
                xmm4_4), 
            *(eax_14 + (edi_1 << 2)))
        edi_1 += 4
        
        if (edi_1 s>= edx_11)
            break
        
        esi_2 = var_2c

sub_5c8340(eax_14, edx_11, &var_4c, ecx_6)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
