// 函数: sub_525f30
// 地址: 0x525f30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_765a11
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x19d0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t eax_3 = sub_56b800()
void* eax_4 = sub_573400()
uint32_t esi_1 = zx.d(eax_3)
void* ecx = *(eax_4 + 0xc)
void* edi = *(eax_4 + 4)
void* var_cb4 = ecx

if (esi_1 u>= 0x320)
    sub_591930()
    ecx = var_cb4

int32_t eax_5 = esi_1 * 0x64
sub_576e90(eax_5, edi, &var_cb4, ecx, *(eax_5 + edi + 0x1a4c), 0)
void* eax_6 = sub_573400()
void var_19f0
uint32_t eax_7 = sub_5777b0(eax_6, *(eax_6 + 0xc), *(eax_6 + 4), &var_19f0, 1)
void var_cb0
__builtin_memcpy(&var_cb0, &var_19f0, 0xc84)
void* eax_8 = sub_573400()
void* esi_2 = var_cb4
void var_5c
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_d40cea5de9779081383d70c0b3c48e46>,bool,enum CardID>::VTable
    * const* eax_15

if (*(*(eax_8 + 4) + 0xd48) s< 0x17)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_d40cea5de9779081383d70c0b3c48e46>,bool,enum CardID>::VTable
        * var_d38 = &std::_Func_impl_no_alloc<class <lambda_62eb529bcb282832c57ac5b61449b72f>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    void* var_d34_1 = esi_2
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_d40cea5de9779081383d70c0b3c48e46>,bool,enum CardID>::VTable
        ** var_d14_1 = &var_d38
    int32_t var_14_3 = 3
    void** var_30_4 = &var_cb4
    int32_t var_34_3 = 0
    void* eax_16 = &var_cb0
    var_cb4 = &var_5c
    int32_t var_38_3 = 0
    var_14_3.b = 5
    
    if (var_d14_1 != 0)
        int32_t var_38_4 = (*var_d14_1)->vFunc_0(&var_5c)
        eax_16 = &var_cb0
    
    var_14_3.b = 3
    int32_t var_14_4 = 0xffffffff
    int32_t var_30_5 = GSI1::OffForSym(eax_16, eax_7, &var_cb0)
    
    if (var_d14_1 != 0)
        eax_15.b = var_d14_1 != &var_d38
        (*var_d14_1)->vFunc_4(zx.d(eax_15.b))
else
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_d40cea5de9779081383d70c0b3c48e46>,bool,enum CardID>::VTable
        * const var_d10 = &std::_Func_impl_no_alloc<class <lambda_d40cea5de9779081383d70c0b3c48e46>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
    void* var_d0c_1 = esi_2
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_d40cea5de9779081383d70c0b3c48e46>,bool,enum CardID>::VTable
        * const* var_cec_1 = &var_d10
    int32_t var_14_1 = 0
    int32_t* var_30_2 = &var_cb4
    int32_t var_34_2 = 0
    void* eax_10 = &var_cb0
    var_cb4 = &var_5c
    int32_t var_38_1 = 0
    var_14_1.b = 2
    
    if (var_cec_1 != 0)
        int32_t var_38_2 = (*var_cec_1)->vFunc_0(&var_5c)
        eax_10 = &var_cb0
    
    var_14_1.b = 0
    int32_t var_14_2 = 0xffffffff
    int32_t var_30_3 = GSI1::OffForSym(eax_10, eax_7, &var_cb0)
    
    if (var_cec_1 != 0)
        eax_15.b = var_cec_1 != &var_d10
        (*var_cec_1)->vFunc_4(zx.d(eax_15.b))
int32_t var_cdc = 0
int64_t var_ce4 = 0
int64_t var_cd4
__builtin_memset(&var_cd4, 0, 0x1c)
int128_t var_d68 = 0x74.o
int128_t var_d58 = esi_2.o
int64_t var_cc8
int128_t var_d48 = var_cc8.o
int32_t* result = sub_563c40(&var_d68, 0x33, 0)

if (result != 0)
    result = sub_566bb0(result, 0)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
