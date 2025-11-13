// 函数: sub_4df350
// 地址: 0x4df350
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_763efb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_3 = *arg2
char* const result_4 = arg4
char* const result_1 = result_4

if (eax_3 != 0 && *eax_3 != 0)
    char* eax_4 = sub_63d4e0(arg2)
    int32_t esi = *(eax_4 + 8)
    sub_63d5e0(eax_4, esi + 2, arg2, 1)
    int16_t* ecx_2 = *arg2
    *(ecx_2 + esi) = 0x202c
    *(ecx_2 + esi + 2) = 0
    result_4 = result_1

sub_63d960(arg2, *(sub_571b30(result_4, 0x17) + 0x58))
char* result

if (arg5 != 0 && *arg5 != 0)
    result_1 = &data_801800
    int32_t esi_1 = 0
    int32_t var_8_1 = 0
    
    if (arg6 s> 0)
        do
            int32_t eax_8 = arg5[esi_1]
            
            if (eax_8 == 0)
                break
            
            sub_4df350(eax_8, 0, 0, eax_2)
            esi_1 += 1
        while (esi_1 s< arg6)
    
    result = sub_4df150(arg2, &result_1)
    int32_t var_8_2 = 1
    goto label_4df598

void* result_2 = sub_571b30(result_4, 0x17)
int32_t edx_2 = 0
void* ecx_8 = result_2 + 0xc8
int32_t eax_10
char* const result_3

while (true)
    int32_t esi_2 = *(ecx_8 - 0x20)
    
    if (esi_2 == 0)
        result_3 = result_1
    else if (esi_2 != 0xd || *ecx_8 == 0)
        edx_2 += 1
        ecx_8 += 0xb4
        
        if (edx_2 s< 8)
            continue
        else
            result_3 = result_1
    else
        int32_t eax_13 = edx_2 * 0xb4
        result_3 = *(eax_13 + result_2 + 0xbc)
        eax_10 = *(eax_13 + result_2 + 0xc0)
        
        if (eax_10 != 0)
            break
    
    int32_t edx_3 = 0
    void* eax_9 = result_2 + 0xc4
    
    while (true)
        int32_t esi_3 = *(eax_9 - 0x1c)
        
        if (esi_3 != 0)
            if (esi_3 == 0xd && *eax_9 != 0)
                int32_t eax_14 = edx_3 * 0xb4
                result_3 = *(eax_14 + result_2 + 0xbc)
                eax_10 = *(eax_14 + result_2 + 0xc0)
                break
            
            edx_3 += 1
            eax_9 += 0xb4
            
            if (edx_3 s< 8)
                continue
        
        eax_10 = 0
        break
    
    break

void* edi_2 = &result_3[eax_10]
int32_t esi_4 = 0
int32_t var_c94[0x320]

if (result_3 s< edi_2)
    void* edx_7 = (result_3 << 4) + 0x1c4 + arg3
    
    do
        int32_t eax_11 = *(edx_7 - 4)
        
        if (eax_11 == 0)
            break
        
        if (eax_11 == 1)
            var_c94[esi_4] = *edx_7
            esi_4 += 1
        
        result_3 = &result_3[1]
        edx_7 += 0x10
    while (result_3 s< edi_2)

result = result_2

if (*(result + 0x8c) == 0x121c)
    int32_t i = 0x11
    char** ecx_9 = arg3 + 0x2d4
    
    do
        result = ecx_9[-1]
        
        if (result == 0)
            break
        
        if (result == 1)
            result = *ecx_9
            var_c94[esi_4] = result
            esi_4 += 1
        
        i += 1
        ecx_9 = &ecx_9[4]
    while (i s<= 0x15)

if (esi_4 != 0)
    result_1 = &data_801800
    int32_t edi_3 = 0
    int32_t var_8_3 = 2
    
    if (esi_4 s> 0)
        do
            sub_4df350(var_c94[edi_3], 0, 0, eax_2)
            edi_3 += 1
        while (edi_3 s< esi_4)
    
    result = sub_4df150(arg2, &result_1)
    int32_t var_8_4 = 3
label_4df598:
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
