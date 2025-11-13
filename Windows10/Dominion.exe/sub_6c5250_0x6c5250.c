// 函数: sub_6c5250
// 地址: 0x6c5250
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$__acrt_lock_and_call@V<lambda_9e0b6ab72a5b3ae37ad997d08b519f50>@@@@YAGW4__acrt_lock_id@@$$QAV<lambda_9e0b6ab72a5b3ae37ad997d08b519f50>@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
int32_t var_14 = 0
int32_t var_8_1 = 1
char* const esi = &data_801800
char* arg_4
char* eax_3 = arg_4

if (eax_3 != 0)
    esi = eax_3

uint32_t eax_4 = strrchr(esi, 0x2f)
char const* const var_34
int32_t var_30_2
char const* const var_2c
char* ecx_1

if (eax_4 != 0)
label_6c52dc:
    eax_4 = eax_4 - esi + 1
    
    if (esi != 0)
        *arg1 = &data_801800
        sub_63db30(arg1, esi, eax_4)
        int32_t var_14_1 = 1
        int32_t var_8_2 = 2
        
        if (data_cf65bc != 0)
            char* eax_7 = arg_4
            
            if (eax_7 != 0 && *eax_7 != 0)
                char* eax_8 = sub_63d4e0(&arg_4)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    var_2c = "XString::XString"
    var_30_2 = 0x9a
    var_34 = "C:\x\ax2017\Engine\xString.cpp"
    ecx_1 = &data_871e0c
else
    char* eax_5 = arg_4
    char* const ecx = &data_801800
    
    if (eax_5 != 0)
        ecx = eax_5
    
    eax_4 = strrchr(ecx, 0x5c)
    
    if (eax_4 != 0)
        goto label_6c52dc
    
    var_2c = "DirectoryPathFromAssetPath"
    var_30_2 = 0x180
    var_34 = "C:\x\ax2017\Engine\DefLoad.cpp"
    ecx_1 = &data_8656ac

sub_63b870(eax_4, &data_801800, ecx_1, var_34, var_30_2, var_2c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
