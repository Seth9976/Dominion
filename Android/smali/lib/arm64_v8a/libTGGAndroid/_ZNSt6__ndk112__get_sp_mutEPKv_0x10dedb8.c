// 函数: _ZNSt6__ndk112__get_sp_mutEPKv
// 地址: 0x10dedb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
uint64_t x8 = arg1 u>> 0x20
int64_t x9_3 = ((zx.q(arg1.d << 3) + 8) ^ x8) * -0x622015f714c7d297
int64_t x8_3 = (x9_3 ^ x8 ^ x9_3 u>> 0x2f) * -0x622015f714c7d297
return &(&data_11c1a08)[zx.q(((x8_3 u>> 0x2f).d ^ x8_3.d) * 0xeb382d69) & 0xf]
