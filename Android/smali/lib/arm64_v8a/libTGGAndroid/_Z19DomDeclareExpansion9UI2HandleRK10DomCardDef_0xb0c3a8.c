// 函数: _Z19DomDeclareExpansion9UI2HandleRK10DomCardDef
// 地址: 0xb0c3a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_14
int64_t result = DomCardExp(zx.q(*(arg2 + 0xc0)), &var_14)
uint64_t x8_1 = zx.q(result.d - 1)

if (x8_1.d u> 0x14)
    pthread_kill(pthread_self(), 6)
    return IsEstateInheritance(XNoReturn()) __tailcall

int32_t x8_2
int64_t (* x9_1)()
int64_t (* x10_1)()

switch (x8_1)
    case 0, 1
        x8_2 = *arg2
        x9_1 = UIS_EXP_DOMINION
        x10_1 = UIS_EXP_DOMINION_1E
    case 2
        x8_2 = *arg2
        x9_1 = UIS_EXP_INTRIGUE
        x10_1 = UIS_EXP_INTRIGUE_1E
    case 3
        x8_2 = *arg2
        x9_1 = UIS_EXP_SEASIDE
        x10_1 = UIS_EXP_SEASIDE_1E
    case 4
        return UI2SetState(zx.q(arg1), UIS_EXP_ALCHEMY, 0xffffffff, 0)
    case 5
        x8_2 = *arg2
        x9_1 = UIS_EXP_PROSPERITY
        x10_1 = UIS_EXP_PROSPERITY_1E
    case 6
        x8_2 = *arg2
        x9_1 = UIS_EXP_CORNUCOPIA
        x10_1 = UIS_EXP_CORNUCOPIA_1E
    case 7
        x8_2 = *arg2
        x9_1 = UIS_EXP_HINTERLANDS
        x10_1 = UIS_EXP_HINTERLANDS_1E
    case 8
        return UI2SetState(zx.q(arg1), UIS_EXP_DARK_AGES, 0xffffffff, 0)
    case 9
        x8_2 = *arg2
        x9_1 = UIS_EXP_GUILDS
        x10_1 = UIS_EXP_GUILDS_1E
    case 0xa
        return UI2SetState(zx.q(arg1), UIS_EXP_ADVENTURES, 0xffffffff, 0)
    case 0xb
        return UI2SetState(zx.q(arg1), UIS_EXP_EMPIRES, 0xffffffff, 0)
    case 0xc
        return UI2SetState(zx.q(arg1), UIS_EXP_NOCTURNE, 0xffffffff, 0)
    case 0xd
        return UI2SetState(zx.q(arg1), UIS_EXP_RENAISSANCE, 0xffffffff, 0)
    case 0xe
        return UI2SetState(zx.q(arg1), UIS_EXP_MENAGERIE, 0xffffffff, 0)
    case 0xf
        return UI2SetState(zx.q(arg1), UIS_EXP_ALLIES, 0xffffffff, 0)
    case 0x10
        return UI2SetState(zx.q(arg1), UIS_EXP_PLUNDER, 0xffffffff, 0)
    case 0x11
        return UI2SetState(zx.q(arg1), UIS_EXP_RISING_SUN, 0xffffffff, 0)
    case 0x12
        return UI2SetState(zx.q(arg1), UIS_EXP_PROMO, 0xffffffff, 0)
    case 0x13
        return UI2SetState(zx.q(arg1), UIS_EXP_CATEGORY, 0xffffffff, 0)
    case 0x14
        return result

if (x8_2 == 1)
    return UI2SetState(zx.q(arg1), x10_1, 0xffffffff, 0)

return UI2SetState(zx.q(arg1), x9_1, 0xffffffff, 0)
