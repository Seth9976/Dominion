// 函数: _Z14FabFlagsHidden5FabIDib
// 地址: 0xf6294c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(arg1.d) & 0xffff
int64_t* x21 = *(*gFabs + mulu.dp.d(x10.d, 0x4e8))
int64_t* x8_1 = *x21
int32_t x8_2
int64_t* x21_1
int128_t v0
int128_t v1

if (x8_1 == 0)
    if (x21[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    arg1, v0, v1 = AssetCatalogLoadAsset(x21, false, true)
    x21_1 = **x21
    x8_2 = x21_1[1].d
    
    if (x8_2 s>= 1)
        goto label_f62a04
    
    return 

x21_1 = *x8_1
x8_2 = x21_1[1].d

if (x8_2 s< 1)
    return 

label_f62a04:
int64_t i = 0
int64_t x27_1 = 0x34

do
    if ((*(*x21_1 + x27_1) & arg2) != 0)
        int64_t fp_1 = *gFabs
        int64_t x23_1 = fp_1 + x10 * 0x4e8 + 0x88
        int32_t x9_10 = *(x23_1 + (i << 2))
        void* x20_1
        int32_t x8_16
        
        if (x9_10 == 0)
            x8_16 = *(gFabs + 8)
        label_f62af0:
            uint64_t x25_1 = zx.q(*(gFabs + 0x10))
            uint64_t x8_6
            int32_t x9_4
            
            if (x25_1.d != x8_16)
                x9_4 = *(fp_1 + x25_1 * 0x4e8 + 0x4e0)
                x8_6 = x25_1
            else
                x9_4 = x8_16 + 1
                *(gFabs + 8) = x9_4
                x8_6 = zx.q(x8_16)
            
            x20_1 = fp_1 + x8_6 * 0x4e8
            *(gFabs + 0x10) = x9_4
            arg1, v0, v1 = memset(x20_1, 0, 0x4e0)
            *(x20_1 + 0x4e0) = x25_1.d | *(gFabs + 0x18) << 0x10
            int32_t x8_9 = *(gFabs + 0x18)
            int32_t x8_10
            
            if (x8_9 == 0xffff)
                x8_10 = 1
            else
                x8_10 = x8_9 + 1
            
            *(gFabs + 0x14) += 1
            *(gFabs + 0x18) = x8_10
            *(x23_1 + (i << 2)) = *(x20_1 + 0x4e0)
        else
            x8_16 = *(gFabs + 8)
            uint64_t x10_2 = zx.q(x9_10.w)
            
            if (x10_2.d u>= x8_16)
                goto label_f62af0
            
            x20_1 = fp_1 + x10_2 * 0x4e8
            
            if (*(x20_1 + 0x4e0) != x9_10)
                goto label_f62af0
        void* x8_13 = fp_1 + x10 * 0x4e8
        v1 = *(x8_13 + 0x40)
        v0 = *(x8_13 + 0x50)
        *(x20_1 + 0x70) = *(x20_1 + 0x60) + 1
        *(x20_1 + 0x40) = v1
        *(x20_1 + 0x50) = v0
        *(x20_1 + 0x74) = arg3 & 1
        x8_2 = x21_1[1].d
    
    i += 1
    x27_1 += 0xe0
while (i s< sx.q(x8_2))
