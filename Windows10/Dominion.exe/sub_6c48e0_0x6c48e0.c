// 函数: sub_6c48e0
// 地址: 0x6c48e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?AddVirtualProcessorRoots@SchedulerProxy@details@Concurrency@@QAEXPAPAUIVirtualProcessorRoot@3@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_1c = arg1
int32_t var_18 = 0
int32_t eax_3 = sub_69fce0(arg2)
char const* const var_38
int32_t var_34
char const* const var_30
char* ecx_1

if (eax_3.b != 0)
    char* _Str1 = strrchr(arg2, 0x2e)
    
    if (_Str1 != 0)
        eax_3 = _stricmp(_Str1, ".xpack")
    
    if (_Str1 == 0 || eax_3 != 0)
        char* var_14
        sub_6c4740(&var_14, arg2)
        int32_t var_8_1 = 1
        char* const edx_2 = &data_801800
        char* eax_5 = var_14
        
        if (eax_5 != 0)
            edx_2 = eax_5
        
        sub_6c4050(arg1, edx_2)
        int32_t var_18_1 = 1
        int32_t var_8_2 = 2
        
        if (data_cf65bc != 0)
            char* eax_6 = var_14
            
            if (eax_6 != 0 && *eax_6 != 0)
                char* eax_7 = sub_63d4e0(&var_14)
                int32_t temp0_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    if (arg2 != 0)
        sub_63d720(arg1, arg2)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    var_30 = "XString::XString"
    var_34 = 0x94
    var_38 = "C:\x\ax2017\Engine\xString.cpp"
    ecx_1 = &data_871e0c
else
    var_30 = "DefLoadXbinPathFromAssetPath"
    var_34 = 0xc7
    var_38 = "C:\x\ax2017\Engine\DefLoad.cpp"
    ecx_1 = "AssetPathIsValid(assetPath)"

sub_63b870(eax_3, &data_801800, ecx_1, var_38, var_34, var_30)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
