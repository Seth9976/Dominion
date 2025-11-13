// 函数: _Z17AttachmentDestroyP10Attachment
// 地址: 0xf697e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *arg1
Attachment* x19 = arg1

if (x8 != 0)
    if (x8 == 2)
        arg1 = FlanimTryToGet(zx.q(*(x19 + 8)))
        
        if (arg1 != 0)
            FlanimDestroy(arg1)
    else
        if (x8 != 1)
            pthread_kill(pthread_self(), 6)
            XNoReturn()
            return AttachmentDisposeForGame() __tailcall
        
        arg1 = ParticleTryToGet(zx.q(*(x19 + 4)))
        
        if (arg1 != 0)
            ParticleDestroy(arg1)

void* x8_2 = *(*gpGameData + 0x28)
int32_t x10 = *(x8_2 + 0x10)
*(x8_2 + 0x10) = zx.d(*(x19 + 0x30))
*(x19 + 0x30) = x10
*(x8_2 + 0x14) -= 1
