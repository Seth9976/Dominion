// 函数: _Z7GameEndv
// 地址: 0x9ae93c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
int32_t x21 = *(x0 + 0x5068)
int64_t result = GameSpecific_End()

if (x21 != 2)
    result = LocalGameDispose(x0 + 0x50a8)

*(x0 + 0x5068) = 0
return result
