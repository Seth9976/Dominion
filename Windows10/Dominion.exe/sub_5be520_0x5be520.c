// 函数: sub_5be520
// 地址: 0x5be520
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
int32_t esi_1 = arg2[1]
int32_t var_30 = esi_1
*arg1 = 0
arg1[1] = 0
int32_t var_14_1 = 0
struct std::exception::std::bad_alloc::VTable* exceptionObject
void* ecx_1

if (esi_1 == 0)
    var_30 = esi_1
    ecx_1 = nullptr
else
    if (divs.dp.d(0x7fffffff, esi_1) s< 1)
        sub_5c8e10(&exceptionObject)
        _CxxThrowException(&exceptionObject, &data_8c059c)
        noreturn
    
    if (esi_1 s<= 0)
        *arg1 = 0
        ecx_1 = nullptr
    else
        ecx_1 = sub_5c0320(esi_1)
        *arg1 = ecx_1

arg1[1] = esi_1
int32_t eax_7 = *arg2
int32_t var_90 = eax_7
int32_t var_7c = eax_7
int32_t var_78 = 0x3f800000
void* var_38 = ecx_1
var_14_1.b = 5
void** var_50 = &var_38
void var_94
exceptionObject = &var_94
void var_21
void* var_48 = &var_21
int32_t eax_9
int32_t edx_2
edx_2:eax_9 = sx.q(esi_1)
int32_t* var_44 = arg1
int32_t var_28 = 0
int32_t eax_11 = (eax_9 + (edx_2 & 3)) & 0xfffffffc

if (eax_11 s> 0)
    int32_t ecx_2 = 0
    void* exceptionObject_1 = &var_94
    int32_t var_2c_1 = 0
    
    while (true)
        float xmm0_1[0x4] = *(exceptionObject_1 + 0x1c)
        int128_t* eax_12 = *(exceptionObject_1 + 0x18)
        float xmm0_2[0x4] = _mm_shuffle_ps(xmm0_1, xmm0_1, 0)
        int128_t var_70 = sub_5be710(__addps_xmmps_memps(sub_5bc480(*(eax_12 + ecx_2)), xmm0_2))
        float xmm0_7[0x4] = sub_5bc5f0(&var_70)
        int32_t edx_4 = var_28
        var_28 = edx_4 + 4
        *(*var_50 + (edx_4 << 2)) = _mm_mul_ps(*(*(exceptionObject_1 + 4) + (edx_4 << 2)), xmm0_7)
        ecx_2 = var_2c_1 + 0x10
        var_2c_1 = ecx_2
        
        if (edx_4 + 4 s>= eax_11)
            break
        
        exceptionObject_1 = exceptionObject
    
    esi_1 = var_30

sub_5c6590(eax_11, eax_11, &var_50, esi_1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
