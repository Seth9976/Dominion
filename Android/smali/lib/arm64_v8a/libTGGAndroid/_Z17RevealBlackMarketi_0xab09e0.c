// 函数: _Z17RevealBlackMarketi
// 地址: 0xab09e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardID* entry_x8
*(entry_x8 + 0xc80) = 0
void* x0 = DomGetContext()
DomGame* x20 = *(x0 + 8)
int32_t x0_2 = BoardPileWhere(x20, 0x1301)
int32_t var_ce8[0x320]
int64_t result = CardsWhere(x20, 0xffffffff, zx.q(x0_2), &var_ce8)
int32_t var_68 = result.d

if (result.d == 0)
    return result

struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<RevealBlackMarket(int32_t)::$_0, std::__ndk1::allocator<RevealBlackMarket(int32_t)::$_0>, bool (CardID)>::VTable
    * const var_d20 = &_vtable_for_std::__ndk1::__function::__func<RevealBlackMarket(int32_t)::$_0, std::__ndk1::allocator<RevealBlackMarket(int32_t)::$_0>, bool (CardID)>{for `std::__ndk1::__function::__base<bool (CardID)>'}
DomGame* var_d18_1 = x20
struct std::__ndk1::__function::__base<bool (CardID)>::std::__ndk1::__function::__func<RevealBlackMarket(int32_t)::$_0, std::__ndk1::allocator<RevealBlackMarket(int32_t)::$_0>, bool (CardID)>::VTable
    * const* var_d00_1 = &var_d20
FilterCards(&var_d20, &var_ce8, nullptr)

if (&var_d20 == var_d00_1)
    (*var_d00_1)->vFunc_4()
else if (var_d00_1 != 0)
    (*var_d00_1)->j_operator delete()

int32_t var_da0

if (arg1 s>= 1)
    int32_t x25_1 = 0
    
    do
        int32_t x1_2 = var_68
        
        if (x1_2 == 0)
            int32_t var_d88
            var_d88.q = 0
            int32_t var_d90_1 = 0
            int32_t var_d98_1 = 0
            int32_t var_da0_1 = 0
            NotifyEffect(x20, 0x1d, 0xffffffff, 0, zx.q(x0_2), 0, 0, 0)
            int32_t var_d98_2 = 0
            var_da0 = 0
            NotifyLog(x20, 4, zx.q(*(x0 + 0x18)), 0, nullptr, 0, 0x1301, 0)
            int32_t x0_13 = CardsWhere(x20, 0xffffffff, zx.q(x0_2), &var_ce8)
            var_68 = x0_13
            
            if (x0_13 == 0)
                break
            
            int32_t (* x24_2)[0x320] = &var_ce8
            int64_t i_1 = sx.q(x0_13) << 2
            int64_t i
            
            do
                uint64_t x1_5 = zx.q(*x24_2)
                x24_2 = &(*x24_2)[1]
                MarkFateDiscarded(x20, x1_5, false)
                i = i_1
                i_1 -= 4
            while (i != 4)
            x1_2 = var_68
            
            if (x1_2 == 0)
                break
        
        int32_t x24_1 = var_ce8[sx.q(GameRandom(x20, x1_2))]
        operator+=(entry_x8, zx.q(x24_1))
        operator-=(&var_ce8, zx.q(x24_1))
        x25_1 += 1
    while (x25_1 != arg1)

int64_t x5_1 = zx.q(*(entry_x8 + 0xc80))

if (x5_1.d s>= 1)
    int64_t x23_1 = 0
    
    do
        int64_t x25_2 = x23_1 << 2
        int32_t var_d78_1 = 0
        int64_t var_d80_1 = 0
        int32_t var_d88_1 = 0
        int32_t var_d90_2 = 0
        int32_t var_d98_3 = *(x0 + 0x48)
        var_da0.q = *(x0 + 0x40)
        MoveCardTo(x20, zx.q(*(x0 + 0x18)), zx.q(*(entry_x8 + x25_2)), zx.q(x0_2), 0, 0x3ee, 0, 
            0xffffffff)
        *(CardGet(x20, zx.q(*(entry_x8 + x25_2))) + 0x34) = 0xffffffff
        x5_1 = sx.q(*(entry_x8 + 0xc80))
        x23_1 += 1
    while (x23_1 s< x5_1)

int32_t var_d98_4 = 0
int32_t var_da0_2 = 0
NotifyLog(x20, 0x2d, zx.q(*(x0 + 0x18)), 0, entry_x8, x5_1, 1, 0)
int32_t var_54 = 0xb
uint64_t x7_1 = zx.q(*(entry_x8 + 0xc80))
uint64_t x1_8 = zx.q(*(x0 + 0x18))
int128_t var_d70
__builtin_memset(&var_d70, 0, 0x48)
var_da0_2.q = 0
return TriggerEvents(x20, x1_8, &var_54, 1, &var_d70, 0, entry_x8, x7_1)
