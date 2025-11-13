// 函数: sub_555f70
// 地址: 0x555f70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_766c01
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x1a04)
int32_t __saved_ebp
void* eax_2 = __security_cookie ^ &__saved_ebp
void* var_14 = eax_2
int32_t edi
int32_t var_18 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
int32_t var_20 = 0
int32_t var_24 = 0
int32_t var_28 = 1
int32_t var_2c = 1
sub_590760(eax_3, *(eax_3 + 0xc), *(eax_3 + 4))
void* eax_4 = sub_573400()
int32_t ecx_1 = *(eax_4 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_4, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_5 = *(eax_4 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_5 + 0x17558) |= 2
char eax_6
int32_t edx_1
eax_6, edx_1 = sub_56e1b0(0xe1c)
void var_1a14
int32_t var_d58[0x320]
__builtin_memcpy(&var_d58, 
    sub_566240(zx.d(eax_6) + 2, edx_1, zx.d(eax_6) + 2, &var_1a14, &data_7bfa7c), 0xc84)
int32_t ecx_4
ecx_4.b = 1
int32_t edx_2 = sub_566d60(ecx_4)
uint32_t var_d8
uint32_t eax_10 = var_d8
char var_d59 = 0

if (eax_10 == zx.d(eax_6) + 2)
    int32_t esi_1 = 0
    var_d59 = 1
    
    if (eax_10 s> 0)
        do
            eax_10, edx_2 = sub_5696d0(eax_10, edx_2, (var_d58[esi_1]).w, 4, 0)
            
            if (eax_10.b == 0)
                var_d59 = 0
                break
            
            esi_1 += 1
        while (esi_1 s< var_d8)

int32_t var_d84 = 0
int64_t var_d8c = 0
int64_t var_d7c
__builtin_memset(&var_d7c, 0, 0x1c)
int32_t var_d80 = 1
int128_t var_44 = 0x1c.o
int32_t var_24_3 = 0xe
int128_t var_34_1 = var_d80.o
int64_t var_d70
var_24_3.o = var_d70.o
int32_t* result = sub_563c40(&var_44, var_24_3, 0)

if (result != 0)
    uint32_t eax_11 = var_d8
    int32_t ecx_6 = 0
    
    if (eax_11 s> 0)
        do
            if (var_d58[ecx_6] == result)
                int32_t var_d8_1 = eax_11 - 1
                eax_11 = var_d58[eax_11 - 1]
                var_d58[ecx_6] = eax_11
                break
            
            ecx_6 += 1
        while (ecx_6 s< eax_11)
    
    int32_t var_28_2 = 0
    int32_t var_2c_1 = 0
    var_34_1:4.d = 3
    var_34_1.d = 0x3ea
    uint32_t eax_13 = sub_5660c0(eax_11, 0x3ee, result, var_34_1, 0xb, nullptr, eax_2)
    var_44:0xc.d = 0
    var_44:8.d = 7
    var_44:4.d = 0xb
    sub_5674c0(eax_13, 0x3ee, &var_d58)
    int32_t i = *(sub_573400() + 0xc)
    int32_t esi_3 = 0
    void* eax_16 = *(sub_573400() + 4)
    int32_t ecx_9 = *(eax_16 + 0x1520)
    
    if (ecx_9 s<= 0)
    label_5561a7:
        esi_3 = 0
    else
        void* eax_17 = eax_16 + 0x1a70
        
        while (*(eax_17 - 0x24) != 0xe1c || *eax_17 != i)
            esi_3 += 1
            eax_17 += 0x64
            
            if (esi_3 s>= ecx_9)
                goto label_5561a7
    
    int32_t i_1 = *(sub_573400() + 0xc)
    int32_t ecx_10 = 0
    result = *(sub_573400() + 4)
    int32_t edx_6 = result[0x548]
    
    if (edx_6 s<= 0)
    label_5561e5:
        ecx_10 = 0
    else
        result = &result[0x69c]
        
        while (result[-9] != 0xe1a || *result != i_1)
            ecx_10 += 1
            result = &result[0x19]
            
            if (ecx_10 s>= edx_6)
                goto label_5561e5
    
    if (var_d59 != 0)
        struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c413488ac3ef85d8240cb77750c3dc35>, void>::VTable
            * const* eax_21
        
        if (esi_3 == 0)
            int32_t var_4c_1 = 0x8c
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c413488ac3ef85d8240cb77750c3dc35>, void>::VTable
                * const var_74
            int32_t* var_50_1 = &var_74
            int32_t var_48_1 = esi_3
            var_18 = esi_3
            int128_t* var_20_5 = &var_44
            
            if (ecx_10 != 0)
                var_74 = &std::_Func_impl_no_alloc<class <lambda_bc9410503a33b2e745aeedd6eeac8eab>, void>::`vftable'{for `std::_Func_base<void>'}
                var_44.d = &std::_Func_impl_no_alloc<class <lambda_7d764b2e4fd397327a43f8fec0b6097a>, void>::`vftable'{for `std::_Func_base<void>'}
                int32_t var_1c_2 = 0x8e
                int32_t var_8_2 = 1
            else
                var_74 = &std::_Func_impl_no_alloc<class <lambda_c413488ac3ef85d8240cb77750c3dc35>, void>::`vftable'{for `std::_Func_base<void>'}
                var_44.d = &std::_Func_impl_no_alloc<class <lambda_439e3a51d623d0515b16c5fe02dbf85e>, void>::`vftable'{for `std::_Func_base<void>'}
                int32_t var_1c_1 = 0x8d
                int32_t var_8_1 = ecx_10
            
            int32_t var_20_6 = 0x200
            void* var_24_5 = &data_cce9d8
            int32_t var_28_3 = 1
            int32_t var_2c_2 = 1
            var_34_1:4.d = 2
            sub_56a100(&var_44, &var_74, 0xffffffff)
            eax_21 = &var_74
            goto label_5562e7
        
        if (ecx_10 == 0)
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c413488ac3ef85d8240cb77750c3dc35>, void>::VTable
                * var_d4 = &std::_Func_impl_no_alloc<class <lambda_113f161c99569ea435c10a7d9615b6d2>, void>::`vftable'{for `std::_Func_base<void>'}
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c413488ac3ef85d8240cb77750c3dc35>, void>::VTable
                ** var_b0_1 = &var_d4
            int32_t var_ac_1 = 0x8e
            int32_t var_a8_1 = ecx_10
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_f18bdb982224b924ec09ba62ec700b75>, void>::VTable
                * const var_a4 = &std::_Func_impl_no_alloc<class <lambda_f18bdb982224b924ec09ba62ec700b75>, void>::`vftable'{for `std::_Func_base<void>'}
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_f18bdb982224b924ec09ba62ec700b75>, void>::VTable
                * const* var_80_1 = &var_a4
            int32_t var_7c_1 = 0x8d
            int32_t var_78_1 = ecx_10
            int32_t var_20_7 = 0x200
            void* var_24_6 = &data_cce9d8
            int32_t var_28_4 = 1
            int32_t var_2c_3 = 1
            var_34_1:4.d = 2
            int32_t var_8_3 = 2
            sub_56a100(&var_a4, &var_d4, 0xffffffff)
            eax_21 = &var_d4
        label_5562e7:
            int32_t var_8_4 = 0xffffffff
            void (__fastcall* var_20_8)(void* arg1) = sub_4f8780
            int32_t var_24_7 = 2
            int32_t var_28_5 = 0x30
            struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_c413488ac3ef85d8240cb77750c3dc35>, void>::VTable
                * const* var_2c_4 = eax_21
            result = `eh vector vbase constructor iterator'()

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
