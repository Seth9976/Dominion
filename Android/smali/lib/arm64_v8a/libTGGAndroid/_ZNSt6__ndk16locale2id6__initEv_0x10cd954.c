// 函数: _ZNSt6__ndk16locale2id6__initEv
// 地址: 0x10cd954
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
int32_t x9_2
int32_t i

do
    x9_2 = __ldaxr(std::__ndk1::locale::id::__next_id) + 1
    i = __stlxr(x9_2, std::__ndk1::locale::id::__next_id)
while (i != 0)
void* entry_x0
*(entry_x0 + 8) = x9_2
