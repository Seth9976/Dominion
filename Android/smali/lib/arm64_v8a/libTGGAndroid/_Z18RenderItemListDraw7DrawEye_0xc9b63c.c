// 函数: _Z18RenderItemListDraw7DrawEye
// 地址: 0xc9b63c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gDraw3DData + 0x1a0590) == 0)
    return 

int32_t x20 = arg1.d
int128_t v0
int128_t v1
int128_t v2
v0, v1, v2 = DrawModeSet(2)
*(gDraw3DData + &data_7a4604) = x20
v0 = *M40
v1 = *(M40 + 0x10)
*(gDraw3DData + 0x4a4) = 0x3f800000
*(gDraw3DData + 0xc8) = v0
v2 = *(M40 + 0x20)
v0 = *(M40 + 0x30)
*(gDraw3DData + 0xd8) = v1
*(gDraw3DData + 0x460) = 0
*(gDraw3DData + 0xe8) = v2
*(gDraw3DData + 0xf8) = v0

if (*(gDraw3DData + 0x1a0590) s>= 1)
    int64_t i = 0
    
    do
        void* x8_8 = gDraw3DData + sx.q(*(gDraw3DData + (i << 2) + "s")) * 0x1a0
        
        if ((*(x8_8 + 0x710) & 1 << x20) != 0)
            int32_t x8_9 = *(x8_8 + 0x590)
            
            if (x8_9 == 1)
                int32_t x8_2
                
                if ((RenderCanBatchQuads(x8_8 + 0x590) & 1) != 0)
                    x8_2 = *(gDraw3DData + "tEditionOff")
                else
                    RenderDrawQuadBuffers()
                    
                    if (*(gDraw3DData + "center_landscape_col_2") != 0)
                        RenderItem* x20_1 = gDraw3DData
                            + sx.q(*(gDraw3DData + (sx.q(*(gDraw3DData + "Off")) << 2) + "s"))
                            * 0x1a0 + 0x590
                        RenderStateSetMaterial(x20_1)
                        RenderSubMesh(x20_1)
                        *(gDraw3DData + "center_landscape_col_2") = 0
                    
                    x8_2 = i.d
                    *(gDraw3DData + "tEditionOff") = i.d
                
                *(gDraw3DData + "tionOff") = i.d - x8_2 + 1
            else
                if (x8_9 != 0)
                    pthread_kill(pthread_self(), 6)
                    XNoReturn()
                    return Draw3DRenderItemSubmissionBegin() __tailcall
                
                RenderDrawMesh(x8_8 + 0x590, i.d)
        
        i += 1
    while (i s< sx.q(*(gDraw3DData + 0x1a0590)))

RenderDrawQuadBuffers()

if (*(gDraw3DData + "center_landscape_col_2") != 0)
    RenderItem* x19_1 = gDraw3DData
        + sx.q(*(gDraw3DData + (sx.q(*(gDraw3DData + "Off")) << 2) + "s")) * 0x1a0 + 0x590
    RenderStateSetMaterial(x19_1)
    RenderSubMesh(x19_1)
    *(gDraw3DData + "center_landscape_col_2") = 0

*(gDraw3DData + &data_7a4604) = 5
return DrawModeSet(0) __tailcall
