// 函数: sub_5d77e0
// 地址: 0x5d77e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(arg3 + 0x370) == 1)
    *(arg3 + 0x3d4) = arg3

if (*(arg3 + 0x2e8) == 1)
    *(arg3 + 0x34c) = arg3

if (*(arg3 + 0x260) == 1)
    *(arg3 + 0x2c4) = arg3

void var_28
int128_t* eax_1 = sub_6377f0(&var_28, nullptr, arg3 + 0x370, &var_28)
*arg4 = *eax_1
arg4[1] = eax_1[1]
float xmm1 = *(arg4 + 0x14)
int32_t var_38
char* ecx_2

if (xmm1 >= -100000f)
    if (not(100000f < xmm1))
        if (*(arg3 + 0x1c28) == data_b7fcd0)
            float xmm1_1 = xmm1 f+ data_b7fcd4
            *(arg4 + 0x18) = data_b7fcd8 f+ *(arg4 + 0x18)
            float xmm0_5 = *(arg4 + 0x1c) + 0f
            *(arg4 + 0x14) = xmm1_1
            *(arg4 + 0x1c) = xmm0_5
        
        return arg4
    
    char const* const var_34_2 = "DomCurrentTransform"
    var_38 = 0x2bbd
    ecx_2 = "retval.t.x <= 100000.0f"
else
    char const* const var_34_1 = "DomCurrentTransform"
    var_38 = 0x2bbc
    ecx_2 = "retval.t.x >= -100000.0f"

sub_63b870(eax_1, &data_801800, ecx_2, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_38, 
    "DomCurrentTransform")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
