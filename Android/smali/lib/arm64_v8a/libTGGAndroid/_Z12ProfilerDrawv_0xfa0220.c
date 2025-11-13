// 函数: _Z12ProfilerDrawv
// 地址: 0xfa0220
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v15
int64_t var_a0 = v15
int64_t v14
int64_t var_98 = v14
int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int64_t entry_x27
int64_t var_48 = entry_x27
int64_t entry_x26
int64_t var_40 = entry_x26
int64_t entry_x25
int64_t var_38 = entry_x25
int64_t entry_x24
int64_t var_30 = entry_x24
int64_t entry_x23
int64_t var_28 = entry_x23

if (*gProfilerGlobals == 0)
    return 

if ((zx.d(data_2421e38) & 1) == 0 && __cxa_guard_acquire(&data_2421e38) != 0)
    data_2421e30 = AssetPtrFromPath("sys/DebugFont.font", 0x12)
    __cxa_guard_release(&data_2421e38)

v8.d = fconvert.s(15f)
float v0 = float.s(*(*gProfilerGlobals + 0xbc6628) + 1) f* v8.d
int64_t var_b0 = 0
int32_t var_a8_1 = 0x43c80000
float var_a4_1 = v0
float var_c0 = 2f
DrawRectSolid(&var_b0, &var_c0)
ProfilerCalc()
uint64_t x8_5 = *gProfilerGlobals
int32_t x10_1 = *(x8_5 + 0xbc6630)
int32_t x9_2 = *(x8_5 + 0xbc6628)
int32_t x9_3

x9_3 = x10_1 s< x9_2 ? x10_1 : x9_2

if (x9_3 s>= 1)
    int32_t x20_1 = 0
    v9.d = var_b0:4.d f+ v8.d
    entry_x23 = 0x3fffffff
    
    while (true)
        int32_t x9_4 = *(x8_5 + 0xbc662c)
        var_c0 = var_b0.d
        int32_t var_bc_1 = v9.d
        v9.d = v9.d f+ v8.d
        int32_t var_b8_1 = var_a8_1
        int32_t var_b4_1 = v9.d
        int32_t var_c8
        
        if (x20_1 + x9_4 == *(x8_5 + 0xbc6620))
            var_c8 = 0x400000ff
            DrawRectSolid(&var_c0, &var_c8)
        else if ((x20_1 & 1) != 0)
            var_c8 = 0x3fffffff
            DrawRectSolid(&var_c0, &var_c8)
        
        if (x9_3 - 1 == x20_1)
            break
        
        x8_5 = *gProfilerGlobals
        x20_1 += 1

v8.d = var_b0:4.d
ProfilerDrawGraph()
XString::XString()

