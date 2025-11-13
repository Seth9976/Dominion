// 函数: sub_66ebb0
// 地址: 0x66ebb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76d56d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = sub_667870(arg1)
char const* const var_50
int32_t var_4c
char const* const var_48
void* eax_5
char* ecx_1
char* var_34
void* eax_4

if (eax_3 == 0)
    eax_5 = sub_667790(arg1, &var_34)
    
    if (eax_5 != 1)
        eax_4 = sub_64cc90(arg1)
        goto label_66ec9c
    
    char* edx_2 = var_34
    
    if (edx_2 != 0)
        sub_63d720(&var_34, edx_2)
        int32_t var_8_1 = 0
        int32_t* eax_6 = sub_667680(arg1, &var_34)
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            char* ecx_4 = var_34
            
            if (ecx_4 != 0 && *ecx_4 != 0)
                char* eax_7 = sub_63d4e0(&var_34)
                int32_t temp0_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                    var_34 = &data_801800
        
        int32_t var_8_3 = 0xffffffff
        eax_4 = &eax_6[6]
        goto label_66ec9c
    
    var_48 = "XString::XString"
    var_4c = 0x94
    var_50 = "C:\x\ax2017\Engine\xString.cpp"
    ecx_1 = &data_871e0c
else
    eax_4 = &eax_3[6]
label_66ec9c:
    eax_5 = sub_6dd1e0(eax_4, eax_4, &data_8cae70, data_1724a88, 0x71)
    
    if (eax_5 != 0)
        int32_t edx_7 = 7
        int32_t i_1 = *(eax_5 + 0x10)
        int128_t var_30
        __builtin_memcpy(&var_30, 
            "\x76\x00\x00\x00\x7e\x00\x00\x00\x80\x00\x00\x00\x85\x00\x00\x00\x8e\x00\x00\x00\xde\x00\x"
        "00\x00\x6d\x00\x00\x00", 
            0x1c)
        
        if (i_1 s<= 0)
        label_66ed19:
            uint32_t result = var_30.d
            fsbase->NtTib.ExceptionList = ExceptionList
            CookieCheckFunction(result)
            return result
        
        int32_t* edi_1 = *(eax_5 + 8)
        int32_t i
        
        do
            int32_t esi_2 = *edi_1
            eax_5 = nullptr
            
            if (edx_7 s> 0)
                do
                    if (*(&var_30 + (eax_5 << 2)) == esi_2)
                        int32_t ecx_8 = (&var_34)[edx_7]
                        edx_7 -= 1
                        *(&var_30 + (eax_5 << 2)) = ecx_8
                        eax_5 -= 1
                    
                    eax_5 += 1
                while (eax_5 s< edx_7)
            
            edi_1 = &edi_1[4]
            i = i_1
            i_1 -= 1
        while (i != 1)
        
        if (edx_7 s> 0)
            goto label_66ed19
        
        var_48 = "GetNewAnimationField"
        var_4c = 0x45c7
        ecx_1 = "numAttribs > 0"
    else
        var_48 = "GetNewAnimationField"
        var_4c = 0x45bd
        ecx_1 = "transition"
    
    var_50 = "C:\x\ax2017\Engine\UI2.cpp"
sub_63b870(eax_5, &data_801800, ecx_1, var_50, var_4c, var_48)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
