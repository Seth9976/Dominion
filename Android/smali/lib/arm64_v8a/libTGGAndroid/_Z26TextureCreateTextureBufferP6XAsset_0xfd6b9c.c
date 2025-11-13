// 函数: _Z26TextureCreateTextureBufferP6XAsset
// 地址: 0xfd6b9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg1
int64_t* x8

if (arg1 == 0)
    x19 = AssetPtrGetNull(3)
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19
else
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19

*(x19 + 0x24) += 1
int32_t* x25 = **x8
int32_t x5 = x25[4]
uint32_t x21
int32_t x22_1

if (x25[7] - 3 u>= 4)
    int32_t x8_3 = x25[0xf]
    
    if (x8_3 s>= 1)
        x22_1 = x8_3 s/ x5
        goto label_fd6c10
    
    x21 = 0
    *(x19 + 0x24) -= 1
else
    x22_1 = 1
label_fd6c10:
    int64_t* x0 = *gGraphicsInterface
    uint32_t x0_1 =
        (*(*x0 + 0x20))(x0, arg1, zx.q(*x25), zx.q(x25[1]), zx.q(x22_1), x5, zx.q(x25[6]))
    x21 = x0_1
    
    if (x0_1 == 0)
        *(x19 + 0x24) -= 1
    else
        int32_t x8_6 = x25[7]
        
        if (x8_6 - 3 u< 4)
            *(x19 + 0x24) -= 1
        else
            if (x8_6 == 2)
                pthread_kill(pthread_self(), 6)
                int64_t* x0_9 = XNoReturn()
                
                if (x19 != 0)
                    *(x19 + 0x24) -= 1
                
                sub_1101e04(x0_9)
                noreturn
            
            if (x22_1 s>= 1)
                int32_t x8_7 = x25[4]
                int32_t x23_1 = 0
                
                do
                    if (x8_7 s>= 1)
                        int32_t x24_1 = 0
                        
                        do
                            TextureLoad(arg1, x21, x23_1, x24_1)
                            x8_7 = x25[4]
                            x24_1 += 1
                        while (x24_1 s< x8_7)
                    
                    x23_1 += 1
                while (x23_1 != x22_1)
            
            if (x25[8] == 0 && x25[5] != 8)
                XString::operator char const*()
                XTrace("Autogeneration of mipmaps is not implemented on load for %s")
            
            if (x19 != 0)
                *(x19 + 0x24) -= 1
return zx.q(x21)
