// 函数: _Z19GetHeightmapPatternR9RandomPCG8MapStyle
// 地址: 0xc18a24
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 u> 6)
    pthread_kill(pthread_self(), 6)
    MeshMap* x0_5
    float* x1_1
    int32_t* x2_1
    int32_t x3_1
    x0_5, x1_1, x2_1, x3_1 = XNoReturn()
    return PlaceCity(x0_5, x1_1, x2_1, x3_1) __tailcall

int64_t x0_3
int64_t* entry_x8
int64_t x8_14
int64_t x9_17
void* x19_2
int128_t v0

switch (arg2)
    case 0
        *entry_x8 = zx.o(0)
        __builtin_memset(&entry_x8[2], 0, 0x1b4)
        entry_x8[0x39] = 0x3f00000040000000
        *(entry_x8 + 4) = 0
        int64_t x0
        float v0_1
        int128_t v1
        x0, v0_1, v1 = RandomUnit(arg1)
        v1.d = *TWO_PI
        v0_1 = v0_1 f* v1.d
        v1.q = 0x2800000003
        *(entry_x8 + 0x14) = 0x40000000
        entry_x8[4] = 0x2800000003
        v1 = data_71d370
        entry_x8[0xb].d = 4
        uint64_t x8_1 = *V20
        *(entry_x8 + 0x74) = 5
        *(entry_x8 + 0x3c) = 6
        *(entry_x8 + 0x1c4) = 6
        *(entry_x8 + 0xc) = x8_1
        *(entry_x8 + 0x28) = v1
        entry_x8[1].d = v0_1
        entry_x8[0x12] = -0x407ffffffffffff9
        return 
    case 1
        *entry_x8 = zx.o(0)
        __builtin_memset(&entry_x8[2], 0, 0x1b4)
        *(entry_x8 + 4) = 0
        entry_x8[0x39] = 0x4000000040000000
        *(entry_x8 + 0x1c4) = 1
        int64_t x0_1
        int128_t v0_2
        x0_1, v0_2 = RandomUnit(arg1)
        uint32_t v1_1 = *TWO_PI
        *(entry_x8 + 0x14) = 0x40000000
        int64_t x11_1 = sx.q(*(entry_x8 + 0x1c4))
        v0_2.d = v0_2.d f* v1_1
        entry_x8[1].d = v0_2.d
        v0_2 = data_71d370
        int64_t* x11_2 = entry_x8 + 4 + x11_1 * 0x1c
        *(entry_x8 + 0xc) = *V20
        *(entry_x8 + 0x1c4) = x11_1.d + 1
        *x11_2 = 0x2800000003
        *(x11_2 + 8) = v0_2
        int64_t x9_1 = sx.q(*(entry_x8 + 0x1c4))
        *(entry_x8 + 0x1c4) = x9_1.d + 1
        *(entry_x8 + 4 + x9_1 * 0x1c) = 6
        int64_t x9_3 = sx.q(*(entry_x8 + 0x1c4))
        *(entry_x8 + 0x1c4) = x9_3.d + 1
        *(entry_x8 + 4 + x9_3 * 0x1c) = 4
        int64_t x9_5 = sx.q(*(entry_x8 + 0x1c4))
        *(entry_x8 + 0x1c4) = x9_5.d + 1
        *(entry_x8 + 4 + x9_5 * 0x1c) = 5
        int64_t x9_7 = sx.q(*(entry_x8 + 0x1c4))
        *(entry_x8 + 0x1c4) = x9_7.d + 1
        *(entry_x8 + 4 + x9_7 * 0x1c) = -0x407ffffffffffff9
        int64_t x9_9 = sx.q(*(entry_x8 + 0x1c4))
        *(entry_x8 + 0x1c4) = x9_9.d + 1
        *(entry_x8 + 4 + x9_9 * 0x1c) = 8
        int64_t x9_11 = sx.q(*(entry_x8 + 0x1c4))
        *(entry_x8 + 0x1c4) = x9_11.d + 1
        *(entry_x8 + 4 + x9_11 * 0x1c) = -0x407ffffffffffff9
        int64_t x9_13 = sx.q(*(entry_x8 + 0x1c4))
        *(entry_x8 + 0x1c4) = x9_13.d + 1
        *(entry_x8 + 4 + x9_13 * 0x1c) = 9
        return 
    case 2
        return MapLake(arg1) __tailcall
    case 3
        __builtin_memset(&entry_x8[2], 0, 0x1c0)
        *entry_x8 = zx.o(0)
        x19_2 = entry_x8 + 4
        *x19_2 = 0
        *(x19_2 + 0x1c0) = 0x3fc0000000000001
        float v0_4
        int128_t v1_3
        x0_3, v0_4, v1_3 = RandomUnit(arg1)
        int64_t x11_11 = sx.q(*(x19_2 + 0x1c0))
        v1_3.d = *TWO_PI
        uint64_t x9_15 = *V20
        *(x19_2 + 0x10) = 0x3f800000
        int64_t* x11_12 = x19_2 + x11_11 * 0x1c
        *(x19_2 + 0x1c0) = x11_11.d + 1
        *(x19_2 + 8) = x9_15
        *(x19_2 + 4) = v0_4 f* v1_3.d
        *x11_12 = -0x407fffffffffffff
        x11_12[1] = x9_15
        int64_t x8_6 = sx.q(*(x19_2 + 0x1c0))
        v1_3 = data_71d370
        int64_t* x8_7 = x19_2 + x8_6 * 0x1c
        *(x19_2 + 0x1c0) = x8_6.d + 1
        *x8_7 = 0x3200000003
        *(x8_7 + 8) = v1_3
        x8_7[3].d = 0
        int64_t x8_8 = sx.q(*(x19_2 + 0x1c0))
        *(x19_2 + 0x1c0) = x8_8.d + 1
        *(x19_2 + x8_8 * 0x1c) = 6
        int64_t x8_10 = sx.q(*(x19_2 + 0x1c0))
        *(x19_2 + 0x1c0) = x8_10.d + 1
        *(x19_2 + x8_10 * 0x1c) = 4
        int64_t x8_12 = sx.q(*(x19_2 + 0x1c0))
        *(x19_2 + 0x1c0) = x8_12.d + 1
        *(x19_2 + x8_12 * 0x1c) = 5
        x8_14 = sx.q(*(x19_2 + 0x1c0))
        x9_17 = 0x3e80000000000007
    label_c18ed4:
        *(x19_2 + 0x1c0) = x8_14.d + 1
        *(x19_2 + x8_14 * 0x1c) = x9_17
        int64_t x8_24 = sx.q(*(x19_2 + 0x1c0))
        *(x19_2 + 0x1c0) = x8_24.d + 1
        *(x19_2 + x8_24 * 0x1c) = 8
        int64_t x8_26 = sx.q(*(x19_2 + 0x1c0))
        *(x19_2 + 0x1c0) = x8_26.d + 1
        *(x19_2 + x8_26 * 0x1c) = 9
        return 
    case 4
        __builtin_memset(&entry_x8[2], 0, 0x1c0)
        *entry_x8 = zx.o(0)
        x19_2 = entry_x8 + 4
        *x19_2 = 0
        *(x19_2 + 0x1c0) = 0x3fc0000000000001
        float v0_5
        int128_t v1_4
        x0_3, v0_5, v1_4 = RandomUnit(arg1)
        int64_t x11_13 = sx.q(*(x19_2 + 0x1c0))
        v1_4.d = *TWO_PI
        uint64_t x9_18 = *V20
        *(x19_2 + 0x10) = 0x3f800000
        int64_t* x11_14 = x19_2 + x11_13 * 0x1c
        *(x19_2 + 0x1c0) = x11_13.d + 1
        *(x19_2 + 8) = x9_18
        *(x19_2 + 4) = v0_5 f* v1_4.d
        *x11_14 = -0x407fffffffffffff
        x11_14[1] = x9_18
        int64_t x8_15 = sx.q(*(x19_2 + 0x1c0))
        v1_4 = data_71cec0
        int64_t* x8_16 = x19_2 + x8_15 * 0x1c
        *(x19_2 + 0x1c0) = x8_15.d + 1
        *x8_16 = 0x3200000003
        *(x8_16 + 8) = v1_4
        x8_16[3].d = 0
        int64_t x8_17 = sx.q(*(x19_2 + 0x1c0))
        *(x19_2 + 0x1c0) = x8_17.d + 1
        *(x19_2 + x8_17 * 0x1c) = 6
        int64_t x8_19 = sx.q(*(x19_2 + 0x1c0))
        *(x19_2 + 0x1c0) = x8_19.d + 1
        *(x19_2 + x8_19 * 0x1c) = 4
        int64_t x8_21 = sx.q(*(x19_2 + 0x1c0))
        *(x19_2 + 0x1c0) = x8_21.d + 1
        *(x19_2 + x8_21 * 0x1c) = 5
        x8_14 = sx.q(*(x19_2 + 0x1c0))
        x9_17 = 0x3f00000000000007
        goto label_c18ed4
    case 5
        v0.q = 0
        v0:8.q = 0
        __builtin_memset(entry_x8, 0, 0x1d0)
        v0.q = 0x3200000003
        *(entry_x8 + 4) = 1
        entry_x8[1].d = 0xbf800000
        entry_x8[4] = 0x3200000003
        v0 = data_71d370
        entry_x8[7] = 0x600000000
        entry_x8[0xb].d = 4
        *(entry_x8 + 0x74) = 5
        uint64_t x9_20 = *V20
        *(entry_x8 + 0xac) = 8
        entry_x8[0x12] = 0x3f00000000000007
        entry_x8[0x19] = 0x3f00000000000007
        *(entry_x8 + 0x1c4) = 9
        *(entry_x8 + 0xc) = x9_20
        *(entry_x8 + 0x28) = v0
        *(entry_x8 + 0xe4) = 9
        return 
    case 6
        v0.q = 0
        v0:8.q = 0
        *(entry_x8 + 0x1c) = zx.o(0)
        __builtin_memset(entry_x8 + 0x10c, 0, 0xc4)
        __builtin_memset(entry_x8 + 0x2c, 0, 0xe0)
        v0 = data_71d370
        entry_x8[1].d = 0x19
        entry_x8[4].d = 6
        *(entry_x8 + 0x3c) = 4
        entry_x8[0xb].d = 5
        *(entry_x8 + 0x74) = 0x3f00000000000007
        entry_x8[0x12].d = 8
        *(entry_x8 + 0x1c4) = 7
        *entry_x8 = 0x300000006
        *(entry_x8 + 0xc) = v0
        *(entry_x8 + 0xac) = 9
        return 
