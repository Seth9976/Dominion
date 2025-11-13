// 函数: sub_559c80
// 地址: 0x559c80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_766ceb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x19f8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
sub_589f70(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 6)
void* eax_4 = sub_573400()
int32_t eax_5 = sub_583fc0(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0xc00)
int32_t* result

if (eax_5 == 0)
    result = sub_562880(eax_2, arg2, var_20)
    
    if (result != 0)
        void* eax_6 = sub_573400()
        uint32_t esi_1 = zx.d(result.w)
        void* ecx_3 = *(eax_6 + 0xc)
        void* edi = *(eax_6 + 4)
        void* var_cb4 = ecx_3
        
        if (esi_1 u>= 0x320)
            sub_591930()
            ecx_3 = var_cb4
        
        int32_t eax_7 = esi_1 * 0x64
        char var_30_3 = 0
        int32_t var_cb8 = eax_7
        sub_576e90(eax_7, edi, &var_cb4, ecx_3, *(eax_7 + edi + 0x1a4c), var_30_3)
        uint32_t var_d20[0x4]
        uint32_t* eax_8 = sub_576c00(&var_d20, var_cb4)
        int32_t xmm0_1 = (*eax_8).d
        int32_t var_d10_1 = eax_8[4]
        void* eax_10 = sub_573400()
        void var_1a18
        uint32_t eax_11 = sub_5777b0(eax_10, *(eax_10 + 0xc), *(eax_10 + 4), &var_1a18, 4)
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_ea0696adb05067b74b57a1183068653b>,bool,enum CardID>::VTable
            * const var_d48 = &std::_Func_impl_no_alloc<class <lambda_ea0696adb05067b74b57a1183068653b>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
        void var_cb0
        __builtin_memcpy(&var_cb0, &var_1a18, 0xc84)
        int32_t var_d44_1 = xmm0_1
        struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_ea0696adb05067b74b57a1183068653b>,bool,enum CardID>::VTable
            * const* var_d24_1 = &var_d48
        int32_t var_14_1 = 0
        int32_t* var_30_5 = &var_cb4
        int32_t var_34_3 = 0
        void var_5c
        var_cb4 = &var_5c
        int32_t var_38_3 = 0
        var_14_1.b = 2
        
        if (var_d24_1 != 0)
            int32_t var_38_4 = (*var_d24_1)->vFunc_0(&var_5c)
        
        var_14_1.b = 0
        result = GSI1::OffForSym(eax_11, eax_11, &var_cb0)
        int32_t var_14_2 = 0xffffffff
        int32_t* result_1 = result
        int32_t* result_3 = result_1
        
        if (var_d24_1 != 0)
            result = (*var_d24_1)->vFunc_4(var_d24_1 != &var_d48)
        
        if (result_1 != 0)
            int32_t var_cfc_1 = 0
            int64_t var_d04_1 = 0
            int64_t var_cf4
            __builtin_memset(&var_cf4, 0, 0x1c)
            int128_t var_d78 = 0x127.o
            int128_t var_d68_1 = (xmm0_1 + 1).o
            int64_t var_ce8
            int128_t var_d58_1 = var_ce8.o
            result = sub_563c40(&var_d78, 0xc, 0)
            int32_t* result_2 = result
            
            if (result_2 != 0)
                void* eax_18 = sub_573400()
                result = sub_583720(eax_18, *(eax_18 + 0xc), *(eax_18 + 4), result_2, 0x476, 
                    nullptr, 0x476, 0, 0, 4)
                
                if (result.b != 0)
                    void* eax_19 = sub_573400()
                    void* ecx_10 = *(eax_19 + 0xc)
                    void* edi_2 = *(eax_19 + 4)
                    var_cb4 = ecx_10
                    
                    if (esi_1 u>= 0x320)
                        sub_591930()
                        ecx_10 = var_cb4
                    
                    int32_t eax_20 = var_cb8
                    sub_576e90(eax_20, edi_2, &var_cb8, ecx_10, *(eax_20 + edi_2 + 0x1a4c), 0)
                    int32_t xmm0_5 = (*sub_576c00(&var_d20, var_cb8)).d
                    void* eax_22 = sub_573400()
                    uint32_t esi_2 = zx.d(result_2.w)
                    int32_t ecx_12 = *(eax_22 + 0xc)
                    void* edi_3 = *(eax_22 + 4)
                    var_cb8 = ecx_12
                    
                    if (esi_2 u>= 0x320)
                        sub_591930()
                        ecx_12 = var_cb8
                    
                    int32_t eax_23 = esi_2 * 0x64
                    sub_576e90(eax_23, edi_3, &var_cb8, ecx_12, *(eax_23 + edi_3 + 0x1a4c), 0)
                    uint32_t var_d90[0x6]
                    int32_t eax_27
                    int32_t edx_10
                    edx_10:eax_27 = sx.q((*sub_576c00(&var_d90, var_cb8)).d - xmm0_5)
                    result = sub_562240((eax_27 ^ edx_10) - edx_10)
else
    result = sub_561af0(eax_5, 0, 3, 0)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
