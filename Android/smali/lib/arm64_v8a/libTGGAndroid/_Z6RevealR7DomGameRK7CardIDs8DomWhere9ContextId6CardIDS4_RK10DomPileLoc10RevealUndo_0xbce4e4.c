// 函数: _Z6RevealR7DomGameRK7CardIDs8DomWhere9ContextId6CardIDS4_RK10DomPileLoc10RevealUndo
// 地址: 0xbce4e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x27 = arg8
uint64_t x7 = zx.q(*(arg2 + 0xc80))

if (x7.d == 0)
    return 

uint64_t x19_1 = zx.q(*arg2)
int32_t x23_1 = arg3

if (x19_1.d u>= 0x320)
    void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
    void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
    *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
    void* x8_4 = *(x8_3 - 0x90)
    *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
    XTrace("game thread yield (error)")
    xco_yield()
    XTrace("game thread resume (error)")
    x7 = zx.q(*(arg2 + 0xc80))

int32_t x25_1 = *(arg1 + x19_1 * 0x68 + 0x1a94)
int32_t x9_3

x9_3 = x23_1 == 0x3ea ? 2 : 1

int32_t x8_6

x8_6 = x27 == 0 ? x9_3 : x27

if (*(arg1 + 0x150c) - 3 u>= 4 && zx.d(*(arg1 + 0x1508)) == 0)
    uint64_t x2
    
    if (*(arg1 + 0x19d4) == x25_1)
        x2 = zx.q(*(arg1 + 0x19d8))
    else
        x2 = zx.q(x25_1)
    
    int32_t var_f0_1 = 0
    int32_t var_f8_1 = 0
    int64_t var_100
    var_100.d = 0
    DomAddLogEvent(arg1, zx.q(x25_1), x2, 0x2d, 0, arg2, zx.q(x7.d), zx.q(x8_6))
    x7 = zx.q(*(arg2 + 0xc80))

int128_t var_b0
__builtin_memset(&var_b0, 0, 0x48)
int32_t var_64 = 0xb
int64_t var_100_1 = 0
TriggerEvents(arg1, zx.q(x25_1), &var_64, 1, &var_b0, 0, arg2, x7)
uint64_t x21_1 = zx.q(*(arg2 + 0xc80))

if (x21_1.d s< 1)
    return 

bool cond:1_1

do
    uint64_t x22_1 = zx.q(*(arg2 - 4 + (x21_1 << 2)))
    
    if (x22_1.d u>= 0x320)
        void* x0_6 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_14 = x0_6 + sx.q(*(x0_6 + 0x13000)) * 0x98
        *(*(x8_14 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_15 = *(x8_14 - 0x90)
        *(x8_15 + 0x1a2c) = *(x8_15 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    if (*(arg1 + x22_1 * 0x68 + 0x1a94) != x25_1)
        void* x0_8 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_20 = x0_8 + sx.q(*(x0_8 + 0x13000)) * 0x98
        *(*(x8_20 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_21 = *(x8_20 - 0x90)
        *(x8_21 + 0x1a2c) = *(x8_21 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    int32_t var_f8_2 = arg5
    int32_t var_d8_1 = 0
    int64_t var_e0_1 = 0
    int32_t var_e8_1 = 0
    int32_t var_f0_2 = 0
    int64_t var_100_2 = arg4
    MoveCardTo(arg1, zx.q(x25_1), zx.q(*(arg2 - 4 + (x21_1 << 2))), zx.q(x23_1), 0xd, zx.q(arg6), 
        0, *arg7)
    cond:1_1 = x21_1 s<= 1
    x21_1 -= 1
while (not(cond:1_1))
