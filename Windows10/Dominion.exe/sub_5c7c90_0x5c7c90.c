// 函数: sub_5c7c90
// 地址: 0x5c7c90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7698cd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_e4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t xmm0 = *arg3
uint128_t xmm1 = *arg2
int64_t var_5c = arg3[1].q
int64_t xmm0_2 = arg2[1].q
int32_t esi = _mm_bsrli_si128(xmm1, 8)
int64_t var_78 = xmm0_2
float xmm0_3 = *arg5

if (esi u<= 0x3fffffff)
    int32_t eax_4 = esi << 2
    int32_t* var_34_1
    int32_t* edi_1
    
    if (eax_4 u<= 0x20000)
        __alloca_probe_16(eax_4 + 0xf)
        int32_t __saved_edi
        edi_1 = &__saved_edi
        var_34_1 = &__saved_edi
    label_5c7d6c:
        int32_t* var_50 = edi_1
        int32_t var_4c = esi
        int32_t eax_8
        eax_8.b = esi << 2 u> 0x20000
        char var_48 = eax_8.b
        int32_t var_14_1 = 0
        int32_t i = 0
        int32_t i_1 = 0
        int32_t edx = *(xmm1:0xc.d + 4)
        
        if (esi s>= 4)
            void* esi_1 = &edi_1[2]
            int32_t edi_4 = 2
            
            do
                esi_1 += 0x10
                int32_t ecx = xmm1.d
                *(esi_1 - 0x18) = *(ecx + ((edx * i) << 2))
                *(esi_1 - 0x14) = *(ecx + (((edi_4 - 1) * edx) << 2))
                *(esi_1 - 0x10) = *(ecx + ((edx * edi_4) << 2))
                int32_t eax_21 = (edi_4 + 1) * edx
                edi_4 += 4
                i = i_1 + 4
                *(esi_1 - 0xc) = *(ecx + (eax_21 << 2))
                i_1 = i
            while (i s< esi - 3)
            
            edi_1 = var_34_1
            
            if (i s< esi)
                goto label_5c7e05
        else if (esi s> 0)
        label_5c7e05:
            int32_t* edx_2 = xmm1.d + ((edx * i) << 2)
            
            do
                int32_t eax_25 = *edx_2
                edx_2 = &edx_2[edx]
                edi_1[i] = eax_25
                i += 1
            while (i s< esi)
        
        int128_t xmm0_4 = *arg4
        void* xmm1_3 = _mm_bsrli_si128(*(arg4 + 0x10), 8)
        int128_t var_c8 = xmm0_4
        int128_t xmm0_5 = *(arg4 + 0x20)
        int32_t edx_3 = *(xmm1_3 + 4)
        int32_t* var_2c = edi_1
        int32_t var_28_2 = 1
        int128_t var_a8 = xmm0_5
        int32_t ecx_2 = *(xmm0:0xc.d + 4)
        int32_t var_e8_2 = ecx_2
        float* var_f0 = *arg4
        int32_t var_3c = xmm0.d
        int32_t var_38_2 = ecx_2
        int32_t result =
            sub_5c3d60(&var_3c, xmm0:4.d, xmm0:8.d, &var_3c, &var_2c, var_f0, edx_3, xmm0_3)
        
        if (eax_4 u> 0x20000 && edi_1 != 0)
            result = free(edi_1[-1])
        
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    int32_t eax_7 = malloc(eax_4 + 0x10)
    
    if (eax_7 != 0)
        void* edi_3 = eax_7 & 0xfffffff0
        edi_1 = edi_3 + 0x10
        var_34_1 = edi_1
        edi_1[-1] = eax_7
        
        if (edi_3 != 0xfffffff0)
            goto label_5c7d6c

sub_5b0890()
noreturn
