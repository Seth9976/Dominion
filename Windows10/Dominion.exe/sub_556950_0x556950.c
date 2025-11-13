// 函数: sub_556950
// 地址: 0x556950
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76549b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x1944)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_24 = 0
void var_1954
uint32_t eax_4 = sub_5685f0(&var_1954, 0, 0x3e9, &var_1954, 4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_22a896dd5e55e2e89caa177f6a0548ee>,bool,enum CardID>::VTable
    * const var_ccc = &std::_Func_impl_no_alloc<class <lambda_22a896dd5e55e2e89caa177f6a0548ee>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_c9c
__builtin_memcpy(&var_c9c, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_22a896dd5e55e2e89caa177f6a0548ee>,bool,enum CardID>::VTable
    * const* var_ca8 = &var_ccc
void* var_ca0
int32_t* eax_5 = &var_ca0
int32_t var_8_1 = 0
int32_t* var_24_1 = &var_ca0
int32_t var_28_1 = 0
void var_50
var_ca0 = &var_50
int32_t var_2c_1 = 0
var_8_1.b = 2

if (var_ca8 != 0)
    eax_5 = (*var_ca8)->vFunc_0(&var_50)
    int32_t* var_2c_2 = eax_5

var_8_1.b = 0
int32_t eax_7 = GSI1::OffForSym(eax_5, arg1, &var_c9c)
int32_t var_8_2 = 0xffffffff
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_22a896dd5e55e2e89caa177f6a0548ee>,bool,enum CardID>::VTable
    * const* ecx_2 = var_ca8
int32_t var_1c_1 = eax_7

if (ecx_2 != 0)
    eax_7, ecx_2 = (*ecx_2)->vFunc_4(ecx_2 != &var_ccc)

int32_t var_24_3 = 9
uint32_t result = sub_56a740(eax_7, 0x3e9, &var_c9c, ecx_2)

if (result != 0)
    void* eax_10 = sub_573400()
    uint32_t esi_3 = zx.d(result.w)
    int32_t ebx = *(eax_10 + 0xc)
    void* edi = *(eax_10 + 4)
    
    if (esi_3 u>= 0x320)
        sub_591930()
    
    int32_t eax_11 = esi_3 * 0x64
    sub_576e90(eax_11, edi, &var_ca0, ebx, *(eax_11 + edi + 0x1a4c), 0)
    void* var_30_1 = var_ca0 + 1
    result = sub_564740(0)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
