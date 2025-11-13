// 函数: sub_553380
// 地址: 0x553380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_766a30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_d0c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t eax_3 = sub_56b800()
void var_c94
int32_t eax_4 = memset(&var_c94, 0, 0xc80)
int32_t var_18
int32_t var_18_1 = var_18 + 1
uint32_t var_c98 = eax_3
sub_566370(eax_4, 0x3ea, &var_c98, 0)
void var_c99
sub_56ef50(&var_c99)
int32_t var_8_1 = 0
void* eax_5 = sub_573400()

if (*(eax_5 + 0x40) == 0)
    sub_591930()

int32_t esi_2 = *(eax_5 + 0x40)

if (sub_56f260(esi_2) != 0)
    void* eax_7
    int32_t ecx_3
    eax_7, ecx_3 = sub_573400()
    uint32_t edi_1 = zx.d(esi_2.w)
    int32_t eax_8 = *(eax_7 + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    int64_t var_ccc_1 = 0
    int64_t var_cbc
    __builtin_memset(&var_cbc, 0, 0x1c)
    int32_t var_cc4_1 = 0
    int32_t edi_3 = *(edi_1 * 0x64 + eax_8 + 0x1a58)
    int128_t var_d00 = 0x45.o
    int32_t var_d10_1 = ecx_3
    int128_t var_cf0_1 = esi_2.o
    int64_t var_cb0
    int128_t var_ce0_1 = var_cb0.o
    int32_t eax_11
    int32_t ecx_5
    eax_11, ecx_5 = sub_569720(&var_d00, 0x3eb, esi_2, 2, &var_d00)
    
    if (eax_11 != 2)
        sub_5695c0(eax_11, edi_3, esi_2, 0xb)
    else
        int32_t var_d10_2 = ecx_5
        sub_5624a0(esi_2, edi_3)

int32_t result = sub_56efb0()
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
