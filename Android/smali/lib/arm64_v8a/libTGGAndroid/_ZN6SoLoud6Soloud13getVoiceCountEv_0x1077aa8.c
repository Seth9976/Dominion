// 函数: _ZN6SoLoud6Soloud13getVoiceCountEv
// 地址: 0x1077aa8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
int128_t v1
uint128_t v2
uint128_t v3
v0, v1, v2, v3 = SoLoud::Soloud::lockAudioMutex_internal()
void* entry_x0
uint64_t x8 = zx.q(*(entry_x0 + 0x34))
int32_t x20

if (x8.d s< 1)
    x20 = 0
else
    int64_t i_4
    
    if (x8.d u>= 4)
        i_4 = x8 & 0xfffffffc
        void* x10_1 = entry_x0 + 0xa8
        v0.q = 0
        v0:8.q = 0
        int64_t i_3 = i_4
        v1.q = 0
        v1:8.q = 0
        int64_t i
        
        do
            v2 = *(x10_1 - 0x10)
            v3 = *x10_1
            i = i_3
            i_3 -= 4
            x10_1 += 0x20
            uint128_t v2_1 = vceqzq_u64(v2, 0)
            uint128_t v3_2 = not.o(vceqzq_u64(v3, 0))
            v0 -= vmovn_s64(not.o(v2_1))
            v1 -= vmovn_s64(v3_2)
        while (i != 4)
        uint128_t v0_1 = v1 + v0
        x20 = v0_1.d + vdup_laneq_s32(v0_1, 1)
        
        if (i_4 != x8)
            goto label_1077b40
    else
        i_4 = 0
        x20 = 0
    label_1077b40:
        void* x10_3 = entry_x0 + (i_4 << 3) + 0x98
        int64_t i_2 = x8 - i_4
        int64_t i_1
        
        do
            int64_t x9_1 = *x10_3
            x10_3 += 8
            
            if (x9_1 != 0)
                x20 += 1
            
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

SoLoud::Soloud::unlockAudioMutex_internal()
return zx.q(x20)
