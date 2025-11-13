// 函数: _Z18VPBannerStringArgsR7DomGame9PlayerWho11DomCardEnumRiS3_S3_
// 地址: 0xc00810
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = LookupBannerDef(zx.q(arg3))

if (result != 0)
    jump(*(result + 8))

*arg4 = 0
*arg5 = 0
*arg6 = 0
return result
