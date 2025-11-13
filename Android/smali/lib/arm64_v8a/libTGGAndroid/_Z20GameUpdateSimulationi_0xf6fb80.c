// 函数: _Z20GameUpdateSimulationi
// 地址: 0xf6fb80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_1 = arg1
NetworkUpdateReceive()
InputQueueProcess()
int64_t* x0 = *gAppInterface
int32_t i_2

if (zx.d(*(x0 + 0x3a)) != 0)
    float v1_1 = float.s(i_1)
    i_2 = i_1
    i_1 = 1
    *gSecondsPerUpdate = *gSecondsPerUpdateTarget * v1_1
label_f6fc00:
    int32_t i
    
    do
        void* x8_1 = *gpGameData
        *(x8_1 + 0x44) = *gSecondsPerUpdate + *(x8_1 + 0x44)
        (*(*x0 + 0x38))()
        uint64_t x8_4 = *gpGameData
        
        if (zx.d(*(x8_4 + 0x3d)) == 0)
            *(x8_4 + 0x48) = *gSecondsPerUpdate + *(x8_4 + 0x48)
            int64_t* x0_1 = *gAppInterface
            (*(*x0_1 + 0x40))(x0_1, zx.q(i_2))
            FlanimUpdateSimulation()
            ParticleUpdateSimulation()
            MicrophoneUpdate()
            PlatformUpdateSimulation()
            NetworkUpdateSend()
        
        InputUIQueueClear()
        x0 = *gAppInterface
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (zx.d(*(x0 + 0x3a)) != 0)
        *gSecondsPerUpdate = *gSecondsPerUpdateTarget
else if (i_1 s>= 1)
    i_2 = 1
    goto label_f6fc00
int64_t result = InputUIQueueClear()

if (*gSoundInterface == 0)
    return result

return SoundUpdateAll() __tailcall
