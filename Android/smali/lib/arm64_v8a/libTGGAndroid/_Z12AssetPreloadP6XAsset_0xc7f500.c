// 函数: _Z12AssetPreloadP6XAsset
// 地址: 0xc7f500
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg1

if (*arg1 != 0)
label_c7f52c:
    uint64_t x8_2 = zx.q(*(x19 + 8) - 2)
    
    if (x8_2.d u<= 0x1b)
        switch (x8_2)
            case 0
                return DefStructureBindGraphicsBuffers(x19) __tailcall
            case 1
                return TextureBindGraphicsBuffers(x19) __tailcall
            case 2
                ShaderBindGraphicsBuffers(x19, 0)
                return ShaderBindGraphicsBuffers(x19, 1) __tailcall
            case 0x13
                int64_t* x0_8 = *gSoundInterface
                (*(*x0_8 + 0x78))(x0_8, x19)
                arg1 = SoundGetDef(x19)
                int32_t x8_8 = *(arg1 + 0x30)
                
                if (x8_8 s>= 1)
                    XAsset* x19_1 = arg1
                    int64_t i = 0
                    
                    do
                        arg1 = *(*(x19_1 + 0x20) + (i << 3))
                        
                        if (arg1 != 0)
                            AssetPreload(arg1)
                            x8_8 = *(x19_1 + 0x30)
                        
                        i += 1
                    while (i s< sx.q(x8_8))
            case 0x1b
                return MaterialFn_EmitMaterial(x19) __tailcall
else if ((AssetCatalogLoadAsset(x19, false, false).d & 1) != 0)
    goto label_c7f52c
