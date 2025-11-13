// 函数: _Z16DlgShowTransformfP6XAssetiRK11UITransform
// 地址: 0x105170c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v8 = arg1
int32_t x21_1

if (v8 != fconvert.s(1f))
    x21_1 = arg3

int128_t* entry_x8
int128_t v2
int128_t v3

if (not(v8 != fconvert.s(1f)) || (arg3 & 0x80000000) != 0)
label_105173c:
    arg1 = (*(arg4 + 0x10)).d
    *entry_x8 = *arg4
    entry_x8[1] = arg1.o
    arg1 = (*(arg4 + 0x50)).d
    v3 = *(arg4 + 0x20)
    v2 = *(arg4 + 0x30)
    entry_x8[4] = *(arg4 + 0x40)
    entry_x8[5] = arg1.o
    entry_x8[2] = v3
    entry_x8[3] = v2
    return 

int64_t* x8 = *arg2
XAsset* x22_1 = arg2
uint64_t x25_1 = mulu.dp.d(x21_1, 0x178)

while (true)
    int128_t v1
    int128_t v4
    int128_t v5
    int128_t v6
    
    if (x8 == 0)
        if (*(x22_1 + 8) == 0x15)
            XString::GetString()
            XTrace("Unpreloaded sound %s")
        
        arg2, v1, v2, v3, v4, v5, v6 = AssetCatalogLoadAsset(x22_1, false, true)
        x8 = *x22_1
    
    int64_t x9_2 = **x8
    
    if (*(x9_2 + mulu.dp.d(x21_1, 0x178) + 4) == 6)
        arg1 = 0f
        
        if (not(v8 <= 0f))
            arg1 = fconvert.s(1f)
            
            if (not(v8 >= arg1))
                v1.d = v8 + v8
                v2.d = fconvert.s(3f)
                v1.d = v2.d f- v1.d
                arg1 = v8 * v8 f* v1.d
                v1.d = arg1 * arg1
                arg1 = v1.d f* (v2.d f- (arg1 + arg1))
                v1.d = 0f
                arg1 = arg1 f+ v1.d
        
        void* x9_3 = x9_2 + x25_1
        v4 = *(arg4 + 0x10)
        v3.q = *(x9_3 + 0x7c)
        v2.q = *V20
        *entry_x8 = *arg4
        entry_x8[1] = v4
        int128_t v1_1 = vsub_f32(v2, v3)
        v2 = *(arg4 + 0x40)
        v5 = *(arg4 + 0x50)
        v1_1.d = v1_1.d f* arg1
        v1_1:4.d = v1_1:4.d f* arg1
        int128_t v1_2 = vadd_f32(v3, v1_1)
        v3 = *(arg4 + 0x20)
        v6 = *(arg4 + 0x30)
        entry_x8[4] = v2
        entry_x8[5] = v5
        v5.q = *entry_x8
        v2.d = fconvert.s(1f)
        entry_x8[2] = v3
        entry_x8[3] = v6
        v3.d = *(entry_x8 + 8)
        *entry_x8 = vadd_f32(v1_2, v5)
        double v1_3
        v1_3.d = *(x9_3 + 0x74)
        v2.d = v2.d f- v1_3.d
        *(entry_x8 + 8) = v3.d f* (v1_3.d f+ arg1 f* v2.d)
        break
    
    int32_t temp0_1 = x21_1
    x21_1 -= 1
    x25_1 -= 0x178
    
    if (temp0_1 s< 1)
        goto label_105173c
