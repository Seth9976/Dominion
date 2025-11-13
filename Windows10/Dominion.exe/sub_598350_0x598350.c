// 函数: sub_598350
// 地址: 0x598350
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?clone@?$clone_impl@U?$error_info_injector@Vrounding_error@math@boost@@@exception_detail@boost@@@exception_detail@boost@@EBEPBVclone_base@23@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_1c = arg1
int32_t var_18 = 0
char* arg_4
char* ecx = arg_4

if (&ecx[1] u> 6)
    sub_63b870(&ecx[1], &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomLog.cpp", 0x312, 
        "GetPlayerInitial")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char const* const esi

switch (ecx)
    case nullptr
        esi = "{log_red}"
    label_5983c5:
        char* var_14
        void* edx
        sub_597aa0(&ecx[1], edx, &var_14, ecx)
        int32_t var_8_1 = 1
        char* const ecx_2 = &data_801800
        char* eax_4 = var_14
        
        if (eax_4 != 0)
            ecx_2 = eax_4
        
        char* const var_34_1 = ecx_2
        char const* const var_38 = esi
        sub_63df30(&arg_4, "%s%s{log_white}")
        var_8_1.b = 2
        char* eax_5 = arg_4
        *arg1 = eax_5
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_6 = sub_63d4e0(arg1)
            *(eax_6 + 4) += 1
            eax_5 = arg_4
        
        int32_t var_18_1 = 1
        var_8_1.b = 3
        
        if (data_cf65bc != 0 && eax_5 != 0 && *eax_5 != 0)
            char* eax_7 = sub_63d4e0(&arg_4)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                arg_4 = &data_801800
        
        int32_t var_8_2 = 4
        
        if (data_cf65bc != 0)
            char* eax_8 = var_14
            
            if (eax_8 != 0 && *eax_8 != 0)
                char* eax_9 = sub_63d4e0(&var_14)
                int32_t temp1_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    case 1
        esi = "{log_blue}"
        goto label_5983c5
    case 2
        esi = "{log_green}"
        goto label_5983c5
    case 3
        esi = "{log_yellow}"
        goto label_5983c5
    case 4
        esi = "{log_orange}"
        goto label_5983c5
    case 5
        esi = "{log_white}"
        goto label_5983c5
    case 0xffffffff
        sub_63d720(arg1, "*none*")
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
