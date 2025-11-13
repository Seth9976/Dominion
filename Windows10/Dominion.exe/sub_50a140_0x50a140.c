// 函数: sub_50a140
// 地址: 0x50a140
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Getifld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABAHPADAAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1HABVlocale@2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edi
int32_t var_b4 = edi
int32_t __saved_ebp
int32_t var_b8 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = *(sub_573400() + 0xc)
uint32_t result = sub_566920(edi)

if (result != 0)
    int64_t var_1c_1 = 0
    void* ecx
    ecx.b = *(arg1 + 4) != eax_4
    int64_t var_40_1 = 0
    int64_t var_24_1 = 0
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_5682550798046ef69dca02911653a9ff>, void>::VTable
        * const var_44 = ecx + 0x28
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = sx.q(eax_4)
    int32_t var_38_1 = 0
    int32_t var_2c_1 = eax_6
    int32_t var_30_1 = 0
    int128_t var_ac = var_44.o
    int32_t var_28_1 = edx_1
    struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_be73921c5080a665e22fa1732d5e0078>, void>::VTable
        * const var_74
    int32_t* var_50_1 = &var_74
    char var_75
    var_40_1.d = &var_75
    int128_t var_9c_1 = result.o
    var_75 = 0
    var_74 = &std::_Func_impl_no_alloc<class <lambda_be73921c5080a665e22fa1732d5e0078>, void>::`vftable'{for `std::_Func_base<void>'}
    int32_t var_4c_1 = 0x4c
    int128_t var_8c_1 = var_24_1.o
    int32_t var_48_1 = 0
    var_44 = &std::_Func_impl_no_alloc<class <lambda_5682550798046ef69dca02911653a9ff>, void>::`vftable'{for `std::_Func_base<void>'}
    var_24_1:4.d = &var_44
    var_1c_1.d = 0x4d
    var_1c_1:4.d = 0
    int32_t var_8_1 = 0
    sub_56a100(&var_ac, &var_74, *(arg1 + 4), 2, 1, 1, &var_ac, 0x200)
    int32_t var_8_2 = 0xffffffff
    int32_t eax_8
    char ecx_3
    eax_8, ecx_3 = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)
    
    if (var_75 == 0)
        result = sub_5695c0(eax_8, 0x3ee, result, 0xb)
    else
        int32_t var_bc_1 = 0
        result = sub_566dc0(eax_8, 0x3ee, result, 0xb, ecx_3)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
