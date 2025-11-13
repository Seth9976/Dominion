// 函数: _Z16ImageRgbaToPixel10ColorRgbaIPh13TextureFormat
// 地址: 0xf7418c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(arg3 - 1)

if (x10.d u<= 0x14)
    uint32_t x8_1 = (arg1 u>> 8).d
    uint8_t x9_1 = (arg1 u>> 0x10).b
    uint32_t x10_1 = (arg1 u>> 0x18).d
    
    switch (x10)
        case 0, 3
            *arg2 = x9_1
            arg2[1] = x8_1.b
            arg2[2] = (arg1.d).b
            arg2[3] = x10_1.b
            return 
        case 1
            *arg2 = (arg1.d).b
            arg2[1] = x8_1.b
            arg2[2] = x9_1
            arg2[3] = x10_1.b
            return 
        case 2
            *arg2 = x10_1.b
            arg2[1] = x9_1
            arg2[2] = x8_1.b
            arg2[3] = (arg1.d).b
            return 
        case 4
            *arg2 = x9_1
            arg2[1] = x8_1.b
            arg2[2] = (arg1.d).b
            return 
        case 5
            *arg2 = x9_1 | (x8_1 << 4).b
            arg2[1] = arg1.b | (x10_1 << 4).b
            return 
        case 6
            int16_t x8_7 = (0x83ff & (((arg1 u>> 6).w & 0x3e0) | ((arg1.d & 0xf80000) u>> 0x13).w))
                | ((0x1f & arg1.d u>> 3) << 0xa).w | ((arg1 u>> 0x10).w & 0x8000)
            *arg2 = x8_7
            return 
        case 7
            *arg2 = (0x83ff & (((arg1 u>> 6).w & 0x3e0) | ((arg1.d & 0xf80000) u>> 0x13).w))
                | ((0x1f & arg1.d u>> 3) << 0xa).w
            return 
        case 8
            *arg2 = (0x7ff & (((arg1 u>> 5).w & 0xffe0) | ((arg1.d & 0xf80000) u>> 0x13).w))
                | ((0x1f & arg1.d u>> 3) << 0xb).w
            return 
        case 9
            *arg2 = x10_1.b
            return 
        case 0xa
            *arg2 = arg1.b + (arg1.d u>> 8).b + ((arg1.d u>> 0x10 & 0xff) u/ 3).b
            return 
        case 0x12
            *arg2 = x10_1.b
            arg2[1] = (arg1.d).b
            arg2[2] = x8_1.b
            arg2[3] = x9_1
            return 
        case 0x13
            *arg2 = (arg1.d).b
            arg2[1] = x8_1.b
            arg2[2] = x9_1
            return 

pthread_kill(pthread_self(), 6)
ImageSpec* x0_1
ImageSpec* x1
x0_1, x1 = XNoReturn()
return ImageBufferCopyToNewFormat(x0_1, x1) __tailcall
