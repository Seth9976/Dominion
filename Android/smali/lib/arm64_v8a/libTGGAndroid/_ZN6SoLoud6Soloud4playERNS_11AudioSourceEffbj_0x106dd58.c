// 函数: _ZN6SoLoud6Soloud4playERNS_11AudioSourceEffbj
// 地址: 0x106dd58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = arg4

if ((zx.d(*(arg4 + 8)) & 2) != 0)
    SoLoud::AudioSource::stop()

void* x8_1 = *x20
x20[0xe] = arg1
int64_t* x0_2 = (*(x8_1 + 0x18))(x20)
SoLoud::Soloud::lockAudioMutex_internal()
int32_t x0_5 = SoLoud::Soloud::findFreeVoice_internal()

if ((x0_5 & 0x80000000) != 0)
    SoLoud::Soloud::unlockAudioMutex_internal()
    
    if (x0_2 != 0)
        (*(*x0_2 + 8))(x0_2)
    
    return 7

if (x20[3].d == 0)
    x20[3].d = *(arg1 + 0x20c4)
    *(arg1 + 0x20c4) += 1

*(arg1 + (zx.q(x0_5) << 3) + 0x98) = x0_2
*(x0_2 + 0x17c) = x20[3].d
int32_t entry_x3
*(*(arg1 + (zx.q(x0_5) << 3) + 0x98) + 0x180) = entry_x3
*(arg1 + 0x20c0)
SoLoud::AudioSourceInstance::init(*(arg1 + (zx.q(x0_5) << 3) + 0x98), x20.d)
SoLoud::AudioSourceInstance3dData::init(arg1 + mulu.dp.d(x0_5, 0x78) + 0x2e40)
int32_t x8_10 = *(arg1 + 0x20c0)
int32_t x8_11

if (x8_10 == 0xffffe)
    x8_11 = 0
else
    x8_11 = x8_10 + 1

*(arg1 + 0x20c0) = x8_11

if ((arg5 & 1) != 0)
    void* x8_12 = *(arg1 + (zx.q(x0_5) << 3) + 0x98)
    *(x8_12 + 0x10) |= 4

SoLoud::Soloud::setVoicePan_internal(arg1.d, arg3)
float v0_1

if (arg2 < 0f)
    v0_1 = x20[2].d
else
    v0_1 = arg2

SoLoud::Soloud::setVoiceVolume_internal(arg1.d, v0_1)
void* x8_13 = *(arg1 + (zx.q(x0_5) << 3) + 0x98)
*(x8_13 + 0x15c) = *(x8_13 + 0x18) * *(x8_13 + 0x3c)
void* x8_14 = *(arg1 + (zx.q(x0_5) << 3) + 0x98)
*(x8_14 + 0x160) = *(x8_14 + 0x1c) * *(x8_14 + 0x3c)
void* x8_15 = *(arg1 + (zx.q(x0_5) << 3) + 0x98)
*(x8_15 + 0x164) = *(x8_15 + 0x20) * *(x8_15 + 0x3c)
void* x8_16 = *(arg1 + (zx.q(x0_5) << 3) + 0x98)
*(x8_16 + 0x168) = *(x8_16 + 0x24) * *(x8_16 + 0x3c)
void* x8_17 = *(arg1 + (zx.q(x0_5) << 3) + 0x98)
*(x8_17 + 0x16c) = *(x8_17 + 0x28) * *(x8_17 + 0x3c)
void* x8_18 = *(arg1 + (zx.q(x0_5) << 3) + 0x98)
*(x8_18 + 0x170) = *(x8_18 + 0x2c) * *(x8_18 + 0x3c)
void* x8_19 = *(arg1 + (zx.q(x0_5) << 3) + 0x98)
*(x8_19 + 0x174) = *(x8_19 + 0x30) * *(x8_19 + 0x3c)
void* x8_20 = *(arg1 + (zx.q(x0_5) << 3) + 0x98)
*(x8_20 + 0x178) = *(x8_20 + 0x34) * *(x8_20 + 0x3c)
SoLoud::Soloud::setVoiceRelativePlaySpeed_internal(arg1.d, fconvert.s(1f))
int64_t* x0_11 = x20[6]

if (x0_11 != 0)
    *(*(arg1 + (zx.q(x0_5) << 3) + 0x98) + 0x188) = (*(*x0_11 + 0x28))()

int64_t* x0_13 = x20[7]

if (x0_13 != 0)
    *(*(arg1 + (zx.q(x0_5) << 3) + 0x98) + 0x190) = (*(*x0_13 + 0x28))()

int64_t* x0_15 = x20[8]

if (x0_15 != 0)
    *(*(arg1 + (zx.q(x0_5) << 3) + 0x98) + 0x198) = (*(*x0_15 + 0x28))()

int64_t* x0_17 = x20[9]

if (x0_17 != 0)
    *(*(arg1 + (zx.q(x0_5) << 3) + 0x98) + 0x1a0) = (*(*x0_17 + 0x28))()

int64_t* x0_19 = x20[0xa]

if (x0_19 != 0)
    *(*(arg1 + (zx.q(x0_5) << 3) + 0x98) + 0x1a8) = (*(*x0_19 + 0x28))()

int64_t* x0_21 = x20[0xb]

if (x0_21 != 0)
    *(*(arg1 + (zx.q(x0_5) << 3) + 0x98) + 0x1b0) = (*(*x0_21 + 0x28))()

int64_t* x0_23 = x20[0xc]

if (x0_23 != 0)
    *(*(arg1 + (zx.q(x0_5) << 3) + 0x98) + 0x1b8) = (*(*x0_23 + 0x28))()

int64_t* x0_25 = x20[0xd]

if (x0_25 != 0)
    *(*(arg1 + (zx.q(x0_5) << 3) + 0x98) + 0x1c0) = (*(*x0_25 + 0x28))()

*(arg1 + 0x21e50) = 1
SoLoud::Soloud::unlockAudioMutex_internal()
return SoLoud::Soloud::getHandleFromVoice_internal(arg1.d) __tailcall
