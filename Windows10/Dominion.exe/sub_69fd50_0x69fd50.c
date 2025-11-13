// 函数: sub_69fd50
// 地址: 0x69fd50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76b016
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_1c = arg3
int32_t var_18 = 0
int32_t var_38_3
char const* const var_34
char* const eax_4
char const* const ecx_1

if (*arg2 == 0)
label_69fdcc:
    void* const eax_5 = &data_800338
    
    while (true)
        if (*eax_5 == arg4)
            eax_4 = *(eax_5 + 4)
            break
        
        eax_5 += 8
        
        if (*(eax_5 + 4) == 0)
            eax_4 = &data_801800
            break
    
    if (*eax_4 != 0)
        var_34 = eax_4
        char* var_38_4 = arg2
        char* var_14
        sub_63df30(&var_14, "%s.%s")
        int32_t var_8_1 = 1
        char* eax_6 = var_14
        var_34 = eax_6
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_63d4e0(&var_34)
            *(eax_7 + 4) += 1
        
        sub_6a0010(arg3)
        int32_t var_18_1 = 1
        int32_t var_8_2 = 2
        
        if (data_cf65bc != 0)
            char* eax_8 = var_14
            
            if (eax_8 != 0 && *eax_8 != 0)
                char* eax_9 = sub_63d4e0(&var_14)
                int32_t temp0_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    
    var_34 = "AssetPathFromName"
    var_38_3 = 0x26c
    ecx_1 = "typeString[0] != 0"
else
    var_34 = 0x5c
    int32_t eax_3 = strchr(arg2, var_34.b)
    
    if (eax_3 == 0)
        var_34 = 0x2f
        eax_4 = strchr(arg2, var_34.b)
    
    if (eax_3 != 0 || eax_4 != 0)
        eax_4 = sub_6b7ef0(arg2)
        
        if (eax_4 == 0)
            goto label_69fdcc
        
        goto label_69fdb5
    
label_69fdb5:
    var_34 = "AssetPathFromName"
    var_38_3 = 0x269
    ecx_1 = "AssetNameIsValid(assetName)"

sub_63b870(eax_4, &data_801800, ecx_1, "C:\x\ax2017\Engine\AssetCatalog.cpp", var_38_3, var_34)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
