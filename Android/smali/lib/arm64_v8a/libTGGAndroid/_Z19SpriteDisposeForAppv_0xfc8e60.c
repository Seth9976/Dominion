// 函数: _Z19SpriteDisposeForAppv
// 地址: 0xfc8e60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* result_1 = *gpSpriteAppData
int32_t* result

if (result_1 == 0 || zx.d(result_1[7].b) == 0)
    result = result_1
    
    if (*result_1 != 0)
    label_fc8ea0:
        (*(**gGraphicsInterface + 0x60))()
        result = *gpSpriteAppData
        result_1 = result
else
    while (result_1[0x16] != 0)
        void* x0_6 = *(result_1 + 0x48)
        void* x8_13 = *(x0_6 + 8)
        *(result_1 + 0x48) = x8_13
        void* x8_14
        
        if (x8_13 == 0)
            x8_14 = &result_1[0x14]
        else
            x8_14 = x8_13 + 0x10
        
        *x8_14 = 0
        void* x19_1 = *x0_6
        result_1[0x16] -= 1
        XPooledFree(x0_6, 0x18)
        MaterialStateUnbind(x19_1 + 8)
        
        if (x19_1 != 0)
            XPooledFree(x19_1, 0x1a28)
        
        result_1 = *gpSpriteAppData
    
    result = result_1
    result_1[7].b = 0
    
    if (*result_1 != 0)
        goto label_fc8ea0

if (result_1[1] != 0)
    (*(**gGraphicsInterface + 0x60))()
    result = *gpSpriteAppData
    result_1 = result

if (result_1[2] != 0)
    (*(**gGraphicsInterface + 0x60))()
    result = *gpSpriteAppData
    result_1 = result

if (result_1[3] != 0)
    (*(**gGraphicsInterface + 0x60))()
    result = *gpSpriteAppData
    result_1 = result

if (result_1[5] == 0)
    goto label_fc8f30

(*(**gGraphicsInterface + 0x78))()
result = *gpSpriteAppData

if (result != 0)
    result_1 = result
label_fc8f30:
    void* i = *(result_1 + 0x48)
    
    if (i != 0)
        do
            void* i_1 = i
            i = *(i + 8)
            XPooledFree(i_1, 0x18)
        while (i != 0)
        
        result = *gpSpriteAppData
    
    __builtin_memset(&result_1[0x12], 0, 0x14)
    result = XPooledFree(result, 0x70)
    *gpSpriteAppData = 0

return result
