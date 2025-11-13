// 函数: _Z14TryAddPileIconR6DomGfxRK11PodIconInfoRK14DomArrowSourcei12DomArrowTypeRK16PodIconInfoEntry
// 地址: 0xba9d5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg6
int64_t x9 = *(arg6 + 4)

if (x8.d s< x9.d)
    do
        void* x11_1 = *(arg2 + 0x1008 + (x8 << 3))
        
        if (*(x11_1 + 0x2c) == 7 && *(x11_1 + 0x220) == arg5)
            return 
        
        x8 += 1
    while (x8 s< x9)

return PileAddTokenSlot(DomCreateArrow(arg3, arg4, zx.q(arg5)), arg1, arg4) __tailcall
