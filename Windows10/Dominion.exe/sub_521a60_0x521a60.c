// 函数: sub_521a60
// 地址: 0x521a60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7657d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_e8 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
void* result
char ecx_1
result, ecx_1 = sub_5887c0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 0)
void* result_1 = result

if (result_1 != 0)
    int32_t var_ec_1 = 0
    uint32_t eax_4
    int32_t edx_1
    eax_4, edx_1 = sub_566dc0(result, 0x3eb, result_1, 0xb, ecx_1)
    
    if (sub_5696d0(eax_4, edx_1, result_1.w, 8, 0) == 0)
        uint32_t esi_2 = zx.d(result_1.w)
        int32_t eax_8 = *(sub_573400() + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        result = sub_563820(*(esi_2 * 0x64 + eax_8 + 0x1a4c), 4)
        
        if (result.b != 0)
            int32_t esi_3 = *(sub_573400() + 0xc)
            int64_t var_a8_1 = 0
            int64_t var_84_1 = 0
            int32_t eax_12 = *(sub_573400() + 0xc)
            void* ecx_8 = *arg1
            int64_t var_8c_1 = 0
            int32_t eax_13
            int32_t edx_3
            edx_3:eax_13 = sx.q(eax_12)
            int32_t var_a0_1 = 0
            int32_t var_94_1 = eax_13
            int32_t var_98_1 = 0
            int128_t var_dc = 0x53.o
            int32_t var_90_1 = edx_3
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_92955b226a3f12dcc930e98709c3c720>, void>::VTable
                * const var_74
            int32_t* var_50_1 = &var_74
            var_74 = &std::_Func_impl_no_alloc<class <lambda_92955b226a3f12dcc930e98709c3c720>, void>::`vftable'{for `std::_Func_base<void>'}
            int128_t var_cc_1 = result_1.o
            void* var_70_1 = ecx_8
            void* result_2 = result_1
            int32_t var_4c_1 = 0x35
            int128_t var_bc_1 = var_8c_1.o
            int32_t var_48_1 = 0
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_0ad9a55f0365eb85a416a0b6e114fdb7>, void>::VTable
                * const var_44 = &std::_Func_impl_no_alloc<class <lambda_0ad9a55f0365eb85a416a0b6e114fdb7>, void>::`vftable'{for `std::_Func_base<void>'}
            int32_t var_40_1 = esi_3
            void* result_3 = result_1
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_0ad9a55f0365eb85a416a0b6e114fdb7>, void>::VTable
                * const* var_20_1 = &var_44
            int32_t var_1c_1 = 0x36
            int32_t var_18_1 = 0
            int32_t var_8_1 = 0
            sub_56a100(&var_dc, &var_74, ecx_8, 2, 1, 1, &var_dc, 0x200)
            int32_t var_8_2 = 0xffffffff
            result = `eh vector vbase constructor iterator'(&var_74, 0x30, 2, sub_4f8780)
    else
        result = sub_563590(0x100)
        
        if (result != 0)
            void* eax_6 = sub_573400()
            result = sub_583720(eax_6, *(eax_6 + 0xc), *(eax_6 + 4), result, 0x476, nullptr, 0x476, 
                0, 0, 4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
