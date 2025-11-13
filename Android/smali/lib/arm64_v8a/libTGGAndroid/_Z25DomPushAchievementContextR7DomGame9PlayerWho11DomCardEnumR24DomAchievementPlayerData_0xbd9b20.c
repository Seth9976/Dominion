// 函数: _Z25DomPushAchievementContextR7DomGame9PlayerWho11DomCardEnumR24DomAchievementPlayerData
// 地址: 0xbd9b20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = *(__emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000)

if (x23 s>= 0x200)
    void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_1 = x0_3 + muls.dp.d(x23 - 1, 0x98)
    *(*(x8_1 + 8) + 0x1a28) = 0xffffffff
    void* x8_2 = *(x8_1 + 8)
    *(x8_2 + 0x1a2c) = *(x8_2 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x23 = *(x0_3 + 0x13000)

void* x0_5 = __emutls_get_address(__emutls_v.gContextStack_tl)
int32_t* result = x0_5 + muls.dp.d(x23, 0x98)
*(x0_5 + 0x13000) = x23 + 1
void* x9_5

if (x23 == 0)
    x9_5 = nullptr
else
    x9_5 = result - 0x98

*(result + 0x28) = arg4
*(result + 8) = arg1
*(result + 0x10) = x9_5
result[6] = arg2
result[7] = arg3
*result = 5
return result
