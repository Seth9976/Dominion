// 函数: spSkeleton_updateWorldTransform
// 地址: 0xfb3c2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0xa8) s>= 1)
    int64_t x9_1 = *(arg1 + 0xb0)
    int64_t i = 0
    
    do
        void* x11_1 = *(x9_1 + (i << 3))
        i += 1
        int128_t v0 = *(x11_1 + 0x28)
        int64_t v1 = *(x11_1 + 0x38)
        int32_t v2 = *(x11_1 + 0x40)
        *(x11_1 + 0x60) = 1
        *(x11_1 + 0x44) = v0
        *(x11_1 + 0x54) = v1
        *(x11_1 + 0x5c) = v2
    while (i s< sx.q(*(arg1 + 0xa8)))

if (*(arg1 + 0x98) s< 1)
    return 

int64_t x20_1 = 0
int64_t i_1 = 0

do
    void* x8_4 = *(arg1 + 0xa0)
    uint64_t x9_2 = zx.q(*(x8_4 + x20_1))
    
    if (x9_2.d u<= 3)
        switch (x9_2)
            case 0
                spBone_updateWorldTransform(*(x8_4 + x20_1 + 8))
            case 1
                spIkConstraint_apply(*(x8_4 + x20_1 + 8))
            case 2
                spPathConstraint_apply(*(x8_4 + x20_1 + 8))
            case 3
                spTransformConstraint_apply(*(x8_4 + x20_1 + 8))
    
    i_1 += 1
    x20_1 += 0x10
while (i_1 s< sx.q(*(arg1 + 0x98)))
