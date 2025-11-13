// 函数: sub_56f510
// 地址: 0x56f510
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
uint32_t eax_3 = zx.d(arg2.w)

if (eax_3 u>= 0x320)
    sub_591930()

int32_t edx = *(eax_2 + 0xc)
int32_t var_ca4 = arg2
int32_t var_ca0 = *(eax_3 * 0x64 + arg3 + 0x1a54)
sub_573050(&var_ca4, edx, arg3, &var_ca4)
int32_t edx_1 = *(eax_2 + 0xc)
void* esi_1 = *(eax_2 + 4)
int32_t eax_6 = edx_1 * 0x5a30
int32_t ecx_2 = *(eax_6 + esi_1 + 0x174f4)
int32_t var_c9c

if (arg4 == 0)
    var_c9c = 0
else
    eax_6 = *(eax_6 + esi_1 + 0x17500)
    var_c9c = eax_6

void* eax_7 = sub_583fc0(eax_6, edx_1, esi_1, 0xa00)
void* ecx_5 = nullptr

if (*(*(sub_573400() + 4) + 0x19cc) == *(sub_573400() + 0xc))
    ecx_5 = eax_7

int128_t* ecx_6 = ecx_5 + ecx_2
int128_t* var_ca0_1 = ecx_6
int32_t var_d30
uint32_t var_d2c

if (ecx_6 s> 0)
    int32_t eax_11 = *(arg3 + 0x1504)
    
    if (eax_11 != 3 && eax_11 != 5 && eax_11 != 4 && eax_11 != 6)
        var_d2c = 0
        var_d30 = 0
        ecx_6.b = eax_11 == 2
        sub_61b1b0(eax_11, 9, ecx_6.b, *(eax_2 + 0xc), arg2, 0x3ec, nullptr, nullptr, 0xb, 0, 0, 0, 
            0, 0)

int64_t var_cd8 = 0
int32_t eax_12
eax_12.b = var_c9c != 0
int32_t var_cd0 = 0
int32_t var_cc8
__builtin_memset(&var_cc8, 0, 0x1c)
int128_t var_d0c = 0x79.o
int32_t var_d20_1 = eax_12
int128_t var_cfc = var_c9c.o
int64_t var_cbc
int128_t var_cec = var_cbc.o
int32_t eax_14 = sub_563d80(&var_d0c, var_ca0_1, var_c9c, &var_d0c, 0x2c)

if (eax_14 == 0)
    goto label_56f86d

int32_t edi_3 = eax_14 & 0xfffeffff
char eax_16 = (eax_14 u>> 0x10).b & 1
int32_t esi_3 = edi_3

if (ecx_2 s< edi_3)
    esi_3 = ecx_2

int32_t eax_18 = edi_3 - esi_3

if (edi_3 != esi_3)
    int32_t eax_19 = neg.d(eax_18)
    int32_t var_d20_2 = 0
    int32_t var_d24_1 = 0xffffffff
    eax_18 = sub_571fa0(eax_19, *(eax_2 + 0xc), *(eax_2 + 4), 0xa00, eax_19, 0x476, nullptr, 
        var_d30, var_d2c, 0)

if (esi_3 != 0)
    eax_18 = sub_590760(eax_18, *(eax_2 + 0xc), *(eax_2 + 4), 0, neg.d(esi_3), 0, 2)

char edx_6 = eax_16

if (edx_6 != 0)
    sub_590760(eax_18, *(eax_2 + 0xc), *(eax_2 + 4), 3, 0xffffffff, 0, 2)
    edx_6 = eax_16

int32_t* ecx_12 = *(eax_2 + 4)
int32_t eax_20 = ecx_12[0x541]

if (eax_20 != 3 && eax_20 != 5 && eax_20 != 4 && eax_20 != 6 && ecx_12[0x540].b == 0)
    int32_t esi_5 = *(eax_2 + 0xc)
    int32_t var_c98_2 = esi_5
    
    if (esi_5 == ecx_12[0x673])
        var_c98_2 = ecx_12[0x674]
    
    uint32_t eax_22 = zx.d(edx_6)
    sub_59f9b0(eax_22, esi_5, ecx_12, var_c98_2, 0x38, 0, nullptr, 0, edi_3, eax_22, 0, 0)

int32_t eax_23 = *(eax_2 + 0xc)

if (eax_23 == *(arg3 + 0x19cc))
    eax_23 = *(arg3 + 0x19d0)

char const* const var_d28_3
int32_t var_d24_2
char const* const var_d20_3
char* ecx_15

if (eax_14 s> 0)
    int32_t var_c90_1 = arg2
    int32_t var_c8c_1 = eax_14
    int32_t var_c94 = 3
    int32_t var_10_1 = 2
    sub_56c010(&var_c94, arg5, 6, sub_56f4f0, 0, &var_c94, 1, 0, eax_23)
label_56f86d:
    TEB* fsbase
    void* ecx_16 = *fsbase->ThreadLocalStoragePointer
    eax_23 = *(ecx_16 + 0xf010)
    
    if (eax_23 s> 0)
        *(ecx_16 + 0xf010) = eax_23 - 1
        CookieCheckFunction(eax_23 - 1)
        return eax_23 - 1
    
    var_d20_3 = "DomPopContext"
    var_d24_2 = 0x792
    var_d28_3 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
    ecx_15 = "cs.numContexts > 0"
else
    var_d20_3 = "ScheduleOverpayEffect"
    var_d24_2 = 0x1b26
    var_d28_3 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
    ecx_15 = "amountRetval > 0"

sub_63b870(eax_23, &data_801800, ecx_15, var_d28_3, var_d24_2, var_d20_3)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
