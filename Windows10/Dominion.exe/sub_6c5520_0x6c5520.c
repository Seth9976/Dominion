// 函数: sub_6c5520
// 地址: 0x6c5520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7703a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_178 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = 0
int32_t var_8_1 = 0
char const* const var_164 = ".hlslinc"
int32_t var_168 = 0
char* result_1
char* result
int32_t ebx

while (true)
    char* const var_160 = &data_801800
    var_8_1.b = 1
    char* const result_3 = &data_801800
    char* result_2 = result_1
    int32_t var_17c_1 = (&var_164)[edx]
    
    if (result_2 != 0)
        result_3 = result_2
    
    char* const result_4 = result_3
    sub_63de70(&var_160, "%s*%s")
    char* const esi_1 = var_160
    char* ecx_1 = &data_801800
    
    if (esi_1 != 0)
        ecx_1 = esi_1
    
    WIN32_FIND_DATAA findFileData
    
    if (sub_63bd10(ecx_1, &findFileData).b != 0)
        while (true)
            if (((findFileData.dwFileAttributes u>> 4).b & 1) == 0)
                uint32_t dwHighDateTime = findFileData.ftLastWriteTime.dwHighDateTime
                
                if (dwHighDateTime u> arg2)
                label_6c56b6:
                    var_8_1.b = 2
                    
                    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                        result = sub_63d4e0(&var_160)
                        int32_t temp3_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp3_1 == 1)
                            sub_64c080(result, *(result + 0xc) + 0x10)
                    
                    ebx.b = 1
                    break
                
                if (dwHighDateTime u>= arg2 && findFileData.ftLastWriteTime.dwLowDateTime u> arg1)
                    goto label_6c56b6
            
            HANDLE hFindFile
            
            if (FindNextFileA(hFindFile, &findFileData) != 1)
                FindClose(hFindFile)
                goto label_6c5615
        
        break
    
label_6c5615:
    var_8_1.b = 3
    
    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
        result = sub_63d4e0(&var_160)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)
    
    edx = var_168 + 1
    var_168 = edx
    
    if (edx u>= 1)
        ebx.b = 0
        break

int32_t var_8_2 = 4

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp2_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
