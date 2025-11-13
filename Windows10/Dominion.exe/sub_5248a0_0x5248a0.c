// 函数: sub_5248a0
// 地址: 0x5248a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76595b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t edx = __chkstk(0x25cc)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c9c[0x312]
int32_t eax_4
int32_t edx_1
eax_4, edx_1 = sub_568780(&var_c9c, edx, 0x3ec, &var_c9c)
void var_1924
__builtin_memcpy(&var_1924, eax_4, 0xc84)
void var_25dc
__builtin_memcpy(&var_c9c, sub_568780(&var_25dc, edx_1, 0x3ea, &var_25dc), 0xc84)
int32_t ecx = 0
uint32_t var_ca4
uint32_t esi_2 = var_ca4

if (arg1 s> 0)
    do
        int32_t eax_7 = var_c9c[ecx]
        ecx += 1
        *(&var_1924 + (esi_2 << 2)) = eax_7
        esi_2 = var_ca4 + 1
        var_ca4 = esi_2
    while (ecx s< arg1)

struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_8aae151a8c52cfca9c482f21829167b6>,bool,enum CardID>::VTable
    * const var_1954 = &std::_Func_impl_no_alloc<class <lambda_8aae151a8c52cfca9c482f21829167b6>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_8aae151a8c52cfca9c482f21829167b6>,bool,enum CardID>::VTable
    * const* var_1930 = &var_1954
void* var_1928
int32_t* eax_8 = &var_1928
int32_t var_8_1 = 0
int32_t* var_24_2 = &var_1928
int32_t var_28 = 0
void var_50
var_1928 = &var_50
int32_t var_2c = 0
var_8_1.b = 2

if (var_1930 != 0)
    eax_8 = (*var_1930)->vFunc_0(&var_50)
    int32_t* var_2c_1 = eax_8

var_8_1.b = 0
int32_t eax_10 = GSI1::OffForSym(eax_8, esi_2, &var_1924)
int32_t var_8_2 = 0xffffffff
int32_t ebx = eax_10

if (var_1930 != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_8aae151a8c52cfca9c482f21829167b6>,bool,enum CardID>::VTable
        * const* eax_11
    eax_11.b = var_1930 != &var_1954
    eax_10 = (*var_1930)->vFunc_4(eax_11)
    int32_t var_1930_1 = 0

int32_t edi = 0

if (ebx s> 0)
    do
        esi_2 = zx.d((*(&var_1924 + (edi << 2))).w)
        int32_t ebx_1 = *(sub_573400() + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        eax_10 = *(esi_2 * 0x64 + ebx_1 + 0x1a50)
        var_c9c[edi] = eax_10
        edi += 1
    while (edi s< ebx)

sub_56a880(eax_10, &var_c9c, &var_1924, 0x68)
int32_t var_24_5 = 3
int32_t* result = sub_564ce0(esi_2)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
