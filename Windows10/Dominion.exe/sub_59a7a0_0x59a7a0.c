// 函数: sub_59a7a0
// 地址: 0x59a7a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$__acrt_wcs_to_mbs_cp_array@$03@@YAIQB_WAAY03DI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_20 = arg3
int32_t var_14 = 0
int32_t edi = 0
char* arg_8
char* edx = arg_8
int32_t esi = 0

if (edx s> 0)
    int32_t ecx = arg4
    int32_t eax_5 = data_1597e44 + (ecx << 3) + 4
    
    while (true)
        if (ecx s< 0 || ecx s>= data_1597e48)
            sub_63b870(eax_5, &data_801800, "index >= 0 && index < mSize", 
                "C:\x\ax2017\Engine\xDynArray.h", 0xd4, 
                "XDynArray<struct DomLogCardEntry>::operator []")
            
            if (sub_63bc30() == 0)
                sub_63bb00()
                noreturn
            
            breakpoint
        
        edi += *eax_5
        esi += 1
        ecx += 1
        eax_5 += 8
        
        if (esi s>= edx)
            break
        
        continue
    
    if (edi == 1 && arg2 != 0x11)
        int32_t var_38 = 2
        int32_t var_1c = 3
        int32_t var_18_1 = 0
        sub_599fa0(arg2, arg2, arg3, &var_1c, edi, 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3

int32_t var_38_1 = edi
sub_63df30(&arg_8, "%d")
int32_t var_14_1 = 2
int32_t var_8_1 = 1
sub_4d48c0(&arg_8, "dom_log_n_cards", arg3, 0x801c54, &arg_8)
int32_t var_14_2 = 3
int32_t var_8_2 = 2

if (data_cf65bc != 0)
    char* eax_9 = arg_8
    
    if (eax_9 != 0 && *eax_9 != 0)
        char* eax_10 = sub_63d4e0(&arg_8)
        int32_t temp0_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
