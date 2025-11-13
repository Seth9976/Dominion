// 函数: sub_631f30
// 地址: 0x631f30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t result = sub_637730(&data_b809e0)
*(result + 0x238) = arg4
*(result + 0x2c) = 8
*(result + 0x234) = arg2
*(result + 0x23c) = arg5
*(result + 0x240) = *(arg3 + 0x1c28)
int32_t c = *(arg3 + 0x2c)
int128_t var_70
void var_b4

if (c != 3)
    if (c != 0)
        sub_63b870(c, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            0x10ce1, "DomGfxCreate_Hint")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    memset(&var_b4, c, 0x40)
    int32_t var_c8_1 = *(arg3 + 0xa0)
    int32_t var_c4_1 = arg6
    int32_t eax_5 = *(arg3 + 0x98)
    int32_t var_cc_1 = 0x474
    int64_t var_c0_1 = 0
    var_70 = 9.o
    var_70:4.d = eax_5
else
    int32_t esi_1 = *(arg3 + 0x5c)
    memset(&var_b4, 0, 0x40)
    int32_t var_cc = esi_1
    int32_t var_c8 = 0xffffffff
    int32_t var_c4 = arg6
    int64_t var_c0 = 0
    var_70 = 7.o
int32_t var_b8 = 0
int32_t var_74 = 0
int128_t var_60 = zx.o(0)
int128_t var_b0
int128_t var_50 = var_b0
int128_t var_a0
int128_t var_40 = var_a0
int128_t var_90
int128_t var_30 = var_90
int128_t var_80
int128_t var_20 = var_80
sub_5cb630(result + 0x258, &var_70)
CookieCheckFunction(result)
return result
