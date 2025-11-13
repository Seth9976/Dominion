// 函数: _Z23BindInstanceBuffersMeshR10DefSubMeshP6XAsset
// 地址: 0xc92b90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_1 = ShaderGetDef(arg2)
int64_t* x8 = *gGraphicsInterface
int64_t result = (*(*x8 + 0x58))(x8, zx.q(*(arg1 + 0x40)))

if ((result.d & 1) == 0)
    void* x24_1 = *(arg1 + 0x20)
    int32_t x25_1 = *(arg1 + 0x14) * 0x30
    int32_t x21_1 = x25_1 * *(x0_1 + 0x54)
    void* x0_4
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    x0_4, v0_1, v1_1, v2_1 = XMalloc(x21_1)
    int32_t x12_1 = *(x0_1 + 0x54)
    
    if (x12_1 s>= 1)
        uint64_t x11_1 = zx.q(*(arg1 + 0x14))
        int64_t i = 0
        void* x10_1 = x0_4
        
        do
            if (x11_1.d s>= 1)
                int64_t x12_2 = 0
                void* x13_1 = x10_1
                void* x14_1 = x24_1
                
                do
                    v0_1 = *(x14_1 + 0x1c)
                    v2_1 = *x14_1
                    v1_1 = *(x14_1 + 0x10)
                    *(x13_1 + 0x2c) = i.d
                    x12_2 += 1
                    *(x13_1 + 0x1c) = v0_1
                    *x13_1 = v2_1
                    *(x13_1 + 0x10) = v1_1
                    x13_1 += 0x30
                    x11_1 = sx.q(*(arg1 + 0x14))
                    x14_1 += 0x2c
                while (x12_2 s< x11_1)
                
                x12_1 = *(x0_1 + 0x54)
            
            i += 1
            x10_1 += sx.q(x25_1)
        while (i s< sx.q(x12_1))
    
    int64_t* x0_5 = *gGraphicsInterface
    *(arg1 + 0x40) = (*(*x0_5 + 0x50))(x0_5, x0_4, zx.q(x21_1), 0xc, 0)
    result = XFree(x0_4)

if (*(arg1 + 0x28) s>= 1)
    int64_t* x0_8 = *gGraphicsInterface
    result = (*(*x0_8 + 0x70))(x0_8, zx.q(*(arg1 + 0x44)))
    
    if ((result.d & 1) == 0)
        MeshUsesDefIndex16(arg1)
        int32_t x21_2 = *(x0_1 + 0x54) * *(arg1 + 0x2c)
        void* x0_11 = XMalloc(x21_2)
        int32_t x10_2 = *(x0_1 + 0x54)
        
        if (x10_2 s>= 1)
            int64_t x8_9 = zx.q(*(arg1 + 0x28))
            int32_t x9_5 = 0
            
            do
                if (x8_9.d s>= 1)
                    int64_t x10_3 = 0
                    int16_t x11_3 = (*(arg1 + 0x14)).w * x9_5.w
                    
                    do
                        int32_t x8_10 = x10_3.d + x9_5 * x8_9.d
                        int16_t x12_4 = *(*(arg1 + 0x30) + (x10_3 << 1))
                        x10_3 += 1
                        *(x0_11 + (sx.q(x8_10) << 1)) = x12_4 + x11_3
                        x8_9 = sx.q(*(arg1 + 0x28))
                    while (x10_3 s< x8_9)
                    
                    x10_2 = *(x0_1 + 0x54)
                
                x9_5 += 1
            while (x9_5 s< x10_2)
        
        int64_t* x0_12 = *gGraphicsInterface
        *(arg1 + 0x44) = (*(*x0_12 + 0x68))(x0_12, x0_11, zx.q(x21_2), 0, 0, zx.q(*(arg1 + 0x40)))
        return XFree(x0_11) __tailcall

return result
