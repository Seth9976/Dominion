// 函数: sub_744c10
// 地址: 0x744c10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm4 = arg3[1]
float xmm6 = data_1593c70
float xmm7 = data_1593c74
float xmm5 = data_1593c6c
float xmm1 = arg3[2]

if (not(xmm1 f< *arg3))
    float xmm0_1 = arg3[3]
    
    if (not(xmm0_1 < xmm4))
        *arg4 = (*arg3 - xmm6) * xmm5
        *(arg4 + 4) = (xmm4 - xmm7) * xmm5
        *(arg4 + 8) = (xmm1 - xmm6) * xmm5
        *(arg4 + 0xc) = (xmm0_1 - xmm7) * xmm5
        CookieCheckFunction(arg4)
        return arg4

void var_10
sub_63b870(__security_cookie ^ &var_10, &data_801800, "RectIsNormalized(r)", 
    "C:\x\ax2017\Engine\Rect.cpp", 0x12d, "RectBottomRight")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
