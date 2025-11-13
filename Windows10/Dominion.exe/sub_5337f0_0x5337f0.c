// 函数: sub_5337f0
// 地址: 0x5337f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_764ebb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x25cc)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_1c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3
int32_t edx
eax_3, edx = sub_563590(0x105)

if (eax_3 != 0)
    void* eax_4 = sub_573400()
    edx = sub_583720(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), eax_3, 0x476, nullptr, 0x476, 0, 0, 4)

void var_1954
int32_t var_c9c
__builtin_memcpy(&var_c9c, sub_566320(&var_1954, edx, 1, &var_1954), 0xc84)
int32_t edi = var_c9c

if (var_1c == 0)
    edi = 0

if (sub_567340(var_1c, arg2, ExceptionList) == 0)
    void* eax_8 = sub_573400()
    void var_c98
    int32_t eax_9 = memset(&var_c98, 0, 0xc80)
    int32_t* ecx_3 = *(eax_8 + 4)
    var_1c += 1
    var_c9c = edi
    sub_579750(eax_9, &var_c9c, ecx_3, 0x3eb)

int32_t eax_11 = sub_568780(&var_1954, sub_56e770(5), 0x3ea, &var_1954)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_56ed4e40be8af12c13d1bcde9775e566>,bool,enum CardID>::VTable
    * const var_ccc = &std::_Func_impl_no_alloc<class <lambda_56ed4e40be8af12c13d1bcde9775e566>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
__builtin_memcpy(&var_c9c, eax_11, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_56ed4e40be8af12c13d1bcde9775e566>,bool,enum CardID>::VTable
    * const* var_ca8 = &var_ccc
void* var_ca0
int32_t* eax_12 = &var_ca0
int32_t var_8_1 = 0
int32_t* var_20_5 = &var_ca0
int32_t var_24_4 = 0
void var_4c
var_ca0 = &var_4c
int32_t var_28_3 = 0
var_8_1.b = 2

if (var_ca8 != 0)
    eax_12 = (*var_ca8)->vFunc_0(&var_4c)
    int32_t* var_28_4 = eax_12

var_8_1.b = 0
int32_t var_8_2 = 0xffffffff
int32_t var_1c_1 = GSI1::OffForSym(eax_12, var_1c, &var_c9c)

if (var_ca8 != 0)
    (*var_ca8)->vFunc_4(var_ca8 != &var_ccc)

void var_25dc
uint32_t result = sub_562540(&var_25dc, 1, &var_c9c, &var_25dc, 0x3ea, 0x64, 0, 0)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
