// 函数: sub_567780
// 地址: 0x567780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_767155
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* ecx
int32_t edx
ecx, edx = __chkstk(0x1948)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_18 = eax_2
int32_t* edi
int32_t* var_1c = edi
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
var_1c = ecx
int32_t var_cd0[0x31f]
__builtin_memcpy(arg2, sub_568780(&var_cd0, edx, 0x3ea, &var_cd0), 0xc84)
int32_t var_24_1 = 0x1000
void var_1958
__builtin_memcpy(&var_cd0, sub_5685f0(&var_1958, 0, 0x3eb, &var_1958, 0), 0xc84)
int32_t var_50
int32_t edi_2 = var_50
int32_t edx_1 = 0
int32_t esi_3

if (edi_2 s<= 0)
    esi_3 = *(arg2 + 0xc80)
else
    do
        int32_t eax_7 = var_cd0[edx_1]
        edx_1 += 1
        *(arg2 + (*(arg2 + 0xc80) << 2)) = eax_7
        esi_3 = *(arg2 + 0xc80) + 1
        *(arg2 + 0xc80) = esi_3
    while (edx_1 s< edi_2)

int32_t* var_44 = var_1c
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_e918bbb9afe58de0ead3fdf1487a3e3e>,bool,enum CardID>::VTable
    * const var_48 = &std::_Func_impl_no_alloc<class <lambda_e918bbb9afe58de0ead3fdf1487a3e3e>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_e918bbb9afe58de0ead3fdf1487a3e3e>,bool,enum CardID>::VTable
    * const* var_24_2 = &var_48
int32_t* eax_9 = &var_1c
int32_t var_8_1 = 0
int32_t* var_24_3 = &var_1c
int32_t var_28_1 = 0
var_1c = &var_50
int32_t var_2c_1 = 0
var_8_1.b = 2

if (var_24_3 != 0)
    eax_9 = (**var_24_3)(&var_50)
    int32_t* var_2c_2 = eax_9

var_8_1.b = 0
int32_t var_8_2 = 0xffffffff
*(arg2 + 0xc80) = GSI1::OffForSym(eax_9, esi_3, arg2)

if (var_24_3 != 0)
    (*(*var_24_3 + 0x10))(var_24_3 != &var_48)
    int32_t var_24_5 = 0

sub_567690()
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(arg2)
return arg2
