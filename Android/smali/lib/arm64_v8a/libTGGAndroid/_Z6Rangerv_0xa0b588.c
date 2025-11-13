// 函数: _Z6Rangerv
// 地址: 0xa0b588
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Buy(1, 0)
FlipToken(0xb01, 0)
int64_t result = TokenIsFaceup(0xb01)

if ((result.d & 1) == 0)
    return result

NotifyResult(1)
return Card(5, 0, 0, nullptr) __tailcall
