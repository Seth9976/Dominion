// 函数: sub_4f82a0
// 地址: 0x4f82a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4_1 = ebp
__chkstk(0x19c8)
__security_cookie
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3
int32_t edx_1
eax_3, edx_1 = sub_573400()
int32_t ecx_1 = *(eax_3 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(eax_3 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_4 + 0x17558) |= 2
void arg_a0
int32_t arg_d28[0x320]
__builtin_memcpy(&arg_a0, sub_568780(&arg_d28, edx_1, 0x3ea, &arg_d28), 0xc84)
bool var_9 = arg2 s> 0
int32_t ecx_4
int32_t edi_1

if (arg2 s> 0)
    edi_1, ecx_4 = __memfill_u32(&arg_d28, 0x3ea, arg2)
uint32_t eax_7 = sub_56b800()
char var_a = 0
uint32_t var_8 = eax_7
uint32_t edi_3 = zx.d(eax_7.w)
int32_t var_4 = *(sub_573400() + 4)

if (edi_3 u>= 0x320)
    sub_591930()

uint32_t eax_10 = edi_3 * 0x64

if (*(eax_10 + var_4 + 0x1a50) == 0x3e9)
    var_a = 1
    
    if (arg2 s>= 0x320)
        sub_591930()
    
    *(&arg_a0 + (arg2 << 2)) = var_8
    eax_10 = arg2 + 1
    arg2 = eax_10
    void arg_d24
    *(&arg_d24 + (eax_10 << 2)) = 0x3e9

uint32_t result

if (var_9 == 0 || var_a == 0)
    result = sub_56a880(eax_10, &arg_d28, &arg_a0, 0x14)
else
    int32_t var_1c_2 = 1
    result = sub_56aa00(eax_10, &arg_d28, &arg_a0)

if (result != 0)
    void* eax_13 = sub_573400()
    uint32_t esi_3 = zx.d(result.w)
    uint32_t ecx_8 = *(eax_13 + 0xc)
    void* edi_4 = *(eax_13 + 4)
    var_8 = ecx_8
    
    if (esi_3 u>= 0x320)
        sub_591930()
        ecx_8 = var_8
    
    int32_t eax_14 = esi_3 * 0x64
    sub_576e90(eax_14, edi_4, &var_8, ecx_8, *(eax_14 + edi_4 + 0x1a4c), 0)
    uint32_t arg_48[0x8]
    int32_t xmm0_1 = (*sub_576c00(&arg_48, var_8)).d
    void* eax_16 = sub_573400()
    int32_t var_24_2 = 0xc
    uint32_t eax_18 = sub_588db0(xmm0_1, *(eax_16 + 0xc), *(eax_16 + 4), xmm0_1, 0x3ee, 1, 
        *(eax_16 + 0x28), *(eax_16 + 0x2c), *(eax_16 + 0x30), &arg_a0, 0)
    int32_t arg_14 = 0
    int64_t arg_c = 0
    int64_t arg_1c
    __builtin_memset(&arg_1c, 0, 0x1c)
    int128_t arg_68 = 0x1c.o
    arg2 = eax_18
    char var_1c_6 = 0
    __builtin_memcpy(&arg_d28, &arg_a0, 0xc84)
    int128_t arg_78 = 1.o
    int128_t arg_88 = arg1.o
    int32_t* eax_19 = sub_563c40(&arg_68, 0xa, var_1c_6)
    int32_t ecx_12 = 0
    
    if (arg3 s> 0)
        do
            if (arg_d28[ecx_12] == eax_19)
                void* eax_21 = arg3 - 1
                arg3 = eax_21
                arg_d28[ecx_12] = arg_d28[eax_21]
                break
            
            ecx_12 += 1
        while (ecx_12 s< arg3)
    
    var_4 = 0
    void* eax_23 = sub_573400()
    int32_t eax_24 = *(eax_23 + 4)
    uint32_t eax_25 = zx.d(eax_19.w)
    var_8 = eax_25
    
    if (eax_25 u>= 0x320)
        sub_591930()
        eax_25 = var_8
    
    int32_t* ecx_13 = *(eax_23 + 4)
    int32_t var_30_2
    __builtin_memset(&var_30_2, 0, 0x18)
    int32_t var_2c_2
    char* var_28_2
    int32_t var_24_4
    void* var_20_4
    void* var_1c_7
    sub_582d10(eax_24, *(eax_25 * 0x64 + eax_24 + 0x1a70), ecx_13, eax_19, 0x3ee, 0xb, 0x3ea, 3, 
        *(eax_23 + 0x28), *(eax_23 + 0x2c), *(eax_23 + 0x30), var_30_2, var_2c_2, var_28_2, 
        var_24_4, var_20_4, var_1c_7)
    void* eax_27 = sub_573400()
    *(eax_27 + 0xc)
    *(eax_27 + 4)
    result = sub_582eb0(&arg_d28, arg3, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)

CookieCheckFunction(result)
return result
