// 函数: sub_6d9270
// 地址: 0x6d9270
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76de05
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* eax_3 = sub_69d520(data_1777528)
int32_t result_3
char* ecx_1
result_3, ecx_1 = sub_69f680(4, eax_3)
int32_t result = result_3
char* var_34
int32_t result_4

if (result != 0)
    if (*(result + 4) != 4)
        char const* const var_30_4 = "DefAutoLock::DefAutoLock"
        var_34 = 0x19
        sub_63b870(result_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
            "C:\x\ax2017\Engine\DefLoad.h", var_34, var_30_4)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t result_1 = result
    result_4 = result
else
    char* const var_14
    sub_69fd50(result_3, "!Null\Null", &var_14, 4)
    int32_t result_2 = result
    char* eax_4 = var_14
    char* const ecx_3 = &data_801800
    
    if (eax_4 != 0)
        ecx_3 = eax_4
    
    result_3, ecx_1 = sub_69f030(ecx_3, result + 4)
    result_4 = result_3
    int32_t var_8_1 = 1
    
    if (data_cf65bc != result)
        ecx_1 = var_14
        
        if (ecx_1 != 0 && *ecx_1 != 0)
            result_3 = sub_63d4e0(&var_14)
            int32_t temp0_1 = *(result_3 + 4)
            *(result_3 + 4) -= 1
            ecx_1 = *(result_3 + 4)
            
            if (temp0_1 == 1)
                result_3, ecx_1 = sub_64c080(result_3, *(result_3 + 0xc) + 0x10)
                var_14 = &data_801800
    
    int32_t var_8_2 = 0xffffffff
    int32_t result_5 = result_4

if (*result_4 == 0)
    result_3, ecx_1 = sub_69f4a0(result_3, 0, result_4, 1)

*(result_4 + 0x1c) += 1
int32_t var_8_3 = 2
int32_t var_30_3 = 0
var_34 = ecx_1

if (arg1 != 0)
    int32_t eax_5
    char ecx_8
    eax_5, ecx_8 = sub_63d720(&var_34, arg1)
    sub_732f20(eax_5, eax_3, ecx_8)
    *(result_4 + 0x1c) -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

sub_63b870(result_3, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
    "XString::XString")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
