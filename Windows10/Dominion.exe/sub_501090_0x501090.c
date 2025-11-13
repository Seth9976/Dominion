// 函数: sub_501090
// 地址: 0x501090
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_765171
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t ecx = __chkstk(0x2658)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = ecx
sub_561e00(&ExceptionList, 0, 1, 0)
void* eax_4 = sub_573400()
sub_590760(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 1, 1, 0, 0)
void* eax_5
int32_t edx_1
eax_5, edx_1 = sub_573400()
int32_t ecx_2 = *(eax_5 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_5, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_6 = *(eax_5 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_6 + 0x17558) |= 2
int32_t var_1938
int32_t eax_8 = sub_568780(&var_1938, edx_1, 0x3ea, &var_1938)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_556da12014d355e7451e238363901001>,bool,enum CardID>::VTable
    * const var_19f0 = &std::_Func_impl_no_alloc<class <lambda_556da12014d355e7451e238363901001>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cb0
__builtin_memcpy(&var_cb0, eax_8, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_556da12014d355e7451e238363901001>,bool,enum CardID>::VTable
    * const* var_19cc = &var_19f0
void* var_193c
int32_t* eax_9 = &var_193c
int32_t var_14_1 = 0
int32_t* var_30_2 = &var_193c
int32_t var_34_1 = 0
void var_5c
var_193c = &var_5c
int32_t var_38_1 = 0
var_14_1.b = 2

if (var_19cc != 0)
    eax_9 = (*var_19cc)->vFunc_0(&var_5c)
    int32_t* var_38_2 = eax_9

var_14_1.b = 0
int32_t var_14_2 = 0xffffffff
int32_t var_30_3 = GSI1::OffForSym(eax_9, var_30_2, &var_cb0)

if (var_19cc != 0)
    struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_556da12014d355e7451e238363901001>,bool,enum CardID>::VTable
        * const* eax_14
    eax_14.b = var_19cc != &var_19f0
    (*var_19cc)->vFunc_4(eax_14)

int64_t var_196c
__builtin_memset(&var_196c, 0, 0x2c)
int32_t var_30_5 = 0
char var_34_2 = 0
int32_t var_38_3 = 0x14
int128_t var_19c8 = 0xe3.o
int32_t var_1960
int128_t var_19b8 = var_1960.o
int64_t var_1950
int128_t var_19a8 = var_1950.o
void var_2678
int32_t* result =
    sub_563960(&var_2678, 0, &var_cb0, &var_2678, 1, 0xc, &var_19c8, var_38_3, var_34_2, var_30_5)
__builtin_memcpy(&var_1938, result, 0xc84)
int32_t var_cb8

if (var_cb8 != 0)
    int32_t esi_2 = var_1938
    
    if (esi_2 != 0)
        result = sub_5690c0(result, 0x3ea, esi_2, 0x15)
        
        if (result.b != 0)
            uint32_t esi_3 = zx.d(esi_2.w)
            int32_t edi_1 = *(sub_573400() + 4)
            
            if (esi_3 u>= 0x320)
                sub_591930()
            
            var_193c = *(esi_3 * 0x64 + edi_1 + 0x1a4c)
            void* eax_19 = sub_573400()
            uint32_t var_30_8 = sub_5777b0(eax_19, *(eax_19 + 0xc), *(eax_19 + 4), &var_cb0, 4)
            void* var_1994_1 = var_193c
            struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_cc2ded8fa0f2c5d0fde379fa86e8d1d3>,bool,enum CardID>::VTable
                * const var_1998 = &std::_Func_impl_no_alloc<class <lambda_cc2ded8fa0f2c5d0fde379fa86e8d1d3>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
            struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_cc2ded8fa0f2c5d0fde379fa86e8d1d3>,bool,enum CardID>::VTable
                * const* var_1974_1 = &var_1998
            __builtin_memcpy(&var_1938, &var_cb0, 0xc84)
            void** eax_22 = &var_193c
            int32_t var_14_3 = 3
            void** var_30_9 = &var_193c
            int32_t var_34_4 = 0
            var_193c = &var_5c
            int32_t var_38_4 = 0
            var_14_3.b = 5
            
            if (var_1974_1 != 0)
                eax_22 = (*var_1974_1)->_Copy(void *) const(&var_5c)
                void** var_38_5 = eax_22
            
            var_14_3.b = 3
            int32_t var_14_4 = 0xffffffff
            int32_t var_cb8_1 = GSI1::OffForSym(eax_22, var_30_9, &var_1938)
            
            if (var_1974_1 != 0)
                (*var_1974_1)->vFunc_4(var_1974_1 != &var_1998)
            
            int64_t var_196c_1
            __builtin_memset(&var_196c_1, 0, 0x2c)
            var_19c8 = 0xe2.o
            int32_t var_1960_1
            int128_t var_19b8_1 = var_1960_1.o
            int64_t var_1950_1
            int128_t var_19a8_1 = var_1950_1.o
            result = sub_563c40(&var_19c8, 0xc, 0)
            
            if (result != 0)
                void* eax_28 = sub_573400()
                result = sub_583720(eax_28, *(eax_28 + 0xc), *(eax_28 + 4), result, 0x3ea, nullptr, 
                    0x476, 0, 0, 4)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
