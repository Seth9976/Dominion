// 函数: _Z16AutoScrollUpdate9UI2HandleRK4Vec2
// 地址: 0xba32a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x8 = *(GetLocalSettings() + 8)
int32_t x8_1

if (x8 == 0)
    x8_1 = 0x43fa0000
else if (x8 == 3)
    x8_1 = 0x45fa0000
else
    if (x8 != 1)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return DomClientRound() __tailcall
    
    x8_1 = 0x447a0000

int64_t v8
v8.d = float.s(x8_1)
int64_t result
float v0
float v1
result, v0, v1 = UI2GetScrollPos(zx.q(x19))
float v2 = *arg2
float v3 = *(arg2 + 4)
float v6 = v2 - v0
float v5 = v3 - v1
float v4 = v8.d f* *gSecondsPerUpdate
float v7 = sqrt(v6 * v6 + v5 * v5)

if (not(v7 < v4))
    v2 = fconvert.s(1f) / v7
    v3 = v4 * v6 * v2
    v4 = v4 * v5 * v2
    v2 = v0 + v3
    v3 = v1 + v4

float var_28 = v2
float var_24 = v3
int32_t x9 = *(gDomClient + 0x2058c)

if (x9 s>= 1)
    int64_t x10_1 = *arg2
    *(gDomClient + 0x2058c) = x9 - 1
    v2 = float.s(x10_1.d)
    v3 = float.s((x10_1 u>> 0x20).d)
    var_28.q = x10_1

if (not(v0 != v2) && v1 == v3)
    return result

return UI2SetScrollPos(zx.q(x19), &var_28)
