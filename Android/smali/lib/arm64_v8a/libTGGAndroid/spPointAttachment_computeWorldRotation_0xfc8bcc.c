// 函数: spPointAttachment_computeWorldRotation
// 地址: 0xfc8bcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float cosp
float sinp
sincosf(&sinp, &cosp, *(arg1 + 0x30) * float.s(0x3c8efa35))
float cosp_1 = cosp
float sinp_1 = sinp
float y = *(arg2 + 0x64) * cosp_1
return atan2f(cosp_1 * *(arg2 + 0x70) + sinp_1 * *(arg2 + 0x74), y + sinp_1 * *(arg2 + 0x68), y)
    * float.s(0x42652ee0)
