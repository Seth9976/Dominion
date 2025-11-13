// 函数: sub_598ae0
// 地址: 0x598ae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?_mbrtowc_internal@@YAHPAHPA_WPBDIPAU_Mbstatet@@AAV__crt_cached_ptd_host@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_18 = arg3
int32_t var_8_1 = 0
int32_t var_14 = 0
char* arg_4
char* edi = arg_4

if (edi == 0)
    sub_63b870(eax_3, &data_801800, "what != CARD_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomLog.cpp", 0x44c, "CardnameKnown")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t var_34 = arg5
char** var_38 = arg3
sub_5987d0(eax_3, arg2, arg3, arg4, edi)
int32_t var_8_2 = 0
int32_t var_14_1 = 1

if (arg6 != 0)
    char* eax_59 = *arg3
    char* edi_4 = &data_801800
    char* edx_8 = &data_801800
    
    if (eax_59 != 0)
        edx_8 = eax_59
    
    int32_t var_8_7 = 5
    sub_63d850(arg3, sub_63dfa0(eax_59, edx_8, &arg_4, "[color_start]", &data_801800))
    int32_t var_8_8 = 6
    
    if (data_cf65bc != 0)
        char* eax_61 = arg_4
        
        if (eax_61 != 0 && *eax_61 != 0)
            char* eax_62 = sub_63d4e0(&arg_4)
            int32_t temp0_1 = *(eax_62 + 4)
            *(eax_62 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_62, *(eax_62 + 0xc) + 0x10)
    
    var_8_8.b = 0
    char* eax_63 = *arg3
    
    if (eax_63 != 0)
        edi_4 = eax_63
    
    int32_t var_8_9 = 7
    sub_63d850(arg3, sub_63dfa0(eax_63, edi_4, &arg_4, "[color_end]", &data_801800))
    int32_t var_8_10 = 8
else
    void* eax_5 = sub_571b30(edi, sub_5cf7e0())
    int32_t edx_1 = *(eax_5 + 0x98)
    int32_t edi_1 = *(eax_5 + 0x9c)
    char const* const ecx_4
    
    if ((edx_1 & 0x40) != 0)
        ecx_4 = "{log_reaction}"
    else if ((edx_1 & 0x80) != 0)
        ecx_4 = "{log_duration}"
    else if ((edx_1 & 8) != 0)
        ecx_4 = "{log_victory}"
    else if ((edx_1 & 2) != 0)
        ecx_4 = "{log_treasure}"
    else if ((edx_1 & 0x40000) != 0)
        ecx_4 = "{log_night}"
    else if ((edx_1 & 0x200) != 0)
        ecx_4 = "{log_reserve}"
    else if ((edx_1 & 4) != 0)
        ecx_4 = "{log_action}"
    else if ((edx_1 & 0x10) == 0)
        int32_t ecx_5
        
        if ((edx_1 & &data_1000000) == 0)
            ecx_5 = *(eax_5 + 0x8c)
        
        if ((edx_1 & &data_1000000) != 0 || ecx_5 == 0xd30)
            ecx_4 = "{log_boon}"
        else if ((edx_1 & 0x2000000) != 0 || ecx_5 == 0xd3d)
            ecx_4 = "{log_hex}"
        else if ((edx_1 & 0x10000000) != 0)
            ecx_4 = "{log_way}"
        else if ((edx_1 & 0x4000000) != 0)
            ecx_4 = "{log_artifact}"
        else if ((edx_1 & 0x40000000) != 0)
            ecx_4 = "{log_state}"
        else if ((edx_1 & 0x8000000) != 0)
            ecx_4 = "{log_project}"
        else if ((edx_1 & 0x400) != 0)
            ecx_4 = "{log_event}"
        else if ((edx_1 & 0x20000000) != 0)
            ecx_4 = "{log_landmark}"
        else if ((edi_1 & 0x40) != 0)
            ecx_4 = "{log_ally}"
        else if ((edi_1 & 0x100) != 0)
            ecx_4 = "{log_trait}"
        else if ((edi_1 & 0x800) != 0)
            ecx_4 = "{log_prophecy}"
        else if ((edi_1 & 0x100000) != 0)
            ecx_4 = "{log_twist}"
        else if ((edi_1 & 0x200000) == 0)
            ecx_4 = "{log_event}"
        else
            ecx_4 = "{log_stamp}"
    else
        ecx_4 = "{log_curse}"
    
    char* eax_53 = *arg3
    char* const edi_3 = &data_801800
    char* edx_4 = &data_801800
    
    if (eax_53 != 0)
        edx_4 = eax_53
    
    int32_t var_8_3 = 1
    sub_63d850(arg3, sub_63dfa0(eax_53, edx_4, &arg_4, "[color_start]", ecx_4))
    int32_t var_8_4 = 2
    
    if (data_cf65bc != 0)
        char* eax_55 = arg_4
        
        if (eax_55 != 0 && *eax_55 != 0)
            char* eax_56 = sub_63d4e0(&arg_4)
            int32_t temp1_1 = *(eax_56 + 4)
            *(eax_56 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_56, *(eax_56 + 0xc) + 0x10)
    
    var_8_4.b = 0
    char* eax_57 = *arg3
    
    if (eax_57 != 0)
        edi_3 = eax_57
    
    int32_t var_8_5 = 3
    sub_63d850(arg3, sub_63dfa0(eax_57, edi_3, &arg_4, "[color_end]", "{log_white}"))
    int32_t var_8_6 = 4

if (data_cf65bc != 0)
    char* eax_65 = arg_4
    
    if (eax_65 != 0 && *eax_65 != 0)
        char* eax_66 = sub_63d4e0(&arg_4)
        int32_t temp2_1 = *(eax_66 + 4)
        *(eax_66 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_66, *(eax_66 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
