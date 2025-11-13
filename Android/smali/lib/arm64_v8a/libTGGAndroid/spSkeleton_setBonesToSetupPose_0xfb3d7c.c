// 函数: spSkeleton_setBonesToSetupPose
// 地址: 0xfb3d7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 8) s>= 1)
    int64_t i = 0
    
    do
        spBone_setToSetupPose(*(*(arg1 + 0x10) + (i << 3)))
        i += 1
    while (i s< sx.q(*(arg1 + 8)))

if (*(arg1 + 0x38) s>= 1)
    int64_t i_1 = 0
    
    do
        int64_t* x9_2 = *(*(arg1 + 0x40) + (i_1 << 3))
        i_1 += 1
        void* x10_1 = *x9_2
        x9_2[4].d = *(x10_1 + 0x28)
        *(x9_2 + 0x24) = *(x10_1 + 0x2c)
        x9_2[5].d = *(x10_1 + 0x30)
        x9_2[6].d = *(x10_1 + 0x3c)
        *(x9_2 + 0x2c) = *(x10_1 + 0x38)
    while (i_1 s< sx.q(*(arg1 + 0x38)))

if (*(arg1 + 0x48) s>= 1)
    int64_t i_2 = 0
    
    do
        int64_t* x9_5 = *(*(arg1 + 0x50) + (i_2 << 3))
        i_2 += 1
        void* x10_2 = *x9_5
        x9_5[4].d = *(x10_2 + 0x28)
        *(x9_5 + 0x24) = *(x10_2 + 0x2c)
        x9_5[5].d = *(x10_2 + 0x30)
        *(x9_5 + 0x2c) = *(x10_2 + 0x34)
    while (i_2 s< sx.q(*(arg1 + 0x48)))

if (*(arg1 + 0x58) s< 1)
    return 

int64_t i_3 = 0

do
    int64_t* x9_8 = *(*(arg1 + 0x60) + (i_3 << 3))
    i_3 += 1
    void* x10_3 = *x9_8
    x9_8[4].d = *(x10_3 + 0x38)
    *(x9_8 + 0x24) = *(x10_3 + 0x3c)
    x9_8[5].d = *(x10_3 + 0x40)
    *(x9_8 + 0x2c) = *(x10_3 + 0x44)
while (i_3 s< sx.q(*(arg1 + 0x58)))
