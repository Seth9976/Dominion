// 函数: sub_524760
// 地址: 0x524760
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1918)
__security_cookie
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3 = sub_573400()
int32_t ecx_1 = *(eax_3 + 0xc)

if (ecx_1 != 0xffffffff)
    int32_t eax_4 = *(eax_3 + 4)
    int32_t ecx_2 = ecx_1 * 0x5a30
    *(ecx_2 + eax_4 + 0x17558) |= 2
    void* eax_5 = sub_573400()
    sub_590760(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), 2, 1, 0, 0)
    eax_3 = sub_573400()
    int32_t ecx_4 = *(eax_3 + 0xc)
    
    if (ecx_4 != 0xffffffff)
        int32_t eax_6 = *(eax_3 + 4)
        int32_t ecx_5 = ecx_4 * 0x5a30
        *(ecx_5 + eax_6 + 0x17558) |= 8
        sub_562880(arg3, arg2, arg1)
        int32_t var_14_2 = 0
        void var_8
        void arg_c80
        __builtin_memcpy(&var_8, sub_5685f0(&arg_c80, 0, 2, &arg_c80, 2), 0xc84)
        int32_t eax_9 = sub_56ca00(&var_8, &arg_c80)
        void* result = sub_561af0(eax_9, 0, eax_9, 0)
        CookieCheckFunction(result)
        return result

sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
