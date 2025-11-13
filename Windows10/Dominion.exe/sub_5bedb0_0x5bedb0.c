// 函数: sub_5bedb0
// 地址: 0x5bedb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7694f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_f4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
int32_t* var_74 = esi
int32_t var_14_1 = 0
char* var_10c
void* arg_4
char** eax_4
int32_t edx_1
eax_4, edx_1 = sub_5be8d0(&ExceptionList, &arg_4, &var_10c, "/kernel")
int32_t* eax_5 = sub_5b10e0(eax_4, edx_1, arg3, var_10c)
char** eax_6
int32_t edx_3
eax_6, edx_3 = sub_5be8d0(eax_5.b, &arg_4, &var_10c, "/bias")
int32_t* eax_7 = sub_5b10e0(eax_6, edx_3, arg3)
int32_t* var_30 = esi[2]
int128_t* result_1 = nullptr
int128_t* result_7 = nullptr
void* var_70
__builtin_memset(&var_70, 0, 0x18)
var_14_1.b = 4
int32_t* var_90 = esi
int128_t* result_18 = esi[1]
int128_t* result_19 = result_18
int64_t var_88
int32_t** var_84
int32_t var_7c
int32_t* var_54
int128_t* result_5
void* var_28
void var_21
int32_t ecx_4

if (result_18 != 0)
    int128_t* result_4
    
    if (result_18 s<= 0)
        result_4 = nullptr
    else
        result_4 = sub_5c0320(result_18)
        result_18 = result_19
    
    result_7 = result_18
    var_54 = &result_5
    int32_t** var_50_1 = &var_90
    int32_t eax_10
    int32_t edx_4
    edx_4:eax_10 = sx.q(result_18)
    void* var_4c_1 = &var_21
    int32_t edx_5 = edx_4 & 3
    result_1 = result_4
    int128_t** var_48_1 = &result_1
    result_5 = result_4
    void* eax_11 = nullptr
    ecx_4 = (edx_5 + eax_10) & 0xfffffffc
    var_28 = nullptr
    int32_t var_78_1 = ecx_4
    
    if (ecx_4 s> 0)
        while (true)
            int32_t* esi_1 = var_90
            var_84 = *esi_1 + (eax_11 << 2)
            int32_t eax_14 = esi_1[1]
            var_7c = eax_14
            int128_t xmm0_1
            edx_5, xmm0_1 = sub_5c8a00(eax_14, edx_5, &var_88:4, esi_1[2])
            void* eax_15 = var_28
            ecx_4 = var_78_1
            *(result_4 + (eax_15 << 2)) = xmm0_1
            eax_11 = eax_15 + 4
            var_28 = eax_11
            
            if (eax_11 s>= ecx_4)
                break
            
            result_4 = result_5
        
        esi = var_74
    
    result_18 = result_19
else
    result_5 = nullptr
    var_54 = &result_5
    int32_t** var_50 = &var_90
    void* var_4c = &var_21
    int32_t* var_48 = &result_1
    ecx_4 = 0

sub_5c8640(result_18, ecx_4, &var_54, result_18)
int32_t* var_80 = esi
int32_t var_a4
int32_t var_58 = var_a4
var_54 = var_84
int32_t* var_50_2 = esi
int32_t var_94
int32_t var_48_2 = var_94
int128_t* result_12
int128_t* result_8 = result_12
var_88 = var_54.q
int32_t var_80_1 = var_7c
int128_t* result_11 = esi[1]
result_5 = result_8

if (result_8 != result_11)
    void* eax_18 = var_70
    
    if (eax_18 != 0)
        free(*(eax_18 - 4))
    
    if (result_11 s<= 0)
        var_70 = nullptr
    else
        var_70 = sub_5c0320(result_11)
    
    int128_t* result_13 = result_11
    result_8 = result_11
    result_5 = result_11

void* edi_1 = var_70
var_54 = &var_28
int32_t eax_20
int32_t edx_8
edx_8:eax_20 = sx.q(result_8)
int32_t edx_9 = edx_8 & 3
int64_t* var_50_3 = &var_88
var_28 = edi_1
void* var_4c_2 = &var_21
int32_t eax_22 = (eax_20 + edx_9) & 0xfffffffc
void** var_48_3 = &var_70
int32_t var_78_2 = eax_22