if (x9_3 s>= 1)
    v9.d = fconvert.s(15f)
    int32_t x20_2 = 0
    v10.d = fconvert.s(10f)
    v12.d = fconvert.s(3f)
    v8.d = v8.d f+ v9.d
    
    do
        uint64_t x19_2 = *gProfilerGlobals
        int32_t x8_10 = *(x19_2 + 0xbc661c)
        int64_t x22_1 = sx.q(*(x19_2 + (sx.q(x20_2 + *(x19_2 + 0xbc662c)) << 2) + 0xbc2788))
        
        if (x8_10 != 0x28)
            int32_t x8_13 = x8_10 + *(x19_2 + 0xb9b680) + 1
            v13.d = *(x19_2 + muls.dp.d(x8_13 s% 0x28, 0x4a490) + (x22_1 << 4) + 0x3aa98)
            v15.d = *(x19_2 + muls.dp.d(x8_13 s% 0x28, 0x4a490) + (x22_1 << 4) + 0x3aa8c)
            v14.d = *(x19_2 + muls.dp.d(x8_13 s% 0x28, 0x4a490) + (x22_1 << 4) + 0x3aa90)
            v11.d = float.s(*(x19_2 + muls.dp.d(x8_13 s% 0x28, 0x4a490) + (x22_1 << 4) + 0x3aa94))
        else
            void* x9_8 = x19_2 + x22_1 * 0x28
            float v1_2 = float.s(*(x19_2 + 0xbc660c))
            v11.d = float.s(*(x9_8 + &data_b9b6a0)) / v1_2
            v15.d = *(x9_8 + 0xb9b698) f/ v1_2
            v14.d = *(x9_8 + 0xb9b69c) f/ v1_2
            v13.d = *(x9_8 + 0xb9b6a4) f/ v1_2
        
        XString::XString()
        XString::XString()
        XString::XString()
        XString::XString()
        int128_t v0_3
        v0_3.q = fconvert.d(v11.d)
        void var_d0
        
        if (v11.d f>= v10.d)
            XFormatString("%0.0f")
            XString::operator=(&var_d0)
        else
            XFormatString("%0.1f")
            XString::operator=(&var_d0)
        XString::~XString()
        void var_d8
        
        if (v15.d f>= float.s(0x42c80000))
            XFormatString("%0.1f")
            XString::operator=(&var_d8)
        else
            XFormatString("%0.2f")
            XString::operator=(&var_d8)
        XString::~XString()
        void var_e0
        
        if (v14.d f>= float.s(0x42c80000))
            XFormatString("%0.1f")
            XString::operator=(&var_e0)
        else
            XFormatString("%0.2f")
            XString::operator=(&var_e0)
        XString::~XString()
        int128_t v0_6
        v0_6.q = fconvert.d(v13.d)
        void var_e8
        
        if (v13.d f>= v10.d)
            XFormatString("%0.0f")
            XString::operator=(&var_e8)
        else
            XFormatString("%0.1f")
            XString::operator=(&var_e8)
        XString::~XString()
        void* x8_19 = *gProfilerGlobals + IsLandscape
        int32_t x9_14 = *x8_19
        
        if (x9_14 != 2)
            v13.d = 0f
            
            if (x9_14 == 1)
                if (*(x8_19 + 4) == x22_1.d)
                    v13.d = 0f
                else
                    v13.d = v10.d
        else if (*(x8_19 + 4) == x22_1.d)
            v13.d = v10.d
        else
            v13.d = 0f
        
        char* x0_11 = XString::operator char const*()
        entry_x27 = (entry_x27 & 0xffffffff00000000) | zx.q(*gRgbaIWhite)
        DrawString(x0_11, data_2421e30, entry_x27, 1, var_b0.d f+ v12.d, v8.d)
        char* x0_12 = XString::operator char const*()
        entry_x26 = (entry_x26 & 0xffffffff00000000) | zx.q(*gRgbaIWhite)
        DrawString(x0_12, data_2421e30, entry_x26, 1, var_b0.d + float.s(0x422c0000), v8.d)
        char* x0_13 = XString::operator char const*()
        entry_x25 = (entry_x25 & 0xffffffff00000000) | zx.q(*gRgbaIWhite)
        DrawString(x0_13, data_2421e30, entry_x25, 1, var_b0.d + float.s(0x42a60000), v8.d)
        char* x0_14 = XString::operator char const*()
        entry_x24 = (entry_x24 & 0xffffffff00000000) | zx.q(*gRgbaIWhite)
        DrawString(x0_14, data_2421e30, entry_x24, 1, var_b0.d + float.s(0x42f60000), v8.d)
        v14.d = v8.d f+ v9.d
        int32_t var_b8_2 = var_a8_1
        int32_t var_b4_2 = v14.d
        var_c0 = v13.d f+ var_b0.d + float.s(0x43230000)
        int32_t var_bc_2 = v8.d
        *(x19_2 + x22_1 * 0x28 + 0xb9b688)
        *(x19_2 + x22_1 * 0x28 + 0xb9b690)
        XFormatString("%s%s")
        entry_x23 = (entry_x23 & 0xffffffff00000000) | zx.q(*gRgbaIWhite)
        XString var_f0
        DrawStringWrapped(&var_f0, &var_c0, data_2421e30, entry_x23, 1)
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
        XString::~XString()
        x20_2 += 1
        v8 = v14
    while (x9_3 != x20_2)

XString::~XString()
