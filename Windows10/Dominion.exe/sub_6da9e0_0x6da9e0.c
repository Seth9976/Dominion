// 函数: sub_6da9e0
// 地址: 0x6da9e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_770ecd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_d4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_78 = arg2
int32_t esi = *(arg3 + 4)
int32_t eax_3 = arg4
int32_t var_74 = eax_3

if (esi == 0)
    int32_t var_54
    sub_69fd50(eax_3, "!Null\Null", &var_54, 2)
    int32_t var_14_1 = esi
    int32_t eax_4 = var_54
    char* const ecx_1 = &data_801800
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    eax_3, arg2 = sub_69f030(ecx_1, esi + 2)
    esi = eax_3
    int32_t var_14_2 = 1
    
    if (data_cf65bc != 0)
        eax_3 = var_54
        
        if (eax_3 != 0 && *eax_3 != 0)
            eax_3 = sub_63d4e0(&var_54)
            int32_t temp0_1 = *(eax_3 + 4)
            *(eax_3 + 4) -= 1
            
            if (temp0_1 == 1)
                eax_3, arg2 = sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
                var_54 = &data_801800
    
    int32_t var_14_3 = 0xffffffff
else if (*(esi + 4) != 2)
    sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
        "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*esi == 0)
    arg2.b = 0
    sub_69f4a0(eax_3, arg2.b, esi, 1)

int32_t* eax_5 = *esi
*(esi + 0x1c) += 1
void* ecx_5 = **eax_5
int32_t* result

if (ecx_5 != 0)
    int64_t xmm0_1 = *(arg3 + 8)
    float xmm1_1 = *(arg3 + 0x24)
    float xmm6_1[0x4] = *(arg3 + 0x14)
    float eax_6 = *(arg3 + 0x10)
    float xmm0_3 = *(ecx_5 + 0x40) * xmm1_1
    float xmm4_2 = xmm6_1[0] f* xmm6_1
    float xmm0_5 = *(ecx_5 + 0x44) * xmm1_1
    float var_a0_1[0x4] = xmm6_1
    float xmm0_7 = *(ecx_5 + 0x48) * xmm1_1
    float xmm1_3 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0xff)
    float var_50[0x4] = xmm6_1
    float xmm5_2 = xmm1_3 * xmm1_3
    float xmm0_9 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0x55)
    float xmm2_2 = xmm0_9 * xmm0_9
    float xmm7_2 = xmm0_9 * xmm1_3
    float xmm2_4 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0xaa)
    float xmm3_2 = xmm2_4 * xmm2_4
    float xmm3_4 = xmm0_9 f* xmm6_1
    float xmm2_5 = xmm2_4 f* *(arg3 + 0x14)
    float xmm6_3 = xmm2_4 * xmm1_3
    float xmm2_7 = xmm5_2 - xmm4_2
    float xmm2_9 = xmm2_4 * xmm0_9
    float xmm0_11 = (*(arg3 + 0x14)).d f* xmm1_3
    float var_40_1 = (xmm3_4 - xmm6_3) * (xmm0_5 + xmm0_5)
        + (xmm4_2 + xmm5_2 - xmm2_2 - xmm3_2) * xmm0_3
        + (xmm2_5 + xmm7_2) * (xmm0_7 + xmm0_7) f+ xmm0_1.d
    float var_3c_1 = (xmm6_3 + xmm3_4) * (xmm0_3 + xmm0_3) + (xmm2_7 + xmm2_2 - xmm3_2) * xmm0_5
        + (xmm0_7 + xmm0_7) * (xmm2_9 - xmm0_11) f+ xmm0_1:4.d
    float var_38_1 = (xmm0_5 + xmm0_5) * (xmm0_11 + xmm2_9) + (xmm2_5 - xmm7_2) * (xmm0_3 + xmm0_3)
        + (xmm2_7 - xmm2_2 + xmm3_2) * xmm0_7 + eax_6
    float xmm1_16 = *(arg3 + 0x24)
    float var_34_1 = (*(ecx_5 + 0x4c) f- *(ecx_5 + 0x40)) * xmm1_16
    float var_30_1 = (*(ecx_5 + 0x50) f- *(ecx_5 + 0x44)) * xmm1_16
    float var_2c_1 = (*(ecx_5 + 0x54) f- *(ecx_5 + 0x48)) * xmm1_16
    result = sub_6da750(eax_6, var_78, &var_50, var_74)
else
    result.b = 0

*(esi + 0x1c) -= 1
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
