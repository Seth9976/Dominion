// 函数: _Z13UIStateReloadRjP6XAsset
// 地址: 0xf5d404
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result = zx.q(*arg1)

if (result.d != 0)
    result = UIStateAsset(result.d)
    
    if (result != arg2)
        UIStateDestroy(*arg1)
        result = UIStateLoad(arg2)
        *arg1 = result.d
else if (arg2 != 0)
    result = UIStateLoad(arg2)
    *arg1 = result.d

return result
