// 函数: _Z16SoundOggReadBitsR14SoundOggReaderiPhi
// 地址: 0xfa97e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = arg4
uint8_t* x20 = arg3
int32_t x22_1 = arg2 s/ (*(ov_info(arg1, 0xffffffff) + 4) << 1)
int64_t result = ov_pcm_tell(arg1)

if (x22_1 != result.d)
    result = ov_pcm_seek(arg1, sx.q(x22_1))

if (i s>= 1)
    do
        void var_24
        result = ov_read(arg1, x20, zx.q(i), 0, 2, 1, &var_24)
        i -= result.d
        x20 = &x20[sx.q(result.d)]
    while (i s> 0)

return result
