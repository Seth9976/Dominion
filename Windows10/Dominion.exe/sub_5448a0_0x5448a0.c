// 函数: sub_5448a0
// 地址: 0x5448a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76506b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t ecx = __chkstk(0x19c0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = ecx
sub_561e00(&ExceptionList, 0, 2, 0)
void var_19e0
uint32_t eax_4 = sub_5678e0(arg1, &var_19e0, 4, 0, 0, 0)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_b07f2382f367be6b04c00ae49dd9a99f>,bool,enum CardID>::VTable
    * const var_d28 = &std::_Func_impl_no_alloc<class <lambda_b07f2382f367be6b04c00ae49dd9a99f>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
int32_t var_cb0
__builtin_memcpy(&var_cb0, eax_4, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_b07f2382f367be6b04c00ae49dd9a99f>,bool,enum CardID>::VTable
    * const* var_d04 = &var_d28
void* var_cb4
int32_t* eax_5 = &var_cb4
int32_t var_14_1 = 0
int32_t* var_30_1 = &var_cb4
int32_t var_34_1 = 0
void var_5c
var_cb4 = &var_5c
int32_t var_38_1 = 0
var_14_1.b = 2

if (var_d04 != 0)
    eax_5 = (*var_d04)->vFunc_0(&var_5c)
    int32_t* var_38_2 = eax_5

var_14_1.b = 0
int32_t var_14_2 = 0xffffffff
int32_t var_30_2 = GSI1::OffForSym(eax_5, var_30_1, &var_cb0)

if (var_d04 != 0)
    (*var_d04)->vFunc_4(var_d04 != &var_d28)

int64_t var_cfc
__builtin_memset(&var_cfc, 0, 0x2c)
int32_t var_30_4 = 0
char var_34_2 = 0
int32_t var_38_3 = 0xb
int128_t var_d58 = 0xae.o
int32_t var_cf0
int128_t var_d48 = var_cf0.o
int64_t var_ce0
int128_t var_d38 = var_ce0.o
void* result =
    sub_563960(&var_19e0, 0, &var_cb0, &var_19e0, 1, 1, &var_d58, var_38_3, var_34_2, var_30_4)
__builtin_memcpy(&var_cb0, result, 0xc84)

if (var_30_4 != 0)
    int32_t esi_2 = var_cb0
    
    if (esi_2 != 0)
        void* eax_12 = sub_573400()
        uint32_t edi_1 = zx.d(esi_2.w)
        int32_t* ecx_5 = *(eax_12 + 4)
        var_cb4 = *(eax_12 + 0xc)
        
        if (edi_1 u>= 0x320)
            sub_591930()
        
        void* edx_2 = var_cb4
        char var_30_5 = 0
        int64_t var_cbc = 0
        int64_t var_ccc = 0
        int32_t var_cc0_1 = ecx_5[edi_1 * 0x19 + 0x695]
        int32_t* var_34_3 = &var_cbc
        int32_t var_cc4 = esi_2
        result = sub_586320(&var_cc4, edx_2, ecx_5, &var_cc4, &var_ccc, var_34_3, var_30_5)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
