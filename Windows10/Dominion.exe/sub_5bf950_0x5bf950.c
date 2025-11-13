// 函数: sub_5bf950
// 地址: 0x5bf950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = __ehhandler$___std_tzdb_get_time_zones@0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_ec = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
int32_t* var_6c = edi
int32_t* var_30 = edi[2]
void* result_1 = nullptr
int32_t var_34 = 0
int32_t var_14_1 = 0
void* var_64
__builtin_memset(&var_64, 0, 0x18)
var_14_1.b = 3
int32_t* var_88 = edi
int32_t ecx = edi[1]
int64_t var_80
int32_t* var_7c
int32_t var_74
int32_t* var_48
int32_t* var_2c
void var_21
int32_t* eax_4
int32_t edx
void* result_5

if (ecx != 0)
    void* result_4
    
    if (ecx s<= 0)
        result_4 = nullptr
    else
        result_4 = sub_5c0320(ecx)
    
    result_1 = result_4
    var_48 = &result_5
    int32_t** var_44_1 = &var_88
    void* var_40_1 = &var_21
    void** var_3c_1 = &result_1
    int32_t eax_7
    int32_t edx_1
    edx_1:eax_7 = sx.q(ecx)
    var_34 = ecx
    result_5 = result_4
    edx = ((edx_1 & 3) + eax_7) & 0xfffffffc
    eax_4 = nullptr
    int32_t var_70_1 = edx
    var_2c = nullptr
    
    if (edx s> 0)
        while (true)
            int32_t* edi_1 = var_88
            var_7c = *edi_1 + (eax_4 << 2)
            int32_t eax_10 = edi_1[1]
            var_74 = eax_10
            int128_t xmm0_1 = sub_5c8a00(eax_10, edx, &var_80:4, edi_1[2])
            int32_t* eax_11 = var_2c
            edx = var_70_1
            *(result_4 + (eax_11 << 2)) = xmm0_1
            eax_4 = &eax_11[1]
            var_2c = eax_4
            
            if (eax_4 s>= edx)
                break
            
            result_4 = result_5
        
        edi = var_6c
else
    result_5 = nullptr
    edx = 0
    var_48 = &result_5
    void** var_44 = &var_88
    void* var_40 = &var_21
    eax_4 = &result_1
    int32_t* var_3c = &result_1
sub_5c8640(eax_4, edx, &var_48, ecx)
int32_t* var_78 = edi
int32_t var_9c
int32_t var_4c = var_9c
var_48 = var_7c
int32_t* var_44_2 = edi
int32_t var_8c
int32_t var_3c_2 = var_8c
int32_t var_60
int32_t eax_14 = var_60
var_80 = var_48.q
int32_t var_78_1 = var_74
int32_t esi_1 = edi[1]
int32_t var_28_2 = eax_14

if (eax_14 != esi_1)
    void* eax_15 = var_64
    
    if (eax_15 != 0)
        free(*(eax_15 - 4))
    
    if (esi_1 s<= 0)
        var_64 = nullptr
    else
        var_64 = sub_5c0320(esi_1)
    
    int32_t var_60_1 = esi_1
    eax_14 = esi_1
    var_28_2 = esi_1

void* esi_2 = var_64
var_48 = &var_2c
int32_t eax_17
int32_t edx_5
edx_5:eax_17 = sx.q(eax_14)
int32_t edx_6 = edx_5 & 3
int64_t* var_44_3 = &var_80
var_2c = esi_2
void* var_40_2 = &var_21
int32_t eax_19 = (eax_17 + edx_6) & 0xfffffffc
void** var_3c_3 = &var_64
int32_t var_70_2 = eax_19

if (eax_19 s> 0)
    int32_t edi_2 = 0
    
    while (true)
        int32_t* var_98 = edi_2
        int32_t var_90_1 = 0
        int32_t var_8c_1 = edi_2
        int32_t var_9c_1 = *var_7c
        int32_t* eax_21 = var_7c[1]
        var_98 = eax_21
        void var_a0
        int128_t xmm0_4
        edx_6, xmm0_4 = sub_5c8af0(eax_21, edx_6, &var_a0, var_7c[2])
        eax_19 = var_70_2
        *(esi_2 + (edi_2 << 2)) = xmm0_4
        edi_2 += 4
        
        if (edi_2 s>= eax_19)
            break
        
        esi_2 = var_2c
    
    edi = var_6c

sub_5c8740(eax_19, eax_19, &var_48, var_28_2)
void* result_2 = result_1
int32_t* xmm2_1 = _mm_cvtepi32_ps(zx.o(var_30))
int32_t var_58
int32_t eax_22 = var_58
int32_t var_28_3 = eax_22
var_30 = xmm2_1
int32_t* var_40_3 = xmm2_1
void* var_5c

