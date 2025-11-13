// 函数: _ZN6SoLoud6Soloud7calcFFTEv
// 地址: 0x106f9dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x0 = *(entry_x0 + 8)

if (x0 != 0)
    SoLoud::Thread::lockMutex(x0)

if (zx.d(*(entry_x0 + 0x10)) != 0)
    SoLoud::AlignedFloatBuffer* x0_4
    SoLoud::AlignedFloatBuffer* x1
    uint32_t x2
    float v0_6
    float v1_1
    x0_4, x1, x2, v0_6, v1_1 = __assert2("..\..\ExternalCode\soloud\src\core\soloud.cpp", 0x902, 
        "void SoLoud::Soloud::lockAudioMutex_internal()", "!mInsideAudioThreadMutex")
    return SoLoud::Soloud::clip_internal(x0_4, x1, x2, v0_6, v1_1) __tailcall

int64_t x8_1 = 0
float var_1020[0x400]

for (int64_t i = 0; i != 0x400; )
    int32_t v0 = *(entry_x0 + 0x21a8 + i)
    void* x13_1 = &var_1020 + i
    i += 4
    void* x12_1 = &var_1020 + x8_1
    x8_1 += 8
    *(x12_1 + 4) = 0
    *x12_1 = v0
    *(x13_1 + 0x800) = 0
    *(x13_1 + 0xc00) = 0

void* x0_1 = *(entry_x0 + 8)
*(entry_x0 + 0x10) = 0

if (x0_1 != 0)
    SoLoud::Thread::unlockMutex(x0_1)

float128 v0_1
float128 v1
float128 v2
float128 v3
v0_1, v1, v2, v3 = SoLoud::FFT::fft1024(&var_1020)
int64_t i_1 = 0
void* x9 = entry_x0 + 0x25b8

do
    void* x10_1 = &var_1020 + i_1
    v0_1.d = *x10_1
    v1.d = *(x10_1 + 4)
    v0_1:4.d = *(x10_1 + 8)
    v1:4.d = *(x10_1 + 0xc)
    v0_1:8.d = *(x10_1 + 0x10)
    v1:8.d = *(x10_1 + 0x14)
    v0_1:0xc.d = *(x10_1 + 0x18)
    v1:0xc.d = *(x10_1 + 0x1c)
    i_1 += 0x40
    v2.d = *(x10_1 + 0x20)
    v3.d = *(x10_1 + 0x24)
    v2:4.d = *(x10_1 + 0x28)
    v3:4.d = *(x10_1 + 0x2c)
    v2:8.d = *(x10_1 + 0x30)
    v3:8.d = *(x10_1 + 0x34)
    v2:0xc.d = *(x10_1 + 0x38)
    v3:0xc.d = *(x10_1 + 0x3c)
    float128 v4_2 = vsqrtq_f32(vaddq_f32(vmulq_f32(v0_1, v0_1, 0), vmulq_f32(v1, v1, 0)))
    v0_1 = vsqrtq_f32(vaddq_f32(vmulq_f32(v2, v2, 0), vmulq_f32(v3, v3, 0)))
    *(x9 - 0x10) = v4_2
    *x9 = v0_1
    x9 += 0x20
while (i_1 != 0x800)

return entry_x0 + 0x25a8
