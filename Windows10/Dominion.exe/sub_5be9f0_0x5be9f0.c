// 函数: sub_5be9f0
// 地址: 0x5be9f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_769470
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_a4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2[1]
int32_t var_30 = ecx
*arg1 = 0
arg1[1] = 0
void* edx = nullptr
int32_t var_14_1 = 0

if (ecx != 0)
    if (ecx s<= 0)
        *arg1 = 0
        edx = nullptr
    else
        void* eax_3 = sub_5c0320(ecx)
        ecx = var_30
        edx = eax_3
        *arg1 = edx

arg1[1] = ecx
int32_t eax_4 = *arg2
int32_t var_90 = eax_4
int32_t var_7c = eax_4
int32_t var_78 = 0x3f800000
void* var_38 = edx
var_14_1.b = 5
void** var_50 = &var_38
void var_94
void* edi_1 = &var_94
void* var_4c = &var_94
void var_21
void* var_48 = &var_21
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = sx.q(ecx)
int32_t* var_44 = arg1
int32_t var_28 = 0
int32_t eax_8 = (eax_6 + (edx_1 & 3)) & 0xfffffffc

if (eax_8 s> 0)
    int32_t ecx_1 = 0
    int32_t var_2c_1 = 0
    
    while (true)
        float xmm0_1[0x4] = *(edi_1 + 0x1c)
        int128_t* eax_9 = *(edi_1 + 0x18)
        float xmm0_2[0x4] = _mm_shuffle_ps(xmm0_1, xmm0_1, 0)
        int128_t var_70 = sub_5be710(__addps_xmmps_memps(sub_5bc480(*(eax_9 + ecx_1)), xmm0_2))
        float xmm0_7[0x4] = sub_5bc5f0(&var_70)
        int32_t edx_3 = var_28
        var_28 = edx_3 + 4
        *(*var_50 + (edx_3 << 2)) = _mm_mul_ps(*(*(edi_1 + 4) + (edx_3 << 2)), xmm0_7)
        ecx_1 = var_2c_1 + 0x10
        var_2c_1 = ecx_1
        
        if (edx_3 + 4 s>= eax_8)
            break
        
        edi_1 = var_4c
    
    ecx = var_30

sub_5c6590(eax_8, eax_8, &var_50, ecx)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
