// 函数: sub_6c5840
// 地址: 0x6c5840
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_770445
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_6c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** lpFileName

if (data_8c4157 != 0)
    char* eax_3 = *(arg1 + 0x20)
    char* const lpFileName_2 = &data_801800
    char* edx_1 = &data_801800
    
    if (eax_3 != 0)
        edx_1 = eax_3
    
    struct _EXCEPTION_REGISTRATION_RECORD** lpFileName_3
    sub_6c48e0(&lpFileName_3, edx_1)
    int32_t var_8_1 = 0
    char** i_1 = nullptr
    int32_t var_58_1 = 0
    int32_t var_54_1 = 0
    var_8_1.b = 1
    struct _EXCEPTION_REGISTRATION_RECORD** lpFileName_8 = lpFileName_3
    uint8_t* lpFileName_10 = &data_801800
    char* lpFileName_12 = 1
    
    if (lpFileName_8 != 0)
        lpFileName_10 = lpFileName_8
    
    char* lpFileName_16
    lpFileName, lpFileName_16 = sub_696930(lpFileName_8, &i_1, lpFileName_10, lpFileName_12)
    char** i = i_1
    void* ebx
    
    if (lpFileName.b == 0 || var_54_1 != 1)
        ebx.b = 1
    else
        if (i == 0)
            lpFileName_12 = "XList<struct PackLocation>::GetHead"
            sub_63b870(lpFileName, &data_801800, "mpHead != NULL", "C:\x\ax2017\Engine\xList.h", 
                0x53, lpFileName_12)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t eax_4 = *(arg1 + 4)
        lpFileName_12 = lpFileName_16
        char* lpFileName_14 = *(arg1 + 0x20)
        lpFileName_12 = lpFileName_14
        
        if (lpFileName_14 != 0 && *lpFileName_14 != 0)
            char* eax_5 = sub_63d4e0(&lpFileName_12)
            *(eax_5 + 4) += 1
        
        char* lpFileName_4
        sub_6c4b90(&lpFileName_4, eax_4)
        var_8_1.b = 6
        char* const lpFileName_11 = &data_801800
        char* lpFileName_9 = lpFileName_4
        
        if (lpFileName_9 != 0)
            lpFileName_11 = lpFileName_9
        
        lpFileName_12 = lpFileName_11
        
        if (GetFileAttributesA(lpFileName_12) != 0xffffffff)
            char* lpFileName_6 = lpFileName_4
            char* lpFileName_1 = &data_801800
            
            if (lpFileName_6 != 0)
                lpFileName_1 = lpFileName_6
            
            void var_38
            lpFileName_12 = &var_38
            char* lpFileName_17
            lpFileName, lpFileName_17 =
                GetFileAttributesExA(lpFileName_1, GetFileExInfoStandard, lpFileName_12)
            struct _EXCEPTION_REGISTRATION_RECORD** var_24
            char* lpFileName_13
            
            if (lpFileName == 0 || var_24 != i[6] || lpFileName_13 != i[7])
                ebx.b = 1
            else
                int32_t eax_6 = *(arg1 + 4)
                lpFileName_12 = lpFileName_17
                char* lpFileName_15 = *(arg1 + 0x20)
                lpFileName_12 = lpFileName_15
                
                if (lpFileName_15 != 0 && *lpFileName_15 != 0)
                    char* eax_7 = sub_63d4e0(&lpFileName_12)
                    *(eax_7 + 4) += 1
                
                struct _EXCEPTION_REGISTRATION_RECORD** lpFileName_5
                sub_6c5090(&lpFileName_5, eax_6)
                var_8_1.b = 0xd
                lpFileName = lpFileName_5
                
                if (lpFileName == 0 || *lpFileName == 0)
                    goto label_6c59de
                
                lpFileName_12 = &var_38
                char* lpFileName_18
                struct _EXCEPTION_REGISTRATION_RECORD** ecx_5
                
                if (GetFileAttributesExA(lpFileName, GetFileExInfoStandard, lpFileName_12) != 0)
                    ecx_5 = var_24
                    lpFileName_18 = lpFileName_13
                else
                    int64_t var_4c_1 = 0
                    lpFileName_18 = nullptr
                    ecx_5 = nullptr
                
                if (ecx_5 != i[8] || lpFileName_18 != i[9])
                    lpFileName = lpFileName_5
                    ebx.b = 1
                else
                    lpFileName = lpFileName_5
                label_6c59de:
                    
                    if (*(arg1 + 4) != 4)
                        ebx.b = 0
                    else
                        struct _EXCEPTION_REGISTRATION_RECORD** lpFileName_7 = lpFileName_3
                        
                        if (lpFileName_7 != 0)
                            lpFileName_2 = lpFileName_7
                        
                        lpFileName_12 = &var_38
                        
                        if (GetFileAttributesExA(lpFileName_2, GetFileExInfoStandard, lpFileName_12)
                                == 0)
                            lpFileName = lpFileName_5
                            ebx.b = 1
                        else
                            lpFileName_12 = lpFileName_13
                            
                            if (sub_6c5700(var_24, lpFileName_12) != 0)
                                lpFileName = lpFileName_5
                                ebx.b = 1
                            else
                                lpFileName = lpFileName_5
                                ebx.b = 0
                
                var_8_1.b = 0x14
                
                if (data_cf65bc != 0 && lpFileName != 0 && *lpFileName != 0)
                    lpFileName = sub_63d4e0(&lpFileName_5)
                    int32_t temp3_1 = lpFileName[1]
                    lpFileName[1] -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(lpFileName, &lpFileName[3][2])
                        lpFileName_5 = &data_801800
        else
            ebx.b = 0
        
        var_8_1.b = 0x15
        
        if (data_cf65bc != 0)
            lpFileName = lpFileName_4
            
            if (lpFileName != 0 && *lpFileName != 0)
                lpFileName = sub_63d4e0(&lpFileName_4)
                int32_t temp2_1 = lpFileName[1]
                lpFileName[1] -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(lpFileName, &lpFileName[3][2])
                    lpFileName_4 = &data_801800
    
    while (i != 0)
        char** i_2 = i
        i = i[0xa]
        var_8_1.b = 0x17
        
        if (data_cf65bc != 0)
            char* eax_11 = *i_2
            
            if (eax_11 != 0 && *eax_11 != 0)
                char* eax_12 = sub_63d4e0(i_2)
                int32_t temp1_1 = *(eax_12 + 4)
                *(eax_12 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
                    *i_2 = &data_801800
        
        var_8_1.b = 0x16
        sub_64c080(i_2, 0x30)
    
    int32_t var_8_2 = 0x18
    
    if (data_cf65bc != 0)
        lpFileName = lpFileName_3
        
        if (lpFileName != 0 && *lpFileName != 0)
            lpFileName = sub_63d4e0(&lpFileName_3)
            int32_t temp0_1 = lpFileName[1]
            lpFileName[1] -= 1
            
            if (temp0_1 == 1)
                sub_64c080(lpFileName, &lpFileName[3][2])
    
    lpFileName.b = ebx.b
else
    lpFileName.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(lpFileName)
return lpFileName