if (eax_22 s> 0)
    int32_t esi_2 = 0
    
    while (true)
        int32_t** var_a0 = esi_2
        int32_t var_98_1 = 0
        int32_t var_94_1 = esi_2
        int32_t* var_a4_1 = *var_84
        int32_t** eax_24 = var_84[1]
        var_a0 = eax_24
        void var_a8
        int128_t xmm0_4
        edx_9, xmm0_4 = sub_5c8af0(eax_24, edx_9, &var_a8, var_84[2])
        eax_22 = var_78_2
        *(edi_1 + (esi_2 << 2)) = xmm0_4
        esi_2 += 4
        
        if (esi_2 s>= eax_22)
            break
        
        edi_1 = var_28
    
    esi = var_74

sub_5c8740(eax_22, eax_22, &var_54, result_5)
int128_t* result_2 = result_1
int32_t* xmm2_1 = _mm_cvtepi32_ps(zx.o(var_30))
int128_t* result_14
int128_t* result_9 = result_14
result_5 = result_9
var_30 = xmm2_1
int32_t* var_4c_3 = xmm2_1
void* var_68

if (result_9 != result_7)
    void* eax_25 = var_68
    
    if (eax_25 != 0)
        free(*(eax_25 - 4))
    
    if (result_7 s<= 0)
        var_68 = nullptr
    else
        var_68 = sub_5c0320(result_7)
    
    xmm2_1 = var_30
    result_9 = result_7
    int128_t* result_15 = result_7
    result_5 = result_9

void* ecx_17 = var_68
var_88.d = &var_28
var_84 = &var_54
void* var_80_2 = &var_21
void** var_7c_1 = &var_68
int128_t* result_6
int32_t edx_11
edx_11:result_6 = sx.q(result_9)
var_28 = ecx_17
int32_t edx_13 = 0
void* edi_4 = ((edx_11 & 3) + result_6) & 0xfffffffc

if (edi_4 s> 0)
    while (true)
        result_6 = result_2
        float xmm0_5[0x4] = var_4c_3
        float xmm0_6[0x4] = _mm_shuffle_ps(xmm0_5, xmm0_5, 0)
        *(ecx_17 + (edx_13 << 2)) = _mm_div_ps(*(result_6 + (edx_13 << 2)), xmm0_6)
        edx_13 += 4
        
        if (edx_13 s>= edi_4)
            break
        
        ecx_17 = var_28

sub_5c88b0(result_6, edi_4, &var_88, result_5)
void* eax_27 = var_70
int128_t* result_3 = result_1
int128_t* result_16
int128_t* result_10 = result_16
int32_t var_b0 = 0x3727c5ac
result_5 = result_10
void* var_60

if (result_10 != result_7)
    void* eax_28 = var_60
    
    if (eax_28 != 0)
        free(*(eax_28 - 4))
    
    if (result_7 s<= 0)
        var_60 = nullptr
    else
        var_60 = sub_5c0320(result_7)
    
    int128_t* result_17 = result_7
    result_10 = result_7
    result_5 = result_7

void* ecx_20 = var_60
var_54 = &var_28
int32_t edi_6 = 0
var_28 = ecx_20
void var_e4
void* var_50_5 = &var_e4
void* var_4c_4 = &var_21
void** var_48_4 = &var_60
void* eax_30
int32_t edx_15
edx_15:eax_30 = sx.q(result_10)
void* edx_18 = ((edx_15 & 3) + eax_30) & 0xfffffffc

