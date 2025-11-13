// 函数: sub_5006c0
// 地址: 0x5006c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1998)
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
int32_t* const var_1c_1 = &data_7831a0
*(ecx_2 + eax_4 + 0x17558) |= 2
void arg_70
void arg_cf8
__builtin_memcpy(&arg_70, sub_566240(&arg_cf8, edx_1, 3, &arg_cf8, var_1c_1), 0xc84)
void* eax_7
int32_t edx_2
eax_7, edx_2 = sub_573400()
void* eax_9 = *(*(eax_7 + 4) + 0x1504)

if (eax_9 != 3 && eax_9 != 5 && eax_9 != 4 && eax_9 != 6)
    void* var_38
    __builtin_memset(&var_38, 0, 0x20)
    void* var_34
    int128_t* var_30
    int32_t var_2c
    int32_t var_28_1
    int32_t var_24_1
    int32_t var_20_2
    int32_t var_1c_2
    eax_9, edx_2 = sub_61b1b0(eax_9, 7, eax_9 == 2, 0xffffffff, 0, 1, var_38, var_34, var_30, 
        var_2c, var_28_1, var_24_1, var_20_2, var_1c_2)

__builtin_memcpy(&arg_cf8, &arg_70, 0xc84)
int32_t var_1c_3 = 0
sub_561880(eax_9, edx_2, &arg_cf8, 4)
int64_t arg_c
__builtin_memset(&arg_c, 0, 0x2c)
int128_t arg_38 = 0xdc.o
int128_t arg_48 = arg1.o
int128_t arg_58 = arg2.o
int32_t* eax_10
int32_t edx_4
eax_10, edx_4 = sub_563c40(&arg_38, 0xa, 0)

if (eax_10 != 0)
    int32_t ecx_5 = 0
    
    if (arg3 s> 0)
        do
            if (*(&arg_70 + (ecx_5 << 2)) == eax_10)
                void* eax_12 = arg3 - 1
                arg3 = eax_12
                *(&arg_70 + (ecx_5 << 2)) = *(&arg_70 + (eax_12 << 2))
                break
            
            ecx_5 += 1
        while (ecx_5 s< arg3)
    
    var_4 = 0
    void* eax_14 = sub_573400()
    uint32_t eax_15 = *(eax_14 + 4)
    uint32_t eax_16 = zx.d(eax_10.w)
    
    if (eax_16 u>= 0x320)
        sub_591930()
    
    int32_t* ecx_6 = *(eax_14 + 4)
    int32_t var_30_1
    __builtin_memset(&var_30_1, 0, 0x18)
    int32_t var_2c_2
    char* var_28_3
    int32_t var_24_3
    void* var_20_4
    void* var_1c_4
    eax_10, edx_4 = sub_582d10(eax_15, *(eax_16 * 0x64 + eax_15 + 0x1a70), ecx_6, eax_10, 0x3ee, 
        0xb, 0x3ea, 3, *(eax_14 + 0x28), *(eax_14 + 0x2c), *(eax_14 + 0x30), var_30_1, var_2c_2, 
        var_28_3, var_24_3, var_20_4, var_1c_4)

__builtin_memcpy(&arg_cf8, &arg_70, 0xc84)
int32_t var_1c_5 = 0
sub_561880(eax_10, edx_4, &arg_cf8, 2)
__builtin_memset(&arg_c, 0, 0x2c)
arg_38 = 0xdd.o
arg_48 = arg1.o
arg_58 = arg2.o
int32_t* eax_18
int32_t edx_9
eax_18, edx_9 = sub_563c40(&arg_38, 0xa, 0)

if (eax_18 != 0)
    int32_t ecx_8 = 0
    
    if (arg3 s> 0)
        do
            if (*(&arg_70 + (ecx_8 << 2)) == eax_18)
                void* eax_20 = arg3 - 1
                arg3 = eax_20
                *(&arg_70 + (ecx_8 << 2)) = *(&arg_70 + (eax_20 << 2))
                break
            
            ecx_8 += 1
        while (ecx_8 s< arg3)
    
    var_4 = 0
    void* eax_22 = sub_573400()
    int32_t eax_23 = *(eax_22 + 4)
    uint32_t eax_24 = zx.d(eax_18.w)
    
    if (eax_24 u>= 0x320)
        sub_591930()
    
    int32_t* ecx_9 = *(eax_22 + 4)
    int32_t var_30_2
    __builtin_memset(&var_30_2, 0, 0x18)
    int32_t var_2c_4
    char* var_28_5
    int32_t var_24_5
    void* var_20_6
    void* var_1c_6
    eax_18, edx_9 = sub_582d10(eax_23, *(eax_24 * 0x64 + eax_23 + 0x1a70), ecx_9, eax_18, 0x3ee, 
        0xb, 0x3ea, 3, *(eax_22 + 0x28), *(eax_22 + 0x2c), *(eax_22 + 0x30), var_30_2, var_2c_4, 
        var_28_5, var_24_5, var_20_6, var_1c_6)

__builtin_memcpy(&arg_cf8, &arg_70, 0xc84)
int32_t var_1c_7 = 0
sub_561880(eax_18, edx_9, &arg_cf8, 8)
__builtin_memset(&arg_c, 0, 0x2c)
arg_38 = 0xde.o
arg_48 = arg1.o
arg_58 = arg2.o
int32_t* eax_26 = sub_563c40(&arg_38, 0xa, 0)

if (eax_26 != 0)
    int32_t ecx_11 = 0
    
    if (arg3 s> 0)
        do
            if (*(&arg_70 + (ecx_11 << 2)) == eax_26)
                void* eax_28 = arg3 - 1
                arg3 = eax_28
                *(&arg_70 + (ecx_11 << 2)) = *(&arg_70 + (eax_28 << 2))
                break
            
            ecx_11 += 1
        while (ecx_11 s< arg3)
    
    var_4 = 0
    void* eax_30 = sub_573400()
    int32_t eax_31 = *(eax_30 + 4)
    uint32_t eax_32 = zx.d(eax_26.w)
    
    if (eax_32 u>= 0x320)
        sub_591930()
    
    int32_t* ecx_12 = *(eax_30 + 4)
    int32_t var_30_3
    __builtin_memset(&var_30_3, 0, 0x18)
    int32_t var_2c_6
    char* var_28_7
    int32_t var_24_7
    void* var_20_8
    void* var_1c_8
    sub_582d10(eax_31, *(eax_32 * 0x64 + eax_31 + 0x1a70), ecx_12, eax_26, 0x3ee, 0xb, 0x3ea, 3, 
        *(eax_30 + 0x28), *(eax_30 + 0x2c), *(eax_30 + 0x30), var_30_3, var_2c_6, var_28_7, 
        var_24_7, var_20_8, var_1c_8)

void* eax_34 = sub_573400()
*(eax_34 + 0xc)
*(eax_34 + 4)
uint32_t result = sub_582eb0(&arg_70, arg3, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
CookieCheckFunction(result)
return result
