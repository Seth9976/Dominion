// 函数: sub_668650
// 地址: 0x668650
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
float xmm4 = arg3[1]
float xmm6 = data_c27c4c
float xmm7 = data_c27c50
float xmm5 = data_c27c48
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

int32_t __saved_ebp
sub_63b870(__security_cookie ^ &__saved_ebp, &data_801800, "RectIsNormalized(r)", 
    "C:\x\ax2017\Engine\Rect.cpp", 0x12d, "RectBottomRight")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