if (edx_18 s> 0)
    float xmm6_1[0x4] = data_893280
    float xmm7_1[0x4] = data_893850
    int32_t esi_3 = 0
    
    while (true)
        float xmm0_7[0x4] = xmm2_1
        float xmm0_8[0x4] = _mm_shuffle_ps(xmm0_7, xmm0_7, 0)
        float xmm1_3[0x4] = *(result_3 + esi_3)
        esi_3 += 0x10
        eax_30 = eax_27
        float xmm1_5[0x4] =
            _mm_div_ps(__mulps_xmmps_memps(xmm1_3, *(result_3 + (edi_6 << 2))), xmm0_8)
        float xmm0_9[0x4] = xmm2_1
        float xmm0_11[0x4] = var_b0
        float xmm4_4[0x4] = _mm_add_ps(
            _mm_div_ps(_mm_sub_ps(*(eax_30 + (edi_6 << 2)), xmm1_5), 
                _mm_shuffle_ps(xmm0_9, xmm0_9, 0)), 
            _mm_shuffle_ps(xmm0_11, xmm0_11, 0))
        float xmm0_14[0x4] = _mm_cmpeq_ps(xmm4_4, xmm6_1, 1)
        float xmm3_2[0x4] = _mm_cmpeq_ps(xmm4_4, zx.o(0), 1)
        float xmm2_2[0x4] = _mm_rsqrt_ps(xmm4_4)
        *(ecx_20 + (edi_6 << 2)) = _mm_andnot_ps(_mm_andnot_ps(xmm3_2, xmm0_14), 
            _mm_mul_ps(
                _mm_mul_ps(
                    __addps_xmmps_memps(
                        _mm_mul_ps(_mm_mul_ps(xmm2_2, xmm2_2), _mm_mul_ps(xmm7_1, xmm4_4)), 
                        data_893610), 
                    xmm2_2), 
                xmm4_4))
        edi_6 += 4
        
        if (edi_6 s>= edx_18)
            break
        
        ecx_20 = var_28
    
    esi = var_74

sub_5c8970(eax_30, edx_18, &var_54, result_5)
var_30 = esi
sub_5c0220(&var_30, &var_68)
var_30 = esi
sub_5c02a0(&var_30, &var_60)
int32_t edi_7 = 0
int32_t ecx_24 = esi[2]
int32_t edx_19 = esi[1]
int32_t eax_34 = *eax_5
void* eax_35 = *esi
var_28 = eax_35

if (ecx_24 s> 0)
    var_30 = edx_19 << 2
    
    do
        int32_t ecx_26 = 0
        
        if (edx_19 s> 0)
            do
                eax_35 += 4
                ecx_26 += 1
                *(eax_35 - 4) = *(eax_34 + (edi_7 << 2)) f* *(eax_35 - 4)
                edx_19 = esi[1]
            while (ecx_26 s< edx_19)
            
            eax_35 = var_28
        
        eax_35 += var_30
        edi_7 += 1
        ecx_24 = esi[2]
        var_28 = eax_35
    while (edi_7 s< ecx_24)

int32_t i = 0
int32_t edx_21 = esi[1]
int32_t eax_37 = *eax_7
void* eax_38 = *esi
var_28 = eax_38

if (ecx_24 s> 0)
    int32_t ecx_27 = edx_21 << 2
    
    do
        int32_t ecx_28 = 0
        
        if (edx_21 s> 0)
            do
                ecx_28 += 1
                *eax_38 = *(eax_37 + (i << 2)) f+ *eax_38
                eax_38 += 4
                edx_21 = esi[1]
            while (ecx_28 s< edx_21)
            
            eax_38 = var_28
        
        eax_38 += ecx_27
        i += 1
        var_28 = eax_38
    while (i s< esi[2])

void* eax_39 = var_60

if (eax_39 != 0)
    free(*(eax_39 - 4))

void* eax_40 = var_68

if (eax_40 != 0)
    free(*(eax_40 - 4))

void* eax_41 = var_70

if (eax_41 != 0)
    free(*(eax_41 - 4))

int128_t* result = result_1

if (result != 0)
    result = free(*(result - 4))

if (arg4 u> 0xf)
    void* edx_23 = arg_4
    int32_t ecx_30 = arg4 + 1
    void* eax_42 = edx_23
    
    if (ecx_30 u>= 0x1000)
        edx_23 = *(eax_42 - 4)
        ecx_30 += 0x23
        
        if (eax_42 - edx_23 - 4 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    int32_t var_f8_16 = ecx_30
    result = operator new(edx_23)

fsbase->NtTib.ExceptionList = ExceptionList
return result
