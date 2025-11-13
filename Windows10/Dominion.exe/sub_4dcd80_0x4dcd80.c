// 函数: sub_4dcd80
// 地址: 0x4dcd80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Tidy@ios_base@std@@AAEXXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1 = arg2
char* esi = arg3
char i

do
    i = *esi
    esi = &esi[1]
while (i != 0)
void* _MaxCount = esi - &esi[1]
int32_t ecx_1 = 0
void* edx = _MaxCount

if (edx != 0)
    char* edi_1 = arg3
    void* i_1
    
    do
        char eax_3 = *edi_1
        edi_1 = &edi_1[1]
        ecx_1 = ecx_1 u>> 8 ^ *(((zx.d(eax_3) ^ zx.d(ecx_1.b)) << 2) + &data_7ffd70)
        i_1 = edx
        edx -= 1
    while (i_1 != 1)

int32_t eax_6 = data_1597db8
char* result_5 = data_1597dbc & ecx_1
char* result_2 = result_5
char** edi_2 = *(eax_6 + (result_5 << 2))
int32_t* result

if (edi_2 == 0)
label_4dce1c:
    int32_t* eax_8 = sub_64bfd0(0x10)
    eax_8[3] += 1
    
    if (*eax_8 == 0)
        sub_64be70(eax_8)
    
    int32_t* ecx_4 = *eax_8
    char* result_6 = result_2
    *eax_8 = *ecx_4
    int32_t* result_3 = result_1
    *ecx_4 = arg3
    ecx_4[1] = _MaxCount
    ecx_4[2] = result_3
    ecx_4[3] = *(data_1597db8 + (result_6 << 2))
    result = data_1597db8
    result[result_6] = ecx_4
    data_1597dc0 += 1
else
    while (true)
        if (_MaxCount == edi_2[1] && strncmp(arg3, *edi_2, _MaxCount) == 0)
            result = result_1
            edi_2[2] = result
            break
        
        edi_2 = edi_2[3]
        
        if (edi_2 == 0)
            goto label_4dce1c

char* ecx_5 = arg4

if (ecx_5 != 0)
    result = data_147abfc
    
    if (result != 0)
        int32_t ebx_1 = result[0x82]
        int32_t edi_4 = 0
        int32_t edx_2 = result[0x81]
        int32_t var_1c_1 = edx_2
        
        if (ebx_1 s> 0)
            do
                int32_t var_34_2 = 0
                sub_4e3fa0(result, ecx_5, &result_2, *(edx_2 + (edi_4 << 3)), ecx_5)
                int32_t var_8_1 = 0
                sub_63e470(&result_2)
                char* result_4 = result_2
                char* result_7 = &data_801800
                
                if (result_4 != 0)
                    result_7 = result_4
                
                int32_t eax_13 = sub_69c4d0(result_7, 0) & data_1597dc8
                int32_t* esi_2 = *(data_1597dc4 + (eax_13 << 2))
                
                if (esi_2 == 0)
                label_4dcf13:
                    result = sub_4e9f80(&data_1597dc4, &result_2, &result_1)
                else
                    while (true)
                        result = sub_63d7f0(&result_2, esi_2)
                        
                        if (result.b == 0)
                            break
                        
                        esi_2 = esi_2[2]
                        
                        if (esi_2 == 0)
                            goto label_4dcf13_1
                    
                    if (esi_2 == 0xfffffffc)
                    label_4dcf13_1:
                        result = sub_4e9f80(&data_1597dc4, &result_2, &result_1)
                
                int32_t var_8_2 = 1
                
                if (data_cf65bc != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_2)
                        int32_t temp2_1 = result[1]
                        result[1] -= 1
                        
                        if (temp2_1 == 1)
                            result = sub_64c080(result, result[3] + 0x10)
                            result_2 = &data_801800
                
                ecx_5 = arg4
                edi_4 += 1
                edx_2 = var_1c_1
                int32_t var_8_3 = 0xffffffff
            while (edi_4 s< ebx_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