if (eax_22 != var_34)
    void* eax_23 = var_5c
    
    if (eax_23 != 0)
        free(*(eax_23 - 4))
    
    if (var_34 s<= 0)
        var_5c = nullptr
    else
        var_5c = sub_5c0320(var_34)
    
    xmm2_1 = var_30
    eax_22 = var_34
    int32_t var_58_1 = var_34
    var_28_3 = eax_22

void* ecx_10 = var_5c
var_80.d = &var_2c
var_7c = &var_48
void* var_78_2 = &var_21
void** var_74_1 = &var_5c
void* result_6
int32_t edx_8
edx_8:result_6 = sx.q(eax_22)
var_2c = ecx_10
int32_t edx_10 = 0
void* esi_5 = ((edx_8 & 3) + result_6) & 0xfffffffc

if (esi_5 s> 0)
    while (true)
        result_6 = result_2
        float xmm0_5[0x4] = var_40_3
        float xmm0_6[0x4] = _mm_shuffle_ps(xmm0_5, xmm0_5, 0)
        *(ecx_10 + (edx_10 << 2)) = _mm_div_ps(*(result_6 + (edx_10 << 2)), xmm0_6)
        edx_10 += 4
        
        if (edx_10 s>= esi_5)
            break
        
        ecx_10 = var_2c

sub_5c88b0(result_6, esi_5, &var_80, var_28_3)
void* eax_25 = var_64
void* result_3 = result_1
int32_t var_50
int32_t eax_26 = var_50
int32_t var_a8 = 0x3727c5ac
int32_t var_28_4 = eax_26
int32_t* var_54

if (eax_26 != var_34)
    int32_t* eax_27 = var_54
    
    if (eax_27 != 0)
        free(eax_27[-1])
    
    if (var_34 s<= 0)
        var_54 = nullptr
    else
        var_54 = sub_5c0320(var_34)
    
    int32_t var_50_1 = var_34
    eax_26 = var_34
    var_28_4 = var_34

int32_t* ecx_13 = var_54
var_48 = &var_2c
int32_t esi_7 = 0
var_2c = ecx_13
void var_dc
void* var_44_5 = &var_dc
void* var_40_4 = &var_21
int32_t** var_3c_4 = &var_54
void* eax_29
int32_t edx_12
edx_12:eax_29 = sx.q(eax_26)
void* edx_15 = ((edx_12 & 3) + eax_29) & 0xfffffffc

if (edx_15 s> 0)
    float xmm6_1[0x4] = data_893280
    float xmm7_1[0x4] = data_893850
    int128_t* edi_3 = nullptr
    
    while (true)
        float xmm0_7[0x4] = xmm2_1
        float xmm0_8[0x4] = _mm_shuffle_ps(xmm0_7, xmm0_7, 0)
        float xmm1_3[0x4] = *(edi_3 + result_3)
        edi_3 = &edi_3[1]
        eax_29 = eax_25
        float xmm1_5[0x4] =
            _mm_div_ps(__mulps_xmmps_memps(xmm1_3, *(result_3 + (esi_7 << 2))), xmm0_8)
        float xmm0_9[0x4] = xmm2_1
        float xmm0_11[0x4] = var_a8
        float xmm4_4[0x4] = _mm_add_ps(
            _mm_div_ps(_mm_sub_ps(*(eax_29 + (esi_7 << 2)), xmm1_5), 
                _mm_shuffle_ps(xmm0_9, xmm0_9, 0)), 
            _mm_shuffle_ps(xmm0_11, xmm0_11, 0))
        float xmm1_7[0x4] = _mm_mul_ps(xmm7_1, xmm4_4)
        float xmm0_14[0x4] = _mm_cmpeq_ps(xmm4_4, xmm6_1, 1)
        float xmm3_2[0x4] = _mm_cmpeq_ps(xmm4_4, zx.o(0), 1)
        float xmm2_2[0x4] = _mm_rsqrt_ps(xmm4_4)
        *(ecx_13 + (esi_7 << 2)) = _mm_andnot_ps(_mm_andnot_ps(xmm3_2, xmm0_14), 
            _mm_mul_ps(
                _mm_mul_ps(
                    __addps_xmmps_memps(_mm_mul_ps(xmm1_7, _mm_mul_ps(xmm2_2, xmm2_2)), 
                        data_893610), 
                    xmm2_2), 
                xmm4_4))
        esi_7 += 4
        
        if (esi_7 s>= edx_15)
            break
        
        ecx_13 = var_2c
    
    edi = var_6c

sub_5c8970(eax_29, edx_15, &var_48, var_28_4)
var_30 = edi
sub_5c0220(&var_30, &var_5c)
var_30 = edi
sub_5c02a0(&var_30, &var_54)
int32_t* eax_32 = var_54

if (eax_32 != 0)
    free(eax_32[-1])

void* eax_33 = var_5c

if (eax_33 != 0)
    free(*(eax_33 - 4))

void* eax_34 = var_64

if (eax_34 != 0)
    free(*(eax_34 - 4))

void* result = result_1

if (result != 0)
    result = free(*(result - 4))

fsbase->NtTib.ExceptionList = ExceptionList
return result
