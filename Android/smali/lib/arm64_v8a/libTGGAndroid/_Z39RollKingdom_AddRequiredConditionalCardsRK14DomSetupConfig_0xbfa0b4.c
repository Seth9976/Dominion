// 函数: _Z39RollKingdom_AddRequiredConditionalCardsRK14DomSetupConfig
// 地址: 0xbfa0b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomSetupConfig const& var_70 = arg1
uint64_t x24 = zx.q(*(gPregameContext + 4))

if (x24.d s< 1)
    return 

int32_t x20_1 = *gPregameContext
int64_t x26_1 = *(gPregameContext + 0x20)
int64_t x25_1 = 0
int32_t x27_1 = 1

do
    int32_t x21_1 = *(x26_1 + (x25_1 << 2))
    int32_t x8_2 = (x21_1 + (x20_1 << 0x10)) s% 0x3e5
    int32_t* x9_5 = *(&data_1838a20 + (sx.q(x8_2) << 3))
    
    if (x9_5 != 0)
        while (*x9_5 != x21_1 || x9_5[1] != x20_1)
            x9_5 = *(x9_5 + 0x10)
            
            if (x9_5 == 0)
                goto label_bfa144
        
        if ((zx.d(*(*(x9_5 + 8) + 0xc8)) & 0x20) != 0)
            break
    else
    label_bfa144:
        DomDefGetSlow(zx.q(x21_1), zx.q(x20_1))
        int32_t* x0_1 = malloc(0x18)
        int64_t x8_3 = sx.q(x8_2) << 3
        int64_t x9_6 = *(&data_1838a20 + x8_3)
        *x0_1 = x21_1
        x0_1[1] = x20_1
        *(&data_1838a20 + x8_3) = x0_1
        *(x0_1 + 0x10) = x9_6
        arg1 = DomDefGetSlow(zx.q(x21_1), zx.q(x20_1))
        *(x0_1 + 8) = arg1
        
        if ((zx.d(*(arg1 + 0xc8)) & 0x20) != 0)
            break
    
    x25_1 += 1
    x27_1 = x25_1 u< x24 ? 1 : 0
while (x25_1 != x24)

if ((x27_1 & 1) != 0 && (HasAttackReaction(*(gPregameContext + 0x20), *(gPregameContext + 4), 
        zx.q(*gPregameContext)).d & 1) == 0)
    int32_t var_64 = 4
    RollKingdom_AddRequiredModiferCards(var_70, &var_64, 1)
