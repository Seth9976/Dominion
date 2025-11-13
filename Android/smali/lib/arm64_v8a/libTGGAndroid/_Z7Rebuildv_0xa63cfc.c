// 函数: _Z7Rebuildv
// 地址: 0xa63cfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
int32_t x0 = NameCardInGame(0x1f, DOMCHOICEUI_DEFAULT)
void var_cb8
memset(&var_cb8, 0, 0xc84)
int32_t i_3 = RevealDeckOne(0x3ee, 0x7e2790)
int32_t i_2 = i_3

if (i_3 != 0)
    if (x0 == 0)
        int32_t i
        
        do
            if ((CardIs(zx.q(i_2), 8) & 1) != 0)
                break
            
            operator+=(&var_cb8, zx.q(i_2))
            i = RevealDeckOne(0x3ee, 0x7e2790)
            i_2 = i
        while (i != 0)
    else
        int32_t i_1
        
        do
            if ((CardIs(zx.q(i_2), 8) & 1) != 0 && (CardIs(zx.q(i_2), zx.q(x0)) & 1) == 0)
                break
            
            operator+=(&var_cb8, zx.q(i_2))
            i_1 = RevealDeckOne(0x3ee, 0x7e2790)
            i_2 = i_1
        while (i_1 != 0)

PauseUI(true)
int64_t result = DiscardCards(&var_cb8, 0x3ee, 0xb, 7, 0)

if (i_2 == 0)
    return result

int32_t var_28 = Cost(zx.q(i_2))
Trash(zx.q(i_2), 0x3ee, 0)
return GainUpToType(zx.q(operator+(&var_28, 3)), 8, 0x77, 0x476, 0, 0xc)
