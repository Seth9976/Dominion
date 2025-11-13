// 函数: sub_56f990
// 地址: 0x56f990
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76549b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx = __chkstk(0x1944)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t esi
int32_t var_18 = esi
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void var_1954
uint32_t eax_3 = sub_5678e0(esi, &var_1954, 4, 0, 0, 0)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7df3a8dcb8d1b6909c4eee5b921ea531>,bool,enum CardID>::VTable
    * const var_ccc = &std::_Func_impl_no_alloc<class <lambda_7df3a8dcb8d1b6909c4eee5b921ea531>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t var_cc8 = ecx
void var_c9c
__builtin_memcpy(&var_c9c, eax_3, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_7df3a8dcb8d1b6909c4eee5b921ea531>,bool,enum CardID>::VTable
    * const* var_ca8 = &var_ccc
void* var_ca0
int32_t* eax_4 = &var_ca0
int32_t var_8_1 = 0
int32_t* var_24_1 = &var_ca0
int32_t var_28_1 = 0
void var_50
var_ca0 = &var_50
int32_t var_2c_1 = 0
var_8_1.b = 2

if (var_ca8 != 0)
    eax_4 = (*var_ca8)->vFunc_0(&var_50)
    int32_t* var_2c_2 = eax_4

var_8_1.b = 0
uint32_t edi = GSI1::OffForSym(eax_4, arg1, &var_c9c)

if (var_ca8 != 0)
    (*var_ca8)->vFunc_4(var_ca8 != &var_ccc)

uint32_t result
result.b = edi s> 0
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
