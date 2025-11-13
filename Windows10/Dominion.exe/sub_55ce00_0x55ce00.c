// 函数: sub_55ce00
// 地址: 0x55ce00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76506b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x19c0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_56d1f0()
int32_t var_cc8 = 4
void* eax_3 = sub_573400()
void var_19e0
uint32_t eax_4 = sub_5777b0(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), &var_19e0, 4)
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_2be8ff71a11040ca33d5bcc68f962d95>,bool,enum CardID>::VTable
    * const var_d28 = &std::_Func_impl_no_alloc<class <lambda_2be8ff71a11040ca33d5bcc68f962d95>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
void var_cb0
__builtin_memcpy(&var_cb0, &var_19e0, 0xc84)
int32_t* var_d24 = &var_cc8
struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_2be8ff71a11040ca33d5bcc68f962d95>,bool,enum CardID>::VTable
    * const* var_d04 = &var_d28
int32_t var_14_1 = 0
int64_t var_cb8
void* var_30_1 = &var_cb8:4
int32_t var_34_1 = 0
void var_5c
void* var_cb4 = &var_5c
int32_t var_38 = 0
var_14_1.b = 2

if (var_d04 != 0)
    int32_t var_38_1 = (*var_d04)->vFunc_0(&var_5c)

var_14_1.b = 0
int32_t eax_8 = GSI1::OffForSym(eax_4, eax_4, &var_cb0)
int32_t var_14_2 = 0xffffffff
int32_t var_30_2 = eax_8

if (var_d04 != 0)
    (*var_d04)->vFunc_4(var_d04 != &var_d28)
    int32_t var_d04_1 = 0

int32_t* esi = nullptr

if (eax_8 == 0)
label_55d003:
    sub_56d320()
    
    if (esi != 0)
        uint32_t edi_1 = zx.d(esi.w)
        int32_t ecx_5 = *(sub_573400() + 4)
        
        if (edi_1 u>= 0x320)
            sub_591930()
        
        int32_t eax_16 = edi_1 * 0x64
        int32_t edx_5 = *(eax_16 + ecx_5 + 0x1a50)
        int32_t eax_17 = *(eax_16 + ecx_5 + 0x1a54)
        int32_t ecx_6 = *(sub_573400() + 4)
        
        if (edi_1 u>= 0x320)
            sub_591930()
        
        if (edx_5 == *(eax_16 + ecx_6 + 0x1a58) && eax_17 == *(eax_16 + ecx_6 + 0x1a5c)
                && sub_567520() == 0)
            void* eax_21 = sub_573400()
            int32_t* ecx_8 = *(eax_21 + 4)
            uint32_t eax_22 = *(eax_21 + 0xc)
            
            if (edi_1 u>= 0x320)
                sub_591930()
            
            char var_30_6 = 0x10
            var_cb8 = 0
            int32_t var_ccc_2 = ecx_8[edi_1 * 0x19 + 0x695]
            int32_t* var_34_4 = &var_cb8
            int32_t* var_cd0 = esi
            int64_t var_cc4
            int32_t* var_38_4 = &var_cc4
            var_cc4 = 0
            sub_586320(&var_cd0, eax_22, ecx_8, &var_cd0, var_38_4, var_34_4, var_30_6)
else
    int32_t eax_11 = var_cc8
    int32_t var_cf4_1 = 0
    int64_t var_cfc_1 = 0
    int64_t var_cec
    __builtin_memset(&var_cec, 0, 0x1c)
    int128_t var_d58 = 0x131.o
    int128_t var_d48_1 = eax_11.o
    int64_t var_ce0
    int128_t var_d38_1 = var_ce0.o
    esi = sub_563c40(&var_d58, 0xc, 0)
    
    if (esi == 0)
        goto label_55d003
    
    void* eax_13 = sub_573400()
    
    if (sub_583720(eax_13, *(eax_13 + 0xc), *(eax_13 + 4), esi, 0x476, nullptr, 0x476, 0, 0, 4)
            != 0)
        goto label_55d003
    
    sub_56d320()

void* eax_26 = sub_573400()
sub_590760(eax_26, *(eax_26 + 0xc), *(eax_26 + 4), 1, 1, 0, 0)
void* eax_27 = sub_573400()
int32_t ecx_10 = *(eax_27 + 0xc)

if (ecx_10 != 0xffffffff)
    int32_t eax_28 = *(eax_27 + 4)
    int32_t ecx_11 = ecx_10 * 0x5a30
    *(ecx_11 + eax_28 + 0x17558) |= 2
    void* eax_29 = sub_573400()
    sub_590760(eax_29, *(eax_29 + 0xc), *(eax_29 + 4), 2, 1, 0, 0)
    eax_27 = sub_573400()
    int32_t ecx_13 = *(eax_27 + 0xc)
    
    if (ecx_13 != 0xffffffff)
        uint32_t result = *(eax_27 + 4)
        int32_t ecx_14 = ecx_13 * 0x5a30
        *(ecx_14 + result + 0x17558) |= 8
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result

sub_63b870(eax_27, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
