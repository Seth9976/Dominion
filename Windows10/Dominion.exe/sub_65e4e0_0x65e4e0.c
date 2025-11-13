// 函数: sub_65e4e0
// 地址: 0x65e4e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = *(arg1 + 0x60)

if (eax_3 != 0)
    int32_t* ecx = *eax_3
    
    if (ecx != 0)
        void* eax_4
        float xmm0
        eax_4, xmm0 = sub_6419c0(ecx, *(arg1 + 0x64))
        _mm_cvtepi32_ps(zx.o(*(arg1 + 0xc)))
        *(arg1 + 0x20)
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4

int32_t* esi_1 = **(arg1 + 4)

if (esi_1 == 0)
    int32_t* var_14
    sub_69fd50(eax_3, "!Null\Null", &var_14, 0x12)
    int32_t* var_8_1 = esi_1
    char* eax_5 = var_14
    char* const ecx_4 = &data_801800
    
    if (eax_5 != 0)
        ecx_4 = eax_5
    
    eax_3 = sub_69f030(ecx_4, esi_1 + 0x12)
    esi_1 = eax_3
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        eax_3 = var_14
        
        if (eax_3 != 0 && *eax_3 != 0)
            eax_3 = sub_63d4e0(&var_14)
            int32_t temp0_1 = eax_3[1]
            eax_3[1] -= 1
            
            if (temp0_1 == 1)
                eax_3 = sub_64c080(eax_3, eax_3[3] + 0x10)
                var_14 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
else if (esi_1[1] != 0x12)
    sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
        "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*esi_1 == 0)
    sub_69f4a0(eax_3, 0, esi_1, 1)

int32_t ecx_8 = esi_1[7]
esi_1[7] = ecx_8 + 1
int32_t* eax_7 = *esi_1
_mm_cvtepi32_ps(zx.o(*(arg1 + 0xc)))
void* eax_8 = *eax_7
_mm_cvtepi32_ps(zx.o(*(eax_8 + 4)))
*(arg1 + 0x20)
esi_1[7] = ecx_8
fsbase->NtTib.ExceptionList = ExceptionList
return eax_8
