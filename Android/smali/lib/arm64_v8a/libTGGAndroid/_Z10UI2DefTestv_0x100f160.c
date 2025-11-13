// 函数: _Z10UI2DefTestv
// 地址: 0x100f160
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = AssetPtrFromPath("res/test/test.ui2", 0x22)
int64_t* x8 = *x0

if (x8 == 0)
    if (x0[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x0, false, true)
    x8 = *x0

int64_t* x21 = *x8
int32_t var_450[0x100]
int64_t result = memset(&var_450, 0, 0x400)

if (x21[1].d s>= 1)
    int64_t i = 0
    int64_t x19_2 = 0
    
    do
        int64_t x8_5 = zx.q(x19_2.d) << 0x20 s>> 0x1e
        *(&var_450 + x8_5) -= 1
        AttribMap* x20_1 = *x21 + i * 0x18
        result = PrintAttribTree(x19_2.d, x20_1)
        int32_t x9_3 = *(x20_1 + 0x10)
        int64_t x8_7 = sx.q(x19_2.d + 1)
        var_450[sx.q(x19_2.d + 1)] = x9_3
        
        if (x19_2.d + 1 s< 1 || x9_3 != 0)
            x19_2 = x8_7
        else
            int32_t j
            
            do
                x19_2 = x8_7 - 1
                
                if (x8_7 s< 2)
                    break
                
                void var_454
                j = *(&var_454 + (x8_7 << 2))
                x8_7 = x19_2
            while (j == 0)
        
        i += 1
    while (i s< sx.q(x21[1].d))

return result
