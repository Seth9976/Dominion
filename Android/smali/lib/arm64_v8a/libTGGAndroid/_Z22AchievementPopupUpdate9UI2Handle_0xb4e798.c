// 函数: _Z22AchievementPopupUpdate9UI2Handle
// 地址: 0xb4e798
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t result

if (*(gDomClient + 0x84418) s< 1)
    result = zx.q(data_1817330)
    
    if (result.d == 0)
        return result
else
    result = zx.q(*(gDomClient + 0x8437c))
    data_1817330 = result.d
    
    if (result.d == 0)
        return result

return DeclareAchievement(zx.q(arg1), DomDefGet(result, 0x18), true) __tailcall
