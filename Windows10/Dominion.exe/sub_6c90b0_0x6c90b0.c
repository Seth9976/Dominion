// 函数: sub_6c90b0
// 地址: 0x6c90b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7706c6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2b8 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = arg3
char* var_2a4 = esi
char* const var_2a0
int32_t* eax_3 = sub_6c4220(&var_2a0, esi)
int32_t var_8_1 = 0
sub_63d850(data_147d094, eax_3)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* eax_4 = var_2a0
    
    if (eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_63d4e0(&var_2a0)
        int32_t temp0_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)

int32_t var_8_3 = 0xffffffff
WIN32_FIND_DATAA findFileData

if (sub_63bd10(esi, &findFileData) != 0)
    HANDLE hFindFile
    BOOL i
    
    do
        if (((findFileData.dwFileAttributes u>> 4).b & 1) == 0)
            int32_t var_2bc_1 = arg4
            var_270
            
            if (sub_6c8de0(&var_270, arg2) == 0)
                var_2a0 = &data_801800
                int32_t var_8_4 = 2
                void* var_2bc_2 = &var_270
                char* var_2c0_1 = esi
                sub_63de70(&var_2a0, "%s%s")
                char* const esi_1 = var_2a0
                char* const ecx_6 = &data_801800
                
                if (esi_1 != 0)
                    ecx_6 = esi_1
                
                sub_6c8c70(ecx_6)
                int32_t var_8_5 = 3
                
                if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                    char* eax_10 = sub_63d4e0(&var_2a0)
                    int32_t temp2_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                
                esi = var_2a4
                int32_t var_8_6 = 0xffffffff
        
        i = FindNextFileA(hFindFile, &findFileData)
    while (i == 1)
    FindClose(hFindFile)

int32_t* esi_2 = data_147d094
char* eax_11 = *esi_2

if (eax_11 != 0 && eax_11 != &data_801800)
    if (data_cf65bc != 0 && *eax_11 != 0)
        char* eax_12 = sub_63d4e0(esi_2)
        int32_t temp1_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
    
    *esi_2 = &data_801800

char* esi_3 = var_2a4
WIN32_FIND_DATAA findFileData_1
char* result = sub_63bd10(esi_3, &findFileData_1)

if (result.b != 0)
    HANDLE hFindFile_1
    BOOL i_1
    
    do
        if (((findFileData_1.dwFileAttributes u>> 4).b & 1) != 0)
            int32_t var_2bc_5 = arg4
            var_12c
            
            if (sub_6c8de0(&var_12c, arg2) == 0 && var_12c.b != 0x2e)
                var_2a0 = &data_801800
                int32_t var_8_7 = 4
                void* var_2bc_6 = &var_12c
                char* var_2c0_3 = esi_3
                sub_63de70(&var_2a0, "%s%s/")
                char* const esi_4 = var_2a0
                sub_6c90b0(arg4)
                int32_t var_8_8 = 5
                
                if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
                    char* eax_16 = sub_63d4e0(&var_2a0)
                    int32_t temp3_1 = *(eax_16 + 4)
                    *(eax_16 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
                
                esi_3 = var_2a4
                int32_t var_8_9 = 0xffffffff
        
        i_1 = FindNextFileA(hFindFile_1, &findFileData_1)
    while (i_1 == 1)
    result = FindClose(hFindFile_1)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
