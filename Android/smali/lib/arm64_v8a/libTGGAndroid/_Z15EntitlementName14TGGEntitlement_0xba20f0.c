// 函数: _Z15EntitlementName14TGGEntitlement
// 地址: 0xba20f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(arg1 - 0x2000)

if (arg1 s< 0x2000)
    if (arg1 == 0)
        return "none"
    
    if (arg1 == 0x1000)
        return "tgg base"
    
    if (arg1 == 0x1001)
        return "tgg admin"
else if (x8.d u<= 0xe)
    switch (x8)
        case 0
            return "dom base"
        case 1
            return "dom universal"
        case 2
            return "intrigue"
        case 3
            return "seaside"
        case 4
            return "alchemy"
        case 5
            return "prosperity"
        case 6
            return "cornucopia"
        case 7
            return "hinterlands"
        case 8
            return "darkages"
        case 9
            return "guilds"
        case 0xa
            return "adventures"
        case 0xb
            return "empires"
        case 0xc
            return "nocturne"
        case 0xd
            return "renaissance"
        case 0xe
            return "menagerie"

return "other"
