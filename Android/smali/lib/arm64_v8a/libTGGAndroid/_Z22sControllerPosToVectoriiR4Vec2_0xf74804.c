// 函数: _Z22sControllerPosToVectoriiR4Vec2
// 地址: 0xf74804
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float v0 = float.s(arg1)

if ((arg1 & 0x80000000) != 0)
    *arg3 = v0 * float.s(0x38000000)
    v0 = float.s(arg2)
    
    if ((arg2 & 0x80000000) != 0)
        *(arg3 + 4) = v0 * float.s(0x38000000)
        return 
else
    *arg3 = v0 / float.s(0x46fffe00)
    v0 = float.s(arg2)
    
    if ((arg2 & 0x80000000) != 0)
        *(arg3 + 4) = v0 * float.s(0x38000000)
        return 

*(arg3 + 4) = v0 / float.s(0x46fffe00)
