// 函数: sub_541330
// 地址: 0x541330
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7665d1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x3f88)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3
int32_t edx
eax_3, edx = sub_573400()
uint32_t result_2 = 0
uint32_t result = *(*(eax_3 + 0xc) * 0x5a30 + *(eax_3 + 4) + 0x17504)
uint32_t result_1 = result

if (result s> 0)
    do
        int32_t var_25b8[0x320]
        int32_t var_cb0[0x314]
        __builtin_memcpy(&var_25b8, sub_568780(&var_cb0, edx, 0x3ea, &var_cb0), 0xc84)
        int32_t c_2
        int32_t c_1 = c_2
        int32_t var_1930[0x320]
        int32_t ecx_2
        int32_t edi_1
        
        if (c_2 s> 0)
            edi_1, ecx_2 = __memfill_u32(&var_1930, 0x3ea, c_2)
        int32_t c_4 = c_2
        int32_t var_25c0 = 0x104
        int64_t var_25e0 = 0
        void* eax_7 = sub_573400()
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
            ** esi_1 = sub_590990(eax_7, *(eax_7 + 0xc), *(eax_7 + 4), 0x3e9, &var_cb0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
            * const* var_30_3 = esi_1
        void var_5c
        
        if ((var_25e0.d | var_25e0:4.d) != 0)
            struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
                * const var_2640 = &std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
            int64_t* var_263c_1 = &var_25e0
            struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
                * const* var_261c_1 = &var_2640
            int32_t var_14_1 = 0
            void var_25e4
            void* var_30_4 = &var_25e4
            int32_t var_34_2 = 0
            int32_t (* eax_9)[0x314] = &var_cb0
            void* var_25d0_1 = &var_5c
            int32_t var_38_1 = 0
            var_14_1.b = 2
            
            if (var_261c_1 != 0)
                int32_t var_38_2 = (*var_261c_1)->vFunc_0(&var_5c)
                eax_9 = &var_cb0
            
            var_14_1.b = 0
            var_14 = 0xffffffff
            esi_1 = GSI1::OffForSym(eax_9, esi_1, &var_cb0)
            var_30_3 = esi_1
            
            if (var_261c_1 != 0)
                struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_27f5207e4f31665c1a246b29a8d87f28>,bool,enum CardID>::VTable
                    * const* eax_15
                eax_15.b = var_261c_1 != &var_2640
                var_30_3 = eax_15
                (*var_261c_1)->vFunc_4(var_30_3)
        
        if (var_25c0 != 0)
            struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
                * const var_2668 = &std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
            int32_t* var_2664_1 = &var_25c0
            struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_fb776da0643d44ac1bad3b8864e8b093>,bool,enum CardID>::VTable
                * const* var_2644_1 = &var_2668
            int32_t var_14_2 = 3
            void var_25e8
            void* var_30_5 = &var_25e8
            int32_t var_34_3 = 0
            int32_t (* eax_16)[0x314] = &var_cb0
            void* var_25d4_1 = &var_5c
            int32_t var_38_3 = 0
            var_14_2.b = 5
            
            if (var_2644_1 != 0)
                int32_t var_38_4 = (*var_2644_1)->vFunc_0(&var_5c)
                eax_16 = &var_cb0
            
            var_14_2.b = 3
            var_14 = 0xffffffff
            var_30_3 = GSI1::OffForSym(eax_16, esi_1, &var_cb0)
            
            if (var_2644_1 != 0)
                var_30_3 = var_2644_1 != &var_2668
                (*var_2644_1)->vFunc_4(var_30_3)
        
        int32_t c = c_1
        int32_t var_3320[0x39]
        __builtin_memcpy(&var_3320, &var_cb0, 0xc84)
        int32_t ecx_12 = 0
        
        if (var_30_3 s> 0)
            do
                int32_t eax_23 = var_3320[ecx_12]
                ecx_12 += 1
                var_25b8[c] = eax_23
                c = c_2 + 1
                c_2 = c
            while (ecx_12 s< var_30_3)
            
            c_1 = c
        
        int32_t ecx_15
        int32_t edi_3
        
        if (c_4 s< c)
            edi_3, ecx_15 = __memfill_u32(&var_1930[c_4], 0x3e9, c - c_4)
        int32_t c_3 = 1
        
        if (c s<= 1)
            c_3 = c
        
        uint32_t var_26a0
        
        if (c s> 1 || c_3 != 0)
            int32_t var_30_7 = 0
            int64_t var_2614
            __builtin_memset(&var_2614, 0, 0x2c)
            char var_34_5 = 0
            int32_t var_38_6 = 7
            int128_t var_2698
            int128_t* var_3c_1 = &var_2698
            var_2698 = 0x13.o
            int32_t var_2608
            int128_t var_2688_1 = var_2608.o
            int64_t var_25f8
            int128_t var_2678_1 = var_25f8.o
            void var_3fa8
            __builtin_memcpy(&var_3320, 
                sub_563960(&var_3fa8, 0, &var_25b8, &var_3fa8, c_3, 9, var_3c_1, var_38_6, 
                    var_34_5, var_30_7), 
                0xc84)
            int32_t edi_4 = 0
            
            if (var_26a0 s> 0)
                do
                    int32_t eax_26 = 0
                    
                    if (c_1 s> 0)
                        do
                            if (var_3320[edi_4] == var_25b8[eax_26])
                                var_cb0[edi_4] = var_1930[eax_26]
                                break
                            
                            eax_26 += 1
                        while (eax_26 s< c_1)
                    
                    edi_4 += 1
                while (edi_4 s< var_26a0)
            
            void* eax_28 = sub_573400()
            int32_t var_30_8 = 0
            *(eax_28 + 0xc)
            *(eax_28 + 4)
            result, edx = sub_590de0(&var_3320, var_26a0, &var_cb0, 0x12, arg1, var_14)
        else
            result, edx = memset(&var_3320, c, 0xc84)
        
        if (var_26a0 == 0)
            break
        
        result = result_2 + 1
        result_2 = result
    while (result s< result_1)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
