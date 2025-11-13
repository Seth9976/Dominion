// 函数: sub_6377f0
// 地址: 0x6377f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = *arg3

if (eax == 0)
    if (arg2 != 0)
        *arg2 = 0
    
    *arg4 = *(arg3 + 0x68)
    arg4[1] = *(arg3 + 0x78)
    return arg4

if (eax != 1)
    sub_63b870(eax - 1, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\CardMotion.h", 0x4c, 
        "CalcTransform")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void var_48
int128_t* eax_4 = sub_5d4590(&var_48, arg2, &arg3[2], &var_48)
int128_t xmm1 = *eax_4
int128_t xmm2 = eax_4[1]
int128_t var_28 = xmm1
int128_t var_18 = xmm2

if (sub_639970(&var_28) != 0)
    *(arg3 + 0x20) = xmm1
    *(arg3 + 0x30) = xmm2
    *arg4 = xmm1
    arg4[1] = xmm2
    return arg4

arg3[8] f- 0f
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    __builtin_memcpy(arg4, 
        "\x17\xb7\xd1\x38\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x"
    "00\x00\x00\x00\x00\x00\x00\x00\x00", 
        0x20)
    return arg4

int128_t xmm2_1 = *(arg3 + 0x30)
*arg4 = *(arg3 + 0x20)
arg4[1] = xmm2_1
return arg4
