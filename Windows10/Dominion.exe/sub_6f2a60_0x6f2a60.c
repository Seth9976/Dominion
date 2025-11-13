// 函数: sub_6f2a60
// 地址: 0x6f2a60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771ee5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_147d49c != 0)
    int32_t* edi_1 = data_147ded0
    char* uType = arg1
    char* uType_1 = edi_1[8]
    int32_t esi_1 = edi_1[1]
    uType = uType_1
    
    if (uType_1 != 0 && *uType_1 != 0)
        char* eax_3 = sub_63d4e0(&uType)
        *(eax_3 + 4) += 1
    
    char* uType_4
    sub_6c4b90(&uType_4, esi_1)
    int32_t var_8_1 = 0
    char* const lpText = &data_801800
    char* uType_3 = uType_4
    char* const uType_2 = &data_801800
    
    if (uType_3 != 0)
        uType_2 = uType_3
    
    uType = uType_2
    char* const lpText_2
    sub_63df30(&lpText_2, "Do you want to save '%s'?")
    var_8_1.b = 1
    char* const lpText_1 = lpText_2
    uType = 3
    
    if (lpText_1 != 0)
        lpText = lpText_1
    
    enum MESSAGEBOX_RESULT lpText_3
    char* ecx_2
    lpText_3, ecx_2 = MessageBoxA(data_147d46c, lpText, "Asset Modified", uType)
    
    if (lpText_3 != IDYES)
        if (lpText_3 != IDCANCEL)
            if (lpText_3 == IDNO)
                data_147d49c = 0
                edi_1[7] -= 1
                int32_t eax_4 = sub_69ec60(edi_1)
                
                if (*edi_1 == 0)
                    uType = 1
                    sub_69f4a0(eax_4, 0, edi_1, uType.b)
                
                edi_1[7] += 1
            
            goto label_6f2bd8
        
    label_6f2b27:
        var_8_1.b = 2
        
        if (data_cf65bc != 0)
            lpText_3 = lpText_2
            
            if (lpText_3 != 0 && *lpText_3 != 0)
                lpText_3 = sub_63d4e0(&lpText_2)
                int32_t temp0_1 = *(lpText_3 + 4)
                *(lpText_3 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(lpText_3, *(lpText_3 + 0xc) + 0x10)
                    lpText_2 = &data_801800
        
        int32_t var_8_2 = 3
        
        if (data_cf65bc != 0)
            lpText_3 = uType_4
            
            if (lpText_3 != 0 && *lpText_3 != 0)
                lpText_3 = sub_63d4e0(&uType_4)
                int32_t temp2_1 = *(lpText_3 + 4)
                *(lpText_3 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(lpText_3, *(lpText_3 + 0xc) + 0x10)
        
        lpText_3.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return lpText_3
    
    if (sub_6f9e80(ecx_2).b == 0)
        goto label_6f2b27
    
label_6f2bd8:
    var_8_1.b = 4
    
    if (data_cf65bc != 0)
        char* lpText_4 = lpText_2
        
        if (lpText_4 != 0 && *lpText_4 != 0)
            char* eax_5 = sub_63d4e0(&lpText_2)
            int32_t temp1_1 = *(eax_5 + 4)
            *(eax_5 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
                lpText_2 = &data_801800
    
    int32_t var_8_3 = 5
    
    if (data_cf65bc != 0)
        char* uType_5 = uType_4
        
        if (uType_5 != 0 && *uType_5 != 0)
            char* eax_6 = sub_63d4e0(&uType_4)
            int32_t temp3_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
                uType_4 = &data_801800
    
    int32_t var_8_4 = 0xffffffff

sub_6fb340()
struct _EXCEPTION_REGISTRATION_RECORD** eax_7
eax_7.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_7
