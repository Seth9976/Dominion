// 函数: sub_6dd400
// 地址: 0x6dd400
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_770f8b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = arg1
int32_t var_20 = eax_3
void* ecx = data_147abe8
char const* const var_40
int32_t var_3c
char const* const var_38_1
char* ecx_1

if (ecx != 0)
    void* ebx_1 = *(ecx + 4)
    int32_t var_14
    int32_t esi
    int32_t edi
    
    if (eax_3 == 0)
        sub_69fd50(eax_3, "!Null\Null", &var_14, 2)
        int32_t var_8_1 = 0
        char* const ecx_3 = &data_801800
        int32_t eax_4 = var_14
        
        if (eax_4 != 0)
            ecx_3 = eax_4
        
        eax_3 = sub_69f030(ecx_3, 2)
        esi = eax_3
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            eax_3 = var_14
            
            if (eax_3 != 0 && *eax_3 != 0)
                eax_3 = sub_63d4e0(&var_14)
                int32_t temp0_1 = *(eax_3 + 4)
                *(eax_3 + 4) -= 1
                
                if (temp0_1 == 1)
                    eax_3 = sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
                    var_14 = &data_801800
        
        int32_t var_8_3 = 0xffffffff
        edi = esi
        goto label_6dd4e0
    
    if (*(eax_3 + 4) == 2)
        esi = eax_3
        edi = eax_3
    label_6dd4e0:
        int32_t var_1c = esi
        
        if (*edi == 0)
            sub_69f4a0(eax_3, 0, edi, 1)
        
        int32_t* eax_5 = *edi
        *(edi + 0x1c) += 1
        int32_t var_8_4 = 2
        void* eax_7 = **eax_5
        int32_t eax_8
        
        if (eax_7 != 0)
            eax_8 = *(eax_7 + 0x10)
            var_14 = eax_8
        
        int32_t* result
        
        if (eax_7 == 0 || eax_8 == 0)
            result = nullptr
        else
            *(ebx_1 + 0x1c) += 1
            
            if (*(ebx_1 + 0x10) == 0)
                sub_6e0a60(ebx_1 + 0x10)
            
            int32_t* result_1 = *(ebx_1 + 0x10)
            int32_t* result_2 = result_1
            *(ebx_1 + 0x10) = *result_1
            __builtin_memset(&result_1[1], 0, 0x18)
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_38_2)(struct 
                _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_6e0980
            var_8_4.b = 4
            `eh vector constructor iterator'(&result_1[7], 0xc, 8, PDBStream::PDBStream)
            var_8_4.b = 2
            result_1[0x1f] = 0
            result_1[0x20] = 0
            result_1[0x21] = 0
            result_1[0xc4] = 0
            result_1[0x22] = 0
            result_1[0x2b] = 0
            *result_1 = var_20
            int32_t edi_3 = var_14 << 6
            result_1[4] = sub_64c020(edi_3)
            int32_t eax_13 = var_14
            result_1[5] = 0
            result_1[6] = eax_13
            sub_6e08a0(&result_1[4], eax_13)
            result_1[0x1f] = sub_64c020(edi_3)
            int32_t eax_15 = var_14
            result_1[0x20] = 0
            result_1[0x21] = eax_15
            sub_6e08a0(&result_1[0x1f], eax_15)
            result = result_1
        
        if (esi != 0)
            *(esi + 0x1c) -= 1
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    var_38_1 = "DefAutoLock::DefAutoLock"
    var_3c = 0x19
    var_40 = "C:\x\ax2017\Engine\DefLoad.h"
    ecx_1 = "assetPtr && assetPtr->assetType == assetType"
else
    var_38_1 = "GetGameData"
    var_3c = 0x45
    var_40 = "C:\x\ax2017\Engine\Game.h"
    ecx_1 = "gpGameData"

sub_63b870(eax_3, &data_801800, ecx_1, var_40, var_3c, var_38_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
