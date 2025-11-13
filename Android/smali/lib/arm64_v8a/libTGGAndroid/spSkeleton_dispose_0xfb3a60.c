// 函数: spSkeleton_dispose
// 地址: 0xfb3a60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

_spFree(*(arg1 + 0xa0))
_spFree(*(arg1 + 0xb0))

if (*(arg1 + 8) s>= 1)
    int64_t i = 0
    
    do
        spBone_dispose(*(*(arg1 + 0x10) + (i << 3)))
        i += 1
    while (i s< sx.q(*(arg1 + 8)))

_spFree(*(arg1 + 0x10))

if (*(arg1 + 0x20) s>= 1)
    int64_t i_1 = 0
    
    do
        spSlot_dispose(*(*(arg1 + 0x28) + (i_1 << 3)))
        i_1 += 1
    while (i_1 s< sx.q(*(arg1 + 0x20)))

_spFree(*(arg1 + 0x28))

if (*(arg1 + 0x38) s>= 1)
    int64_t i_2 = 0
    
    do
        spIkConstraint_dispose(*(*(arg1 + 0x40) + (i_2 << 3)))
        i_2 += 1
    while (i_2 s< sx.q(*(arg1 + 0x38)))

_spFree(*(arg1 + 0x40))

if (*(arg1 + 0x48) s>= 1)
    int64_t i_3 = 0
    
    do
        spTransformConstraint_dispose(*(*(arg1 + 0x50) + (i_3 << 3)))
        i_3 += 1
    while (i_3 s< sx.q(*(arg1 + 0x48)))

_spFree(*(arg1 + 0x50))

if (*(arg1 + 0x58) s>= 1)
    int64_t i_4 = 0
    
    do
        spPathConstraint_dispose(*(*(arg1 + 0x60) + (i_4 << 3)))
        i_4 += 1
    while (i_4 s< sx.q(*(arg1 + 0x58)))

_spFree(*(arg1 + 0x60))
_spFree(*(arg1 + 0x30))
return _spFree(arg1) __tailcall
