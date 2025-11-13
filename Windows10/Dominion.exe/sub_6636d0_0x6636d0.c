// 函数: sub_6636d0
// 地址: 0x6636d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi_1 = arg8 * arg7
arg5 f- 0
arg1:1.b = (arg5 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg5, 0f) ? 1 : 0) << 2 | (arg5 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
char const* const var_3c
int32_t var_38
char const* const var_34
char* ecx
float xmm1

if (not(p_1))
    xmm1 = (zx.o(0)).d
label_663701:
    float xmm0_4 = sub_4d5cb0(_mm_cvtepi32_ps(zx.o(edi_1)) * xmm1)
    float xmm0_5
    
    if (0 f<= xmm0_4)
        xmm0_5 = xmm0_4 + 0.5f
    else
        xmm0_5 = xmm0_4 - 0.5f
    
    arg1 = int.d(xmm0_5)
    int32_t esi_1 = arg1 - 1
    
    if (arg1 != edi_1)
        esi_1 = arg1
    
    if (esi_1 s< 0)
        var_34 = "FlipAnimUVs"
        var_38 = 0x30be
        ecx = "idx >= 0"
        var_3c = "C:\x\ax2017\Engine\UI2.cpp"
    else if (esi_1 s>= edi_1)
        var_34 = "FlipAnimUVs"
        var_38 = 0x30bf
        ecx = "idx < totalFrames"
        var_3c = "C:\x\ax2017\Engine\UI2.cpp"
    else if (arg7 s> 0)
        if (arg8 s> 0)
            int32_t temp1 = mods.dp.d(sx.q(esi_1), arg7)
            int32_t temp0 = divs.dp.d(sx.q(esi_1), arg7)
            float xmm0_13 = _mm_cvtepi32_ps(zx.o(temp1))
            float xmm2_1 = _mm_cvtepi32_ps(zx.o(arg7))
            float xmm1_7 = _mm_cvtepi32_ps(zx.o(arg8))
            float var_1c = _mm_cvtepi32_ps(zx.o(temp0)) / xmm1_7
            double var_18
            var_18.d = _mm_cvtepi32_ps(zx.o(temp1 + 1)) / xmm2_1
            var_18:4.d = _mm_cvtepi32_ps(zx.o(temp0 + 1)) / xmm1_7
            *arg6 = (xmm0_13 / xmm2_1).o
            return arg6
        
        var_34 = "SpriteUVFromStrip"
        var_38 = 0x575
        var_3c = "C:\x\ax2017\Engine\Sprite.cpp"
        ecx = "numRows > 0"
    else
        var_34 = "SpriteUVFromStrip"
        var_38 = 0x574
        var_3c = "C:\x\ax2017\Engine\Sprite.cpp"
        ecx = "numCols > 0"
else if (arg3 u> 5)
    var_34 = "CalcFlipAnimT"
    var_38 = 0x30ae
    ecx = "Halt"
    var_3c = "C:\x\ax2017\Engine\UI2.cpp"
else
    switch (arg3)
        case 0
            double var_18_1 = fconvert.d(arg4)
            arg1 = _CIfmod()
            xmm1 = _mm_cvtpd_ps(zx.o(fconvert.d(fconvert.t(fconvert.d(arg5))))) / arg5
        label_6637f6:
            
            if (xmm1 f>= 0)
                if (1f >= xmm1)
                    goto label_663701
                
                var_34 = "FlipAnimUVs"
                var_38 = 0x30ba
                ecx = "t <= 1.0"
                var_3c = "C:\x\ax2017\Engine\UI2.cpp"
            else
                var_34 = "FlipAnimUVs"
                var_38 = 0x30b9
                ecx = "t >= 0"
                var_3c = "C:\x\ax2017\Engine\UI2.cpp"
        case 1
            double var_18_3 = fconvert.d(arg4)
            arg1 = _CIfmod()
            float xmm1_5 = _mm_cvtpd_ps(zx.o(fconvert.d(fconvert.t(fconvert.d(arg5))))) / arg5
            xmm1 = xmm1_5 + xmm1_5
            
            if (not(xmm1 <= 1f))
                xmm1 = 1f - (xmm1 - 1f)
            
            goto label_6637f6
        case 2
            if (arg4 > arg5)
                goto label_6637f3
            
            xmm1 = arg4 / arg5
            goto label_6637f6
        case 3
            var_34 = "CalcFlipAnimT"
            var_38 = 0x30ac
            ecx = "Halt"
            var_3c = "C:\x\ax2017\Engine\UI2.cpp"
        case 4
            xmm1 = (zx.o(0)).d
            goto label_6637f6
        case 5
        label_6637f3:
            xmm1 = 1f
            goto label_6637f6
sub_63b870(arg1, &data_801800, ecx, var_3c, var_38, var_34)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
