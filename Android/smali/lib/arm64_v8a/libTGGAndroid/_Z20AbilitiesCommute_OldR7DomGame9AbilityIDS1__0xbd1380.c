// 函数: _Z20AbilitiesCommute_OldR7DomGame9AbilityIDS1_
// 地址: 0xbd1380
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x23 = arg2 & 0x30
int64_t x24 = arg3 & 0x30
int32_t x0_104
int32_t x0_106

if (x23 != 0x30 && x24 != 0x30)
    int64_t x21_1 = arg2 & 0xffffffff
    int64_t x20_1 = arg3 & 0xffffffff
    int32_t x0 = AbilitySource(arg1, x21_1)
    int32_t x0_2 = AbilitySource(arg1, x20_1)
    uint64_t result = 0
    int32_t x0_4
    int32_t x0_6
    
    if (x0 != 0xf17 && x0_2 != 0xf17)
        x0_4 = AbilitySource(arg1, x21_1)
        x0_6 = AbilitySource(arg1, x20_1)
        result = 0
    
    if (x0 == 0xf17 || x0_2 == 0xf17 || x0_4 == 0xb0a || x0_6 == 0xb0a)
        return result
    
    int32_t x0_8 = AbilitySource(arg1, x21_1)
    int32_t x0_10 = AbilitySource(arg1, x20_1)
    
    if ((x0_8 == 0xe2e && x0_10 == 0xd4a) || (x0_8 == 0xd4a && x0_10 == 0xe2e))
        return 0
    
    int32_t x0_12 = AbilitySource(arg1, x21_1)
    int32_t x0_14 = AbilitySource(arg1, x20_1)
    
    if ((x0_12 == 0x60d && x0_14 == 0x608) || (x0_12 == 0x608 && x0_14 == 0x60d))
        return 0
    
    int32_t x0_16 = AbilitySource(arg1, x21_1)
    int32_t x0_18 = AbilitySource(arg1, x20_1)
    
    if ((x0_16 == 0x416 && x0_18 == 0x50c) || (x0_16 == 0x50c && x0_18 == 0x416))
        return 0
    
    int32_t x0_20 = AbilitySource(arg1, x21_1)
    int32_t x0_22 = AbilitySource(arg1, x20_1)
    
    if ((x0_20 == 0x416 && x0_22 == 0xb28) || (x0_20 == 0xb28 && x0_22 == 0x416))
        return 0
    
    int32_t x0_24 = AbilitySource(arg1, x21_1)
    int32_t x0_26 = AbilitySource(arg1, x20_1)
    
    if ((x0_24 == 0x416 && x0_26 == 0xf2a) || (x0_24 == 0xf2a && x0_26 == 0x416))
        return 0
    
    int32_t x0_28 = AbilitySource(arg1, x21_1)
    int32_t x0_30 = AbilitySource(arg1, x20_1)
    
    if ((x0_28 == 0x50c && x0_30 == 0xb28) || (x0_28 == 0xb28 && x0_30 == 0x50c))
        return 0
    
    int32_t x0_32 = AbilitySource(arg1, x21_1)
    int32_t x0_34 = AbilitySource(arg1, x20_1)
    
    if ((x0_32 == 0x50c && x0_34 == 0xf2a) || (x0_32 == 0xf2a && x0_34 == 0x50c))
        return 0
    
    int32_t x0_36 = AbilitySource(arg1, x21_1)
    int32_t x0_38 = AbilitySource(arg1, x20_1)
    
    if ((x0_36 == 0xb28 && x0_38 == 0xf2a) || (x0_36 == 0xf2a && x0_38 == 0xb28))
        return 0
    
    int32_t x0_40 = AbilitySource(arg1, x21_1)
    int32_t x0_42 = AbilitySource(arg1, x20_1)
    
    if ((x0_40 == 0x909 && x0_42 == 0x92b) || (x0_40 == 0x92b && x0_42 == 0x909))
        return 0
    
    int32_t x0_44 = AbilitySource(arg1, x21_1)
    int32_t x0_46 = AbilitySource(arg1, x20_1)
    
    if ((x0_44 == 0x811 && x0_46 == 0xe00) || (x0_44 == 0xe00 && x0_46 == 0x811))
        return 0
    
    int32_t x0_48 = AbilitySource(arg1, x21_1)
    int32_t x0_50 = AbilitySource(arg1, x20_1)
    
    if ((x0_48 == 0xb07 && x0_50 == 0xb09) || (x0_48 == 0xb09 && x0_50 == 0xb07))
        return 0
    
    int32_t x0_52 = AbilitySource(arg1, x21_1)
    int32_t x0_54 = AbilitySource(arg1, x20_1)
    
    if ((x0_52 == 0xb07 && x0_54 == 0x419) || (x0_52 == 0x419 && x0_54 == 0xb07))
        return 0
    
    int32_t x0_56 = AbilitySource(arg1, x21_1)
    int32_t x0_58 = AbilitySource(arg1, x20_1)
    
    if ((x0_56 == 0xb07 && x0_58 == 0xb1d) || (x0_56 == 0xb1d && x0_58 == 0xb07))
        return 0
    
    int32_t x0_60 = AbilitySource(arg1, x21_1)
    int32_t x0_62 = AbilitySource(arg1, x20_1)
    
    if ((x0_60 == 0xb07 && x0_62 == 0x40a) || (x0_60 == 0x40a && x0_62 == 0xb07))
        return 0
    
    int32_t x0_64 = AbilitySource(arg1, x21_1)
    int32_t x0_66 = AbilitySource(arg1, x20_1)
    
    if ((x0_64 == 0xb07 && x0_66 == 0xd08) || (x0_64 == 0xd08 && x0_66 == 0xb07))
        return 0
    
    int32_t x0_68 = AbilitySource(arg1, x21_1)
    int32_t x0_70 = AbilitySource(arg1, x20_1)
    
    if ((x0_68 == 0xb07 && x0_70 == 0xd18) || (x0_68 == 0xd18 && x0_70 == 0xb07))
        return 0
    
    int32_t x0_72 = AbilitySource(arg1, x21_1)
    int32_t x0_74 = AbilitySource(arg1, x20_1)
    
    if ((x0_72 == 0xb07 && x0_74 == 0xd15) || (x0_72 == 0xd15 && x0_74 == 0xb07))
        return 0
    
    int32_t x0_76 = AbilitySource(arg1, x21_1)
    int32_t x0_78 = AbilitySource(arg1, x20_1)
    
    if ((x0_76 == 0xb07 && x0_78 == 0xf0f) || (x0_76 == 0xf0f && x0_78 == 0xb07))
        return 0
    
    int32_t x0_80 = AbilitySource(arg1, x21_1)
    int32_t x0_82 = AbilitySource(arg1, x20_1)
    
    if ((x0_80 == 0xb07 && x0_82 == 0xf0e) || (x0_80 == 0xf0e && x0_82 == 0xb07))
        return 0
    
    int32_t x0_84 = AbilitySource(arg1, x21_1)
    int32_t x0_86 = AbilitySource(arg1, x20_1)
    
    if ((x0_84 == 0xb07 && x0_86 == 0xc0e) || (x0_84 == 0xc0e && x0_86 == 0xb07))
        return 0
    
    int32_t x0_88 = AbilitySource(arg1, x21_1)
    int32_t x0_90 = AbilitySource(arg1, x20_1)
    
    if ((x0_88 == 0xb07 && x0_90 == 0x417) || (x0_88 == 0x417 && x0_90 == 0xb07))
        return 0
    
    int32_t x0_92 = AbilitySource(arg1, x21_1)
    int32_t x0_94 = AbilitySource(arg1, x20_1)
    
    if ((x0_92 == 0xb07 && x0_94 == 0x130a) || (x0_92 == 0x130a && x0_94 == 0xb07))
        return 0
    
    int32_t x0_96 = AbilitySource(arg1, x21_1)
    int32_t x0_98 = AbilitySource(arg1, x20_1)
    
    if ((x0_96 == 0xb07 && x0_98 == 0xf17) || (x0_96 == 0xf17 && x0_98 == 0xb07))
        return 0
    
    int32_t x0_100 = AbilitySource(arg1, x21_1)
    int32_t x0_102 = AbilitySource(arg1, x20_1)
    
    if (x0_100 == 0xb07 && x0_102 == 0xd2f)
        return 0
    
    if (x0_100 == 0xd2f && x0_102 == 0xb07)
        return 0
    
    x0_104 = AbilitySource(arg1, x21_1)
    x0_106 = AbilitySource(arg1, x20_1)

int32_t x8_4
int32_t x9_1

if (x23 != 0x30 && x24 != 0x30 && (x0_104 != 0x80d || x0_106 != 0x810))
    x8_4 = x0_106 == 0x80d ? 1 : 0
    x9_1 = x0_104 == 0x810 ? 1 : 0
else
    x8_4 = x24 != 0x30 ? 1 : 0
    x9_1 = x23 != 0x30 ? 1 : 0

return (zx.q(x9_1) & zx.q(x8_4)) ^ 1
