// 函数: sub_627f50
// 地址: 0x627f50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0?$_Mpunct@G@std@@QAE@ABV_Locinfo@1@I_N1@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* result_1 = arg3
int32_t ebx
int32_t var_18 = ebx
int32_t var_20 = arg4
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_63d720(&result_1, "btn_ok")
char* const result_2 = &data_801800
char* result_3 = result_1
char* const result_4 = &data_801800
char* edx_1 = *(arg5 + 4)

if (result_3 != 0)
    result_4 = result_3

int32_t edi

while (true)
    ebx.b = *edx_1
    char temp0_1 = *result_4
    bool c_1 = ebx.b u< temp0_1
    
    if (ebx.b == temp0_1)
        if (ebx.b == 0)
            edi = 0
            break
        
        ebx.b = edx_1[1]
        char temp1_1 = result_4[1]
        c_1 = ebx.b u< temp1_1
        
        if (ebx.b == temp1_1)
            edx_1 = &edx_1[2]
            result_4 = &result_4[2]
            
            if (ebx.b != 0)
                continue
            
            edi = 0
            break
    
    edi = sbb.d(arg4, arg4, c_1) | 1
    break

int32_t var_8_1 = 0

if (data_cf65bc != 0 && result_3 != 0 && *result_3 != 0)
    char* eax_3 = sub_63d4e0(&result_1)
    int32_t temp2_1 = *(eax_3 + 4)
    *(eax_3 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)

int32_t var_8_2 = 0xffffffff

if (edi == 0)
    sub_5cb4f0(edi + 2, 0)

sub_63d720(&result_1, "btn_okFake")
char* ecx_5 = *(arg5 + 4)
char* result = result_1

if (result != 0)
    result_2 = result

int32_t esi_1

while (true)
    char edx_4 = *ecx_5
    char temp3_1 = *result_2
    bool c_2 = edx_4 u< temp3_1
    
    if (edx_4 == temp3_1)
        if (edx_4 == 0)
            esi_1 = 0
            break
        
        edx_4 = ecx_5[1]
        char temp4_1 = result_2[1]
        c_2 = edx_4 u< temp4_1
        
        if (edx_4 == temp4_1)
            ecx_5 = &ecx_5[2]
            result_2 = &result_2[2]
            
            if (edx_4 != 0)
                continue
            
            esi_1 = 0
            break
    
    esi_1 = sbb.d(result_2, result_2, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp5_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

int32_t var_8_4 = 0xffffffff

if (esi_1 == 0)
    sub_5cb4f0(esi_1 + 2, 0)

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
