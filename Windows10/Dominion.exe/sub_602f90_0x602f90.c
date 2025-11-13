// 函数: sub_602f90
// 地址: 0x602f90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$copy_wide_to_narrow_find_data@U_wfinddata32_t@@U_finddata32_t@@@@YA_NABU_wfinddata32_t@@AAU_finddata32_t@@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_24 = arg3
void* const i = &data_7fcaf8
int32_t var_20 = 0

do
    if (*i == arg4 && *(i + 4) == arg5)
        int32_t var_38 = *(i + 8)
        char* var_18
        sub_63df30(&var_18, "dom_card_type_%s")
        int32_t var_8_1 = 1
        uint32_t eax_3 = sub_4c89a0()
        char* edx = var_18
        char* const ebx = &data_801800
        char* ecx_1 = &data_801800
        
        if (edx != 0)
            ecx_1 = edx
        
        void* eax_4 = sub_68c730(ecx_1, eax_3, arg4)
        
        if (eax_4 != 0)
            char* eax_8 = *eax_4
            
            if (eax_8 != 0)
                ebx = eax_8
            
            char* eax_9 = sub_693100(zx.d(arg2) + 1, 2, 0)
            sub_598720(eax_9, eax_3, arg3, eax_9, zx.d(arg2) + 1, ebx)
            int32_t var_20_2 = 1
            int32_t var_8_3 = 4
        else
            sub_63d720(arg3, "*missing_type*")
            int32_t var_20_1 = 1
            int32_t var_8_2 = 2
        
        if (data_cf65bc != 0)
            char* eax_5 = var_18
            
            if (eax_5 != 0 && *eax_5 != 0)
                char* eax_6 = sub_63d4e0(&var_18)
                int32_t temp0_1 = *(eax_6 + 4)
                *(eax_6 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    
    i += 0x10
while (i != &data_7fcdc8)

sub_63b870(i, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x95dd, 
    "CardTypeDefGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
