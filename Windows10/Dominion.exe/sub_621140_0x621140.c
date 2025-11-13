// 函数: sub_621140
// 地址: 0x621140
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QAE@AAV12@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* result_1 = arg3
int32_t ebx
int32_t var_18 = ebx
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_63d720(&result_1, "btnBack")
char* const result_2 = &data_801800
char* result_3 = result_1
char* const result_5 = &data_801800
char* edx = *(arg4 + 4)

if (result_3 != 0)
    result_5 = result_3

int32_t ecx_2

while (true)
    ebx.b = *edx
    char temp0_1 = *result_5
    bool c_1 = ebx.b u< temp0_1
    
    if (ebx.b == temp0_1)
        if (ebx.b == 0)
            ecx_2 = 0
            break
        
        ebx.b = edx[1]
        char temp1_1 = result_5[1]
        c_1 = ebx.b u< temp1_1
        
        if (ebx.b == temp1_1)
            edx = &edx[2]
            result_5 = &result_5[2]
            
            if (ebx.b != 0)
                continue
            
            ecx_2 = 0
            break
    
    ecx_2 = sbb.d(result_5, result_5, c_1) | 1
    break

if (ecx_2 == 0 || *(arg4 + 0x18) == 2)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && result_3 != 0 && *result_3 != 0)
    int32_t* eax_3 = sub_63d4e0(&result_1)
    int32_t temp2_1 = eax_3[1]
    eax_3[1] -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, eax_3[3] + 0x10)

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    edx.b = 0
    sub_4d46e0(5, edx.b)

sub_63d720(&result_1, "btn_start")
char* result_4 = result_1
char* const result_6 = &data_801800
char* edx_3 = *(arg4 + 4)

if (result_4 != 0)
    result_6 = result_4

int32_t edi_1

while (true)
    ebx.b = *edx_3
    char temp3_1 = *result_6
    bool c_2 = ebx.b u< temp3_1
    
    if (ebx.b == temp3_1)
        if (ebx.b == 0)
            edi_1 = 0
            break
        
        ebx.b = edx_3[1]
        char temp4_1 = result_6[1]
        c_2 = ebx.b u< temp4_1
        
        if (ebx.b == temp4_1)
            edx_3 = &edx_3[2]
            result_6 = &result_6[2]
            
            if (ebx.b != 0)
                continue
            
            edi_1 = 0
            break
    
    edi_1 = sbb.d(arg4, arg4, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && result_4 != 0 && *result_4 != 0)
    int32_t* eax_4 = sub_63d4e0(&result_1)
    int32_t temp5_1 = eax_4[1]
    eax_4[1] -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_4, eax_4[3] + 0x10)

int32_t var_8_4 = 0xffffffff

if (edi_1 == 0)
    edx_3.b = 0
    sub_4d46e0(edi_1 + 5, edx_3.b)

sub_63d720(&result_1, "btn_disable")
char* ecx_10 = *(arg4 + 4)
char* result = result_1

if (result != 0)
    result_2 = result

int32_t esi_1

while (true)
    char edx_6 = *ecx_10
    char temp6_1 = *result_2
    bool c_3 = edx_6 u< temp6_1
    
    if (edx_6 == temp6_1)
        if (edx_6 == 0)
            esi_1 = 0
            break
        
        edx_6 = ecx_10[1]
        char temp7_1 = result_2[1]
        c_3 = edx_6 u< temp7_1
        
        if (edx_6 == temp7_1)
            ecx_10 = &ecx_10[2]
            result_2 = &result_2[2]
            
            if (edx_6 != 0)
                continue
            
            esi_1 = 0
            break
    
    esi_1 = sbb.d(result_2, result_2, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp8_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

int32_t var_8_6 = 0xffffffff

if (esi_1 == 0)
    void* eax_6 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    *(eax_6 + 0x4240) = *(eax_6 + 0x4240) == 0
    data_cc8dc8
    sub_4d8ad0(esi_1)

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
