// 函数: sub_532be0
// 地址: 0x532be0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_765e97
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x3338)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = sub_562880(eax_2, arg2, var_20)

if (i != 0)
    void* eax_3 = sub_573400()
    uint32_t esi_1 = zx.d(i.w)
    void* ecx_1 = *(eax_3 + 0xc)
    void* edi = *(eax_3 + 4)
    void* var_25c4 = ecx_1
    
    if (esi_1 u>= 0x320)
        sub_591930()
        ecx_1 = var_25c4
    
    void* eax_4 = esi_1 * 0x64
    char var_30_1 = 0
    void* var_25d0 = eax_4
    sub_576e90(eax_4, edi, &var_25c4, ecx_1, *(eax_4 + edi + 0x1a4c), var_30_1)
    void* esi_2 = var_25c4
    void* var_25d4 = esi_2 + 1
    uint32_t var_2658[0x4]
    uint32_t* eax_6 = sub_576c00(&var_2658, esi_2)
    int32_t var_2648_1 = eax_6[4]
    void* esi_3
    
    if ((*eax_6).d s>= 1)
        esi_3 = esi_2 - 1
    else
        esi_3 = 0xffffffff
    
    void* var_260c = esi_3
    void* eax_9 = sub_573400()
    int32_t var_cb0[0x314]
    uint32_t eax_10 = sub_5777b0(eax_9, *(eax_9 + 0xc), *(eax_9 + 4), &var_cb0, 4)
    uint32_t var_30_4 = eax_10
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_d4c1cb9e675259cded32162374aed379>,bool,enum CardID>::VTable
        * const var_2680 = &std::_Func_impl_no_alloc<class <lambda_d4c1cb9e675259cded32162374aed379>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    void var_1938
    __builtin_memcpy(&var_1938, &var_cb0, 0xc84)
    int32_t* var_267c_1 = &var_25d4
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_d4c1cb9e675259cded32162374aed379>,bool,enum CardID>::VTable
        * const* var_265c_1 = &var_2680
    int32_t var_14_1 = 0
    int32_t* var_30_5 = &var_25c4
    int32_t var_34_4 = 0
    void var_5c
    var_25c4 = &var_5c
    int32_t var_38_2 = 0
    var_14_1.b = 2
    
    if (var_265c_1 != 0)
        int32_t var_38_3 = (*var_265c_1)->vFunc_0(&var_5c)
        eax_10 = var_30_5
    
    var_14_1.b = 0
    int32_t eax_14 = GSI1::OffForSym(eax_10, eax_10, &var_1938)
    int32_t var_14_2 = 0xffffffff
    
    if (var_265c_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_d4c1cb9e675259cded32162374aed379>,bool,enum CardID>::VTable
            * const* eax_15
        eax_15.b = var_265c_1 != &var_2680
        (*var_265c_1)->vFunc_4(eax_15)
    
    void* eax_16 = sub_573400()
    int32_t var_3358[0x45]
    uint32_t eax_17 = sub_5777b0(eax_16, *(eax_16 + 0xc), *(eax_16 + 4), &var_3358, 4)
    uint32_t var_26d8_1 = eax_17
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_4bc6000aaaef47e3640a183e8cc473e8>,bool,enum CardID>::VTable
        * const var_26a8 = &std::_Func_impl_no_alloc<class <lambda_4bc6000aaaef47e3640a183e8cc473e8>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    __builtin_memcpy(&var_cb0, &var_3358, 0xc84)
    int32_t* var_26a4_1 = &var_260c
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_4bc6000aaaef47e3640a183e8cc473e8>,bool,enum CardID>::VTable
        * const* var_2684_1 = &var_26a8
    int32_t var_14_3 = 3
    void** var_30_8 = &var_25c4
    int32_t var_34_6 = 0
    var_25c4 = &var_5c
    int32_t var_38_4 = 0
    var_14_3.b = 5
    
    if (var_2684_1 != 0)
        int32_t var_38_5 = (*var_2684_1)->vFunc_0(&var_5c)
        eax_17 = var_26d8_1
    
    var_14_3.b = 3
    int32_t eax_21
    int32_t edx_7
    eax_21, edx_7 = GSI1::OffForSym(eax_17, eax_17, &var_cb0)
    int32_t var_14_4 = 0xffffffff
    int32_t var_30_9 = eax_21
    
    if (var_2684_1 != 0)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_4bc6000aaaef47e3640a183e8cc473e8>,bool,enum CardID>::VTable
            * const* eax_22
        eax_22.b = var_2684_1 != &var_26a8
        edx_7 = (*var_2684_1)->vFunc_4(eax_22)
    
    void var_25c0
    void* var_30_11 = &var_25c0
    i = sub_56a060(&var_25c0, edx_7, &var_1938, var_30_11)
    __builtin_memcpy(&var_3358, i, 0xc84)
    int32_t ecx_14 = 0
    uint32_t edx_9 = var_26d8_1
    
    if (var_30_11 s> 0)
        do
            i = var_cb0[ecx_14]
            ecx_14 += 1
            var_3358[edx_9] = i
            edx_9 = var_26d8_1 + 1
            var_26d8_1 = edx_9
        while (ecx_14 s< var_30_11)
    
    __builtin_memcpy(&var_25c0, &var_3358, 0xc84)
    
    if (edx_9 != 0)
        void* ecx_15 = var_260c
        void* eax_24 = var_25d4
        int32_t var_25fc_1 = 0
        int64_t var_2604_1 = 0
        int64_t var_25e0_1 = 0
        int64_t var_25e8_1 = 0
        char var_30_12 = 0
        int32_t var_34_7 = 0xc
        int32_t var_2608_1
        void* var_25f8_1
        int32_t var_25f4
        
        if (ecx_15 s>= 0)
            int32_t eax_25
            int32_t edx_11
            edx_11:eax_25 = sx.q(eax_24)
            var_25f4 = 0
            var_2608_1 = 0x5b
            var_25f8_1 = ecx_15
            int32_t var_25f0_1 = eax_25
            int32_t var_25ec_2 = edx_11
        else
            var_25f4.q = 0
            int32_t var_25ec_1 = 0
            var_2608_1 = 0xa
            var_25f8_1 = eax_24
        
        int128_t var_2640
        int128_t* var_38_6 = &var_2640
        var_2640 = var_2608_1.o
        int128_t var_2630_1 = var_25f8_1.o
        int128_t var_2620_1 = var_25e8_1.o
        i = sub_563c40(var_38_6, var_34_7, var_30_12)
        
        if (i != 0)
            void* eax_26 = sub_573400()
            sub_583720(eax_26, *(eax_26 + 0xc), *(eax_26 + 4), i, 0x3eb, nullptr, 0x476, 0, 0, 4)
            char var_25c5_1 = 0
            void* eax_27 = sub_573400()
            void* ecx_17 = *(eax_27 + 0xc)
            void* edi_1 = *(eax_27 + 4)
            var_25c4 = ecx_17
            
            if (esi_1 u>= 0x320)
                sub_591930()
                ecx_17 = var_25c4
            
            void* eax_28 = var_25d0
            int32_t var_25cc
            sub_576e90(eax_28, edi_1, &var_25cc, ecx_17, *(edi_1 + eax_28 + 0x1a4c), 0)
            int32_t* eax_29 = &var_1938
            void* ecx_19 = &var_1938 + (eax_14 << 2)
            
            if (&var_1938 == ecx_19)
            label_53305f:
                var_25cc += 1
                uint32_t eax_30 = zx.d(var_25c5_1)
                
                if (eax_14 == 0)
                    eax_30 = 1
                
                var_25c4 = eax_30
            else
                while (*eax_29 != i)
                    eax_29 = &eax_29[1]
                    
                    if (eax_29 == ecx_19)
                        goto label_53305f
                
                int32_t esi_10 = var_25cc
                
                if ((*sub_576c00(&var_2658, esi_10)).d s>= 1)
                    var_25cc = esi_10 - 1
                    var_25c4.b = esi_10 == 0
                else
                    var_25cc = 0xffffffff
                    var_25c4.b = esi_10 == 0
            
            void* eax_31 = sub_573400()
            uint32_t eax_32 = sub_5777b0(eax_31, *(eax_31 + 0xc), *(eax_31 + 4), &var_cb0, 4)
            uint32_t var_30_16 = eax_32
            struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_bb8d973afd4aba8d4fb896cc4177146b>,bool,enum CardID>::VTable
                * const var_26d0 = &std::_Func_impl_no_alloc<class <lambda_bb8d973afd4aba8d4fb896cc4177146b>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
            __builtin_memcpy(&var_25c0, &var_cb0, 0xc84)
            int32_t* var_26cc_1 = &var_25cc
            struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_bb8d973afd4aba8d4fb896cc4177146b>,bool,enum CardID>::VTable
                * const* var_26ac_1 = &var_26d0
            int32_t var_14_5 = 6
            int32_t* var_30_17 = &var_25d0
            int32_t var_34_11 = 0
            var_25d0 = &var_5c
            int32_t var_38_9 = 0
            var_14_5.b = 8
            
            if (var_26ac_1 != 0)
                int32_t var_38_10 = (*var_26ac_1)->vFunc_0(&var_5c)
                eax_32 = var_30_17
            
            var_14_5.b = 6
            i = GSI1::OffForSym(eax_32, eax_32, &var_25c0)
            int32_t var_14_6 = 0xffffffff
            int32_t* i_1 = i
            int32_t* i_3 = i_1
            
            if (var_26ac_1 != 0)
                i = (*var_26ac_1)->vFunc_4(var_26ac_1 != &var_26d0)
            
            if (i_1 != 0)
                bool cond:3_1 = var_25c4.b == 0
                int32_t eax_38 = var_25cc
                int64_t var_2604_2 = 0
                __builtin_memset(&var_25f4, 0, 0x1c)
                int32_t var_25fc_2 = 0
                var_2640 = 0xa.o
                int32_t var_30_19 = 0
                int128_t var_2630_2 = eax_38.o
                int64_t var_25e8_2
                int128_t var_2620_2 = var_25e8_2.o
                int32_t* i_2
                
                if (cond:3_1)
                    i = sub_563c40(&var_2640, 0xc, var_30_19.b)
                    i_2 = i
                else
                    i = nullptr
                    __builtin_memcpy(&var_cb0, 
                        sub_563960(&var_3358, 0, &var_25c0, &var_3358, 1, 7, &var_2640, 0xc, 0, 
                            var_30_19), 
                        0xc84)
                    i_2 = var_cb0[0]
                    
                    if (var_30_19 == 0)
                        i_2 = nullptr
                
                if (i_2 != 0)
                    void* eax_43 = sub_573400()
                    i = sub_583720(eax_43, *(eax_43 + 0xc), *(eax_43 + 4), i_2, 0x3eb, nullptr, 
                        0x476, 0, 0, 4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(i)
return i
