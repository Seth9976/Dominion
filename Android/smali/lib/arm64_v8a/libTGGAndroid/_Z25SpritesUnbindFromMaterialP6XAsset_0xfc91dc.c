// 函数: _Z25SpritesUnbindFromMaterialP6XAsset
// 地址: 0xfc91dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gpSpriteAppData

if (x8 == 0 || zx.d(*(x8 + 0x1c)) == 0)
    return 

while (*(x8 + 0x58) != 0)
    void* x0 = *(x8 + 0x48)
    void* x9_3 = *(x0 + 8)
    *(x8 + 0x48) = x9_3
    int64_t* x9_4
    
    if (x9_3 == 0)
        x9_4 = x8 + 0x50
    else
        x9_4 = x9_3 + 0x10
    
    *x9_4 = 0
    void* x19_1 = *x0
    *(x8 + 0x58) -= 1
    XPooledFree(x0, 0x18)
    MaterialStateUnbind(x19_1 + 8)
    
    if (x19_1 != 0)
        XPooledFree(x19_1, 0x1a28)
    
    x8 = *gpSpriteAppData

*(x8 + 0x1c) = 0
