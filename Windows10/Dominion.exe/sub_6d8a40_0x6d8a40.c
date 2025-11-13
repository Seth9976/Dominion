// 函数: sub_6d8a40
// 地址: 0x6d8a40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@QAE@ABV_Locinfo@1@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* esi = *arg1
int32_t var_20
char* ecx_1

if (*esi == 1)
    int32_t* edx_1 = esi[2]
    
    if (*edx_1 == 1)
        esi[4].b = sub_6dcff0(arg1, edx_1[2] + 8, &data_8ce7bc, 1)
        void* eax_5 = esi[2]
        *(esi + 0x11) = sub_6dcff0(eax_5, *(eax_5 + 8) + 8, &data_8ce7bc, 0).b
        int32_t var_8_2 = 1
        char* result
        
        if (data_cf65bc != 0)
            char* result_1
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_1)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(result, *(result + 0xc) + 0x10)
        
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    char const* const var_1c_1 = "MaterialReimport"
    var_20 = 0x399
    ecx_1 = "pMaterial->pPassArray[0].variationCount == 1"
else
    char const* const var_1c = "MaterialReimport"
    var_20 = 0x398
    ecx_1 = "pMaterial->passCount == 1"

sub_63b870(arg1, &data_801800, ecx_1, "C:\x\ax2017\Engine\Material.cpp", var_20, "MaterialReimport")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
