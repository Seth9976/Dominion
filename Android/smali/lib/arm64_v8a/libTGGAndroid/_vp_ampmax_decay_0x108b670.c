// 函数: _vp_ampmax_decay
// 地址: 0x108b670
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_1 = *(arg1 + 8)
void* x10 = *(x8_1 + 0x30)
int64_t x9_1 = *(x10 + (*(arg1 + 0x40) << 3))
int64_t x9_2

if (x9_1 s< 0)
    x9_2 = x9_1 + 1
else
    x9_2 = x9_1

return vmaxnm_f32(
    vfma_f32(arg2, float.s((x9_2 u>> 1).d) / float.s(sx.d(*(x8_1 + 8))), *(x10 + 0x1394)), -9999f)
