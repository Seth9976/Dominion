// 函数: ogg_page_granulepos
// 地址: 0x1095c28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *arg1
int64_t x12_1 = (-0xffffff01 & zx.q(*(x8 + 0xa))) | (0xffffff &
    ((-0xffff01 & zx.q(*(x8 + 0xb))) | (zx.q(*(x8 + 0xc)) | zx.q((zx.q(*(x8 + 0xd)) << 8).w)) << 8))
    << 8
int64_t result = zx.q(*(x8 + 6)) | (0xffffffffffffff & (zx.q(*(x8 + 7)) | (0xffffffffffffff & (
    zx.q(*(x8 + 8))
    | (0xffffffffffffff & (zx.q(*(x8 + 9)) | (0xffffffffffffff & x12_1) << 8)) << 8)) << 8)) << 8
return result
