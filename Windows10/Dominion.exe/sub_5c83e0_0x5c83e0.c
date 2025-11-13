// 函数: sub_5c83e0
// 地址: 0x5c83e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76994d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_9c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint128_t xmm1 = *arg2
int64_t xmm0 = arg2[1].q
int32_t* esi = *arg3
int32_t* var_40 = esi
int32_t xmm1_1 = _mm_bsrli_si128(xmm1, 8)
int64_t var_68 = xmm0
float xmm0_1 = *arg5

if (xmm1_1 u<= 0x3fffffff)
    int32_t eax_4 = xmm1_1 << 2
    void* result_1
    void* result_2
    
    if (eax_4 u<= 0x20000)
        __alloca_probe_16(eax_4 + 0xf)
        void var_90
        result_2 = &var_90
        result_1 = &var_90
    label_5c84ad:
        void* result_3 = result_2
        int32_t var_58 = xmm1_1
        int32_t eax_8
        eax_8.b = xmm1_1 << 2 u> 0x20000
        char var_54 = eax_8.b
        int32_t var_14_1 = 0
        int32_t i = 0
        int32_t i_1 = 0
        int32_t eax_10 = *(xmm1:0xc.d + 4)
        
        if (xmm1_1 s>= 4)
            int32_t edi_1 = 2
            void* var_44_1 = result_2 + 8
            void* edx_2 = result_2 + 8
            
            do
                edx_2 += 0x10
                int32_t ecx = xmm1.d
                *(edx_2 - 0x18) = *(ecx + ((eax_10 * i) << 2))
                *(edx_2 - 0x14) = *(ecx + (((edi_1 - 1) * eax_10) << 2))
                *(edx_2 - 0x10) = *(ecx + ((eax_10 * edi_1) << 2))
                int32_t eax_23 = (edi_1 + 1) * eax_10
                edi_1 += 4
                i = i_1 + 4
                *(edx_2 - 0xc) = *(ecx + (eax_23 << 2))
                i_1 = i
            while (i s< xmm1_1 - 3)
            
            esi = var_40
            result_2 = result_1
            
            if (i s< xmm1_1)
                goto label_5c8553
        else if (xmm1_1 s> 0)
        label_5c8553:
            int32_t* edi_2 = xmm1.d + ((eax_10 * i) << 2)
            
            do
                int32_t eax_26 = *edi_2
                edi_2 = &edi_2[eax_10]
                *(result_2 + (i << 2)) = eax_26
                i += 1
            while (i s< xmm1_1)
            
            esi = var_40
        
        uint128_t var_78
        var_78:4.q = *(arg4 + 0x10)
        int32_t ecx_2 = *(_mm_bsrli_si128(*arg4, 0xc) + 4)
        int32_t var_a0_2 = ecx_2
        float* var_a8 = *arg4
        int32_t ecx_3 = esi[2]
        int32_t var_48 = *esi
        void* result_4 = result_2
        int32_t edx_3 = esi[1]
        int32_t var_2c_3 = 1
        int32_t var_44_2 = edx_3
        void* result = sub_5c3d60(&var_48, edx_3, ecx_3, &var_48, &result_4, var_a8, ecx_2, xmm0_1)
        
        if (eax_4 u> 0x20000)
            result = result_1
            
            if (result != 0)
                result = free(*(result - 4))
        
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    int32_t eax_7 = malloc(eax_4 + 0x10)
    
    if (eax_7 != 0)
        void* edx_1 = eax_7 & 0xfffffff0
        result_2 = edx_1 + 0x10
        result_1 = result_2
        *(result_2 - 4) = eax_7
        
        if (edx_1 != 0xfffffff0)
            goto label_5c84ad

sub_5b0890()
noreturn
