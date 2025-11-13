// 函数: _Z13AddPromoCardsRK14DomSetupConfig12DomPromoFlagP11DomCardEnumRii
// 地址: 0xbf4c78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = zx.q(*EXP_PROMOS_COUNT)

if (x25.d s< 1)
    return 

int32_t* x27_1 = *EXP_PROMOS_DEFS
int64_t x26_1 = 0

while (true)
    if ((zx.d(*(x27_1 + x26_1 * 0x780 + 0xce)) & 1) == 0 && (x27_1[x26_1 * 0x1e0] & arg2) != 0)
        int32_t x24_1 = *(x27_1 + x26_1 * 0x780 + 0xc0)
        
        if ((IsInConfig(arg1, zx.q(x24_1)).d & 1) == 0)
            int64_t x8_6 = 0
            
            while (true)
                int32_t x9_1 = *(arg1 + 0xc04 + x8_6)
                
                if (x9_1 != 0)
                    if (x9_1 == x24_1)
                        break
                    
                    x8_6 += 4
                    
                    if (x8_6 != 0xaf0)
                        continue
                
                if (*(x27_1 + x26_1 * 0x780 + 4) s> arg5)
                    break
                
                if (*(x27_1 + x26_1 * 0x780 + 8) s> arg5)
                    int64_t x8_11 = sx.q(*arg4)
                    *arg4 = x8_11.d + 1
                    *(arg3 + (x8_11 << 2)) = x24_1
                
                break
    
    x26_1 += 1
    
    if (x26_1 == x25)
        break
