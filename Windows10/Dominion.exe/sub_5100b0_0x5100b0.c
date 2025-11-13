// 函数: sub_5100b0
// 地址: 0x5100b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76549b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x1944)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t edi
int32_t var_1c = edi
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_573400()
void var_1954
uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &var_1954, 0)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_c99038c50bc714f5137673adab3853a4>,bool,enum CardID>::VTable
    * const var_ccc = &std::_Func_impl_no_alloc<class <lambda_c99038c50bc714f5137673adab3853a4>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
uint32_t var_cd4 = eax_4
void var_c9c
__builtin_memcpy(&var_c9c, &var_1954, 0xc84)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_c99038c50bc714f5137673adab3853a4>,bool,enum CardID>::VTable
    * const* var_ca8 = &var_ccc
void* var_ca0
int32_t* eax_5 = &var_ca0
int32_t var_8_1 = 0
int32_t* var_24_1 = &var_ca0
int32_t var_28_1 = 0
void var_50
var_ca0 = &var_50
int32_t var_2c = 0
var_8_1.b = 2

if (var_ca8 != 0)
    eax_5 = (*var_ca8)->vFunc_0(&var_50)
    int32_t* var_2c_1 = eax_5

var_8_1.b = 0
int32_t eax_7 = GSI1::OffForSym(eax_5, eax_4, &var_c9c)
int32_t var_8_2 = 0xffffffff

if (var_ca8 != 0)
    (*var_ca8)->vFunc_4(var_ca8 != &var_ccc)
    int32_t var_ca8_1 = 0

void* eax_10 = sub_573400()

if (*(eax_10 + 0xc) == 0xffffffff)
    sub_63b870(eax_10, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 0x10ba, "Start_AddEachKingdomPile")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* edi_1 = &var_c9c
void* result = &var_c9c + (eax_7 << 2)

if (&var_c9c != result)
    do
        void* eax_11 = sub_573400()
        uint32_t esi_2 = zx.d((*edi_1).w)
        void* eax_12 = *(eax_11 + 4)
        var_ca0 = eax_12
        
        if (esi_2 u>= 0x320)
            sub_591930()
            eax_12 = var_ca0
        
        sub_5727e0(eax_12, *(esi_2 * 0x64 + eax_12 + 0x1a4c), *(eax_10 + 4), 0x3eb, 
            *(eax_10 + 0xc), nullptr)
        edi_1 += 4
        result = &var_c9c + (eax_7 << 2)
    while (edi_1 != result)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
