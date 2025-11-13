// 函数: _Z20Draw3DSetRTInversionb
// 地址: 0xc95a34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = arg1.d & 1

if (zx.d(*(gDraw3DData + 0x430)) == x9)
    return 

*(gDraw3DData + 0x430) = x9.b
return Draw3DSetCameraFrustum(gDraw3DData + 0x3c) __tailcall
