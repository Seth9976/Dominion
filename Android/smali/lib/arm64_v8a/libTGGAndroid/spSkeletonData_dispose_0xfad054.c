// 函数: spSkeletonData_dispose
// 地址: 0xfad054
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1[4].d s>= 1)
    int64_t i = 0
    
    do
        _spFree(*(arg1[5] + (i << 3)))
        i += 1
    while (i s< sx.q(arg1[4].d))

_spFree(arg1[5])

if (arg1[6].d s>= 1)
    int64_t i_1 = 0
    
    do
        spBoneData_dispose(*(arg1[7] + (i_1 << 3)))
        i_1 += 1
    while (i_1 s< sx.q(arg1[6].d))

_spFree(arg1[7])

if (arg1[8].d s>= 1)
    int64_t i_2 = 0
    
    do
        spSlotData_dispose(*(arg1[9] + (i_2 << 3)))
        i_2 += 1
    while (i_2 s< sx.q(arg1[8].d))

_spFree(arg1[9])

if (arg1[0xa].d s>= 1)
    int64_t i_3 = 0
    
    do
        spSkin_dispose(*(arg1[0xb] + (i_3 << 3)))
        i_3 += 1
    while (i_3 s< sx.q(arg1[0xa].d))

_spFree(arg1[0xb])

if (arg1[0xd].d s>= 1)
    int64_t i_4 = 0
    
    do
        spEventData_dispose(*(arg1[0xe] + (i_4 << 3)))
        i_4 += 1
    while (i_4 s< sx.q(arg1[0xd].d))

_spFree(arg1[0xe])

if (arg1[0xf].d s>= 1)
    int64_t i_5 = 0
    
    do
        spAnimation_dispose(*(arg1[0x10] + (i_5 << 3)))
        i_5 += 1
    while (i_5 s< sx.q(arg1[0xf].d))

_spFree(arg1[0x10])

if (arg1[0x11].d s>= 1)
    int64_t i_6 = 0
    
    do
        spIkConstraintData_dispose(*(arg1[0x12] + (i_6 << 3)))
        i_6 += 1
    while (i_6 s< sx.q(arg1[0x11].d))

_spFree(arg1[0x12])

if (arg1[0x13].d s>= 1)
    int64_t i_7 = 0
    
    do
        spTransformConstraintData_dispose(*(arg1[0x14] + (i_7 << 3)))
        i_7 += 1
    while (i_7 s< sx.q(arg1[0x13].d))

_spFree(arg1[0x14])

if (arg1[0x15].d s>= 1)
    int64_t i_8 = 0
    
    do
        spPathConstraintData_dispose(*(arg1[0x16] + (i_8 << 3)))
        i_8 += 1
    while (i_8 s< sx.q(arg1[0x15].d))

_spFree(arg1[0x16])
_spFree(arg1[1])
_spFree(*arg1)
return _spFree(arg1) __tailcall
