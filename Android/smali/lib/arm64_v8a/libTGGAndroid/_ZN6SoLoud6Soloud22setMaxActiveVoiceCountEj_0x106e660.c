// 函数: _ZN6SoLoud6Soloud22setMaxActiveVoiceCountEj
// 地址: 0x106e660
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t entry_x1

if (entry_x1 - 1 u> 0x3fe)
    return 1

void* x19 = arg1
SoLoud::Soloud::lockAudioMutex_internal()
void* x0_1 = *(x19 + 0x70)
*(x19 + 0x30) = entry_x1

if (x0_1 != 0)
    operator delete[](x0_1)

void* x0_2 = *(x19 + 0x90)

if (x0_2 != 0)
    operator delete[](x0_2)

uint64_t x22 = zx.q(entry_x1 << 1)
uint64_t x21 = zx.q(entry_x1)
*(x19 + 0x70) = operator new[](x22 << 3)
*(x19 + 0x90) = operator new[](x21 << 3)
SoLoud::AlignedFloatBuffer::init(x19.d + 0x78)
int64_t x8 = 0
int64_t x9 = 0

do
    int64_t x12_1 = x8 & 0xfffff000
    x8 += 0x1000
    *(*(x19 + 0x70) + (x9 << 3)) = *(x19 + 0x78) + (x12_1 << 2)
    x9 += 1
while (x22 != x9)

int64_t x8_1 = 0

do
    *(*(x19 + 0x90) + (x8_1 << 3)) = 0
    x8_1 += 1
while (x21 != x8_1)

*(x19 + 0x21e50) = 1
SoLoud::Soloud::unlockAudioMutex_internal()
return 0
