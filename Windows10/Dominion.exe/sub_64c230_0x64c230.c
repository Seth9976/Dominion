// 函数: sub_64c230
// 地址: 0x64c230
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76c84d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint8_t* esi = arg1
int32_t result = 0
void* i = strchr(esi, 0x2e)
void* i_1 = i

if (i != 0)
    int32_t* ecx = arg2
    
    do
        result += 1
        
        if (esi == 0)
            sub_63b870(i, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x9a, 
                "XString::XString")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        char* const var_14 = &data_801800
        sub_63db30(&var_14, esi, i - esi)
        int32_t var_8_1 = 0
        char* const ecx_3 = &data_801800
        char* edx = *ecx
        char* const eax_4 = &data_801800
        char* const esi_1 = var_14
        
        if (edx != 0)
            ecx_3 = edx
        
        if (esi_1 != 0)
            eax_4 = esi_1
        
        if (ecx_3 != eax_4)
            if (data_cf65bc != 0 && edx != 0 && *edx != 0)
                char* eax_5 = sub_63d4e0(ecx)
                int32_t temp1_1 = *(eax_5 + 4)
                *(eax_5 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
            
            *ecx = esi_1
            
            if (esi_1 != 0 && *esi_1 != 0)
                char* eax_6 = sub_63d4e0(ecx)
                *(eax_6 + 4) += 1
        
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
            char* eax_7 = sub_63d4e0(&var_14)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                var_14 = &data_801800
        
        esi = i_1 + 1
        int32_t var_8_3 = 0xffffffff
        
        if (result == 0x10)
            goto label_64c380
        
        i = strchr(esi, 0x2e)
        ecx = &ecx[1]
        i_1 = i
    while (i != 0)

char** ecx_9 = &arg2[result]
result += 1
sub_63d8d0(ecx_9, esi)
label_64c380:
fsbase->NtTib.ExceptionList = ExceptionList
return result
