// 函数: _Z13GameAppUpdatev
// 地址: 0x9a8088
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*gClient = gClientStorage
GameClientUpdate()
*gClient = 0
*gServer = gServerStorage
float v0 = *gSecondsPerUpdate * float.s(0x447a0000)
float v1

if (v0 < 0f)
    v1 = fconvert.s(-0.5f)
else
    v1 = fconvert.s(0.5f)

int64_t result = GameServerUpdate(vcvts_s32_f32(v0 + v1))
*gServer = 0
return result
