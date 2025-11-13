// 函数: sub_55e500
// 地址: 0x55e500
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76646b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x19b0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = sub_5666c0(eax_2, arg2, var_20)
uint32_t result_1 = result

if (result != 0)
    result = sub_57dc30(*(sub_573400() + 4), result.w)
    uint32_t result_2 = result
    
    if (result_2 != 0)
        void* eax_4 = sub_573400()
        void* var_cb4 = eax_4
        void* esi_1 = *(eax_4 + 4)
        result = sub_57da30(esi_1, result_2)
        int32_t ecx_3 = 7
        void* esi_2 = esi_1 + 0x1594
        
        while (true)
            int32_t i = *esi_2
            
            if (i != result_2 && *(esi_2 + 4) != result_2 && i != result)
                ecx_3 += 1
                esi_2 += 0x10
                
                if (ecx_3 s>= 0x48)
                    break
                
                continue
            
            if (i == 0)
                break
            
            int32_t ecx_4 = 7
            int32_t* eax_7 = *(var_cb4 + 4) + 0x1594
            
            while (*eax_7 != i)
                if (eax_7[1] == i)
                    break
                
                ecx_4 += 1
                eax_7 = &eax_7[4]
                
                if (ecx_4 s>= 0x48)
                    ecx_4 = 0
                    break
            
            result = ecx_4 - 7
            
            if (result u<= 0x1a)
                uint32_t result_3 = result_1
                void* eax_8
                int32_t edx_3
                eax_8, edx_3 = sub_573400()
                *(*(eax_8 + 0xc) * 0x5a30 + *(eax_8 + 4) + 0x1756c) = result_3
                void var_19d0
                void var_cb0
                __builtin_memcpy(&var_cb0, sub_568780(&var_19d0, edx_3, 0x3ea, &var_19d0), 0xc84)
                uint32_t esi_5 = zx.d(result_1.w)
                int32_t edi = *(sub_573400() + 4)
                
                if (esi_5 u>= 0x320)
                    sub_591930()
                
                struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_38a9ff0ca12d8923b4985a9ebe40d155>,bool,enum CardID>::VTable
                    * const var_d18 = &std::_Func_impl_no_alloc<class <lambda_38a9ff0ca12d8923b4985a9ebe40d155>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
                int32_t var_cbc = *(esi_5 * 0x64 + edi + 0x1a4c)
                int32_t* var_d14_1 = &var_cbc
                struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_38a9ff0ca12d8923b4985a9ebe40d155>,bool,enum CardID>::VTable
                    * const* var_cf4_1 = &var_d18
                void** eax_15 = &var_cb4
                int32_t var_14_1 = 0
                void** var_30_2 = &var_cb4
                int32_t var_34_1 = 0
                void var_5c
                var_cb4 = &var_5c
                int32_t var_38_1 = 0
                var_14_1.b = 2
                
                if (var_cf4_1 != 0)
                    eax_15 = (*var_cf4_1)->vFunc_0(&var_5c)
                    void** var_38_2 = eax_15
                
                var_14_1.b = 0
                int32_t var_14_2 = 0xffffffff
                int32_t var_30_3 = GSI1::OffForSym(eax_15, var_30_2, &var_cb0)
                
                if (var_cf4_1 != 0)
                    (*var_cf4_1)->vFunc_4(var_cf4_1 != &var_d18)
                
                int64_t var_cec
                __builtin_memset(&var_cec, 0, 0x2c)
                int32_t var_30_5 = 0
                char var_34_2 = 0
                int32_t var_38_3 = 0x14
                int128_t var_d48 = 0x3a.o
                int32_t var_ce0
                int128_t var_d38_1 = var_ce0.o
                int64_t var_cd0
                int128_t var_d28_1 = var_cd0.o
                __builtin_memcpy(&var_cb0, 
                    sub_563960(&var_19d0, 0, &var_cb0, &var_19d0, 2, 0xc, &var_d48, var_38_3, 
                        var_34_2, var_30_5), 
                    0xc84)
                sub_568f20(&var_cb0)
                struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_292ea76b9fa7d47ac67ba9f7be80d3f8>, void>::VTable
                    * const var_54 = &std::_Func_impl_no_alloc<class <lambda_292ea76b9fa7d47ac67ba9f7be80d3f8>, void>::`vftable'{for `std::_Func_base<void>'}
                uint32_t* var_50_1 = &result_1
                struct std::_Func_base<void>::std::_Func_impl_no_alloc<class <lambda_292ea76b9fa7d47ac67ba9f7be80d3f8>, void>::VTable
                    * const* var_30_6 = &var_54
                sub_5699b0(var_54)
                void* eax_23 = sub_573400()
                result = *(eax_23 + 4)
                *(*(eax_23 + 0xc) * 0x5a30 + result + 0x1756c) = 0
            
            break

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
