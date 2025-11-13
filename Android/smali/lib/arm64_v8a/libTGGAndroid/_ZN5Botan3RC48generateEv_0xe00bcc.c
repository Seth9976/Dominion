// 函数: _ZN5Botan3RC48generateEv
// 地址: 0xe00bcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if (*(entry_x0 + 0x38) != *(entry_x0 + 0x30))
    int64_t i = 0
    
    do
        int64_t x10_1 = *(entry_x0 + 0x18)
        void* x9_1 = zx.q(*(entry_x0 + 0x10)) + x10_1
        char x12_1 = *(x9_1 + 1)
        char x11_2 = *(entry_x0 + 0x11) + x12_1
        *(entry_x0 + 0x11) = x11_2
        char x10_2 = *(x10_1 + zx.q(x11_2))
        *(x9_1 + 1) = x10_2
        *(*(entry_x0 + 0x18) + zx.q(*(entry_x0 + 0x11))) = x12_1
        (*(entry_x0 + 0x30))[i] = *(*(entry_x0 + 0x18) + zx.q(x10_2 + x12_1))
        int64_t x10_5 = *(entry_x0 + 0x18)
        void* x9_6 = zx.q(*(entry_x0 + 0x10)) + x10_5
        char x12_2 = *(x9_6 + 2)
        char x11_7 = *(entry_x0 + 0x11) + x12_2
        *(entry_x0 + 0x11) = x11_7
        char x10_6 = *(x10_5 + zx.q(x11_7))
        *(x9_6 + 2) = x10_6
        *(*(entry_x0 + 0x18) + zx.q(*(entry_x0 + 0x11))) = x12_2
        *(*(entry_x0 + 0x30) + i + 1) = *(*(entry_x0 + 0x18) + zx.q(x10_6 + x12_2))
        int64_t x10_10 = *(entry_x0 + 0x18)
        void* x9_11 = zx.q(*(entry_x0 + 0x10)) + x10_10
        char x12_3 = *(x9_11 + 3)
        char x11_12 = *(entry_x0 + 0x11) + x12_3
        *(entry_x0 + 0x11) = x11_12
        char x10_11 = *(x10_10 + zx.q(x11_12))
        *(x9_11 + 3) = x10_11
        *(*(entry_x0 + 0x18) + zx.q(*(entry_x0 + 0x11))) = x12_3
        *(*(entry_x0 + 0x30) + i + 2) = *(*(entry_x0 + 0x18) + zx.q(x10_11 + x12_3))
        int64_t x10_15 = *(entry_x0 + 0x18)
        char x11_16 = *(entry_x0 + 0x11)
        char x9_16 = *(entry_x0 + 0x10) + 4
        *(entry_x0 + 0x10) = x9_16
        uint64_t x9_17 = zx.q(x9_16)
        char x12_4 = *(x10_15 + x9_17)
        char x11_17 = x11_16 + x12_4
        *(entry_x0 + 0x11) = x11_17
        char x11_19 = *(x10_15 + zx.q(x11_17))
        *(x10_15 + x9_17) = x11_19
        *(*(entry_x0 + 0x18) + zx.q(*(entry_x0 + 0x11))) = x12_4
        *(*(entry_x0 + 0x30) + i + 3) = *(*(entry_x0 + 0x18) + zx.q(x11_19 + x12_4))
        i += 4
    while (i != *(entry_x0 + 0x38) - *(entry_x0 + 0x30))

*(entry_x0 + 0x48) = 0
