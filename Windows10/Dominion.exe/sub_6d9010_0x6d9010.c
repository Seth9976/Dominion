// 函数: sub_6d9010
// 地址: 0x6d9010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?find_next_state@?$output_processor@_WV?$console_output_adapter@_W@__crt_stdio_output@@V?$positional_parameter_base@_WV?$console_output_adapter@_W@__crt_stdio_output@@@2@@__crt_stdio_output@@ABE?AW4state@2@_WW432@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esi = arg1
struct _EXCEPTION_REGISTRATION_RECORD** edi

if (esi != 0)
    if (esi[1] != 4)
        sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
            "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    edi = arg1
else
    struct _EXCEPTION_REGISTRATION_RECORD** var_14
    sub_69fd50(eax_3, "!Null\Null", &var_14, 4)
    struct _EXCEPTION_REGISTRATION_RECORD** var_8_1 = esi
    char* eax_4 = var_14
    char* const ecx_1 = &data_801800
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    eax_3 = sub_69f030(ecx_1, &esi[1])
    esi = eax_3
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        eax_3 = var_14
        
        if (eax_3 != 0 && *eax_3 != 0)
            eax_3 = sub_63d4e0(&var_14)
            int32_t temp0_1 = eax_3[1]
            eax_3[1] -= 1
            
            if (temp0_1 == 1)
                eax_3 = sub_64c080(eax_3, &eax_3[3][2])
                var_14 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
    edi = esi

struct _EXCEPTION_REGISTRATION_RECORD** var_18 = esi

if (*edi == 0)
    sub_69f4a0(eax_3, 0, edi, 1)

struct _EXCEPTION_REGISTRATION_RECORD* result = *edi
edi[7] = &edi[7]->Next + 1
int32_t i = 0
int32_t var_8_4 = 2
void* __offset(_EXCEPTION_REGISTRATION_RECORD, 0x18) edi_2 = &result->Next[3]

do
    int32_t edx_4 = (edi_2 - 0x18)->__offset(0x10).d
    
    if (edx_4 != 0)
        result = (*(*data_147b070 + 0x4c))(i, edx_4)
        (edi_2 - 0x18)->__offset(0x10).d = 0
    
    if ((edi_2 - 0x18)->__offset(0x18).d != 0)
        result = (edi_2 - 0x18)->__offset(0x20).d
        (edi_2 - 0x18)->__offset(0x18).d = 0
        
        if (result != 0)
            result = _aligned_free(result)
    
    i += 1
    edi_2 += 0x28
while (i s< 2)

if (esi != 0)
    esi[7] -= 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
