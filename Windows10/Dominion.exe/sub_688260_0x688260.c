// 函数: sub_688260
// 地址: 0x688260
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76de05
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esi = *arg1

if (esi == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** var_14
    sub_69fd50(eax_3, "!Null\Null", &var_14, 0x15)
    struct _EXCEPTION_REGISTRATION_RECORD** var_8_1 = esi
    char* eax_4 = var_14
    char* const ecx_1 = &data_801800
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    eax_3 = sub_69f030(ecx_1, esi + 0x15)
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
else if (esi[1] != 0x15)
    sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
        "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

struct _EXCEPTION_REGISTRATION_RECORD** var_18 = esi

if (*esi == 0)
    sub_69f4a0(eax_3, 0, esi, 1)

struct _EXCEPTION_REGISTRATION_RECORD* eax_5 = *esi
esi[7] = &esi[7]->Next + 1
int32_t var_8_4 = 2
void* eax_7 = eax_5->Next->__offset(0x38).d

if (eax_7 != 0 && *(eax_7 + 0x10) == 2)
    int32_t* edi_1 = arg1[0x15]
    
    if (edi_1 != 0)
        ov_clear(edi_1, eax_2)
        sub_64c080(edi_1, 0x2e0)
        arg1[0x15] = 0

(*(*data_147abec + 0x34))(arg1)
void* edx_4 = data_147abf0
uint32_t result = zx.d(arg1[0x18].w)
int32_t ecx_7 = *(edx_4 + 0xc)
*(edx_4 + 0xc) = result
arg1[0x18] = ecx_7
*(edx_4 + 0x10) -= 1

if (esi != 0)
    esi[7] -= 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
