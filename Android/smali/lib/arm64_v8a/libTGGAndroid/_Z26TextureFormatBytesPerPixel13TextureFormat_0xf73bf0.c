// 函数: _Z26TextureFormatBytesPerPixel13TextureFormat
// 地址: 0xf73bf0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 s> 0x3e7)
    if (arg1 == 0x3e8)
        return 0xc
    
    if (arg1 == 0x3ea)
        return 8
    
    if (arg1 == 0x3eb)
        return 0x10
else
    uint64_t x8_1 = zx.q(arg1 - 1)
    
    if (x8_1.d u<= 0x71)
        switch (x8_1)
            case 0, 1, 2, 3, 0x12, 0x6f, 0x71
                return 4
            case 4, 0x13
                return 3
            case 5, 6, 7, 8, 0x6e
                return 2
            case 9, 0xa, 0xb
                return 1

pthread_kill(pthread_self(), 6)
return TextureFormatIsCompressed(XNoReturn()) __tailcall
