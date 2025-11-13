// 函数: _Z21RenderDrawQuadBuffersv
// 地址: 0xc9a85c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDraw3DData + "tionOff") == 0)
    return 

int64_t x22_1 = sx.q(*(gDraw3DData + "tEditionOff"))
RenderStateSetMaterial(gDraw3DData + sx.q(*(gDraw3DData + (x22_1 << 2) + "s")) * 0x1a0 + 0x590)

if (*(gDraw3DData + "tionOff") s>= 1)
    int32_t i = 0
    int32_t x24_1 = 0
    int32_t x11_1 = 0x100
    
    do
        Draw3DRenderBufferBind()
        int64_t* x0_2 = *gGraphicsInterface
        int32_t* x8_7 =
            gDraw3DData + (sx.q(*(gDraw3DData + "woods")) << 2) + "_gallery_header_prizes_1e"
        int64_t x0_3 = (*(*x0_2 + 0xc8))(x0_2, zx.q(*x8_7))
        int32_t x8_9 = *(gDraw3DData + "tionOff")
        int32_t x19_1
        int32_t x27_1
        
        if (i s>= x8_9)
            x27_1 = 0
            x19_1 = 0
        else
            int32_t x26_1 = 0
            x19_1 = 0
            x27_1 = 0
            
            do
                int64_t x9_4 = sx.q(*(gDraw3DData + (sx.q(i + x22_1.d) << 2) + "s"))
                
                if ((*(gDraw3DData + x9_4 * 0x1a0 + 0x710) u>> *(gDraw3DData + &data_7a4604) & 1)
                        != 0)
                    void* fp_1 = gDraw3DData + x9_4 * 0x1a0
                    int32_t x9_7 = (*(fp_1 + 0x6e8) << 2) - x24_1
                    int32_t x25_1
                    
                    if (0x4000 - x26_1 s< x9_7)
                        x25_1 = 0x4000 - x26_1
                    else
                        x25_1 = x9_7
                    
                    int32_t x28_1 = x25_1 * 0x30
                    memcpy(x0_3 + muls.dp.d(x26_1, 0x30), 
                        gDraw3DData + sx.q(*(fp_1 + 0x6e4)) * 0xc0 + muls.dp.d(x24_1, 0x30)
                            + 0x1a0594, 
                        sx.q(x28_1))
                    int32_t x8_15
                    
                    if (x25_1 s< 0)
                        x8_15 = x25_1 + 3
                    else
                        x8_15 = x25_1
                    
                    x24_1 += x25_1
                    x19_1 += x28_1
                    x27_1 += x8_15 s>> 2
                    
                    if (x24_1 != *(fp_1 + 0x6e8) << 2)
                        break
                    
                    x8_9 = *(gDraw3DData + "tionOff")
                    x24_1 = 0
                    i += 1
                    x26_1 += x25_1
            while (i s< x8_9)
        
        int64_t* x0_5 = *gGraphicsInterface
        (*(*x0_5 + 0xd8))(x0_5, zx.q(*x8_7), zx.q(x19_1))
        int32_t* x8_18 = *gpRenderAppData
        int32_t x9_10 = *x8_18
        
        if (x9_10 == 0 || x8_18[9] s< x9_10)
            int64_t* x0_6 = *gGraphicsInterface
            (*(*x0_6 + 0x80))(x0_6, 4, zx.q(*x8_7), 
                zx.q(*(gDraw3DData + "m_ui_gallery_header_prizes_1e")), 0xa, zx.q(x27_1 << 1), 
                zx.q(x27_1 << 2), 0, 0)
        
        int32_t temp0_1 = x11_1
        x11_1 -= 1
        
        if (temp0_1 == 1)
            break
        
        uint64_t x8_22 = *gpRenderAppData
        int32_t x10_6 = *(x8_22 + 0x24) + 1
        *(x8_22 + 0x20) += x27_1
        *(x8_22 + 0x24) = x10_6
        int32_t x8_23 = *(gDraw3DData + "woods")
        int32_t x8_24
        
        if (x8_23 + 1 s< 0)
            x8_24 = x8_23 + 0x10
        else
            x8_24 = x8_23 + 1
        
        *(gDraw3DData + "woods") = x8_23 + 1 - (x8_24 & 0xfffffff0)
    while (i s< *(gDraw3DData + "tionOff"))

*(gDraw3DData + "tionOff") = 0
