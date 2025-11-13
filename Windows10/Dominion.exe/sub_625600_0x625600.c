// 函数: sub_625600
// 地址: 0x625600
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76b830
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t esi
int32_t var_12c = esi
int32_t __saved_ebp
int32_t var_134 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_138 = sub_63c090()
char* result_1
sub_63df30(&result_1, "%sdominion.png")
int32_t var_8_1 = 0
char* const result_3 = &data_801800
char* lpFileName_1 = result_1
char* const lpFileName = &data_801800

if (lpFileName_1 != 0)
    lpFileName = lpFileName_1

uint8_t buffer
GetFullPathNameA(lpFileName, 0x104, &buffer, nullptr)
char* result_2 = result_1

if (result_2 == 0 || result_2 != &buffer)
    uint8_t* esi_1 = &buffer
    uint8_t i
    
    do
        i = *esi_1
        esi_1 = &esi_1[1]
    while (i != 0)
    
    void var_11b
    esi = esi_1 - &var_11b
    
    if (esi_1 != &var_11b)
        sub_63d5e0(result_2, esi, &result_1, 0)
        memcpy(result_1, &buffer, esi + 1)
        result_2 = result_1
    else
        if (data_cf65bc != esi && result_2 != 0 && *result_2 != i)
            char* eax_4 = sub_63d4e0(&result_1)
            int32_t temp3_1 = *(eax_4 + 4)
            *(eax_4 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
        
        result_2 = &data_801800
        result_1 = &data_801800

HANDLE result

if (arg1 == 0)
    if (result_2 != 0)
        result_3 = result_2
    
    sub_4b9480()
    result = sub_6364e0(esi, result_3)
else
    if (arg1 != 1)
        sub_63b870(result_2, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            0xed8b, "TwitterExport")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (result_2 != 0)
        result_3 = result_2
    
    result = sub_635b90(sub_61dad0(), result_3)

int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp4_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp4_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
