// 函数: sub_100dbcc
// 地址: 0x100dbcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t temp0 = _byteswap(zx.d(*arg1) << 0x10)

if (temp0 == 2)
    int32_t temp0_2 = _byteswap(zx.d(arg1[1]) << 0x10)
    
    if (temp0_2 != 0)
        int32_t x11_1 = 0
        int32_t x9_1 = temp0_2 - 1
        
        while (true)
            int32_t x12_2 = (x11_1 + x9_1) s>> 1
            void* x13_1 = &arg1[2] + muls.dp.d(x12_2, 6)
            
            if (_byteswap(zx.d(*x13_1) << 0x10) s> arg2)
                x9_1 = x12_2 - 1
                
                if (x11_1 s> x9_1)
                    break
            else
                if (_byteswap(zx.d(*(x13_1 + 2)) << 0x10) s>= arg2)
                    return zx.q(_byteswap(zx.d(*(x13_1 + 4)) << 0x10))
                
                x11_1 = x12_2 + 1
                
                if (x11_1 s> x9_1)
                    break
else
    if (temp0 != 1)
        int64_t x0_4
        int32_t* x1
        int32_t x2
        int32_t v0
        int128_t v1
        int32_t v2
        int128_t v3
        int64_t v4
        int64_t v5
        int128_t v6
        x0_4, x1, x2, v0, v1, v2, v3, v4, v5, v6 = __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
            0x9b5, "stbtt_int32 stbtt__GetGlyphClass(stbtt_uint8 *, int)", &data_75c628)
        int128_t v8
        int128_t v9
        int128_t v10
        int128_t v11
        return sub_100dcf4(x0_4, x1, x2, v0, v1, v2, v3, v4, v5, v6, v8, v9, v10, v11) __tailcall
    
    int32_t temp0_1 = _byteswap(zx.d(arg1[1]) << 0x10)
    
    if (temp0_1 s> arg2)
        return 0xffffffff
    
    if (_byteswap(zx.d(arg1[2]) << 0x10) + temp0_1 s> arg2)
        return zx.q(_byteswap(zx.d(arg1[3 + sx.q(arg2 - temp0_1)]) << 0x10))

return 0xffffffff
