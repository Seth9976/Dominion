// 函数: sub_6323b0
// 地址: 0x6323b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t result = sub_637730(&data_b809e0)
int128_t xmm0 = *arg3
int32_t c = *arg3
*(result + 0x2c) = 7
*(result + 0x220) = arg4
*(result + 0x224) = xmm0
int32_t var_d8
void var_bc

if (c != 0)
    if (c != 1)
        sub_63b870(c, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            0x10d85, "DomCreateArrow")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t edi_1 = *(arg3 + 0xc)
    int32_t esi_1 = *(arg3 + 8)
    memset(&var_bc, 0, 0x40)
    var_d8 = 7
    int32_t var_d4_1 = esi_1
    int32_t var_d0_1 = edi_1
    int32_t var_cc_1 = arg2
else
    memset(&var_bc, c, 0x40)
    var_d8 = 0x13
    int32_t var_d4 = 0x3f1
    int32_t var_d0 = *(arg3 + 4)
    int32_t var_cc = arg2
int32_t var_c0 = 0
uint32_t result_1 = result
int128_t var_70 = var_d8.o
int128_t var_60 = 0.o
int128_t var_b8
int128_t var_50 = var_b8
int128_t var_a8
int128_t var_40 = var_a8
int128_t var_98
int128_t var_30 = var_98
int128_t var_88
int128_t var_20 = var_88
sub_5cb630(result + 0x258, &var_70)
CookieCheckFunction(result)
return result
