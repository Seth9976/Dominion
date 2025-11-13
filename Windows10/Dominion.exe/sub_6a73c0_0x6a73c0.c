// 函数: sub_6a73c0
// 地址: 0x6a73c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f6c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = strrchr(arg2, 0x2e)
char const* const var_38
int32_t var_34_1
char const* const var_30
char* ecx

if (eax_3 != 0)
    if (arg2 != 0)
        char* const var_18 = &data_801800
        int32_t eax_5 = sub_63db30(&var_18, arg2, eax_3 - arg2)
        char* const esi_1 = var_18
        char* const result_3 = &data_801800
        char* edx = &data_801800
        
        if (esi_1 != 0)
            edx = esi_1
        
        char* result_1
        sub_69fd50(eax_5, edx, &result_1, 3)
        char* result_2 = result_1
        
        if (result_2 != 0)
            result_3 = result_2
        
        int32_t eax_6 = sub_69f030(result_3, 3)
        *(arg1 + 0x1c) = eax_6
        int32_t* ecx_5 = *sub_5af880(eax_6)
        int32_t eax_8 = *ecx_5
        float xmm2_1 = ecx_5[3] f* ecx_5[2]
        double xmm0_2[0x2] = _mm_cvtepi32_pd(zx.q(eax_8)) f+ *((eax_8 u>> 0x1f << 3) + &data_893660)
        int32_t eax_10 = ecx_5[1]
        float xmm1 = _mm_cvtpd_ps(xmm0_2)
        float xmm0_6 =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_10)) f+ *((eax_10 u>> 0x1f << 3) + &data_893660))
        *(arg1 + 0x20) = int.d(xmm1 * xmm2_1)
        char* result = int.d(xmm0_6 * xmm2_1)
        *(arg1 + 0x24) = result
        int32_t var_8_1 = 0
        
        if (data_cf65bc != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_1)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
                    result_1 = &data_801800
        
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
            result = sub_63d4e0(&var_18)
            int32_t temp1_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp1_1 == 1)
                result = sub_64c080(result, *(result + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    var_30 = "XString::XString"
    var_34_1 = 0x9a
    var_38 = "C:\x\ax2017\Engine\xString.cpp"
    ecx = &data_871e0c
else
    var_30 = "_spAtlasPage_createTexture"
    var_34_1 = 0x1c
    var_38 = "C:\x\ax2017\Engine\Spine.cpp"
    ecx = &data_879c30

sub_63b870(eax_3, &data_801800, ecx, var_38, var_34_1, var_30)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
