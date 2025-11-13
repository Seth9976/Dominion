// 函数: _Z20AttachmentMoveObjectR16AttachmentObjectRK4Vec3RK4Vec4
// 地址: 0xfd3024
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg1 != 2)
    return XTrace("Unknown attachment type") __tailcall

int64_t x11 = *arg2
void* x8_3 = ***gpGameData + zx.q(*(arg1 + 4)) * 0x98
*(x8_3 + 0x18) = *(arg2 + 8)
*(x8_3 + 0x10) = x11
*(x8_3 + 0x1c) = *arg3
