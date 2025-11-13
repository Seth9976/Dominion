// 函数: sub_5fcf50
// 地址: 0x5fcf50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t esi
int32_t var_20 = esi
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = data_be4a3c

if (eax_3 == 0 || eax_3 == 1)
    sub_5fcd10(esi)
    int32_t var_8_1 = 0
    int32_t result = sub_5fce60()
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        char* var_14
        char* ecx_9 = var_14
        
        if (ecx_9 != 0 && *ecx_9 != 0)
            char* eax_9 = sub_63d4e0(&var_14)
            int32_t temp3_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

void* eax_6 = eax_3 - 2
int32_t var_2c
char const* const var_28
char* ecx

if (eax_3 == 2)
    int32_t esi_1 = data_be4a40
    eax_6 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    
    if (esi_1 s>= 0)
        if (esi_1 s< *(eax_6 + 0x71dc))
            sub_63d850(eax_6 + 0x6edc + esi_1 * 0xc, &data_be4a38)
            data_cc8dc8
            sub_4d8ad0(esi_1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return data_be4a40
        
        var_28 = "DomSetSaveExisting"
        var_2c = 0x8d1f
        ecx = "setIdx < sets.numSets"
    else
        var_28 = "DomSetSaveExisting"
        var_2c = 0x8d1e
        ecx = "setIdx >= 0"
else
    var_28 = "DomSaveSetSave"
    var_2c = 0x8d44
    ecx = "Halt"

sub_63b870(eax_6, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_2c, var_28)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
