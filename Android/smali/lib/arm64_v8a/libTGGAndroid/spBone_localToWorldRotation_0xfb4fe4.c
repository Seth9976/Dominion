// 函数: spBone_localToWorldRotation
// 地址: 0xfb4fe4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float cosp
float sinp
sincosf(&sinp, &cosp, (arg2 - (*(arg1 + 0x30) - *(arg1 + 0x3c))) * float.s(0x3c8efa35))
float cosp_1 = cosp
float sinp_1 = sinp
float y = *(arg1 + 0x70) * cosp_1
return atan2f(y + *(arg1 + 0x74) * sinp_1, *(arg1 + 0x64) * cosp_1 + sinp_1 * *(arg1 + 0x68), y)
    * float.s(0x42652ee0)
