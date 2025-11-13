// 函数: sub_6b4c60
// 地址: 0x6b4c60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76fece
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_14 = arg1
char* const esi = &data_801800
int32_t var_24 = 0
char* const var_18 = &data_801800
int32_t var_8_1 = 1
int32_t ebx_1 = *(arg2 + 4) + *arg2
char* edi_1 = *(arg2 + 8) + *arg2
char const* const var_48
int32_t var_44_1
char const* const var_40_1
char* ecx_9

if (9.99999975e-06f f<= *(arg2 + 0x28))
    char** ebx_3
    
    if (edi_1 u>= ebx_1)
    label_6b4d88:
        *arg1 = esi
        
        if (esi != 0 && *esi != 0)
            char* eax_8 = sub_63d4e0(arg1)
            *(eax_8 + 4) += 1
        
        int32_t var_24_1 = 1
        int32_t var_8_2 = 6
        
        if (data_cf65bc != 0 && esi != 0 && *esi != 0)
            char* eax_9 = sub_63d4e0(&var_18)
            int32_t temp0_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
        
        ebx_3 = var_14
    label_6b4dde:
        fsbase->NtTib.ExceptionList = ExceptionList
        return ebx_3
    
    while (true)
        arg1.b = *edi_1
        char* ebx_2 = edi_1
        char* var_1c = edi_1
        
        if (arg1.b u>= 0x80)
            eax_3.b = arg1.b
            eax_3.b &= 0xe0
            
            if (eax_3.b != 0xc0)
                eax_3.b = arg1.b
                eax_3.b &= 0xf0
                
                if (eax_3.b != 0xe0)
                    arg1.b &= 0xf8
                    
                    if (arg1.b != 0xf0)
                        var_40_1 = "Xutf8_next"
                        var_44_1 = 0x222
                        var_48 = "C:\x\ax2017\Engine\Xutf8.cpp"
                        ecx_9 = "!Xutf8_is_invalid_lead_char(str)"
                        goto label_6b4f11
        
        sub_5a0d00(&var_1c)
        edi_1 = var_1c
        void* eax_6 = edi_1 - ebx_2
        sub_63db30(&var_18, ebx_2, eax_6)
        char* const edx_1 = &data_801800
        esi = var_18
        
        if (esi != 0)
            edx_1 = esi
        
        float xmm3_1 = *(arg2 + 0x30)
        float xmm2_1 = *(arg2 + 0x2c)
        struct _EXCEPTION_REGISTRATION_RECORD*** ecx_4 = *(arg2 + 0x34)
        var_1c = *(arg2 + 0x28)
        float xmm0_2
        eax_3, arg1, xmm0_2 = sub_6b43a0(ecx_4, edx_1, xmm2_1, xmm3_1)
        
        if (not(xmm0_2 f* var_1c f<= *(arg2 + 0x18)) && edi_1 != ebx_2)
            if (esi == 0 || *esi == 0)
                eax_3 = nullptr
            else
                eax_3 = *(sub_63d4e0(&var_18) + 8)
            
            char* const ecx_11
            
            if (esi != 0)
                ecx_11 = esi
                
                if (ecx_11 == 0)
                    var_40_1 = "XString::XString"
                    var_44_1 = 0x9a
                    break
            else
                ecx_11 = &data_801800
            
            var_1c = &data_801800
            sub_63db30(&var_1c, ecx_11, eax_3 - eax_6)
            var_8_1.b = 3
            ebx_3 = var_14
            char* edi_2 = var_1c
            *ebx_3 = edi_2
            
            if (edi_2 != 0 && *edi_2 != 0)
                char* eax_13 = sub_63d4e0(ebx_3)
                *(eax_13 + 4) += 1
            
            int32_t var_24_2 = 1
            var_8_1.b = 4
            
            if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
                char* eax_14 = sub_63d4e0(&var_1c)
                int32_t temp1_1 = *(eax_14 + 4)
                *(eax_14 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
            
            int32_t var_8_3 = 5
            
            if (data_cf65bc != 0 && esi != 0 && *esi != 0)
                char* eax_15 = sub_63d4e0(&var_18)
                int32_t temp2_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return ebx_3
            
            goto label_6b4dde
        
        if (edi_1 u>= ebx_1)
            arg1 = var_14
            goto label_6b4d88
else
    if (edi_1 != 0)
        sub_63d720(arg1, edi_1)
        fsbase->NtTib.ExceptionList = ExceptionList
        return var_14
    
    var_40_1 = "XString::XString"
    var_44_1 = 0x94

var_48 = "C:\x\ax2017\Engine\xString.cpp"
ecx_9 = &data_871e0c
label_6b4f11:
sub_63b870(eax_3, &data_801800, ecx_9, var_48, var_44_1, var_40_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
