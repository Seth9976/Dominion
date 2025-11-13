// 函数: sub_530f60
// 地址: 0x530f60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_765dbb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x25cc)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3
int32_t edx
eax_3, edx = sub_5641d0()
void var_1924
void var_c9c
__builtin_memcpy(&var_1924, sub_566240(&var_c9c, edx, 3, &var_c9c, &data_7bf9bc), 0xc84)
int32_t eax_8 = *(*(sub_573400() + 4) + 0x1504)
uint32_t var_4c
int32_t* var_48

if (eax_8 != 3 && eax_8 != 5 && eax_8 != 4 && eax_8 != 6)
    void* var_40
    __builtin_memset(&var_40, 0, 0x20)
    var_48 = nullptr
    var_4c = 0xffffffff
    void* var_3c
    int128_t* var_38
    int32_t var_34
    int32_t var_30
    int32_t var_2c
    int32_t var_28_1
    int32_t var_24_1
    sub_61b1b0(eax_8, 7, eax_8 == 2, var_4c, var_48, 1, var_40, var_3c, var_38, var_34, var_30, 
        var_2c, var_28_1, var_24_1)

struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_0633a1221f61d77b7682cfc414e59944>,bool,enum CardID>::VTable
    * const var_25dc = &std::_Func_impl_no_alloc<class <lambda_0633a1221f61d77b7682cfc414e59944>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t var_25d8 = eax_3
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_0633a1221f61d77b7682cfc414e59944>,bool,enum CardID>::VTable
    * const* var_25b8 = &var_25dc
int32_t var_8_1 = 0
void var_192c
void* var_24_2 = &var_192c
void var_25ac
void* eax_9 = &var_25ac
void* var_28_2 = &var_25ac
void var_50
void* var_25b0 = &var_50
int32_t var_2c_1 = 0
var_8_1.b = 1

if (var_25b8 != 0)
    eax_9 = (*var_25b8)->vFunc_0(&var_50)
    void* var_2c_2 = eax_9

var_8_1.b = 0
int32_t var_ca4
uint32_t eax_11 = GSI1::OffForSym(eax_9, var_ca4, &var_1924, var_50, var_4c, var_48)
int32_t var_8_2 = 0xffffffff
uint32_t var_ca4_1 = eax_11

if (var_25b8 != 0)
    (*var_25b8)->vFunc_4(var_25b8 != &var_25dc)

int32_t* ecx_5
ecx_5.b = eax_11 != 0
sub_56e9c0(ecx_5)
void* eax_14 = sub_573400()
*(eax_14 + 0xc)
*(eax_14 + 4)
int32_t ecx_7
int32_t edi_1

if (eax_11 s> 0)
    edi_1, ecx_7 = __memfill_u32(&var_c9c, 0x3ee, eax_11)
int32_t var_24_4 = 0
uint32_t result =
    sub_569330(sub_590de0(&var_1924, eax_11, &var_c9c, 0x12, arg1, var_8_2), 0x3ee, &var_25ac, 0x18)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
