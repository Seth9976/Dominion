// 函数: _Z18RenderItemListSortv
// 地址: 0xc9b390
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gDraw3DData + 0x1a0590))

if (x9.d s>= 1)
    int64_t i_3
    
    if (x9.d u>= 8)
        int128_t v0 = data_71c940
        int128_t* x11_1 = gDraw3DData + "t_discard_pile"
        i_3 = x9 & 0xfffffff8
        int128_t v1
        v1.d = 4
        v1:4.d = 4
        v1:8.d = 4
        v1:0xc.d = 4
        int128_t v2
        v2.d = 8
        v2:4.d = 8
        v2:8.d = 8
        v2:0xc.d = 8
        int64_t i_2 = i_3
        int64_t i
        
        do
            x11_1[-1] = v0
            *x11_1 = v0 + v1
            v0 += v2
            i = i_2
            i_2 -= 8
            x11_1 = &x11_1[2]
        while (i != 8)
        
        if (i_3 != x9)
            goto label_c9b438
    else
        i_3 = 0
    label_c9b438:
        
        do
            *(gDraw3DData + (i_3 << 2) + "s") = i_3.d
            i_3 += 1
        while (x9 != i_3)

bool (* var_68)(int32_t, int32_t) = RenderDefaultSortFunc
int64_t result = std::__ndk1::__sort<bool (*&)(int32_t, int32_t), int32_t*>(gDraw3DData + "s", 
    &(gDraw3DData + "s")[sx.q(x9.d)], &var_68)
int32_t x8_1 = *(gDraw3DData + "22_")

if (x8_1 s> 0)
    *(gDraw3DData + "22_") = x8_1 - 1
    
    if (*(gDraw3DData + 0x1a0590) s>= 1)
        int64_t i_1 = 0
        
        do
            int64_t fp_1 = sx.q(*(gDraw3DData + (i_1 << 2) + "s"))
            XString::XString()
            int32_t x8_6 = *(gDraw3DData + fp_1 * 0x1a0 + 0x590)
            
            if (x8_6 == 1)
                *(gDraw3DData + fp_1 * 0x1a0 + 0x6e8)
                XFormatString("QuadGroup count:%d ")
                XString::operator char const*()
                XString::operator+=(&var_68)
                XString::~XString()
            else if (x8_6 == 0)
                XString::operator+=(&var_68)
            
            *(gDraw3DData + fp_1 * 0x1a0 + 0x5e0)
            XString::operator char const*()
            XString::operator+=(&var_68)
            XString::operator+=(&var_68)
            
            if (*(gDraw3DData + fp_1 * 0x1a0 + 0x5e8) != 0)
                XString::operator char const*()
                XString::operator+=(&var_68)
                XString::operator+=(&var_68)
            
            *(gDraw3DData + fp_1 * 0x1a0 + 0x6ec)
            XFormatString("layer:%d ")
            XString::operator char const*()
            XString::operator+=(&var_68)
            XString::~XString()
            XString::operator char const*()
            XTrace("%s")
            result = XString::~XString()
            i_1 += 1
        while (i_1 s< sx.q(*(gDraw3DData + 0x1a0590)))

return result
