// 函数: _Z24DomEntitlementGrantsCard14TGGEntitlement11DomCardEnum
// 地址: 0x9e3a2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2
void* x0 = EntitlementLookup(arg1)
uint64_t x8 = zx.q(*(x0 + 8))

if (x8.d u> 5)
    pthread_kill(pthread_self(), 6)
    uint64_t x0_12
    int32_t* x1_1
    x0_12, x1_1 = XNoReturn()
    return DomCardExp(x0_12, x1_1) __tailcall

int32_t x8_5
int32_t x9_3

switch (x8)
    case 0
        return 0
    case 1
        return 1
    case 2
        if (*DomDefGet(zx.q(x20), 0x18) == 1)
            return 0
        
        int32_t x9_4 = *(x0 + 0xc)
        int32_t x8_15
        
        if (x20 s< 0)
            x8_15 = x20 + 0xff
        else
            x8_15 = x20
        
        x8_5 = x8_15 s>> 8
        
        if ((x20 & 0xffffff00) != 0x100)
            if (x9_4 == 0)
                return 0
            
            if (x9_4 == x8_5)
                return 1
            
            int32_t x9_9 = *(x0 + 0x10)
            
            if (x9_9 == 0)
                return 0
            
            if (x9_9 == x8_5)
                return 1
            
            x9_3 = *(x0 + 0x14)
            
            if (x9_3 == 0)
                return 0
            
            goto label_9e3c58
        
        if (x9_4 == 0)
            return 0
        
        if (x9_4 == x8_5 || x9_4 == 2)
            return 1
        
        int32_t x9_5 = *(x0 + 0x10)
        
        if (x9_5 == 0)
            return 0
        
        if (x9_5 == x8_5 || x9_5 == 2)
            return 1
        
        int32_t x9_6 = *(x0 + 0x14)
        
        if (x9_6 == 0)
            return 0
        
        if (x9_6 == x8_5 || x9_6 == 2)
            return 1
        
        int32_t x9_7 = *(x0 + 0x18)
        
        if (x9_7 != 0)
            return zx.q(x9_7 == x8_5 ? 1 : 0) | zx.q(x9_7 == 2 ? 1 : 0)
        
        return 0
    case 3
        if (*DomDefGet(zx.q(x20), 0x18) != 1)
            return 0
        
        int32_t x9_1 = *(x0 + 0xc)
        int32_t x8_4
        
        if (x20 s< 0)
            x8_4 = x20 + 0xff
        else
            x8_4 = x20
        
        if (x9_1 == 0)
            return 0
        
        x8_5 = x8_4 s>> 8
        
        if (x9_1 == x8_5)
            return 1
        
        int32_t x9_2 = *(x0 + 0x10)
        
        if (x9_2 == 0)
            return 0
        
        if (x9_2 == x8_5)
            return 1
        
        x9_3 = *(x0 + 0x14)
        
        if (x9_3 == 0)
            return 0
        
    label_9e3c58:
        
        if (x9_3 == x8_5)
            return 1
        
        int32_t x9_10 = *(x0 + 0x18)
        return zx.q(x9_10 != 0 ? 1 : 0) & zx.q(x9_10 == x8_5 ? 1 : 0)
    case 4
        int32_t x8_6 = *(x0 + 0xc)
        
        if (x8_6 == 0)
            return 0
        
        if (x8_6 == x20)
            return 1
        
        int32_t x8_7 = *(x0 + 0x10)
        
        if (x8_7 == 0)
            return 0
        
        if (x8_7 == x20)
            return 1
        
        int32_t x8_8 = *(x0 + 0x14)
        
        if (x8_8 == 0)
            return 0
        
        if (x8_8 == x20)
            return 1
        
        int32_t x8_9 = *(x0 + 0x18)
        
        if (x8_9 == 0)
            return 0
        
        if (x8_9 == x20)
            return 1
        
        int32_t x8_10 = *(x0 + 0x1c)
        
        if (x8_10 == 0)
            return 0
        
        if (x8_10 == x20)
            return 1
        
        int32_t x8_11 = *(x0 + 0x20)
        
        if (x8_11 == 0)
            return 0
        
        if (x8_11 == x20)
            return 1
        
        int32_t x8_12 = *(x0 + 0x24)
        
        if (x8_12 == 0)
            return 0
        
        if (x8_12 == x20)
            return 1
        
        int32_t x8_13 = *(x0 + 0x28)
        
        if (x8_13 != 0)
            return zx.q(x8_13 == x20 ? 1 : 0)
        
        return 0
    case 5
        int64_t x21_1 = 0
        
        while (true)
            uint64_t result = zx.q(*(x0 + 0xc + x21_1))
            
            if (result.d == 0)
                return result
            
            if ((DomEntitlementGrantsCard(result, zx.q(x20)) & 1) != 0)
                return 1
            
            x21_1 += 4
            
            if (x21_1 == 0x100)
                return 0
