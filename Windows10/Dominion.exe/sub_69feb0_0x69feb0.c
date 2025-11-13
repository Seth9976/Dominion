// 函数: sub_69feb0
// 地址: 0x69feb0
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

if (eax_3.b == 0)
    sub_63b870(eax_3, &data_801800, "AssetPathIsValid(assetPath)", 
        "C:\x\ax2017\Engine\AssetCatalog.cpp", 0x274, "AssetNameFromPath")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*arg2 == 0)
    sub_63d720(arg1, &data_801800)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1

int32_t eax_5 = strrchr(arg2, 0x2e)

if (eax_5 == 0)
    sub_63b870(eax_5, &data_801800, "ext", "C:\x\ax2017\Engine\AssetCatalog.cpp", 0x27c, 
        "AssetNameFromPath")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* const var_14 = &data_801800
int32_t var_8_1 = 1
sub_63db30(&var_14, arg2, eax_5 - arg2)
char* const esi_1 = var_14
*arg1 = esi_1

if (esi_1 != 0 && *esi_1 != 0)
    char* eax_7 = sub_63d4e0(arg1)
    *(eax_7 + 4) += 1

int32_t var_18_1 = 1
int32_t var_8_2 = 2

if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
    char* eax_8 = sub_63d4e0(&var_14)
    int32_t temp0_1 = *(eax_8 + 4)
    *(eax_8 + 4) -= 1
    
    if (temp0_1 == 1)
        sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
