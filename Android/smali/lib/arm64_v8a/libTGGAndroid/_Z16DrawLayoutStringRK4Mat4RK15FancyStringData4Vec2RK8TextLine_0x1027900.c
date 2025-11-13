// 函数: _Z16DrawLayoutStringRK4Mat4RK15FancyStringData4Vec2RK8TextLine
// 地址: 0x1027900
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x21 = arg3
float entry_v0
float v9 = entry_v0
int64_t var_50
float var_48
float entry_v1
float v8

if (*(arg3 + 0x18) != 1)
    int64_t* x8_5 = *(arg2 + 0x78)
    
    if (x8_5 == 0 || *x8_5 == 0)
        entry_v0 = entry_v1 - *x21
        var_48 = v9 + 0f
        float var_44_1 = entry_v0
        v8 = *(arg2 + 0x2c)
        XAsset* x22_1 = **(arg2 + 8)
        var_50 = SpriteColorSet(arg2 + 0x20, arg2 + 0x28)
        return MyFontDrawMatrix(arg1, &var_48, x22_1, &var_50, *(x21 + 8), *(x21 + 0x10), v8, 
            *(arg2 + 0x54), *(arg2 + 0x58))
    
    XString::XString()
    x21[4]
    XString::AppendUTF8_size(&var_48, (*(x21 + 8)).d)
    char* x0_5
    int64_t x5_1
    x0_5, x5_1 = XString::operator char const*()
    *x21
    *(arg2 + 0x80)
    *(arg2 + 0x2c)
    TTFontDrawString(arg1, x0_5, **(arg2 + 0x78), arg2 + 0x20, 1, x5_1, v9 + 0f)
else
    XString::XString()
    x21[4]
    XString::AppendUTF8_size(&var_48, (*(x21 + 8)).d)
    XString::operator+=(&var_48)
    int64_t* x8_2 = *(arg2 + 0x78)
    
    if (x8_2 == 0 || *x8_2 == 0)
        var_50.d = v9 + 0f
        var_50:4.d = entry_v1 - *x21
        v8 = *(arg2 + 0x2c)
        XAsset* x21_1 = **(arg2 + 8)
        int64_t var_58 = SpriteColorSet(arg2 + 0x20, arg2 + 0x28)
        MyFontDrawMatrix(arg1, &var_50, x21_1, &var_58, XString::operator char const*(), 
            XString::operator char const*() + sx.q(XString::Length()), v8, *(arg2 + 0x54), 
            *(arg2 + 0x58))
    else
        char* x0_2
        int64_t x5
        x0_2, x5 = XString::operator char const*()
        *x21
        *(arg2 + 0x80)
        *(arg2 + 0x2c)
        TTFontDrawString(arg1, x0_2, **(arg2 + 0x78), arg2 + 0x20, 1, x5, v9 + 0f)
return XString::~XString()
