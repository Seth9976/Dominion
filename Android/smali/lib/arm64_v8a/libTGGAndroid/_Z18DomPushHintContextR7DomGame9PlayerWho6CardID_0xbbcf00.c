// 函数: _Z18DomPushHintContextR7DomGame9PlayerWho6CardID
// 地址: 0xbbcf00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
int64_t x9 = sx.q(*(x0_1 + 0x13000))
int32_t* result = x0_1 + x9 * 0x98
*(x0_1 + 0x13000) = x9.d + 1
result[6] = arg2
result[7] = arg3
*result = 6
*(result + 8) = arg1
result[8] = 0
return result
