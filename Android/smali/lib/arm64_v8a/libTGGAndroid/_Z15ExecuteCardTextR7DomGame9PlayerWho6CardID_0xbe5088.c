// 函数: _Z15ExecuteCardTextR7DomGame9PlayerWho6CardID
// 地址: 0xbe5088
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_2 = *(*(arg1 + mulu.dp.d(arg3, 0x68) + 0x1a68) + 0xd0)

if (x8_2 != 0)
    x8_2()

uint32_t x21_1 = zx.d(arg3.w)

if (x21_1 u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_5 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_5 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_6 = *(x8_5 - 0x90)
    *(x8_6 + 0x1a2c) = *(x8_6 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")

int32_t x21_2 = *(arg1 + mulu.dp.d(x21_1, 0x68) + 0x1a70)
int32_t x0_3 = PileSource(arg1, zx.q(x21_2))
int64_t x8_8 = -0x410
int32_t x3_1

while (true)
    void* x9_3 = arg1 + x8_8
    x3_1 = *(x9_3 + 0x19ac)
    
    if (x3_1 == x21_2)
        x3_1 = x21_2
        break
    
    if (x3_1 == x0_3)
        break
    
    if (*(x9_3 + 0x19b0) == x21_2)
        break
    
    int64_t temp0_1 = x8_8
    x8_8 += 0x10
    
    if (temp0_1 == -0x10)
        x3_1 = 0
        break

int64_t result = CountOngoing(arg1, zx.q(arg2), 0x21, x3_1, 0)

if (result.d s< 1)
    return result

return Durationifed_Apply() __tailcall
