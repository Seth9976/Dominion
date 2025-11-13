// 函数: sub_6d8ed0
// 地址: 0x6d8ed0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76de05
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = arg2
struct _EXCEPTION_REGISTRATION_RECORD** esi

if (arg1 != 0)
    if (arg1[1] != 4)
        sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
            "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = arg1
    esi = arg1
else
    struct _EXCEPTION_REGISTRATION_RECORD** var_14
    sub_69fd50(eax_3, "!Null\Null", &var_14, 4)
    struct _EXCEPTION_REGISTRATION_RECORD** var_8_1 = arg1
    char* eax_4 = var_14
    char* const ecx_1 = &data_801800
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    eax_3, arg2 = sub_69f030(ecx_1, &arg1[1])
    esi = eax_3
    int32_t var_8_2 = 1
    
    if (data_cf65bc != arg1)
        eax_3 = var_14
        
        if (eax_3 != 0 && *eax_3 != 0)
            eax_3 = sub_63d4e0(&var_14)
            int32_t temp0_1 = eax_3[1]
            eax_3[1] -= 1
            
            if (temp0_1 == 1)
                eax_3, arg2 = sub_64c080(eax_3, &eax_3[3][2])
                var_14 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
    struct _EXCEPTION_REGISTRATION_RECORD** var_18 = esi

if (*esi == 0)
    arg2.b = 0
    sub_69f4a0(eax_3, arg2.b, esi, 1)

struct _EXCEPTION_REGISTRATION_RECORD* eax_5 = *esi
esi[7] = &esi[7]->Next + 1
int32_t var_8_4 = 2
void* eax_8 = &eax_5->Next[ebx * 5 + 2]
int32_t result = *eax_8

if (result == 0)
    result = (*(*data_147b070 + 0x48))(arg1, ebx)
    *eax_8 = result

esi[7] -= 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
