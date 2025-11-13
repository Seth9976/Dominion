// 函数: _ZN6SoLoud6Soloud16createVoiceGroupEv
// 地址: 0x10784c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SoLoud::Soloud::lockAudioMutex_internal()
void* entry_x0
uint64_t x22 = zx.q(*(entry_x0 + 0x20e48))

if (x22.d != 0)
    int64_t* x23_1 = *(entry_x0 + 0x20e40)
    int64_t x20_1 = 0
    
    do
        if (x23_1[x20_1] == 0)
            x23_1[x20_1] = operator new[](0x44)
            int32_t* x8_8 = (*(entry_x0 + 0x20e40))[x20_1]
            
            if (x8_8 == 0)
                goto label_107864c
            
            *x8_8 = 0x10
            *(*(*(entry_x0 + 0x20e40) + (x20_1 << 3)) + 4) = 0
            SoLoud::Soloud::unlockAudioMutex_internal()
            return zx.q(x20_1.d) | 0xfffff000
        
        x20_1 += 1
    while (x20_1 u< x22)

int32_t x8_2

if (x22.d == 0 || x22.d == 0)
    x22 = 0
    x8_2 = 4
else
    x8_2 = x22.d
    
    if (x22.d == 0x1000)
    label_107864c:
        SoLoud::Soloud::unlockAudioMutex_internal()
        return 0

uint64_t x23_2 = zx.q(x8_2 << 1)
*(entry_x0 + 0x20e48) = x23_2.d
void* x0_1
int128_t v0
int128_t v1
x0_1, v0, v1 = operator new[](x23_2 << 3)

if (x22.d != 0)
    void* x9_1 = *(entry_x0 + 0x20e40)
    uint64_t x8_3 = zx.q(x22.d)
    uint64_t x10_1
    
    if (x22.d u>= 4)
        x10_1 = x8_3 << 3
    
    int64_t i_4
    
    if (x22.d u>= 4 && (x0_1 u>= x9_1 + x10_1 || x0_1 + x10_1 u<= x9_1))
        i_4 = x8_3 & 0xfffffffc
        void* x11_4 = x9_1 + 0x10
        void* x12_1 = x0_1 + 0x10
        int64_t i_3 = i_4
        int64_t i
        
        do
            v0 = *(x11_4 - 0x10)
            v1 = *x11_4
            x11_4 += 0x20
            i = i_3
            i_3 -= 4
            *(x12_1 - 0x10) = v0
            *x12_1 = v1
            x12_1 += 0x20
        while (i != 4)
        
        if (i_4 != x8_3)
            goto label_1078574
    else
        i_4 = 0
    label_1078574:
        int64_t x11_2 = i_4 << 3
        int64_t* x9_2 = x9_1 + x11_2
        int64_t* x11_3 = x0_1 + x11_2
        int64_t i_2 = x8_3 - i_4
        int64_t i_1
        
        do
            int64_t x10_3 = *x9_2
            x9_2 = &x9_2[1]
            i_1 = i_2
            i_2 -= 1
            *x11_3 = x10_3
            x11_3 = &x11_3[1]
        while (i_1 != 1)

if (x22.d u< x23_2.d)
    memset(x0_1 + (zx.q(x22.d) << 3), 0, (zx.q(x23_2.d + not.d(x22.d)) << 3) + 8)

void* x0_3 = *(entry_x0 + 0x20e40)

if (x0_3 != 0)
    operator delete[](x0_3)

*(entry_x0 + 0x20e40) = x0_1
int64_t* x0_4 = operator new[](0x44)
*(x0_1 + (zx.q(x22.d) << 3)) = x0_4
*x0_4 = 0x10
SoLoud::Soloud::unlockAudioMutex_internal()
return zx.q(x22.d) | 0xfffff000
