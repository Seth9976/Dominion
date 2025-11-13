// 函数: sub_65e2e0
// 地址: 0x65e2e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76d0a5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x24) f* *(arg1 + 0x20)
int32_t* ecx = *(arg1 + 0x60)
int32_t* ecx_1

if (ecx != 0)
    ecx_1 = *ecx

char const* const var_38
int32_t var_34
char const* const var_30
char* ecx_2
float var_14
struct _EXCEPTION_REGISTRATION_RECORD* Next

if (ecx == 0 || ecx_1 == 0)
    eax_3 = *(arg1 + 4)
    struct _EXCEPTION_REGISTRATION_RECORD* esi_2 = *eax_3
    
    if (esi_2 == 0)
        sub_69fd50(eax_3, "!Null\Null", &var_14, 0x12)
        struct _EXCEPTION_REGISTRATION_RECORD* var_8_1 = esi_2
        float eax_8 = var_14
        float ecx_7 = &data_801800
        
        if (eax_8 != 0)
            ecx_7 = eax_8
        
        eax_3 = sub_69f030(ecx_7, esi_2 + 0x12)
        esi_2 = eax_3
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            float ecx_8 = var_14
            
            if (ecx_8 != 0 && *ecx_8 != 0)
                eax_3 = sub_63d4e0(&var_14)
                int32_t temp0_1 = eax_3[1]
                eax_3[1] -= 1
                
                if (temp0_1 == 1)
                    eax_3 = sub_64c080(eax_3, &eax_3[3][2])
                    var_14 = &data_801800
        
        int32_t var_8_3 = 0xffffffff
        goto label_65e424
    
    if (esi_2->Handler == 0x12)
    label_65e424:
        struct _EXCEPTION_REGISTRATION_RECORD* var_1c_1 = esi_2
        
        if (esi_2->Next == 0)
            sub_69f4a0(eax_3, 0, esi_2, 1)
        
        int32_t ecx_12 = esi_2->__offset(0x1c).d
        esi_2->__offset(0x1c).d = ecx_12 + 1
        Next = esi_2->Next->Next
        int32_t var_8_4 = 2
        
        if (Next->__offset(0xc).d != 0)
            _mm_cvtepi32_ps(zx.o(Next->__offset(0x8).d)) f* *(arg1 + 0x20)
            esi_2->__offset(0x1c).d = ecx_12
            fsbase->NtTib.ExceptionList = ExceptionList
            return Next
        
        sub_63b870(Next, &data_801800, "pDefFont->fontLineBreakSpacing != 0", 
            "C:\x\ax2017\Engine\UI2.cpp", 0x28ee, "FancyLineSpacing")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    var_30 = "DefAutoLock::DefAutoLock"
    var_34 = 0x19
    var_38 = "C:\x\ax2017\Engine\DefLoad.h"
    ecx_2 = "assetPtr && assetPtr->assetType == assetType"
else
    bool cond:0_1 = ecx_1[1] == 0x25
    var_14 = *(arg1 + 0x64)
    
    if (cond:0_1)
        void* eax_4 = sub_5af880(ecx_1)
        void* ecx_3 = *(eax_4 + 0x38)
        int32_t esi_1 = *(ecx_3 + 0x14)
        int32_t ecx_4 = *(ecx_3 + 4)
        Next = *(eax_4 + 0x40) - *(eax_4 + 0x14) + *(eax_4 + 0x18) + *(eax_4 + 0x10)
        var_14 / _mm_cvtepi32_ps(zx.o((zx.d(*(esi_1 + ecx_4 + 0x12)) << 8)
            + zx.d(*(esi_1 + ecx_4 + 0x13)))) * _mm_cvtepi32_ps(zx.o(Next)) f* *(arg1 + 0x20)
        fsbase->NtTib.ExceptionList = ExceptionList
        return Next
    
    var_30 = "TTFontGet"
    var_34 = 0x1ef
    var_38 = "C:\x\ax2017\Engine\TTFont.cpp"
    ecx_2 = "ttf->assetType == ASSET_TYPE_TRUETYPE"
sub_63b870(eax_3, &data_801800, ecx_2, var_38, var_34, var_30)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
