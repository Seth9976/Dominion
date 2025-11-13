// 函数: sub_4eace0
// 地址: 0x4eace0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm0 = arg9
int32_t xmm3 = (zx.o(0)).d
xmm0 f- 0
arg1:1.b = (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    void* eax = data_cc8dc0
    char const* const var_3c
    int32_t var_38
    char const* const var_34
    char* ecx
    
    if (eax == 0)
        var_34 = "GetLocalSettings"
        var_38 = 0x5fb
        var_3c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
        ecx = "gGameSettings.localSettings"
    label_4eae01:
        sub_63b870(eax, &data_801800, ecx, var_3c, var_38, var_34)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t eax_1 = *(eax + 8)
    
    if (eax_1 == 0)
        xmm0 = 2f
    else
        if (eax_1 == 1)
            xmm0 = 4f
            goto label_4ead57
        
        eax = eax_1 - 3
        
        if (eax_1 != 3)
            var_34 = "MoveToSCurve"
            var_38 = 0x85
            var_3c = "C:\x\ax2017\Jams\Dominion\code\CardMotion.cpp"
            ecx = "Halt"
            goto label_4eae01
        
        xmm0 = 10f
    
label_4ead57:
    
    if (arg8 != 0)
        xmm0 = 4f

float xmm0_2 = xmm0 * arg4 + *arg6
*arg6 = xmm0_2

if (not(xmm0_2 < 1f))
    int128_t xmm0_3 = *arg2
    *arg7 = 1
    *arg5 = xmm0_3
    arg5[1] = arg2[1]
    return arg5

float xmm0_5 = xmm0_2 - 0f
*arg7 = 0

if (not(0 f>= xmm0_5))
    if (xmm0_5 < 1f)
        xmm3 = sub_4ae110(4, xmm0_5, (zx.o(0)).d, 1f)
    else
        xmm3 = 0x3f800000

float var_28[0x9]
float* eax_8 = sub_4adec0(&var_28, arg2, arg3, xmm3, &var_28)
*arg5 = *eax_8
arg5[1] = *(eax_8 + 0x10)
return arg5
