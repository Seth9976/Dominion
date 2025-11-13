// 函数: _Z17SpriteDrawBuffersv
// 地址: 0xfc9314
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gpSpriteAppData
int32_t x9 = *(x8 + 0x18)

if (x9 == 0)
    return 

int64_t* x0_1 = *gGraphicsInterface
int32_t x19_1 = *(x8 + (sx.q(*(x8 + 0x10)) << 2))
(*(*x0_1 + 0xd8))(x0_1, zx.q(x19_1), zx.q(x9 << 7))
uint64_t x22_1 = *gpSpriteAppData
*(x22_1 + 0x40) = 0
void var_3a8
memset(&var_3a8, 0, 0x368)
XAsset* i = *(x22_1 + 0x68)
XAsset* x2_2
void* x20_1

if (i == 0)
    x20_1 = **(x22_1 + 0x48) + 8
    void* var_50_2 = x20_1
    x2_2 = *(x22_1 + 0x60)
    
    if (x2_2 != 0)
    label_fc9448:
        MaterialStateReplaceTexture(x20_1, 0x53, x2_2)
else
    int64_t* x8_2 = x22_1 + 0x48
    int64_t* x9_1
    
    do
        int64_t* x8_3 = *x8_2
        
        if (x8_3 == 0)
            XAsset** x0_3 = XPooledCalloc(0x1a28)
            x20_1 = &x0_3[1]
            *x0_3 = i
            MaterialSimpleStateBind(x20_1, i)
            void* x21_1 = *gpSpriteAppData
            XAsset*** x0_5 = XPooledCalloc(0x18)
            *x0_5 = x0_3
            x0_5[1] = 0
            x0_5[2] = *(x21_1 + 0x50)
            void* x8_7 = *(x21_1 + 0x50)
            void* x8_8
            
            if (x8_7 == 0)
                x8_8 = x21_1 + 0x48
            else
                x8_8 = x8_7 + 8
            
            *x8_8 = x0_5
            int32_t x8_9 = *(x21_1 + 0x58)
            *(x21_1 + 0x50) = x0_5
            *(x21_1 + 0x58) = x8_9 + 1
            void* var_50_3 = x20_1
            x2_2 = *(*gpSpriteAppData + 0x60)
            
            if (x2_2 == 0)
                goto label_fc944c
            
            goto label_fc9448_1
        
        x9_1 = *x8_3
        x8_2 = &x8_3[1]
    while (*x9_1 != i)
    
    x20_1 = &x9_1[1]
    void* var_50_1 = x20_1
    x2_2 = *(x22_1 + 0x60)
    
    if (x2_2 != 0)
    label_fc9448_1:
        MaterialStateReplaceTexture(x20_1, 0x53, x2_2)
label_fc944c:
int64_t* x0_7 = *gGraphicsInterface
void var_328
(*(*x0_7 + 0x100))(x0_7, &var_328)
int64_t* x0_8 = *gGraphicsInterface
(*(*x0_8 + 0x88))(x0_8, &var_3a8)
int64_t* x0_9 = *gGraphicsInterface
uint64_t x8_15 = *gpSpriteAppData
int32_t x10_4 = *(x8_15 + 0x18)
(*(*x0_9 + 0x80))(x0_9, 4, zx.q(x19_1), zx.q(*(x8_15 + 0x14)), 1, zx.q(x10_4 << 1), 
    zx.q(x10_4 << 2), 0, 0)
uint64_t x8_17 = *gpSpriteAppData
int32_t x9_4 = *(x8_17 + 0x10)
*(x8_17 + 0x18) = 0
int32_t x9_5

if (x9_4 + 1 s< 0)
    x9_5 = x9_4 + 4
else
    x9_5 = x9_4 + 1

*(x8_17 + 0x10) = x9_4 + 1 - (x9_5 & 0xfffffffc)
uint64_t x8_18 = *gpRenderAppData
*(x8_18 + 0x2c) += 1
