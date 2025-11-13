// 函数: sub_507170
// 地址: 0x507170
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebp
void* var_4 = ebp
int32_t var_1c = __chkstk(0x1998)
void var_10
sub_561e00(__security_cookie ^ &var_10, 0, 1, 0)
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3
int32_t edx_1
eax_3, edx_1 = sub_573400()
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
void arg_70
int32_t* result = sub_568780(&arg_70, edx_1, 0x3ec, &arg_70)
int32_t arg_cf8
__builtin_memcpy(&arg_cf8, result, 0xc84)

if (arg3 != 0)
    int64_t arg_c
    __builtin_memset(&arg_c, 0, 0x2c)
    int128_t arg_38 = 0x1e.o
    int128_t arg_48 = arg1.o
    int128_t arg_58 = arg2.o
    result = sub_563960(&arg_70, 0, &arg_cf8, &arg_70, 1, 0x10, &arg_38, 0xe, 0, 0)
    __builtin_memcpy(&arg_cf8, result, 0xc84)
    
    if (arg3 != 0)
        int32_t esi_2 = arg_cf8
        
        if (esi_2 != 0)
            var_4 = nullptr
            void* eax_7 = sub_573400()
            int32_t eax_8 = *(eax_7 + 4)
            uint32_t eax_9 = zx.d(esi_2.w)
            
            if (eax_9 u>= 0x320)
                sub_591930()
            
            uint32_t eax_11 = sub_582d10(eax_8, *(eax_9 * 0x64 + eax_8 + 0x1a70), *(eax_7 + 4), 
                esi_2, 0x3ec, 0xb, 0x3eb, 2, *(eax_7 + 0x28), *(eax_7 + 0x2c), *(eax_7 + 0x30), 0, 
                0, nullptr, 0, nullptr, var_4)
            arg_cf8 = esi_2
            arg3 = 1
            result = sub_56f1a0(eax_11, &arg_cf8, 0x1c, 0)

CookieCheckFunction(result)
return result
