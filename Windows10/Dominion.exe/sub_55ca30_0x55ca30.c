// 函数: sub_55ca30
// 地址: 0x55ca30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_766d8b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x19d8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
void var_19f8
uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &var_19f8, 4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_2fe39af6da7bb77bb369a9ba5dbe4f0a>,bool,enum CardID>::VTable
    * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_2fe39af6da7bb77bb369a9ba5dbe4f0a>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cb0
__builtin_memcpy(&var_cb0, &var_19f8, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_2fe39af6da7bb77bb369a9ba5dbe4f0a>,bool,enum CardID>::VTable
    * const* var_cec = &var_d10
int32_t var_14_1 = 0
void* var_cb4
int32_t* var_30_1 = &var_cb4
int32_t var_34_1 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_cec != 0)
    int32_t var_38_1 = (*var_cec)->vFunc_0(&var_5c)

var_14_1.b = 0
int32_t* result = GSI1::OffForSym(eax_4, eax_4, &var_cb0)
int32_t var_14_2 = 0xffffffff
int32_t* result_1 = result
int32_t* result_3 = result_1

if (var_cec != 0)
    result = (*var_cec)->vFunc_4(var_cec != &var_d10)

if (result_1 != 0)
    int32_t var_cdc_1 = 0
    int64_t var_ce4_1 = 0
    int64_t var_cd4
    __builtin_memset(&var_cd4, 0, 0x1c)
    int32_t var_cd8_1 = 8
    int128_t var_d40 = 0x12c.o
    int128_t var_d30_1 = var_cd8_1.o
    int64_t var_cc8
    int128_t var_d20_1 = var_cc8.o
    result = sub_563c40(&var_d40, 0xc, 0)
    int32_t* result_2 = result
    
    if (result_2 != 0)
        void* eax_10 = sub_573400()
        result = sub_583720(eax_10, *(eax_10 + 0xc), *(eax_10 + 4), result_2, 0x476, nullptr, 
            0x476, 0, 0, 4)
        
        if (result.b != 0)
            void* eax_11 = sub_573400()
            uint32_t esi = zx.d(result_2.w)
            void* ecx_5 = *(eax_11 + 0xc)
            void* edi_1 = *(eax_11 + 4)
            var_cb4 = ecx_5
            
            if (esi u>= 0x320)
                sub_591930()
                ecx_5 = var_cb4
            
            int32_t eax_12 = esi * 0x64
            sub_576e90(eax_12, edi_1, &var_cb4, ecx_5, *(eax_12 + edi_1 + 0x1a4c), 0)
            uint32_t var_d58[0x6]
            result = sub_562240((*sub_576c00(&var_d58, var_cb4)).d)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
