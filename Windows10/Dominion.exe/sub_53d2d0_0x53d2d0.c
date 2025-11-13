// 函数: sub_53d2d0
// 地址: 0x53d2d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_1c = __chkstk(0x1988)
void var_10
sub_561e00(__security_cookie ^ &var_10, 0, 1, 0)
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3 = sub_573400()
int32_t ecx_2 = *(eax_3 + 0xc)

if (ecx_2 != 0xffffffff)
    int32_t eax_4 = *(eax_3 + 4)
    int32_t ecx_3 = ecx_2 * 0x5a30
    *(ecx_3 + eax_4 + 0x17558) |= 2
    void* eax_5 = sub_573400()
    sub_590760(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), 2, 1, 0, 0)
    int32_t edx_2
    eax_3, edx_2 = sub_573400()
    int32_t ecx_5 = *(eax_3 + 0xc)
    
    if (ecx_5 != 0xffffffff)
        int32_t eax_6 = *(eax_3 + 4)
        int32_t ecx_6 = ecx_5 * 0x5a30
        *(ecx_6 + eax_6 + 0x17558) |= 8
        void arg_60
        int32_t eax_8 = sub_568780(&arg_60, edx_2, 0x3ea, &arg_60)
        int32_t arg_4
        __builtin_memset(&arg_4, 0, 0x24)
        var_4.q = 0
        int128_t arg_28 = 0xc1.o
        int32_t arg_ce8
        __builtin_memcpy(&arg_ce8, eax_8, 0xc84)
        int128_t arg_38 = arg1.o
        int128_t arg_48 = arg2.o
        int32_t* result = sub_563960(&arg_60, 0, &arg_ce8, &arg_60, 1, 0x1b, &arg_28, 0x17, 0, 0)
        __builtin_memcpy(&arg_ce8, result, 0xc84)
        
        if (arg3 != 0)
            int32_t esi_2 = arg_ce8
            
            if (esi_2 != 0)
                void* eax_10 = sub_573400()
                char var_9
                result = sub_565ff0(eax_10, 0x3ea, esi_2, *(eax_10 + 0xc), 0x462, nullptr, &var_9, 
                    0xc, nullptr, nullptr)
                
                if (var_9 != 0)
                    arg_ce8 = esi_2
                    arg3 = 1
                    result = sub_56f1a0(result, &arg_ce8, 0x13, 0)
        
        CookieCheckFunction(result)
        return result

sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
