// 函数: _Z17UI2MergeAttributeRK9AttribMapiR3UI2PS0_RK16UI2StateBindingsRiPS4_PfR8UI2PropsR14UI2PropsStaticR11UI2PropsNewbS4_
// 地址: 0x1015fc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x22 = *(arg1 + 8)
uint64_t x10 = zx.q(*(x22 + (zx.q(arg2) << 0x20 s>> 0x1c)) - 0x64)

if (x10.d u> 0xaf)
    return 

UI2& i = arg3
int64_t x23_1 = sx.q(arg2)
int128_t var_120
int128_t var_110
int128_t var_100
int128_t var_f4
int128_t var_e0
int128_t var_d0
int32_t x8_259
void* __offset(UI2PropsNew, 0x3a8) x8_262
void* __offset(UI2PropsNew, 0x498) x8_263
int32_t x8_267
int32_t x8_271
int128_t v0
int128_t v0_17
int128_t v0_18
int128_t v1
int128_t v1_7
int128_t v2
int128_t v2_2
int128_t v2_3
int128_t v3_2
int128_t v3_3

switch (x10)
    case 0
        AttribTagGetDefMap(*gUI2AttribTable, 0x64)
        *(x22 + (x23_1 << 4) + 8)
        XString::operator=(i + 0x1650)
        *(arg3 + 0x167b) = 1
    case 1
        AttribTagGetDefMap(*gUI2AttribTable, 0x65)
        *arg10 = (*(x22 + (x23_1 << 4) + 8)).d
    case 5
        if (*(arg5 + 8) != 0)
            arg1 = *(x22 + (x23_1 << 4) + 8)
            
            if (*(arg1 + 8) != 0)
                if (zx.d(*(i + 0x14)) == 0)
                    return MyMethod_New(arg1, i, arg4, arg5, arg6, arg7, arg8, arg13) __tailcall
                
                return MyMethod(arg1, i, arg4, arg5, arg6, arg7, arg8, arg13) __tailcall
    case 6
        AttribTagGetDefMap(*gUI2AttribTable, 0x6a)
        *(arg3 + 0x1679) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 7
        AttribTagGetDefMap(*gUI2AttribTable, 0x6b)
        *(arg3 + 0x1678) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 8
        AttribTagGetDefMap(*gUI2AttribTable, 0x6c)
        *(arg3 + 0x167a) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 9
        int32_t x19_4 = *(i + 0x1740)
        UI2ExprTreeRT* x0_84 = UI2ExprTreeDefEval(*(x22 + (x23_1 << 4) + 8))
        
        if (*x0_84 != 3)
            UI2ExpressionEvalTreeRT(x0_84, x19_4, arg5)
        else
            UI2EvalResult::UI2EvalResult(&var_e0)
        
        int128_t v0_19
        int128_t v1_10
        int128_t v2_4
        int128_t v3_4
        v0_19, v1_10, v2_4, v3_4 = PropGraphSet<float>(&var_e0)
        *(arg11 + 0x1c0) = var_110
        *(arg11 + 0x1d0) = var_100
        *(arg11 + 0x1b0) = var_120
        *(arg11 + 0x1dc) = var_f4
        goto label_1017588
    case 0xc
        AttribTagGetDefMap(*gUI2AttribTable, 0x70)
        *(arg10 + 0x20) = *(x22 + (x23_1 << 4) + 8)
        
        do
            *(i + 0x1378) = 2
            i = *(i + 0x17d0)
        while (i != 0)
    case 0xd
        *(arg10 + 0x1e8) = *(x22 + (x23_1 << 4) + 8)
    case 0x12
        int32_t* x8_174 = *(x22 + (x23_1 << 4) + 8)
        v2.d = *x8_174
        int32_t v3 = x8_174[1]
        int32_t v4 = x8_174[2]
        float v5 = x8_174[3]
        *(arg11 + 0x5c) = zx.o(0)
        *(arg11 + 0x3c) = v2.d
        *(arg11 + 0x78) = v3
        v2.d = v4 f- v2.d
        __builtin_memset(arg11 + 0x40, 0, 0x20)
        *(arg11 + 0x6c) = -0xffffffff
        *(arg11 + 0x74) = 0
        __builtin_memset(arg11 + 0x7c, 0, 0x2c)
        *(arg11 + 0xa8) = -0xffffffff
        *(arg11 + 0xb0) = 0
        __builtin_memset(arg11 + 0xb8, 0, 0x2c)
        *(arg11 + 0xe4) = -0xffffffff
        *(arg11 + 0xec) = 0
        *(arg11 + 0x110) = zx.o(0)
        *(arg11 + 0xf4) = zx.o(0)
        *(arg11 + 0xb4) = v2.d
        *(arg11 + 0x104) = zx.o(0)
        *(arg11 + 0xf0) = v5 f- v3
        *(arg11 + 0x120) = -0xffffffff
        *(arg11 + 0x128) = 0
    case 0x13
        v0.q = 0
        v0:8.q = 0
        __builtin_memset(&var_e0, 0, 0x20)
        int128_t* x10_9 = *(x22 + (x23_1 << 4) + 8)
        v1 = *x10_9
        v0 = x10_9[1]
        int128_t var_b0_2 = v0
        v2 = var_e0
        int128_t var_c0_2 = v1
        *(arg9 + 0x20) = v1
        *(arg9 + 0x30) = v0
        *(arg9 + 0x40) = 0x3f800000
        *arg9 = v2
        *(arg9 + 0x10) = zx.o(0)
    case 0x14
        v0.q = 0
        v0:8.q = 0
        __builtin_memset(&var_e0, 0, 0x20)
        int128_t* x10_4 = *(x22 + (x23_1 << 4) + 8)
        v1 = *x10_4
        v0 = x10_4[1]
        int128_t var_b0_1 = v0
        v2 = var_e0
        int128_t var_c0_1 = v1
        *(arg9 + 0x74) = v0
        *(arg9 + 0x64) = v1
        *(arg9 + 0x54) = zx.o(0)
        *(arg9 + 0x44) = v2
        *(arg9 + 0x84) = 0x3f800000
    case 0x15
        AttribTagGetDefMap(*gUI2AttribTable, 0x79)
        uint64_t x0_101 = zx.q(x22[x23_1 * 4 + 2])
        *(arg10 + 0xc) = x0_101.d
        int32_t v0_12
        int32_t v1_4
        arg1, v0_12, v1_4 = AlignmentGetOffsetPercent(x0_101)
        *(arg11 + 0x2e4) = zx.o(0)
        *(arg11 + 0x2f4) = zx.o(0)
        *(arg11 + 0x304) = zx.o(0)
        *(arg11 + 0x314) = zx.o(0)
        *(arg11 + 0x2dc) = v0_12
        *(arg11 + 0x2e0) = v1_4
        *(arg11 + 0x324) = -0xffffffff
        *(arg11 + 0x32c) = 0
    case 0x16
        AttribTagGetDefMap(*gUI2AttribTable, 0x7a)
        *(arg10 + 4) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0x17
        AttribTagGetDefMap(*gUI2AttribTable, 0x7b)
        *(arg10 + 8) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 0x1a
        AttribTagGetDefMap(*gUI2AttribTable, 0x7e)
        int32_t v1_2 = x22[x23_1 * 4 + 2]
        __builtin_memset(arg11 + 4, 0, 0x2c)
        *arg11 = v1_2
        *(arg11 + 0x30) = -0xffffffff
        *(arg11 + 0x38) = 0
    case 0x1b
        AttribTagGetDefMap(*gUI2AttribTable, 0x7f)
        *(arg10 + 0x18) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0x1c
        int32_t* x8_89 = *(x22 + (x23_1 << 4) + 8)
        v0.d = *x8_89
        v1.q = *(x8_89 + 4)
        v2.d = x8_89[3]
        *(arg11 + 0x18c) = zx.o(0)
        *(arg11 + 0x17c) = zx.o(0)
        *(arg11 + 0x16c) = zx.o(0)
        *(arg11 + 0x15c) = zx.o(0)
        *(arg11 + 0x13c) = zx.o(0)
        *(arg11 + 0x14c) = zx.o(0)
        *(arg11 + 0x19c) = 0
        *(arg11 + 0x12c) = v0.d
        *(arg11 + 0x130) = v1.q
        *(arg11 + 0x138) = v2.d
        *(arg11 + 0x1a4) = -0xffffffff
        *(arg11 + 0x1ac) = 0
        
        if (*(arg10 + 0x18) == 0)
            *(arg10 + 0x18) = 5
    case 0x1d
        int32_t x21_3 = *(i + 0x1740)
        UI2ExprTreeRT* x0_51 = UI2ExprTreeDefEval(*(x22 + (x23_1 << 4) + 8))
        
        if (*x0_51 != 3)
            UI2ExpressionEvalTreeRT(x0_51, x21_3, arg5)
        else
            UI2EvalResult::UI2EvalResult(&var_e0)
        
        int128_t v1_8
        v0_18, v1_8, v2_3, v3_3 = PropGraphSet<ColorRgbaI>(&var_e0)
        v3_3 = var_110
        v0_18 = var_100
        v2_3 = var_120
        x8_263 = arg11 + 0x3e4
        *(arg11 + 0x410) = var_f4
        goto label_10174b0
    case 0x1e
        int32_t x21_6 = *(i + 0x1740)
        UI2ExprTreeRT* x0_92 = UI2ExprTreeDefEval(*(x22 + (x23_1 << 4) + 8))
        
        if (*x0_92 != 3)
            UI2ExpressionEvalTreeRT(x0_92, x21_6, arg5)
        else
            UI2EvalResult::UI2EvalResult(&var_e0)
        
        int128_t v0_20
        int128_t v1_11
        int128_t v2_5
        int128_t v3_5
        v0_20, v1_11, v2_5, v3_5 = PropGraphSet<ColorRgbaI>(&var_e0)
        *(arg11 + 0x440) = var_100
        *(arg11 + 0x430) = var_110
        *(arg11 + 0x420) = var_120
        *(arg11 + 0x44c) = var_f4
        goto label_1017580
    case 0x1f
        int32_t x21_2 = *(i + 0x1740)
        UI2ExprTreeRT* x0_40 = UI2ExprTreeDefEval(*(x22 + (x23_1 << 4) + 8))
        
        if (*x0_40 != 3)
            UI2ExpressionEvalTreeRT(x0_40, x21_2, arg5)
        else
            UI2EvalResult::UI2EvalResult(&var_e0)
        
        v0_18, v1_7, v2_3, v3_3 = PropGraphSet<ColorRgbaI>(&var_e0)
        x8_263 = arg11 + 0x45c
    label_101749c:
        v3_3 = var_110
        v0_18 = var_100
        v2_3 = var_120
        *(x8_263 + 0x2c) = var_f4
    label_10174b0:
        *(x8_263 + 0x10) = v3_3
        *(x8_263 + 0x20) = v0_18
        *x8_263 = v2_3
    label_1017580:
        *(arg10 + 0x48) = 1
        goto label_1017588
    case 0x20
        int32_t x21_4 = *(i + 0x1740)
        UI2ExprTreeRT* x0_55 = UI2ExprTreeDefEval(*(x22 + (x23_1 << 4) + 8))
        
        if (*x0_55 != 3)
            UI2ExpressionEvalTreeRT(x0_55, x21_4, arg5)
        else
            UI2EvalResult::UI2EvalResult(&var_e0)
        
        v0_18, v1_7, v2_3, v3_3 = PropGraphSet<ColorRgbaI>(&var_e0)
        x8_263 = arg11 + 0x498
        goto label_101749c
    case 0x21
        AttribTagGetDefMap(*gUI2AttribTable, 0x85)
        int32_t x8_156 = (*(x22 + (x23_1 << 4) + 8)).d
        *(arg11 + 0x268) = zx.o(0)
        *(arg11 + 0x278) = zx.o(0)
        *(arg11 + 0x284) = zx.o(0)
        *(arg11 + 0x264) = x8_156
        *(arg11 + 0x294) = -0xffffffff
        *(arg11 + 0x29c) = 0
    case 0x22
        AttribTagGetDefMap(*gUI2AttribTable, 0x86)
        int32_t x8_133 = (*(x22 + (x23_1 << 4) + 8)).d
        *(arg11 + 0x2a4) = zx.o(0)
        *(arg11 + 0x2b4) = zx.o(0)
        *(arg11 + 0x2c0) = zx.o(0)
        *(arg11 + 0x2a0) = x8_133
        *(arg11 + 0x2d0) = -0xffffffff
        *(arg11 + 0x2d8) = 0
    case 0x23
        AttribTagGetDefMap(*gUI2AttribTable, 0x87)
        *(arg10 + 0x14) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0x24
        AttribTagGetDefMap(*gUI2AttribTable, 0x88)
        *(arg10 + 0x30) = x22[x23_1 * 4 + 2]
    case 0x25
        AttribTagGetDefMap(*gUI2AttribTable, 0x89)
        *(i + 0x15) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 0x26
        AttribTagGetDefMap(*gUI2AttribTable, 0x8a)
        *(i + 0x16) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 0x27
        AttribTagGetDefMap(*gUI2AttribTable, 0x8b)
        *(i + 0x17) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 0x28
        *(i + 0x1688)
        void var_128
        XString::XString(&var_128)
        DirectoryPathFromAssetPath(&var_128)
        XString::~XString()
        void var_130
        XString::XString(&var_130)
        AssetSourceSetCurrentPath(&var_130)
        XString::~XString()
        int32_t x21_5 = *(i + 0x1740)
        UI2ExprTreeRT* x0_71 = UI2ExprTreeDefEval(*(x22 + (x23_1 << 4) + 8))
        
        if (*x0_71 != 3)
            UI2ExpressionEvalTreeRT(x0_71, x21_5, arg5)
        else
            UI2EvalResult::UI2EvalResult(&var_e0)
        
        int64_t x8_274
        
        if (var_e0.d == 4)
            x8_274 = var_d0:8.q
        else
            x8_274 = 0
        
        *(arg10 + 0x28) = x8_274
        char var_138
        XString::XString(&var_138)
        AssetSourceSetCurrentPath(&var_138)
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
    case 0x29
        AttribTagGetDefMap(*gUI2AttribTable, 0x8d)
        *(arg10 + 0x78) = *(x22 + (x23_1 << 4) + 8)
    case 0x2a
        int32_t x19_3 = *(i + 0x1740)
        UI2ExprTreeRT* x0_74 = UI2ExprTreeDefEval(*(x22 + (x23_1 << 4) + 8))
        
        if (*x0_74 != 3)
            UI2ExpressionEvalTreeRT(x0_74, x19_3, arg5)
        else
            UI2EvalResult::UI2EvalResult(&var_e0)
        
        int128_t v1_9
        v0_17, v1_9, v2_2, v3_2 = PropGraphSet<ColorRgbaI>(&var_e0)
        v3_2 = var_110
        v0_17 = var_100
        v2_2 = var_120
        x8_262 = arg11 + 0x3a8
        *(x8_262 + 0x2c) = var_f4
        goto label_10174f0
    case 0x2b
        int32_t x19_2 = *(i + 0x1740)
        UI2ExprTreeRT* x0_32 = UI2ExprTreeDefEval(*(x22 + (x23_1 << 4) + 8))
        
        if (*x0_32 != 3)
            UI2ExpressionEvalTreeRT(x0_32, x19_2, arg5)
        else
            UI2EvalResult::UI2EvalResult(&var_e0)
        
        int128_t v1_6
        v0_17, v1_6, v2_2, v3_2 = PropGraphSet<ColorRgbaI>(&var_e0)
        v3_2 = var_110
        v0_17 = var_100
        v2_2 = var_120
        x8_262 = arg11 + 0x4d4
        *(arg11 + 0x500) = var_f4
    label_10174f0:
        *(x8_262 + 0x10) = v3_2
        *(x8_262 + 0x20) = v0_17
        *x8_262 = v2_2
    label_1017588:
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
    case 0x2c
        AttribTagGetDefMap(*gUI2AttribTable, 0x90)
        *(arg10 + 0xb8) = *(x22 + (x23_1 << 4) + 8)
    case 0x2d
        AttribTagGetDefMap(*gUI2AttribTable, 0x91)
        *(arg10 + 0xc0) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 0x2e
        AttribTagGetDefMap(*gUI2AttribTable, 0x92)
        *(arg10 + 0x34) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0x2f
        AttribTagGetDefMap(*gUI2AttribTable, 0x93)
        int32_t v1_1 = x22[x23_1 * 4 + 2]
        __builtin_memset(arg11 + 0x1f0, 0, 0x2c)
        *(arg11 + 0x1ec) = v1_1
        *(arg11 + 0x21c) = -0xffffffff
        *(arg11 + 0x224) = 0
    case 0x30
        AttribTagGetDefMap(*gUI2AttribTable, 0x94)
        *(arg10 + 0x3c) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0x31
        AttribTagGetDefMap(*gUI2AttribTable, 0x95)
        *(arg10 + 0x38) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0x32
        AttribTagGetDefMap(*gUI2AttribTable, 0x96)
        *(arg10 + 0x40) = x22[x23_1 * 4 + 2]
    case 0x33
        AttribTagGetDefMap(*gUI2AttribTable, 0x97)
        *(arg10 + 0x44) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0x34
        AttribTagGetDefMap(*gUI2AttribTable, 0x98)
        *(arg10 + 0x4c) = x22[x23_1 * 4 + 2]
    case 0x35
        AttribTagGetDefMap(*gUI2AttribTable, 0x99)
        *(arg10 + 0x50) = x22[x23_1 * 4 + 2]
    case 0x36
        AttribTagGetDefMap(*gUI2AttribTable, 0x9a)
        *(arg10 + 0x54) = x22[x23_1 * 4 + 2]
    case 0x37
        AttribTagGetDefMap(*gUI2AttribTable, 0x9b)
        *(arg10 + 0x58) = x22[x23_1 * 4 + 2]
    case 0x38
        AttribTagGetDefMap(*gUI2AttribTable, 0x9c)
        *(arg10 + 0x5c) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0x39
        AttribTagGetDefMap(*gUI2AttribTable, 0x9d)
        *(arg10 + 0x60) = x22[x23_1 * 4 + 2]
    case 0x3a
        AttribTagGetDefMap(*gUI2AttribTable, 0x9e)
        *(arg10 + 0x68) = *(x22 + (x23_1 << 4) + 8)
    case 0x3b
        AttribTagGetDefMap(*gUI2AttribTable, 0x9f)
        *(arg10 + 0x70) = *(x22 + (x23_1 << 4) + 8)
    case 0x64
        AttribTagGetDefMap(*gUI2AttribTable, 0xc8)
        *(arg10 + 0xe8) = *(x22 + (x23_1 << 4) + 8)
    case 0x65
        int32_t x22_1 = *(i + 0x1740)
        UI2ExprTreeRT* x0_21 = UI2ExprTreeDefEval(*(x22 + (x23_1 << 4) + 8))
        
        if (*x0_21 != 3)
            UI2ExpressionEvalTreeRT(x0_21, x22_1, arg5)
        else
            UI2EvalResult::UI2EvalResult(&var_e0)
        
        int32_t x8_257
        
        if (var_e0.d != 1)
            x8_257 = 0
        label_1017390:
            *(arg10 + 0xc8) = x8_257
            UI2ClampScrollDelta(i, arg10 + 0xc4)
            goto label_10176f8
        
        int32_t x8_256 = var_e0:4.d
        
        if (x8_256 == 0)
            x8_257 = var_d0:8.d
            goto label_1017390
        
        if (x8_256 != 1)
            goto label_10177b4
        
        pthread_kill(pthread_self(), 6)
        x8_259 = XNoReturn()
    label_1017764:
        
        if (x8_259 != 1)
            goto label_10177c4
        
        pthread_kill(pthread_self(), 6)
        x8_267 = XNoReturn()
    label_101777c:
        
        if (x8_267 != 1)
            goto label_10177d4
        
        pthread_kill(pthread_self(), 6)
        x8_271 = XNoReturn()
    label_1017798:
        
        if (x8_271 == 1)
            pthread_kill(pthread_self(), 6)
            XNoReturn()
        label_10177b4:
            pthread_kill(pthread_self(), 6)
            XNoReturn()
        label_10177c4:
            pthread_kill(pthread_self(), 6)
            XNoReturn()
        label_10177d4:
            pthread_kill(pthread_self(), 6)
            XNoReturn()
        
        pthread_kill(pthread_self(), 6)
        int64_t* x0_153 = XNoReturn()
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
        sub_1101e04(x0_153)
        noreturn
    case 0x66
        int32_t x22_2 = *(i + 0x1740)
        int32_t* x0_120 = UI2ExprTreeDefEval(*(x22 + (x23_1 << 4) + 8))
        
        if (*x0_120 != 3)
            UI2ExpressionEvalTreeRT(x0_120, x22_2, arg5)
        else
            UI2EvalResult::UI2EvalResult(&var_e0)
        
        int32_t x8_272
        
        if (var_e0.d != 1)
            x8_272 = 0
        label_1017610:
            *(arg10 + 0xc4) = x8_272
            UI2ClampScrollDelta(i, arg10 + 0xc4)
            goto label_10176f8
        
        x8_271 = var_e0:4.d
        
        if (x8_271 != 0)
            goto label_1017798
        
        x8_272 = var_d0:8.d
        goto label_1017610
    case 0x67
        int32_t x21_8 = *(i + 0x1740)
        UI2ExprTreeRT* x0_112 = UI2ExprTreeDefEval(*(x22 + (x23_1 << 4) + 8))
        
        if (*x0_112 != 3)
            UI2ExpressionEvalTreeRT(x0_112, x21_8, arg5)
        else
            UI2EvalResult::UI2EvalResult(&var_e0)
        
        if (var_e0.d != 1)
            *(arg10 + 0x100) = 0
            goto label_10176f8
        
        x8_267 = var_e0:4.d
        
        if (x8_267 != 0)
            goto label_101777c
        
        *(arg10 + 0x100) = var_d0:8.d
        goto label_10176f8
    case 0x68
        int32_t x21_1 = *(i + 0x1740)
        UI2ExprTreeRT* x0_26 = UI2ExprTreeDefEval(*(x22 + (x23_1 << 4) + 8))
        
        if (*x0_26 != 3)
            UI2ExpressionEvalTreeRT(x0_26, x21_1, arg5)
        else
            UI2EvalResult::UI2EvalResult(&var_e0)
        
        if (var_e0.d == 1)
            x8_259 = var_e0:4.d
            
            if (x8_259 != 0)
                goto label_1017764
            
            *(arg10 + 0xcc) = var_d0:8.d
            goto label_10176f8
        
        *(arg10 + 0xcc) = 0
    label_10176f8:
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
    case 0x69
        AttribTagGetDefMap(*gUI2AttribTable, 0xcd)
        *(arg10 + 0xd0) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 0x6a
        *(arg10 + 0xd4) = **(x22 + (x23_1 << 4) + 8)
    case 0x6b
        *(arg10 + 0xdc) = **(x22 + (x23_1 << 4) + 8)
    case 0x6c
        AttribTagGetDefMap(*gUI2AttribTable, 0xd0)
        *(arg10 + 0xe4) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0x6d
        AttribTagGetDefMap(*gUI2AttribTable, 0xd1)
        *(arg10 + 0xf0) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0x6e
        AttribTagGetDefMap(*gUI2AttribTable, 0xd2)
        *(arg10 + 0xf8) = *(x22 + (x23_1 << 4) + 8)
    case 0x6f
        AttribTagGetDefMap(*gUI2AttribTable, 0xd3)
        *(arg10 + 0x104) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0x70
        AttribTagGetDefMap(*gUI2AttribTable, 0xd4)
        *(arg10 + 0x108) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0x71
        if ((zx.d(arg12) & 1) == 0)
            int32_t x21_7 = *(i + 0x1740)
            UI2ExprTreeRT* x0_104 = UI2ExprTreeDefEval(*(x22 + (x23_1 << 4) + 8))
            char x20_2
            
            if (*x0_104 != 3)
                UI2ExpressionEvalTreeRT(x0_104, x21_7, arg5)
                x20_2 = 1
            else
                UI2EvalResult::UI2EvalResult(&var_e0)
                x20_2 = 0
            
            ResultAsString(&var_e0, 0f)
            XString::operator=(arg10 + 0x208)
            *(arg10 + 0x210) = x20_2
            XString::~XString()
            goto label_10176f8
    case 0x72
        AttribTagGetDefMap(*gUI2AttribTable, 0xd6)
        *(arg10 + 0x110) = *(x22 + (x23_1 << 4) + 8)
    case 0x73
        AttribTagGetDefMap(*gUI2AttribTable, 0xd7)
        *(arg10 + 0x118) = *(x22 + (x23_1 << 4) + 8)
    case 0x74
        AttribTagGetDefMap(*gUI2AttribTable, 0xd8)
        *(arg10 + 0x120) = x22[x23_1 * 4 + 2]
    case 0x75
        int32_t x8_36 = **(x22 + (x23_1 << 4) + 8)
        __builtin_memset(arg11 + 0x334, 0, 0x2c)
        *(arg11 + 0x360) = -0xffffffff
        *(arg11 + 0x330) = x8_36
        *(arg11 + 0x368) = 0
    case 0x76
        int32_t x8_221 = **(x22 + (x23_1 << 4) + 8)
        *(arg11 + 0x38c) = zx.o(0)
        __builtin_memset(arg11 + 0x370, 0, 0x20)
        *(arg11 + 0x36c) = x8_221
        *(arg11 + 0x39c) = -0xffffffff
        *(arg11 + 0x3a4) = 0
    case 0x77
        AttribTagGetDefMap(*gUI2AttribTable, 0xdb)
        *(arg10 + 0x12c) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0x78
        AttribTagGetDefMap(*gUI2AttribTable, 0xdc)
        char* x1_7 = *(x22 + (x23_1 << 4) + 8)
        void* __offset(UI2PropsStatic, 0x138) x0_59
        
        if (x1_7 == 0 || zx.d(*x1_7) == 0x23)
            x0_59 = arg10 + 0x138
        else
            x0_59 = arg10 + 0x138
        
        return LocString::Set(x0_59) __tailcall
    case 0x79
        *(arg10 + 0x1f0) = *(x22 + (x23_1 << 4) + 8)
    case 0x7a
        AttribTagGetDefMap(*gUI2AttribTable, 0xde)
        int32_t v1_5 = x22[x23_1 * 4 + 2]
        *(arg11 + 0x22c) = zx.o(0)
        *(arg11 + 0x23c) = zx.o(0)
        *(arg11 + 0x248) = zx.o(0)
        *(arg11 + 0x228) = v1_5
        *(arg11 + 0x258) = -0xffffffff
        *(arg11 + 0x260) = 0
    case 0x7b
        AttribTagGetDefMap(*gUI2AttribTable, 0xdf)
        *(arg10 + 0x148) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0x7c
        *(arg10 + 0x14c) = **(x22 + (x23_1 << 4) + 8)
    case 0x7d
        AttribTagGetDefMap(*gUI2AttribTable, 0xe1)
        *(arg10 + 0x154) = x22[x23_1 * 4 + 2]
    case 0x7e
        AttribTagGetDefMap(*gUI2AttribTable, 0xe2)
        *(arg10 + 0x158) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 0x7f
        AttribTagGetDefMap(*gUI2AttribTable, 0xe3)
        *(arg10 + 0x15c) = x22[x23_1 * 4 + 2]
    case 0x80
        AttribTagGetDefMap(*gUI2AttribTable, 0xe4)
        *(arg10 + 0x160) = x22[x23_1 * 4 + 2]
    case 0x81
        AttribTagGetDefMap(*gUI2AttribTable, 0xe5)
        *(arg10 + 0x164) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0x82
        *(arg10 + 0x168) = **(x22 + (x23_1 << 4) + 8)
    case 0x83
        AttribTagGetDefMap(*gUI2AttribTable, 0xe7)
        *(arg10 + 0x178) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0x84
        AttribTagGetDefMap(*gUI2AttribTable, 0xe8)
        *(arg10 + 0x17c) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 0x85
        AttribTagGetDefMap(*gUI2AttribTable, 0xe9)
        *(arg10 + 0x17d) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 0x86
        AttribTagGetDefMap(*gUI2AttribTable, 0xea)
        *(arg10 + 0x17e) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 0x87
        AttribTagGetDefMap(*gUI2AttribTable, 0xeb)
        *(arg10 + 0x130) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 0x88
        *(arg10 + 0x17f) = **(x22 + (x23_1 << 4) + 8)
    case 0x8a
        *(arg10 + 0x187) = **(x22 + (x23_1 << 4) + 8)
    case 0x8b
        AttribTagGetDefMap(*gUI2AttribTable, 0xef)
        *(arg10 + 0x18c) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0x94
        *(arg10 + 0x190) = **(x22 + (x23_1 << 4) + 8)
    case 0x95
        *(arg10 + 0x124) = **(x22 + (x23_1 << 4) + 8)
    case 0x96
        AttribTagGetDefMap(*gUI2AttribTable, 0xfa)
        *(arg10 + 0x1a0) = *(x22 + (x23_1 << 4) + 8)
    case 0x98
        AttribTagGetDefMap(*gUI2AttribTable, 0xfc)
        *(arg10 + 0x1a8) = *(x22 + (x23_1 << 4) + 8)
    case 0x99
        AttribTagGetDefMap(*gUI2AttribTable, 0xfd)
        *(arg10 + 0x1b4) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0x9a
        AttribTagGetDefMap(*gUI2AttribTable, 0xfe)
        *(arg10 + 0x1b0) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 0x9b
        AttribTagGetDefMap(*gUI2AttribTable, 0xff)
        *(arg10 + 0x1b1) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 0x9c
        AttribTagGetDefMap(*gUI2AttribTable, 0x100)
        *(arg10 + 0x1b2) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 0x9d
        AttribTagGetDefMap(*gUI2AttribTable, 0x101)
        *(arg10 + 0x1b3) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 0x9e
        AttribTagGetDefMap(*gUI2AttribTable, 0x102)
        *(arg10 + 0x1b8) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 0x9f
        AttribTagGetDefMap(*gUI2AttribTable, 0x103)
        *(arg10 + 0x1e0) = *(x22 + (x23_1 << 4) + 8)
    case 0xa0
        AttribTagGetDefMap(*gUI2AttribTable, 0x104)
        *(arg10 + 0x1c0) = *(x22 + (x23_1 << 4) + 8)
    case 0xa1
        AttribTagGetDefMap(*gUI2AttribTable, 0x105)
        *(arg10 + 0x1c8) = *(x22 + (x23_1 << 4) + 8)
    case 0xa2
        AttribTagGetDefMap(*gUI2AttribTable, 0x106)
        *(arg10 + 0x1d0) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0xa3
        AttribTagGetDefMap(*gUI2AttribTable, 0x107)
        *(arg10 + 0x1d4) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0xa4
        AttribTagGetDefMap(*gUI2AttribTable, 0x108)
        *(arg10 + 0x1d8) = x22[x23_1 * 4 + 2]
    case 0xa5
        AttribTagGetDefMap(*gUI2AttribTable, 0x109)
        *(arg10 + 0x1dc) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 0xa6
        AttribTagGetDefMap(*gUI2AttribTable, 0x10a)
        *(arg10 + 0x1dd) = (x22[x23_1 * 4 + 2] != 0 ? 1 : 0).b
    case 0xa7
        AttribTagGetDefMap(*gUI2AttribTable, 0x10b)
        *(arg10 + 0x98) = *(x22 + (x23_1 << 4) + 8)
    case 0xa8
        AttribTagGetDefMap(*gUI2AttribTable, 0x10c)
        *(arg10 + 0xa0) = *(x22 + (x23_1 << 4) + 8)
    case 0xa9
        AttribTagGetDefMap(*gUI2AttribTable, 0x10d)
        *(arg10 + 0x80) = *(x22 + (x23_1 << 4) + 8)
    case 0xaa
        AttribTagGetDefMap(*gUI2AttribTable, 0x10e)
        *(arg10 + 0x88) = (*(x22 + (x23_1 << 4) + 8)).d
    case 0xab
        AttribTagGetDefMap(*gUI2AttribTable, 0x10f)
        *(arg10 + 0x8c) = x22[x23_1 * 4 + 2]
    case 0xac
        *(arg10 + 0x1f8) = *(x22 + (x23_1 << 4) + 8)
    case 0xae
        AttribTagGetDefMap(*gUI2AttribTable, 0x112)
        *(arg10 + 0x90) = *(x22 + (x23_1 << 4) + 8)
    case 0xaf
        AttribTagGetDefMap(*gUI2AttribTable, 0x113)
        *(arg10 + 0xb0) = *(x22 + (x23_1 << 4) + 8)
