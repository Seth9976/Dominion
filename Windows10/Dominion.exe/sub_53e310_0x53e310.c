// 函数: sub_53e310
// 地址: 0x53e310
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76646b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t edx = __chkstk(0x19b0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_19d0
int32_t eax_4 = sub_568780(&var_19d0, edx, 0x3ea, &var_19d0)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_a4b02b81bbdbcf3a79d5c3ae6e1c6852>,bool,enum CardID>::VTable
    * const var_d18 = &std::_Func_impl_no_alloc<class <lambda_a4b02b81bbdbcf3a79d5c3ae6e1c6852>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t var_cb0
__builtin_memcpy(&var_cb0, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_a4b02b81bbdbcf3a79d5c3ae6e1c6852>,bool,enum CardID>::VTable
    * const* var_cf4 = &var_d18
void* var_cb4
int32_t* eax_5 = &var_cb4
int32_t var_14_1 = 0
int32_t* var_30_1 = &var_cb4
int32_t var_34 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_cf4 != 0)
    eax_5 = (*var_cf4)->vFunc_0(&var_5c)
    int32_t* var_38_1 = eax_5

var_14_1.b = 0
int32_t var_14_2 = 0xffffffff
int32_t var_30_2 = GSI1::OffForSym(eax_5, var_30_1, &var_cb0)

if (var_cf4 != 0)
    (*var_cf4)->vFunc_4(var_cf4 != &var_d18)

int64_t var_cec
__builtin_memset(&var_cec, 0, 0x2c)
int32_t var_30_4 = 0
char var_34_1 = 0
int32_t var_38_2 = 9
int128_t var_d48 = 0xbb.o
int32_t var_ce0
int128_t var_d38 = var_ce0.o
int64_t var_cd0
int128_t var_d28 = var_cd0.o
int32_t* result =
    sub_563960(&var_19d0, 0, &var_cb0, &var_19d0, 1, 9, &var_d48, var_38_2, var_34_1, var_30_4)
__builtin_memcpy(&var_cb0, result, 0xc84)

if (var_30_4 != 0)
    int32_t esi_2 = var_cb0
    
    if (esi_2 != 0)
        void* eax_12 = sub_573400()
        uint32_t edi_1 = zx.d(esi_2.w)
        int32_t var_cbc = *(eax_12 + 0xc)
        void* ecx_5 = *(eax_12 + 4)
        
        if (edi_1 u>= 0x320)
            sub_591930()
        
        int32_t eax_13 = edi_1 * 0x64
        sub_576e90(eax_13, ecx_5, &var_cb4, var_cbc, *(eax_13 + ecx_5 + 0x1a4c), 0)
        void* eax_14 = sub_573400()
        int32_t var_30_6 = 0x3ea
        var_cbc = esi_2
        int32_t var_cb8_2 = *(eax_14 + 0xc)
        
        if (sub_582de0(eax_14, esi_2, *(eax_14 + 4), var_30_6) == 0)
            int32_t var_30_7 = 0
            int32_t var_34_3 = 0x12
            char var_38_4 = &var_cb0
            var_cb0 = 0x3ea
            sub_590de0(&var_cbc, 1, var_38_4, var_34_3, arg1, var_14_2)
        
        void* var_30_8 = var_cb4 + 2
        result = sub_564ce0(esi_2)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
