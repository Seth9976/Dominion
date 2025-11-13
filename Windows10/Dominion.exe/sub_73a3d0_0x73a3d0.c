// 函数: sub_73a3d0
// 地址: 0x73a3d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_772f5c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = arg1
char* var_2ac = esi
char* hFindFile_3
sub_6c4220(&hFindFile_3, esi)
int32_t var_8_1 = 0
int32_t* ecx_1 = data_147d094
int32_t* hFindFile_2 = &hFindFile_3
sub_63d850(ecx_1, hFindFile_2)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* hFindFile_4 = hFindFile_3
    
    if (hFindFile_4 != 0 && *hFindFile_4 != 0)
        char* eax_3 = sub_63d4e0(&hFindFile_3)
        int32_t temp0_1 = *(eax_3 + 4)
        *(eax_3 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)

int32_t var_8_3 = 0xffffffff
char* const var_2a0
WIN32_FIND_DATAA var_29c

if (sub_63bd10(esi, &var_29c) != 0)
    int32_t* hFindFile
    BOOL i
    
    do
        if (((var_29c.dwFileAttributes u>> 4).b & 1) == 0)
            var_2a0 = &data_801800
            int32_t var_8_4 = 2
            var_270
            hFindFile_2 = &var_270
            char* var_2c4_1 = esi
            sub_63de70(&var_2a0, "%s%s")
            char* const esi_1 = var_2a0
            char* const edi_1 = &data_801800
            
            if (esi_1 != 0)
                edi_1 = esi_1
            
            if (*edi_1 != 0x21)
                hFindFile_2 = &data_87e5b4
                
                if (strstr(edi_1, hFindFile_2) == 0)
                    hFindFile_2 = &data_87e5d4
                    
                    if (strstr(edi_1, hFindFile_2) == 0)
                        char* const eax_9 = &data_801800
                        hFindFile_2 = 0x2e
                        
                        if (esi_1 != 0)
                            eax_9 = esi_1
                        
                        char* _Str1 = strrchr(eax_9, hFindFile_2.b)
                        
                        if (_Str1 != 0)
                            hFindFile_2 = ".atlasmaker"
                            
                            if (_stricmp(_Str1, hFindFile_2) == 0)
                                char* const edx_4 = &data_801800
                                
                                if (esi_1 != 0)
                                    edx_4 = esi_1
                                
                                hFindFile_2 = sub_6c4220(&hFindFile_3, edx_4)
                                var_8_4.b = 3
                                hFindFile_2 = hFindFile_3
                                char* hFindFile_5 = hFindFile_3
                                
                                if (hFindFile_5 != 0 && *hFindFile_5 != 0)
                                    char* eax_12 = sub_63d4e0(&hFindFile_2)
                                    *(eax_12 + 4) += 1
                                
                                sub_73a030()
                                var_8_4.b = 4
                                
                                if (data_cf65bc != 0)
                                    char* hFindFile_6 = hFindFile_3
                                    
                                    if (hFindFile_6 != 0 && *hFindFile_6 != 0)
                                        char* eax_13 = sub_63d4e0(&hFindFile_3)
                                        int32_t temp4_1 = *(eax_13 + 4)
                                        *(eax_13 + 4) -= 1
                                        
                                        if (temp4_1 == 1)
                                            sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                                            hFindFile_3 = &data_801800
            
            int32_t var_8_5 = 5
            
            if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_14 = sub_63d4e0(&var_2a0)
                int32_t temp2_1 = *(eax_14 + 4)
                *(eax_14 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
            
            esi = var_2ac
            int32_t var_8_6 = 0xffffffff
        
        hFindFile_2 = &var_29c
        i = FindNextFileA(hFindFile, hFindFile_2)
    while (i == 1)
    hFindFile_2 = hFindFile
    FindClose(hFindFile_2)

sub_63d720(&var_2a0, &data_801800)
int32_t var_8_7 = 6
int32_t* ecx_13 = data_147d094
hFindFile_2 = &var_2a0
sub_63d850(ecx_13, hFindFile_2)
int32_t var_8_8 = 7

if (data_cf65bc != 0)
    char* const eax_15 = var_2a0
    
    if (eax_15 != 0 && *eax_15 != 0)
        char* eax_16 = sub_63d4e0(&var_2a0)
        int32_t temp1_1 = *(eax_16 + 4)
        *(eax_16 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)

int32_t var_8_9 = 0xffffffff
WIN32_FIND_DATAA var_158
char* result = sub_63bd10(esi, &var_158)

if (result.b != 0)
    HANDLE hFindFile_1
    BOOL i_1
    
    do
        if (((var_158.dwFileAttributes u>> 4).b & 1) != 0 && var_158.cFileName[0] != 0x2e)
            var_2a0 = &data_801800
            int32_t var_8_10 = 8
            var_12c
            hFindFile_2 = &var_12c
            char* var_2c4_7 = esi
            sub_63de70(&var_2a0, "%s%s/")
            char* const esi_2 = var_2a0
            sub_73a3d0(eax_2)
            int32_t var_8_11 = 9
            
            if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
                char* eax_19 = sub_63d4e0(&var_2a0)
                int32_t temp3_1 = *(eax_19 + 4)
                *(eax_19 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
            
            esi = var_2ac
            int32_t var_8_12 = 0xffffffff
        
        hFindFile_2 = &var_158
        i_1 = FindNextFileA(hFindFile_1, hFindFile_2)
    while (i_1 == 1)
    hFindFile_2 = hFindFile_1
    result = FindClose(hFindFile_2)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
