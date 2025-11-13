// 函数: _Z16SoundOggReadBitsP13SoundInstanceiPhi
// 地址: 0xfa9874
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21 = *(arg1 + 0x68)
int32_t i = arg4
uint8_t* x20 = arg3

if (x21 == 0)
    SoundOggReaderOpen(arg1)
    x21 = *(arg1 + 0x68)

int32_t x22_1 = arg2 s/ (*(ov_info(x21, 0xffffffff) + 4) << 1)
int64_t result = ov_pcm_tell(x21)

if (x22_1 != result.d)
    result = ov_pcm_seek(x21, sx.q(x22_1))

if (i s>= 1)
    do
        void var_34
        result = ov_read(x21, x20, zx.q(i), 0, 2, 1, &var_34)
        i -= result.d
        x20 = &x20[sx.q(result.d)]
    while (i s> 0)

return result
