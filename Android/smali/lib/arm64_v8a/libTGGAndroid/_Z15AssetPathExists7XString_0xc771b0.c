// 函数: _Z15AssetPathExists7XString
// 地址: 0xc771b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20_1

if ((XString::IsEmpty() & 1) != 0)
    x20_1 = 0
else
    void var_28
    XString::XString(&var_28)
    int64_t* x0_3 = AssetPtrFromPathDontCreate(&var_28)
    XString::~XString()
    
    if (x0_3 == 0)
    label_c7721c:
        
        if (zx.d(*gCompilingMode) == 0)
            x20_1 = 0
        else
            void var_30
            XString::XString(&var_30)
            x20_1 = AssetPathFileExists(&var_30)
            XString::~XString()
    else
        int32_t x8_1 = *(x0_3 + 0xc)
        
        if (x8_1 == 4)
            x20_1 = 0
        else
            x20_1 = 1
            
            if (x8_1 - 1 u>= 2 && *x0_3 == 0)
                goto label_c7721c

return zx.q(x20_1) & 1
