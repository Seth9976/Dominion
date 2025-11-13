// 函数: _Z21FlanimCompressGetVec2P19DefMayaFlanimVertexii
// 地址: 0xf66c68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 u> 3)
    pthread_kill(pthread_self(), 6)
    DefFlanim* x0_1
    XAsset* x1
    x0_1, x1 = XNoReturn()
    return FlanimGetOrAddImage(x0_1, x1) __tailcall

int64_t x8 = *arg1
int64_t x9_1 = sx.q(arg2)
int128_t v0
int128_t v1

switch (arg3)
    case 0
        int32_t* x8_1 = x8 + x9_1 * 0x38
        v1.d = x8_1[1]
        v0.d = *x8_1
        return 
    case 1
        void* x9_5 = x8 + x9_1 * 0x38
        v1.d = *(x9_5 + 0xc)
        v0.d = *(x9_5 + 8)
        return 
    case 2
        void* x9_3 = x8 + x9_1 * 0x38
        v1.d = *(x9_3 + 0x14)
        v0.d = *(x9_3 + 0x10)
        return 
    case 3
        void* x9_7 = x8 + x9_1 * 0x38
        v1.d = *(x9_7 + 0x1c)
        v0.d = *(x9_7 + 0x18)
        return 
