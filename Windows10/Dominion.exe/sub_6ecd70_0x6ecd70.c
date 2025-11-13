// 函数: sub_6ecd70
// 地址: 0x6ecd70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771a9e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0
int32_t eax_3 = *(arg1 + 0x148)

if (eax_3 s<= 0)
    sub_63b870(eax_3, &data_801800, "emitResults.currentFunctionStackDepth > 0", 
        "C:\x\ax2017\Engine\MaterialFnDef.cpp", 0x3a1, "EmitFnLine")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* esi = arg1 + (*(arg1 + (eax_3 << 2) + 0x104) << 3)
int32_t var_8_1 = 0
char* result_2 = *arg2
int32_t* result_1 = result_2

if (result_2 != 0 && *result_2 != 0)
    char* eax_5 = sub_63d4e0(&result_1)
    *(eax_5 + 4) += 1

char* eax_6 = *(esi + 8)
int32_t var_18_1 = 1
char* edx = &data_801800

if (eax_6 != 0)
    edx = eax_6

sub_63d960(&result_1, edx)
int32_t* result = sub_63d850(esi + 8, &result_1)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = result[1]
        result[1] -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, result[3] + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
