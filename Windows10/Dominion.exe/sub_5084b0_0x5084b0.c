// 函数: sub_5084b0
// 地址: 0x5084b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_18 = __chkstk(0x25a4)
void var_8
sub_561e00(__security_cookie ^ &var_8, 0, 1, 0)
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3 = sub_573400()
int32_t ecx_2 = *(eax_3 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(eax_3 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_4 + 0x17558) |= 2
void* eax_5 = sub_573400()
int32_t var_18_1 = 0xc
int32_t __saved_ebp
uint32_t eax_6 = sub_588db0(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), 2, 0x3ee, 1, *(eax_5 + 0x28), 
    *(eax_5 + 0x2c), *(eax_5 + 0x30), &__saved_ebp, 0)
uint32_t arg_c7c = eax_6
void arg_190c
__builtin_memcpy(&arg_190c, &__saved_ebp, 0xc84)
int32_t eax_8 = *(*(sub_573400() + 4) + 0x1504)

if (eax_8 != 3 && eax_8 != 5 && eax_8 != 4 && eax_8 != 6)
    void* var_34_1
    __builtin_memset(&var_34_1, 0, 0x20)
    void* ecx_5
    ecx_5.b = eax_8 == 2
    void* var_30_1
    int128_t* var_2c_2
    int32_t var_28_2
    int32_t var_24_2
    int32_t var_20_2
    int32_t var_1c_2
    int32_t var_18_2
    sub_61b1b0(eax_8, 7, ecx_5.b, 0xffffffff, 0, 1, var_34_1, var_30_1, var_2c_2, var_28_2, 
        var_24_2, var_20_2, var_1c_2, var_18_2)

void arg_c84
__builtin_memcpy(&__saved_ebp, sub_562540(&arg_c84, eax_6, &arg_190c, &arg_c84, 0x3ee, 0x27, 0, 0), 
    0xc84)
sub_56a0a0(&arg_190c, &__saved_ebp)
__builtin_memcpy(&__saved_ebp, sub_5671b0(&arg_c84, arg1, &arg_190c, &arg_c84, 0x3ee, 0xf, 7, 5), 
    0xc84)
uint32_t result = sub_569330(sub_56a0a0(&arg_190c, &__saved_ebp), 0x3ee, &arg_190c, 0x18)
CookieCheckFunction(result)
return result
