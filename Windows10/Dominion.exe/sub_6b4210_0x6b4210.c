// 函数: sub_6b4210
// 地址: 0x6b4210
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = arg2
struct _EXCEPTION_REGISTRATION_RECORD** esi = arg1
char const* const var_30
int32_t var_2c
char const* const var_28
char* ecx

if (edi s>= 0)
    if (esi == 0)
        struct _EXCEPTION_REGISTRATION_RECORD** var_14
        sub_69fd50(eax_3, "!Null\Null", &var_14, 0x12)
        struct _EXCEPTION_REGISTRATION_RECORD** var_8_1 = esi
        char* eax_4 = var_14
        char* const ecx_2 = &data_801800
        
        if (eax_4 != 0)
            ecx_2 = eax_4
        
        eax_3, arg2 = sub_69f030(ecx_2, esi + 0x12)
        esi = eax_3
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            eax_3 = var_14
            
            if (eax_3 != 0 && *eax_3 != 0)
                eax_3 = sub_63d4e0(&var_14)
                int32_t temp0_1 = eax_3[1]
                eax_3[1] -= 1
                
                if (temp0_1 == 1)
                    eax_3, arg2 = sub_64c080(eax_3, &eax_3[3][2])
                    var_14 = &data_801800
        
        int32_t var_8_3 = 0xffffffff
        goto label_6b42dc
    
    if (esi[1] == 0x12)
    label_6b42dc:
        
        if (*esi == 0)
            arg2.b = 0
            sub_69f4a0(eax_3, arg2.b, esi, 1)
        
        int32_t edx_3 = esi[7]
        esi[7] = edx_3 + 1
        struct _EXCEPTION_REGISTRATION_RECORD* Next = (*esi)->Next
        
        if (edi s< 0x80)
            bool cond:0 = *(Next + (edi << 2) + 0x44) != 0xffffffff
            esi[7] = edx_3
            int32_t eax_7
            eax_7.b = cond:0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_7
        
        int32_t* i
        
        for (i = *(Next->__offset(0x38).d + (((edi u>> 4 | edi) & Next->__offset(0x3c).d) << 2)); 
                i != 0; i = i[2])
            if (edi == *i)
                if (i == 0xfffffffc)
                    break
                
                esi[7] = edx_3
                i.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return i
        
        esi[7] = edx_3
        i.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return i
    
    var_28 = "DefAutoLock::DefAutoLock"
    var_2c = 0x19
    var_30 = "C:\x\ax2017\Engine\DefLoad.h"
    ecx = "assetPtr && assetPtr->assetType == assetType"
else
    var_28 = "FontHasCharacter"
    var_2c = 0x21b
    var_30 = "C:\x\ax2017\Engine\Font.cpp"
    ecx = "unicode >= 0"

sub_63b870(eax_3, &data_801800, ecx, var_30, var_2c, var_28)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
