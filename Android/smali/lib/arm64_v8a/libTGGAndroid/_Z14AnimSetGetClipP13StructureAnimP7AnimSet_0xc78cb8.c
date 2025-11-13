// 函数: _Z14AnimSetGetClipP13StructureAnimP7AnimSet
// 地址: 0xc78cb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *(arg2 + 0x10)
int32_t x8 = x20[1].d

if (x8 == 2)
    return *(*StructureGetDef(x20) + 0x68) + sx.q(*(arg2 + 0x18)) * 0x18

if (x8 != 0xa)
    pthread_kill(pthread_self(), 6)
    return AnimationGetDef(XNoReturn()) __tailcall

int64_t* x8_1 = *x20

if (x8_1 == 0)
    AssetCatalogLoadAsset(x20, false, true)
    x8_1 = *x20

char* x20_1 = *x8_1
int64_t* x0_2 = StructureGetDef(*arg1)

if (zx.d(*x20_1) == 0)
    void* x9_2 = *(x20_1 + 0x18)
    void* x10_1 = *x0_2
    *x20_1 = 1
    uint64_t x11_1 = zx.q(*(x9_2 + 4))
    
    if (x11_1.d s>= 1)
        uint64_t x12_1 = zx.q(*(x10_1 + 0x10))
        
        if (x12_1.d s<= 0)
            int64_t i = 0
            
            do
                void* x13_3 = *(x9_2 + 8) + i
                i += 0x18
                *(x13_3 + 0x10) = 0xffffffff
            while (x11_1 * 0x18 != i)
        else
            int64_t x13_1 = 0
            
            do
                int32_t* x0_7 = *(x9_2 + 8)
                int64_t x16_1 = 0
                x0_7[x13_1 * 6 + 4] = 0xffffffff
                int32_t* x1_1 = *(x10_1 + 0x18) + 0x70
                
                do
                    if (*x1_1 == x0_7[x13_1 * 6])
                        x0_7[x13_1 * 6 + 4] = x16_1.d
                        break
                    
                    x16_1 += 1
                    x1_1 = &x1_1[0x36]
                while (x12_1 != x16_1)
                
                x13_1 += 1
            while (x13_1 != x11_1)

return &x20_1[8]
