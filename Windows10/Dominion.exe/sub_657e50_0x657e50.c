// 函数: sub_657e50
// 地址: 0x657e50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76cf9d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = *(arg1 + 0x16cc)
float xmm2 = *(data_147abe8 + 0x2c)
float xmm1_1 = xmm2 f- *(arg1 + 0x370)
bool cond:0 = *(arg1 + 0x360) f+ *(arg1 + 0x35c) > xmm1_1
float var_18 = xmm1_1
float xmm2_1

if (cond:0 || *(arg1 + 0x350) s> 1)
    float xmm0_2 = sub_67f6b0(arg1 + 0x2e4, xmm2 f- *(arg1 + 0x36c))
    xmm2_1 = (sub_67f6b0(arg1 + 0x320, var_18) - xmm0_2) * sub_64c3c0(arg1 + 0x35c, var_18) + xmm0_2
else
    xmm2_1 = *(arg1 + 0x320)

float var_14_2 = xmm2_1 f* *(arg1 + 0x1620)
int32_t eax_4
int32_t ecx_4
eax_4, ecx_4 = sub_63d720(&var_18, U"M")
int32_t var_38 = ecx_4
int32_t var_8_1 = 0
int32_t var_3c = data_c23bf4
int32_t xmm0_5 = sub_6b7420(eax_4, *(arg1 + 0x1508), ecx_4)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    float eax_5 = var_18
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_63d4e0(&var_18)
        int32_t temp0_1 = *(eax_6 + 4)
        *(eax_6 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)

int32_t var_1c_1 = xmm0_5
fsbase->NtTib.ExceptionList = ExceptionList
return result
