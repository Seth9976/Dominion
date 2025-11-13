// 函数: sub_5313a0
// 地址: 0x5313a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1988)
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
void arg_60
uint32_t result = sub_566240(&arg_60, edx_1, 3, &arg_60, &data_7bf9bc)
int32_t arg_ce8[0x320]
__builtin_memcpy(&arg_ce8, result, 0xc84)

if (arg2 != 0)
    void* eax_6 = sub_573400()
    int32_t arg_4 = 0
    var_4.q = 0
    int64_t arg_c
    __builtin_memset(&arg_c, 0, 0x1c)
    int32_t eax_7 = *(eax_6 + 0xc)
    int128_t arg_28 = 0x11.o
    int128_t arg_38 = eax_7.o
    int128_t arg_48 = arg1.o
    void* eax_8 = sub_573400()
    void* ecx_3 = *(eax_8 + 4)
    void* var_1c_1 = ecx_3
    uint32_t eax_13 = sub_563b20(&arg_28, 0x17, &arg_ce8, 
        mods.dp.d(sx.q(*(eax_8 + 0xc) + 1), *(ecx_3 + 0xd38)), &arg_28, 6)
    int32_t ecx_5 = 0
    
    if (arg2 s> 0)
        do
            if (arg_ce8[ecx_5] == eax_13)
                int32_t eax_15 = arg2 - 1
                arg2 = eax_15
                arg_ce8[ecx_5] = arg_ce8[eax_15]
                break
            
            ecx_5 += 1
        while (ecx_5 s< arg2)
    
    uint32_t var_c = eax_13
    
    if (eax_13 != 0)
        void* eax_17 = sub_573400()
        *(eax_17 + 0xc)
        *(eax_17 + 4)
        sub_582eb0(&var_c, 1, 0x3ee, 0xb, 7, 0, 0, 0, nullptr, nullptr)
    
    result = sub_569500(&arg_ce8, 0x3ee)

CookieCheckFunction(result)
return result
