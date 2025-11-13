// 函数: sub_502d50
// 地址: 0x502d50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4_1 = ebp
__chkstk(0x1998)
__security_cookie
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3 = sub_573400()
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
void* eax_5 = sub_573400()
int32_t var_1c_1 = 0xc
void arg_70
uint32_t eax_6 = sub_588db0(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), 4, 0x3ee, 1, *(eax_5 + 0x28), 
    *(eax_5 + 0x2c), *(eax_5 + 0x30), &arg_70, 0)
int32_t arg_14 = 0
int64_t arg_c = 0
int64_t arg_1c
__builtin_memset(&arg_1c, 0, 0x1c)
int128_t arg_38 = 0x1c.o
uint32_t arg_cf0 = eax_6
char var_1c_2 = 0
int32_t arg_cf8[0x320]
__builtin_memcpy(&arg_cf8, &arg_70, 0xc84)
int128_t arg_48 = 1.o
int128_t arg_58 = arg1.o
int32_t* eax_7 = sub_563c40(&arg_38, 0xa, var_1c_2)
int32_t ecx_4 = 0

if (arg2 s> 0)
    do
        if (arg_cf8[ecx_4] == eax_7)
            void* eax_9 = arg2 - 1
            arg2 = eax_9
            arg_cf8[ecx_4] = arg_cf8[eax_9]
            break
        
        ecx_4 += 1
    while (ecx_4 s< arg2)

int32_t var_4 = 0
void* eax_11 = sub_573400()
int32_t eax_12 = *(eax_11 + 4)
uint32_t eax_13 = zx.d(eax_7.w)

if (eax_13 u>= 0x320)
    sub_591930()

int32_t* ecx_5 = *(eax_11 + 4)
int32_t var_30_1
__builtin_memset(&var_30_1, 0, 0x18)
int32_t var_2c_1
char* var_28_2
int32_t var_24_3
void* var_20_3
void* var_1c_3
sub_582d10(eax_12, *(eax_13 * 0x64 + eax_12 + 0x1a70), ecx_5, eax_7, 0x3ee, 0xb, 0x3ea, 3, 
    *(eax_11 + 0x28), *(eax_11 + 0x2c), *(eax_11 + 0x30), var_30_1, var_2c_1, var_28_2, var_24_3, 
    var_20_3, var_1c_3)
void* eax_15 = sub_573400()
*(eax_15 + 0xc)
*(eax_15 + 4)
uint32_t result = sub_582eb0(&arg_cf8, arg2, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
CookieCheckFunction(result)
return result
